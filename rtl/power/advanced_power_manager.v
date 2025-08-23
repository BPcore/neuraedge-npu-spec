`timescale 1ns/1ps
// Advanced Power Management Unit for 50 TOPS/W Target
// Provides DVFS, multi-level power gating, and thermal management

`ifndef ADVANCED_POWER_MANAGER_SV
`define ADVANCED_POWER_MANAGER_SV
module advanced_power_manager #(
    parameter NUM_PES = 2048,
    parameter NUM_POWER_DOMAINS = 32,
    parameter NUM_VOLTAGE_LEVELS = 8,
    parameter NUM_FREQ_LEVELS = 8,
    parameter BASELINE_POWER_MW = 16'd10, // Floor to avoid zero power division
    parameter DYN_POWER_DIV = 32'd50000,   // Scaling divisor for dynamic power (tunable)
    parameter LEAK_POWER_DIV = 32'd50000000, // Scaling divisor for leakage power (tunable)
    // Enable characterized power table (1) or fallback heuristic (0)
    parameter USE_POWER_TABLE = 1,
    // Phase 2.5 DVFS hysteresis configuration
    parameter UTIL_HIGH_THRESH_PCT = 16'd75,   // Raise freq if util_ma > this (% of NUM_PES)
    parameter UTIL_LOW_THRESH_PCT  = 16'd55,   // Lower freq if util_ma < this (% of NUM_PES)
    parameter PERF_HYST_MARGIN     = 16'd500,  // Milli TOPS/W margin before scaling down
    parameter DVFS_MIN_SETTLE_CYC  = 8'd50     // Minimum settle cycles before next adjust
) (
    input wire clk,
    input wire reset,
    
    // Enhanced power management inputs
    input wire [7:0] power_mode, // widened for consistency with tile
    input wire [15:0] utilization_target,
    input wire [15:0] performance_target,
    input wire [NUM_PES-1:0] pe_active,
    input wire [NUM_PES-1:0] pe_request,
    input wire [15:0] current_ops_count, // scaled active_pe_count * MAC_LANES * packing (saturated)
    input wire [1:0] precision_mode,     // For energy-per-op selection
    input wire [7:0] temperature,
    input wire [15:0] power_budget,
    // Temperature-based leakage scaling controls (from CSR)
    input  wire [7:0]  leak_ref_temp_c,      // Reference temperature (C) where coeffs characterized
    input  wire [15:0] leak_alpha_milli,     // Milli-scale per-degree slope (1000 = baseline, +x per C diff)
    input  wire [15:0] leak_beta_milli,      // Optional quadratic term milli (applied as beta * delta^2 / 1000)
    // Runtime DVFS override configuration (CSR-provided)
    input wire [7:0]  util_high_thresh_pct_cfg,
    input wire [7:0]  util_low_thresh_pct_cfg,
    input wire [15:0] perf_hyst_margin_milli_cfg,
    input wire [7:0]  dvfs_min_settle_cycles_cfg,
    // Optional overrides for calibration/testing
    input  wire       frequency_override_en,
    input  wire [2:0] frequency_override,
    input  wire       voltage_override_en,
    input  wire [2:0] voltage_override,
    
    // Power control outputs
    output reg [NUM_POWER_DOMAINS-1:0] domain_power_enable,
    output reg [NUM_POWER_DOMAINS-1:0] domain_clock_enable,
    output reg [NUM_PES-1:0] pe_power_gate,
    output reg [NUM_PES-1:0] pe_clock_gate,
    output reg [2:0] voltage_setting,
    output reg [2:0] frequency_setting,
    
    // Status outputs
    output wire [15:0] current_power_mw,
    output wire [15:0] current_tops,
    output wire [15:0] efficiency_tops_w,       // milli TOPS/W (scaled by 1000)
    output wire [3:0] power_efficiency_grade,
    // New Phase 2 telemetry
    output wire [15:0] dynamic_power_mw,
    output wire [15:0] leakage_power_mw,
    // Expose moving average utilization (scaled to number of active PEs) for CSR/telemetry
    output wire [15:0] utilization_ma_out,
    // New telemetry for external energy accounting
    output wire [15:0] current_freq_mhz,
    output wire [15:0] current_voltage_mv
);

// DVFS state machine parameters
parameter DVFS_IDLE = 3'b000;
parameter DVFS_MEASURE = 3'b001;
parameter DVFS_DECIDE = 3'b010;
parameter DVFS_ADJUST = 3'b011;
parameter DVFS_SETTLE = 3'b100;

// Internal registers
reg [2:0] dvfs_state, dvfs_next_state;
reg [15:0] utilization_count; // counts active PEs (saturates at 65535, > NUM_PES ok)
reg [31:0] power_estimation; // legacy simple estimate
reg [7:0] dvfs_counter;
reg [7:0] settle_counter;
reg       in_hysteresis_window; // tracks if between high/low thresholds
reg [7:0] dvfs_settle_guard;    // enforce min cycles between adjustments
reg [15:0] current_power_reg;    // mW (total)
reg [15:0] current_tops_reg;     // milli-TOPS (TOPS * 1000)
reg [15:0] efficiency_reg;       // milli TOPS/W
reg [3:0] efficiency_grade_reg;
reg [15:0] dynamic_power_reg;    // mW dynamic portion
reg [15:0] leakage_power_reg;    // mW leakage portion

// Loop variables moved outside for Verilog-2005 compatibility
integer ua;
reg [15:0] tmp_count;
// Temporary calculation registers (moved out of always for Verilog-2005 compatibility)
reg [31:0] eff_ops_per_cycle;
reg [31:0] freq_mhz;           // zero-extended frequency (MHz)
reg [31:0] tops_milli_tmp;
reg [63:0] dyn_power_full;
reg [31:0] leak_power;
// Leakage temperature scaling intermediates
reg signed [9:0] temp_delta;          // allow -255..+255
reg signed [31:0] leak_scale_milli;   // 1000 +/- alpha * delta + beta * delta^2 /1000
reg [31:0] leak_power_scaled_temp;    // scaled leakage before clamp
reg [31:0] dyn_power_scaled;
// Utilization moving average & predictive trend (Phase 2 DVFS enhancement)
reg [15:0] util_ma;      // moving average of active PEs
reg [15:0] util_prev;    // previous utilization sample
reg signed [16:0] util_trend; // signed difference
reg [31:0] voltage_mv_local;   // zero-extended voltage (mV)

// DVFS tables (simple linear placeholders; can be replaced with real characterized values)
// Index matches voltage_setting / frequency_setting codes (0..7)
// Frequencies in MHz, Voltages in mV
reg [15:0] freq_table_mhz [0:7];
reg [15:0] volt_table_mv  [0:7];
// Characterized (placeholder) dynamic & leakage coefficients per P-state (index = freq/volt code)
// dyn_coeff_mw_per_util: mW at 100% utilization for that P-state
// leak_coeff_mw: static leakage mW for that P-state
reg [15:0] dyn_coeff_mw_per_util [0:7];
reg [15:0] leak_coeff_mw         [0:7];

// Precision energy per effective operation (pJ/op) placeholder (INT8..INT1)
// These are intentionally optimistic to explore headroom; real data will be higher.
reg [15:0] energy_per_op_pj; // pJ per effective op (includes MAC multiply+accumulate)

// Initialize tables
integer ti;
// Max code constants (avoid width warnings)
// Max code constants (simplified to table size 8; add runtime assert below for param bounds)
localparam [2:0] FREQ_MAX_CODE = 3'd7;
localparam [2:0] VOLT_MAX_CODE = 3'd7;
initial begin
    // Example tables (modify with characterization):
    // freq: ~400MHz up to 1600MHz (indexes beyond valid range repeat)
    freq_table_mhz[0] = 16'd400;  volt_table_mv[0] = 16'd600;
    freq_table_mhz[1] = 16'd600;  volt_table_mv[1] = 16'd650;
    freq_table_mhz[2] = 16'd800;  volt_table_mv[2] = 16'd700;
    freq_table_mhz[3] = 16'd1000; volt_table_mv[3] = 16'd750;
    freq_table_mhz[4] = 16'd1200; volt_table_mv[4] = 16'd800;
    freq_table_mhz[5] = 16'd1400; volt_table_mv[5] = 16'd850;
    freq_table_mhz[6] = 16'd1600; volt_table_mv[6] = 16'd880;
    freq_table_mhz[7] = 16'd1600; volt_table_mv[7] = 16'd880; // cap
    // Example characterization coefficients (replace with silicon/model data when available)
    dyn_coeff_mw_per_util[0] = 16'd800;  leak_coeff_mw[0] = 16'd120; // 400MHz @ 0.60V
    dyn_coeff_mw_per_util[1] = 16'd1100; leak_coeff_mw[1] = 16'd140; // 600MHz @ 0.65V
    dyn_coeff_mw_per_util[2] = 16'd1450; leak_coeff_mw[2] = 16'd165; // 800MHz @ 0.70V
    dyn_coeff_mw_per_util[3] = 16'd1850; leak_coeff_mw[3] = 16'd190; // 1000MHz @ 0.75V
    dyn_coeff_mw_per_util[4] = 16'd2300; leak_coeff_mw[4] = 16'd215; // 1200MHz @ 0.80V
    dyn_coeff_mw_per_util[5] = 16'd2700; leak_coeff_mw[5] = 16'd240; // 1400MHz @ 0.85V
    dyn_coeff_mw_per_util[6] = 16'd3150; leak_coeff_mw[6] = 16'd260; // 1600MHz @ 0.88V
    dyn_coeff_mw_per_util[7] = 16'd3150; leak_coeff_mw[7] = 16'd260; // capped
    // Parameter bound checks (will fire in sim if user changes table size assumptions)
    if (NUM_FREQ_LEVELS  > 8) $fatal("NUM_FREQ_LEVELS > 8 unsupported in current DVFS table");
    if (NUM_VOLTAGE_LEVELS > 8) $fatal("NUM_VOLTAGE_LEVELS > 8 unsupported in current DVFS table");
end

// Calculate utilization and performance metrics
always @(posedge clk or posedge reset) begin
    if (reset) begin
        utilization_count <= 0;
        current_power_reg <= 0;
        current_tops_reg <= 0;
        efficiency_reg <= 0;
        dynamic_power_reg <= 0;
        leakage_power_reg <= 0;
        util_ma <= 0;
        util_prev <= 0;
    end else begin
        // Count active PEs across entire array; ignore X/Z (treat as 0). Simple linear reduction.
        tmp_count = 0;
        for (ua = 0; ua < NUM_PES; ua = ua + 1) begin
            if (pe_active[ua] === 1'b1) tmp_count = tmp_count + 1;
        end
        utilization_count <= tmp_count;
        // Exponential moving average (alpha = 1/8 => shift-based)
        util_ma <= util_ma + ((tmp_count - util_ma) >>> 3);
    util_trend <= $signed(tmp_count) - $signed(util_prev);
        util_prev <= tmp_count;
        // Precision energy model selection (pJ per effective op: MAC multiply+accumulate counts as 2 ops internally)
        // Very optimistic placeholder energy/op (pJ) for architectural exploration
        case (precision_mode)
            2'b00: energy_per_op_pj <= 16'd2;    // INT8
            2'b01: energy_per_op_pj <= 16'd1;    // INT4
            2'b10: energy_per_op_pj <= 16'd1;    // INT2
            2'b11: energy_per_op_pj <= 16'd1;    // INT1
            default: energy_per_op_pj <= 16'd2;
        endcase

        // Effective ops per cycle (include MAC multiply+accumulate => *2)
        // current_ops_count already includes lanes * packing * active PEs (saturated to 16 bits)
        // Risk of overflow is low under 16 bits; multiply by 2 safely fits in 17 bits.
        // Use 32-bit temp for products
        // Frequency in MHz -> cycles per second factor 1e6
        // TOPS (milli) = eff_ops_per_cycle * freq_MHz / 1000 (since TOPS = ops_per_cycle * freq_MHz / 1e6)
        // eff_ops_per_cycle = current_ops_count * 2
    // TOPS and power calculations
    eff_ops_per_cycle = {16'b0, current_ops_count} << 1; // *2 for MAC (mul+acc)
    freq_mhz = {16'b0, freq_table_mhz[frequency_setting]};
    tops_milli_tmp = (eff_ops_per_cycle * freq_mhz) / 32'd1000; // milli-TOPS
    current_tops_reg <= tops_milli_tmp[15:0];
    voltage_mv_local = {16'b0, volt_table_mv[voltage_setting]};
    // Utilization normalized (0-1000) to avoid precision loss in moderate NUM_PES configs
    // Guard against divide-by-zero if NUM_PES == 0 (should not happen)
    begin
        reg [31:0] util_norm_1000;
        util_norm_1000 = (NUM_PES != 0) ? (util_ma * 1000) / NUM_PES : 0;
        if (USE_POWER_TABLE) begin
            // Table lookup based: dyn = dyn_coeff * util%, leak = leak_coeff
            dyn_power_scaled = (dyn_coeff_mw_per_util[frequency_setting] * util_norm_1000) / 1000;
            // Base leakage from table then apply temperature scaling
            temp_delta = $signed({1'b0,temperature}) - $signed({1'b0, leak_ref_temp_c});
            // leak_scale_milli = 1000 + alpha*delta + beta*delta^2/1000 (alpha,beta in milli)
            begin
                reg signed [31:0] linear_term;
                reg signed [31:0] quad_term;
                linear_term = ( $signed({1'b0, leak_alpha_milli}) * temp_delta );
                quad_term = ( $signed({1'b0, leak_beta_milli}) * (temp_delta * temp_delta) ) / 32'sd1000;
                leak_scale_milli = 32'sd1000 + linear_term + quad_term;
            end
            // Clamp scale between 100 (0.1x) and 5000 (5x) to avoid runaway / negative
            if (leak_scale_milli < 32'sd100) leak_scale_milli = 32'sd100;
            else if (leak_scale_milli > 32'sd5000) leak_scale_milli = 32'sd5000;
            leak_power_scaled_temp = ( {16'b0, leak_coeff_mw[frequency_setting]} * leak_scale_milli ) / 32'd1000;
            leak_power = leak_power_scaled_temp;
        end else begin
            // Fallback heuristic (legacy)
            dyn_power_full = eff_ops_per_cycle * freq_mhz * energy_per_op_pj; // raw product
            begin
                reg [63:0] dyn_power_tmp_div;
                dyn_power_tmp_div = dyn_power_full / {32'b0, DYN_POWER_DIV};
                dyn_power_scaled = dyn_power_tmp_div[31:0];
            end
            leak_power = ( ( {16'b0, utilization_count} + (NUM_PES/32) ) * voltage_mv_local * voltage_mv_local ) / LEAK_POWER_DIV;
            // Apply same temperature scaling on heuristic leakage
            temp_delta = $signed({1'b0,temperature}) - $signed({1'b0, leak_ref_temp_c});
            begin
                reg signed [31:0] linear_term2;
                reg signed [31:0] quad_term2;
                linear_term2 = ( $signed({1'b0, leak_alpha_milli}) * temp_delta );
                quad_term2 = ( $signed({1'b0, leak_beta_milli}) * (temp_delta * temp_delta) ) / 32'sd1000;
                leak_scale_milli = 32'sd1000 + linear_term2 + quad_term2;
            end
            if (leak_scale_milli < 32'sd100) leak_scale_milli = 32'sd100;
            else if (leak_scale_milli > 32'sd5000) leak_scale_milli = 32'sd5000;
            leak_power = ( leak_power * leak_scale_milli ) / 32'd1000;
        end
    end
    dynamic_power_reg <= (dyn_power_scaled[15:0] < BASELINE_POWER_MW) ? BASELINE_POWER_MW : (dyn_power_scaled[31:16] != 0 ? 16'hFFFF : dyn_power_scaled[15:0]);
    leakage_power_reg <= (leak_power[15:0] < 16'd1) ? 16'd1 : (leak_power[31:16] != 0 ? 16'hFFFF : leak_power[15:0]);
    power_estimation <= {16'b0, dynamic_power_reg} + {16'b0, leakage_power_reg};
    current_power_reg <= (power_estimation[15:0] < BASELINE_POWER_MW) ? BASELINE_POWER_MW : power_estimation[15:0];
    // Efficiency scaling fix:
    // current_tops_reg holds milli TOPS (TOPS * 1e3). Desired output: milli TOPS/W.
    // Correct formula: efficiency_milli = milliTOPS / mW (NOT *1000).
    if (current_power_reg > 0) efficiency_reg <= (current_tops_reg) / current_power_reg;
    end
end

// DVFS state machine
always @(posedge clk or posedge reset) begin
    if (reset) begin
        dvfs_state <= DVFS_IDLE;
        dvfs_counter <= 0;
        settle_counter <= 0;
        voltage_setting <= 3'b011;  // Mid-range voltage
        frequency_setting <= 3'b011;  // Mid-range frequency
    end else begin
        dvfs_state <= dvfs_next_state;
        dvfs_counter <= dvfs_counter + 1;
        if (dvfs_settle_guard != 0) dvfs_settle_guard <= dvfs_settle_guard - 1'b1;
        
        // DVFS adjustment logic
    /* verilator lint_off CASEINCOMPLETE */
    case (dvfs_state)
            DVFS_IDLE: begin /* no-op */ end
            DVFS_MEASURE: begin
                if (dvfs_counter >= 8'd100) begin
                    dvfs_counter <= 0;
                end
            end
            DVFS_DECIDE: begin /* transition handled in next-state logic */ end
            DVFS_ADJUST: begin
                // Hysteresis-based DVFS adjustment with predictive assist
                if (dvfs_settle_guard == 0) begin
                    reg [31:0] util_pct;
                    util_pct = (NUM_PES != 0) ? (util_ma * 100) / NUM_PES : 0;
                    if (util_pct > util_high_thresh_pct_cfg && efficiency_reg < performance_target) begin
                        if (frequency_setting < FREQ_MAX_CODE) begin
                            frequency_setting <= frequency_setting + 1;
                            dvfs_settle_guard <= dvfs_min_settle_cycles_cfg; // enforce dwell
                        end
                    end else if (util_pct < util_low_thresh_pct_cfg && efficiency_reg > (performance_target + perf_hyst_margin_milli_cfg)) begin
                        if (frequency_setting > 0) begin
                            frequency_setting <= frequency_setting - 1;
                            dvfs_settle_guard <= dvfs_min_settle_cycles_cfg;
                        end
                    end
                    if (dynamic_power_reg < (current_power_reg >> 1) && voltage_setting < VOLT_MAX_CODE) begin
                        voltage_setting <= voltage_setting + 1;
                    end else if (dynamic_power_reg > (current_power_reg * 3 / 4) && voltage_setting > 0) begin
                        voltage_setting <= voltage_setting - 1;
                    end
                end
                settle_counter <= 0;
            end
            
            DVFS_SETTLE: begin
                settle_counter <= settle_counter + 1;
            end
            default: begin /* no action */ end
        endcase
        /* verilator lint_on CASEINCOMPLETE */
    end
end

// DVFS next state logic
always @(*) begin
    case (dvfs_state)
    DVFS_IDLE:    dvfs_next_state = DVFS_MEASURE;
        DVFS_MEASURE: dvfs_next_state = (dvfs_counter >= 8'd100) ? DVFS_DECIDE : DVFS_MEASURE;
        DVFS_DECIDE: dvfs_next_state = DVFS_ADJUST;
        DVFS_ADJUST: dvfs_next_state = DVFS_SETTLE;
    DVFS_SETTLE: dvfs_next_state = (settle_counter >= dvfs_min_settle_cycles_cfg) ? DVFS_MEASURE : DVFS_SETTLE;
    default:      dvfs_next_state = DVFS_IDLE; // Should not occur
    endcase
end

// Power gating control  
integer i;
// Precompute domain enables using generate (avoids non-constant part-select in procedural loop for some simulators)
wire [NUM_POWER_DOMAINS-1:0] domain_power_enable_w;
wire [NUM_POWER_DOMAINS-1:0] domain_clock_enable_w;
genvar gi;
/* verilator lint_off SELRANGE */
generate
    for (gi = 0; gi < NUM_POWER_DOMAINS; gi = gi + 1) begin : gen_domain_enables
        localparam integer DOMAIN_WIDTH = NUM_PES / NUM_POWER_DOMAINS; // assumes divisible
        localparam integer SLICE_MSB = (gi+1)*DOMAIN_WIDTH - 1;
        localparam integer SLICE_LSB = gi*DOMAIN_WIDTH;
        assign domain_power_enable_w[gi] = |pe_power_gate[SLICE_MSB:SLICE_LSB];
        assign domain_clock_enable_w[gi] = |pe_clock_gate[SLICE_MSB:SLICE_LSB];
    end
endgenerate
/* verilator lint_on SELRANGE */

always @(posedge clk or posedge reset) begin
    if (reset) begin
        domain_power_enable <= {NUM_POWER_DOMAINS{1'b1}};  // All domains enabled (reset default)
        domain_clock_enable <= {NUM_POWER_DOMAINS{1'b1}};  // All clocks enabled
        pe_power_gate <= {NUM_PES{1'b1}};  // All PEs powered
        pe_clock_gate <= {NUM_PES{1'b1}};  // All PE clocks enabled
    end else begin
        // Fine-grained PE power gating based on requests
        pe_power_gate <= pe_request | pe_active;  // Keep power on if active or requested
        pe_clock_gate <= pe_active;  // Clock gate inactive PEs
        // Latch domain-level enables from combinational wires
        domain_power_enable <= domain_power_enable_w;
        domain_clock_enable <= domain_clock_enable_w;
    end
end

// Efficiency calculation and grading
always @(posedge clk or posedge reset) begin
    if (reset) begin
        efficiency_grade_reg <= 4'd8;  // Default grade
    end else begin
        // Power efficiency grade (0-15 scale)
        if (efficiency_reg < 16'd5000)
            efficiency_grade_reg <= 4'd2;      // Poor (<5 TOPS/W)
        else if (efficiency_reg < 16'd15000)
            efficiency_grade_reg <= 4'd5;      // Fair (5-15)
        else if (efficiency_reg < 16'd30000)
            efficiency_grade_reg <= 4'd8;      // Good (15-30)
        else if (efficiency_reg < 16'd50000)
            efficiency_grade_reg <= 4'd12;     // Very good (30-50)
        else
            efficiency_grade_reg <= 4'd15;     // Excellent (>=50)
    end
end

// Output assignments
assign current_power_mw      = current_power_reg;
assign current_tops          = current_tops_reg;
assign efficiency_tops_w     = efficiency_reg;
assign power_efficiency_grade = efficiency_grade_reg;
assign utilization_ma_out    = util_ma;
assign dynamic_power_mw      = dynamic_power_reg;
assign leakage_power_mw      = leakage_power_reg;
assign current_freq_mhz      = freq_table_mhz[frequency_setting];
assign current_voltage_mv    = volt_table_mv[voltage_setting];

// Assertions (simulation only) for bounds
// Range checks (optional, suppress constant-compare warnings)
/* verilator lint_off CMPCONST */
always @(posedge clk) begin
    if (!reset) begin
        if (frequency_setting > FREQ_MAX_CODE) $display("WARNING: frequency_setting out of range (simulation)");
        if (voltage_setting   > VOLT_MAX_CODE) $display("WARNING: voltage_setting out of range (simulation)");
    end
end
/* verilator lint_on CMPCONST */

// Apply frequency/voltage overrides after DVFS state machine decisions
always @(posedge clk or posedge reset) begin
    if (reset) begin
        // already initialized
    end else begin
        if (frequency_override_en) frequency_setting <= frequency_override;
        if (voltage_override_en)   voltage_setting   <= voltage_override;
    end
end

endmodule
`endif // ADVANCED_POWER_MANAGER_SV
