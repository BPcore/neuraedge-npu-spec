`timescale 1ns/1ps
// Enhanced NeuraEdge Tile for 50 TOPS/W Target
// Integrates all advanced features: 14nm FinFET, sparsity engine, power management
// Optimized for maximum power efficiency

module neuraedge_tile_50tops #(
    parameter PE_ROWS = 32,
    parameter PE_COLS = 64,  // 2048 PEs per tile
    parameter DATA_WIDTH = 8,
    parameter TILE_ID = 0,
    parameter MAC_LANES = 1,   // Number of MAC lanes per PE
    parameter PACKING_ENABLE = 1,  // Enable precision packing scaling
    parameter USE_CSR_CONTROL = 0,  // When set, CSR overrides external precision/sparsity/lane mask
    parameter DISABLE_SPARSITY_ENGINE = 0, // New: allow disabling sparsity engine for focused benches
    // Memory latency injector configuration (can be tied off / overridden later via CSR extension)
    parameter MEM_SIZE_WIDTH = 16,
    parameter MEM_LATENCY_SRAM_CYCLES = 2,
    parameter MEM_LATENCY_DRAM_CYCLES = 30,
    parameter MEM_SRAM_REQ_SIZE_BYTES = 64,
    parameter MEM_DRAM_REQ_SIZE_BYTES = 128
) (
    input wire clk,
    input wire reset,
    
    // Enhanced power interface
    input wire [7:0] power_mode,        // 0=max_perf, 255=min_power (passes full 8 bits now)
    input wire [15:0] power_budget_mw,  // Available power budget
    input wire [7:0] temperature,      // Operating temperature
    input wire [15:0] performance_target, // Target TOPS
    
    // Sparsity control
    input wire sparsity_enable,
    input wire [1:0] sparsity_mode,     // 0=2:4, 1=1:4, 2=1:8, 3=adaptive
    
    // Precision control
    input wire [1:0] precision_mode,    // 0=INT8, 1=INT4, 2=INT2, 3=INT1
    // Lane activity mask (bit-per-lane for power gating inside each PE)
    input wire [MAC_LANES-1:0] lane_active_mask,
    // Simple CSR interface (optional external drive). If unused, tie off at instantiation.
    input wire csr_valid,
    input wire csr_write,
    input wire [7:0] csr_addr,
    input wire [31:0] csr_wdata,
    output wire [31:0] csr_rdata,
    output wire csr_ready,
    
    // Data interface (enhanced bandwidth)
    input wire [DATA_WIDTH*16-1:0] data_in,  // 16x parallelism for high throughput
    input wire data_valid,
    input wire [15:0] data_pattern,     // Data routing pattern

    // NoC interface (64-bit enhanced)
    input wire [63:0] noc_flit_in_n,
    input wire [63:0] noc_flit_in_s,
    input wire [63:0] noc_flit_in_e,
    input wire [63:0] noc_flit_in_w,
    input wire [63:0] noc_flit_in_local,
    input wire noc_valid_in_n,
    input wire noc_valid_in_s,
    input wire noc_valid_in_e,
    input wire noc_valid_in_w,
    input wire noc_valid_in_local,
    
    output wire [63:0] noc_flit_out_n,
    output wire [63:0] noc_flit_out_s,
    output wire [63:0] noc_flit_out_e,
    output wire [63:0] noc_flit_out_w,
    output wire [63:0] noc_flit_out_local,
    output wire noc_valid_out_n,
    output wire noc_valid_out_s,
    output wire noc_valid_out_e,
    output wire noc_valid_out_w,
    output wire noc_valid_out_local,
    
    // Performance and efficiency monitoring
    output wire [31:0] ops_per_second,          // Effective ops (lanes + packing)
    output wire [31:0] phys_ops_per_second,     // Physical MAC ops
    output wire [31:0] eff_ops_per_second,      // Alias of effective ops
    output wire [31:0] skipped_phys_ops_per_second, // Skipped physical ops due to gating/sparsity
    output wire [15:0] power_consumption_mw,
    output wire [15:0] efficiency_tops_w, // milli TOPS/W
    output wire [3:0] efficiency_grade,  // align with power manager grade width
    output wire [15:0] active_pe_count,
    output wire [15:0] sparsity_ratio,
    // New performance/power instrumentation outputs (Phase 1 optimization scaffolding)
    output wire [63:0] energy_estimate_pj,    // Accumulated (approx) energy in picojoules
    output wire [31:0] bytes_read_sram,
    output wire [31:0] bytes_read_dram,
    output wire [31:0] cycles_stalled_dma,
    output wire [31:0] cycles_stalled_mask,
    // Phase 2 extended energy tracking
    output wire [63:0] dynamic_energy_estimate_pj,
    output wire [63:0] leakage_energy_estimate_pj,
    
    // Status and debug
    output wire tile_ready,
    output wire [31:0] debug_status
);

// Forward declarations for CSR-exposed configuration/control wires (used before CSR block instantiation)
wire [7:0]  util_high_thresh_pct;
wire [7:0]  util_low_thresh_pct;
wire [15:0] perf_hyst_margin_milli;
wire [7:0]  dvfs_min_settle_cycles;
wire [15:0] reuse_factor;
wire [15:0] pack_eff_milli;
wire [15:0] sparse_eff_milli;
// Dummy power domain vectors (must be declared before advanced_power_manager instantiation)
wire [31:0] domain_power_enable_unused;
wire [31:0] domain_clock_enable_unused;
// Memory latency CSR override wires
wire [15:0] csr_mem_latency_sram_cycles;
wire [15:0] csr_mem_latency_dram_cycles;
wire [9:0]  csr_mem_dram_hit_milli_pct;
wire        csr_mem_cfg_use_overrides;

localparam NUM_PES = PE_ROWS * PE_COLS;

// CSR override wires (Phase 2). Declared here so they can feed effective control muxes.
wire [1:0]  csr_precision_mode;
wire        csr_sparsity_enable;
wire [1:0]  csr_sparsity_mode;
wire [MAC_LANES-1:0] csr_lane_active_mask;
wire        csr_start;
// Added declarations
wire        csr_stop;
wire [1:0] precision_mode_eff    = USE_CSR_CONTROL ? csr_precision_mode   : precision_mode;
wire       sparsity_enable_eff   = USE_CSR_CONTROL ? csr_sparsity_enable  : sparsity_enable;
// Base sparsity mode selection (CSR or external)
wire [1:0] sparsity_mode_base    = USE_CSR_CONTROL ? csr_sparsity_mode    : sparsity_mode;
// Effective mode after adapt FSM (adaptive overrides base when enabled)
wire [1:0] sparsity_mode_eff     = csr_sparsity_adapt_enable ? effective_sparsity_mode : sparsity_mode_base;
wire [MAC_LANES-1:0] lane_active_mask_eff = USE_CSR_CONTROL ? csr_lane_active_mask : lane_active_mask;
// Data distribution stub (unused currently) – drive sparsity engine with zeros directly
// wire [DATA_WIDTH*NUM_PES-1:0] distributed_data; (removed to avoid massive replication warning)
// Sparsity engine outputs
wire [DATA_WIDTH*NUM_PES-1:0] sparse_data;
wire [NUM_PES-1:0]            sparse_enable;
wire                          sparse_valid;
wire                          sparse_valid_for_pe = sparse_valid;
wire [15:0]                   sparsity_performance_gain;
// Temporaries
reg [63:0] phys_op_increment_tmp;
reg [63:0] eff_op_increment_tmp;
reg [63:0] sram_bytes_increment_tmp;
reg [63:0] dram_bytes_increment_tmp;
// Division intermediates (avoid implicit width expansion & repeated declarations inside always)
reg [63:0] phys_div_result;
reg [63:0] eff_div_result;
reg [63:0] sram_div_result;
reg [63:0] dram_div_result;
// Mask FIFO stubs
wire mask_fifo_empty = 1'b1;
wire mask_fifo_rd_ptr = 1'b0;
wire [15:0] mask_fifo_count [0:0];
assign mask_fifo_count[0] = active_pe_count;
// Overflow flags forward decl
reg [7:0] overflow_flags;

// Advanced sparsity engine
// NOTE: Sparsity engine now fed with effective (possibly CSR-overridden) controls.
localparam integer DIST_WIDTH = DATA_WIDTH*NUM_PES;
/* verilator lint_off WIDTHCONCAT */
wire [DIST_WIDTH-1:0] zero_input_bus = {DIST_WIDTH{1'b0}};
/* verilator lint_on WIDTHCONCAT */
generate if (DISABLE_SPARSITY_ENGINE == 0) begin : gen_sparsity_eng
    sparsity_engine #(
            .DATA_WIDTH(DATA_WIDTH),
            .SPARSITY_RATIO(4),
            .PE_COUNT(NUM_PES),
            .BLOCK_SIZE(4)
    ) sparsity_eng (
            .clk(clk),
            .reset(reset),
            .input_data(zero_input_bus),
            .input_valid(data_valid),
            .sparsity_mask({NUM_PES{1'b1}}),
            .sparsity_enable(sparsity_enable_eff),
            .sparsity_mode(sparsity_mode_eff),
            .sparsity_ratio_actual(sparsity_ratio),
            .performance_gain(sparsity_performance_gain),
            .pe_data(sparse_data),
            .pe_enable(sparse_enable),
            .pe_valid(sparse_valid),
            .active_pe_count(active_pe_count)
    );
end else begin : gen_no_sparsity
    assign sparse_data = zero_input_bus;
    assign sparse_enable = {NUM_PES{1'b0}};
    assign sparse_valid = 1'b0;
    assign active_pe_count = 16'd0;
    assign sparsity_ratio = 16'd0;
    assign sparsity_performance_gain = 16'd1000; // neutral gain
end endgenerate

// Placeholder for future mask FIFO (currently direct connect). Keeping hook for optimization phase 2.

// Power management
wire [NUM_PES-1:0] pe_power_enable;
wire [NUM_PES-1:0] pe_clock_enable;
wire [NUM_PES-1:0] pe_active;
wire [NUM_PES-1:0] pe_request;
wire [2:0] voltage_setting;
wire [2:0] frequency_setting;
wire [15:0] current_power_mw;
wire [15:0] current_tops;
wire [15:0] dynamic_power_mw_base; // from power manager (before sparsity scaling)
wire [15:0] dynamic_power_mw;      // scaled by adaptive sparsity efficiency
wire [15:0] leakage_power_mw;
wire [15:0] utilization_ma_internal;
// Temperature leakage scaling control wires (CSR -> power manager)
wire [7:0]  csr_leak_ref_temp_c;
wire [15:0] csr_leak_alpha_milli;
wire [15:0] csr_leak_beta_milli; // new quadratic leakage temp term

// Packing / lane scaling for TOPS input to power manager (saturate to 16 bits)
// Use 8'h01 to avoid width expansion warning on shift
wire [7:0] pack_factor_wire = PACKING_ENABLE ? (8'h01 << precision_mode_eff) : 8'd1; // 1,2,4,8 based on effective precision
wire [31:0] scaled_ops_product = active_pe_count * MAC_LANES * pack_factor_wire; // Could exceed 16 bits
wire [15:0] scaled_current_ops_count = (scaled_ops_product[31:16] != 0) ? 16'hFFFF : scaled_ops_product[15:0];
// CSR-provided efficiency scaling factors (default 1000 = 1.0). Apply later after CSR instantiation.
wire [15:0] pack_eff_milli_adj = (pack_eff_milli == 0) ? 16'd1000 : pack_eff_milli; // guard divide by zero
wire [15:0] sparse_eff_milli_adj = (sparse_eff_milli == 0) ? 16'd1000 : sparse_eff_milli;
// Adaptive sparsity efficiency (mode_eff_milli) already reflects lane activity reduction; when adaptive enabled use that
wire [15:0] adaptive_eff_milli = csr_sparsity_adapt_enable ? adapt_mode_eff_milli : sparse_eff_milli_adj;
wire [15:0] reuse_factor_adj = (reuse_factor == 0) ? 16'd1 : reuse_factor;

advanced_power_manager #(
    .NUM_PES(NUM_PES),
    .NUM_POWER_DOMAINS(32),  // More granular power domains
    .NUM_VOLTAGE_LEVELS(8),
    .NUM_FREQ_LEVELS(8)
) power_mgr (
    .clk(clk),
    .reset(reset),
    .power_mode(power_mode),
    .utilization_target(16'd70),  // Target 70% utilization
    .performance_target(performance_target),
    .pe_active(pe_active),
    .pe_request(pe_request),
    .current_ops_count(scaled_current_ops_count),
    .precision_mode(precision_mode_eff),
    .temperature(temperature),
    .power_budget(power_budget_mw),
    .leak_ref_temp_c(csr_leak_ref_temp_c),
    .leak_alpha_milli(csr_leak_alpha_milli),
    .leak_beta_milli(csr_leak_beta_milli),
    // DVFS runtime configs from CSR
    .util_high_thresh_pct_cfg(util_high_thresh_pct),
    .util_low_thresh_pct_cfg(util_low_thresh_pct),
    .perf_hyst_margin_milli_cfg(perf_hyst_margin_milli),
    .dvfs_min_settle_cycles_cfg(dvfs_min_settle_cycles),
    .frequency_override_en(1'b0), .frequency_override(3'b000),
    .voltage_override_en(1'b0), .voltage_override(3'b000),
    // Connect to dummy wires to avoid unconnected pin warnings
    .domain_power_enable(domain_power_enable_unused),
    .domain_clock_enable(domain_clock_enable_unused),
    .pe_power_gate(pe_power_enable),
    .pe_clock_gate(pe_clock_enable),
    .voltage_setting(voltage_setting),
    .frequency_setting(frequency_setting),
    .current_power_mw(current_power_mw),
    .current_tops(current_tops),
    .efficiency_tops_w(efficiency_tops_w),
    .power_efficiency_grade(efficiency_grade)
    , .dynamic_power_mw(dynamic_power_mw_base)
    , .leakage_power_mw(leakage_power_mw)
    , .utilization_ma_out(utilization_ma_internal)
    , .current_freq_mhz(current_freq_mhz)
    , .current_voltage_mv(current_voltage_mv)
);

// Enhanced PE array with power optimization
wire [31:0] accum_out [0:NUM_PES-1];
wire [NUM_PES-1:0] accum_valid;
wire [7:0] pe_power_status [0:NUM_PES-1];

genvar row, col;
generate
    for (row = 0; row < PE_ROWS; row = row + 1) begin : pe_row
        for (col = 0; col < PE_COLS; col = col + 1) begin : pe_col
            localparam PE_IDX = row * PE_COLS + col;
            localparam PE_GLOBAL_ID = PE_IDX + (TILE_ID * NUM_PES);
            
            neuraedge_pe_enhanced #(
                .DATA_WIDTH(DATA_WIDTH),
                .ACCUM_WIDTH(32),
                .PE_ID(PE_GLOBAL_ID),
                .MAC_LANES(MAC_LANES)
            ) pe_inst (
                .clk(clk),
                .reset(reset),
                .pe_enable(pe_power_enable[PE_IDX]),
                .power_gate_enable(pe_power_enable[PE_IDX]),
                .clock_gate_enable(pe_clock_enable[PE_IDX]),
                .voltage_ctrl({5'b0, voltage_setting}),
                .data_a(sparse_data[DATA_WIDTH*(PE_IDX+1)-1:DATA_WIDTH*PE_IDX]),
                .data_b(sparse_data[DATA_WIDTH*(PE_IDX+1)-1:DATA_WIDTH*PE_IDX]),
                .data_valid(sparse_valid_for_pe),
                .sparse_enable(sparse_enable[PE_IDX]),
                .sparse_valid(sparse_valid_for_pe),
                .accum_clear(1'b0),
                .accum_enable(1'b1),
                .precision_mode(precision_mode_eff),
                .lane_active_mask(lane_active_mask_eff),
                .accum_out(accum_out[PE_IDX]),
                .accum_valid(accum_valid[PE_IDX]),
                .pe_active(pe_active[PE_IDX]),
                .pe_power_status(pe_power_status[PE_IDX])
            );
            
            // PE request signal generation
            assign pe_request[PE_IDX] = data_valid | sparse_valid;
        end
    end
endgenerate

// Performance monitoring and metrics
reg [31:0] operation_counter;            // Effective ops accumulator (FIFO snapshot based)
reg [31:0] physical_operation_counter;   // Physical ops accumulator (FIFO snapshot based)
reg [31:0] skipped_physical_operation_counter; // Skipped physical ops accumulator (FIFO snapshot based)
reg [31:0] cycle_counter;
reg [15:0] efficiency_history [0:7];
reg [2:0] efficiency_history_idx;
// New counters for architectural optimization tracking
reg [63:0] energy_estimate_pj_reg; // Accumulate power (mW)*cycle_time(ns) ≈ pJ
reg [31:0] bytes_read_sram_reg;
reg [31:0] bytes_read_dram_reg;
reg [31:0] cycles_stalled_dma_reg;
reg [31:0] cycles_stalled_mask_reg;
// Phase 2: separate dynamic/leakage energy accumulation
reg [63:0] dynamic_energy_estimate_pj_reg;
reg [63:0] leakage_energy_estimate_pj_reg;
// Removed integer pack_factor (replaced with pack_factor_wire combinational)
// New CSR-driven wires (declared for integration of adaptive sparsity & contention)
wire csr_sparsity_adapt_enable;
wire [9:0] csr_sparsity_thresh_2to4, csr_sparsity_thresh_1to4, csr_sparsity_thresh_1to8;
wire [9:0] csr_sparsity_hyst_milli;
wire [7:0] csr_sparsity_min_hold_windows;
wire csr_mem_contention_enable;
wire [7:0] csr_mem_tokens_per_cycle;
wire [15:0] csr_mem_token_capacity;

// -----------------------------------------------------------------------------
// Memory latency injector integration (single-outstanding request model)
// -----------------------------------------------------------------------------
wire mem_req_ready;
wire mem_resp_valid;
wire [MEM_SIZE_WIDTH-1:0] mem_resp_size_bytes;
wire mem_busy;
reg  mem_req_valid_r;          // asserted for one cycle when issuing request
reg  mem_req_is_dram_r;        // latched type of issued request
reg  mem_pending_is_dram;      // remember type until response for bytes accounting
reg  mem_issue_toggle;         // simple pattern generator to alternate DRAM/SRAM for now
wire mem_need = data_valid | sparse_valid_for_pe; // future: refine with real DMA scheduler
wire mem_req_fire;

assign mem_req_fire = mem_req_valid_r & mem_req_ready;

// Simple request generation policy: whenever injector free & we have need, issue alternated DRAM/SRAM request
always @(posedge clk) begin
    if (reset) begin
        mem_req_valid_r <= 1'b0;
        mem_req_is_dram_r <= 1'b0;
        mem_issue_toggle <= 1'b0;
        mem_pending_is_dram <= 1'b0;
    end else begin
        mem_req_valid_r <= 1'b0; // default drop
        if (mem_req_ready && mem_need) begin
            mem_req_valid_r <= 1'b1;
            // Alternate dram/sram to exercise both paths (placeholder until real addr decode)
            mem_req_is_dram_r <= mem_issue_toggle;
            mem_issue_toggle <= ~mem_issue_toggle;
            mem_pending_is_dram <= mem_issue_toggle; // capture type for response accounting
        end
        if (mem_resp_valid) begin
            // clear pending marker (optional)
            mem_pending_is_dram <= 1'b0; // will be replaced next issue
        end
    end
end

wire [MEM_SIZE_WIDTH-1:0] mem_req_size_bytes = mem_req_is_dram_r ? MEM_DRAM_REQ_SIZE_BYTES[MEM_SIZE_WIDTH-1:0]
                                                                : MEM_SRAM_REQ_SIZE_BYTES[MEM_SIZE_WIDTH-1:0];

// Memory latency injector with optional contention wrapper (selected always-on; contention controlled via CSR enable)
wire [31:0] mem_stat_total_reqs;
wire [31:0] mem_stat_total_resp;
wire [31:0] mem_stat_sram_reqs;
wire [31:0] mem_stat_dram_reqs;
wire [31:0] mem_stat_stall_cycles;
wire [31:0] mem_stat_busy_cycles;
// Contention telemetry wires (unused currently)
wire [15:0] dram_tokens_level;
wire [31:0] dram_token_stall_cycles;
wire [31:0] dram_contention_events;
memory_latency_injector_contention #(
    .SIZE_WIDTH(MEM_SIZE_WIDTH),
    .LATENCY_SRAM_CYCLES(MEM_LATENCY_SRAM_CYCLES),
    .LATENCY_DRAM_CYCLES(MEM_LATENCY_DRAM_CYCLES),
    .PIPELINE_RESP(1)
) mem_lat_inj (
    .clk(clk), .reset(reset),
    .req_valid(mem_req_valid_r), .req_is_dram(mem_req_is_dram_r), .req_size_bytes(mem_req_size_bytes), .req_ready(mem_req_ready),
    .resp_valid(mem_resp_valid), .resp_size_bytes(mem_resp_size_bytes),
    .cfg_latency_sram(csr_mem_latency_sram_cycles), .cfg_latency_dram(csr_mem_latency_dram_cycles),
    .cfg_dram_hit_milli_pct(csr_mem_dram_hit_milli_pct), .cfg_use_cfg_latencies(csr_mem_cfg_use_overrides),
    .cfg_enable_contention(csr_mem_contention_enable), .cfg_tokens_per_cycle(csr_mem_tokens_per_cycle), .cfg_token_capacity(csr_mem_token_capacity),
    .total_reqs(mem_stat_total_reqs), .total_resp(mem_stat_total_resp), .sram_reqs(mem_stat_sram_reqs), .dram_reqs(mem_stat_dram_reqs),
    .stall_cycles(mem_stat_stall_cycles), .busy_cycles(mem_stat_busy_cycles), .busy(mem_busy),
    .dram_tokens_level(dram_tokens_level), .dram_token_stall_cycles(dram_token_stall_cycles), .dram_contention_events(dram_contention_events)
);

// Popcount helpers (module scope for Verilog-2005 compatibility)
integer lpi;
reg [7:0] lane_pop;

// Assumed simulation clock period fallback; dynamic freq-based cycle time used if freq telemetry available
localparam integer CYCLE_TIME_NS = 10; // fallback 100MHz
wire [15:0] current_freq_mhz; // from power_mgr
// cycle time in ps = 1e6 / freq_MHz (integer division)
wire [31:0] cycle_time_ps = (current_freq_mhz != 0) ? (32'd1000000 / current_freq_mhz) : (CYCLE_TIME_NS * 32'd1000);

// Active PE count snapshot from mask FIFO entry being consumed (Phase 2 enhancement)
wire [15:0] active_pe_count_fifo = (!mask_fifo_empty) ? mask_fifo_count[mask_fifo_rd_ptr] : active_pe_count;
// Zero-extend for arithmetic to avoid implicit width expansion warnings
wire [31:0] active_pe_count_fifo_ext = {16'b0, active_pe_count_fifo};

always @(posedge clk) begin
    if (reset) begin
        operation_counter <= 32'b0;
        physical_operation_counter <= 32'b0;
        skipped_physical_operation_counter <= 32'b0;
        cycle_counter <= 32'b0;
        efficiency_history_idx <= 3'b0;
    energy_estimate_pj_reg <= 64'b0;
    dynamic_energy_estimate_pj_reg <= 64'b0;
    leakage_energy_estimate_pj_reg <= 64'b0;
    bytes_read_sram_reg <= 32'b0;
    bytes_read_dram_reg <= 32'b0;
    cycles_stalled_dma_reg <= 32'b0;
    cycles_stalled_mask_reg <= 32'b0;
    overflow_flags <= 8'b0;
    end else begin
        cycle_counter <= cycle_counter + 1;
        
        // Count operations based on FIFO-snapshotted active PEs and sparsity
        if (sparse_valid_for_pe) begin
            // Apply sparsity efficiency to physical operations (represents effective cycles doing useful work)
            // physical ops count raw (no packing); sparse_eff scales effective work done vs theoretical
            phys_op_increment_tmp = (active_pe_count_fifo * MAC_LANES * adaptive_eff_milli);
            if (physical_operation_counter != 32'hFFFF_FFFF) begin
                // Narrow 64-bit intermediate to 32 bits before add to avoid WIDTHEXPAND
                phys_div_result = phys_op_increment_tmp / 64'd1000;
                physical_operation_counter <= physical_operation_counter + {16'b0, phys_div_result[15:0]};
            end
            else
                overflow_flags[0] <= 1'b1;
            // Count only active lanes defined by effective mask (population count)
            lane_pop = 0;
            for (lpi = 0; lpi < MAC_LANES; lpi = lpi + 1) begin
                if (lane_active_mask_eff[lpi]) lane_pop = lane_pop + 1; end
            // Apply packing & sparsity efficiencies to effective operation count
            eff_op_increment_tmp = (active_pe_count_fifo * lane_pop * pack_factor_wire * pack_eff_milli_adj * adaptive_eff_milli);
            if (operation_counter != 32'hFFFF_FFFF) begin
                eff_div_result = eff_op_increment_tmp / 64'd1000000;
                operation_counter <= operation_counter + eff_div_result[31:0];
            end
            else
                overflow_flags[1] <= 1'b1;
            // Skipped ops = (total potential PEs - active snapshot) * MAC_LANES (not scaled by packing)
            if (active_pe_count_fifo < NUM_PES)
                skipped_physical_operation_counter <= skipped_physical_operation_counter + (((NUM_PES) - active_pe_count_fifo_ext) * MAC_LANES);

            // (Removed heuristic SRAM bytes accumulation; now driven by memory injector responses)
        end

            // (Removed heuristic DRAM bytes accumulation; now driven by memory injector responses)

            // DMA stall: memory system busy while new memory need arises (no handshake)
            if (mem_busy && mem_need && !mem_req_fire) begin
                if (cycles_stalled_dma_reg != 32'hFFFF_FFFF)
                    cycles_stalled_dma_reg <= cycles_stalled_dma_reg + 1;
                else
                    overflow_flags[4] <= 1'b1;
            end

            // Memory injector response accounting (increment bytes counters on completion)
            // Memory injector response accounting (explicit zero-extend size to 32b to avoid WIDTHEXPAND warnings)
            if (mem_resp_valid) begin
                if (mem_pending_is_dram) begin
                    if (bytes_read_dram_reg != 32'hFFFF_FFFF)
                        bytes_read_dram_reg <= bytes_read_dram_reg + {16'b0, mem_resp_size_bytes};
                    else
                        overflow_flags[3] <= 1'b1;
                end else begin
                    if (bytes_read_sram_reg != 32'hFFFF_FFFF)
                        bytes_read_sram_reg <= bytes_read_sram_reg + {16'b0, mem_resp_size_bytes};
                    else
                        overflow_flags[2] <= 1'b1;
                end
            end
        // Mask stall: sparsity enabled but sparse_valid low
    if (sparsity_enable && !sparse_valid_for_pe) begin
            if (cycles_stalled_mask_reg != 32'hFFFF_FFFF)
                cycles_stalled_mask_reg <= cycles_stalled_mask_reg + 1;
            else
                overflow_flags[5] <= 1'b1;
    end

            // Energy accumulation (cycle-time precise): period_ps = 1e6 / freq_MHz.
            // Use widened intermediates + rounding to reduce truncation drift.
            // pJ per cycle = mW * period_ps / 1000.
            begin
                reg [31:0] freq_mhz_local; reg [31:0] period_ps_local; // up to ~1e6 safely in 32b
                reg [63:0] incr_total_pj; reg [63:0] incr_dyn_pj; reg [63:0] incr_leak_pj;
                freq_mhz_local = current_freq_mhz;
                if (freq_mhz_local == 0) freq_mhz_local = 1; // avoid divide-by-zero (should not happen)
                // Compute period_ps = (1_000_000 + freq/2)/freq for integer rounding
                period_ps_local = (32'd1_000_000 + (freq_mhz_local>>1)) / freq_mhz_local;
                incr_total_pj = ( {32'b0,current_power_mw}  * period_ps_local + 64'd500 ) / 64'd1000; // rounding (/1000)
                incr_dyn_pj   = ( {32'b0,dynamic_power_mw} * period_ps_local + 64'd500 ) / 64'd1000;
                incr_leak_pj  = ( {32'b0,leakage_power_mw} * period_ps_local + 64'd500 ) / 64'd1000;
                energy_estimate_pj_reg         <= energy_estimate_pj_reg        + incr_total_pj;
                dynamic_energy_estimate_pj_reg <= dynamic_energy_estimate_pj_reg + incr_dyn_pj;
                leakage_energy_estimate_pj_reg <= leakage_energy_estimate_pj_reg + incr_leak_pj;
            end
        
        // Update efficiency history every 256 cycles
        if (cycle_counter[7:0] == 8'hFF) begin
            efficiency_history[efficiency_history_idx] <= efficiency_tops_w;
            efficiency_history_idx <= efficiency_history_idx + 1;
        end
    end
end

// Calculate operations per second (approximate)
assign ops_per_second = operation_counter;
assign phys_ops_per_second = physical_operation_counter;
assign eff_ops_per_second = operation_counter;
assign skipped_phys_ops_per_second = skipped_physical_operation_counter;
// Scale dynamic power by adaptive sparsity efficiency (milli scaling)
assign dynamic_power_mw = (dynamic_power_mw_base * adaptive_eff_milli) / 16'd1000;
assign power_consumption_mw = current_power_mw; // current_power_mw includes dynamic+leak base; scaled dynamic used for energy accumulation below

// Tile status: mark ready when efficiency grade indicates at least GOOD (>=8)
assign tile_ready = ~reset & (efficiency_grade >= 4'd8);

// Debug status
assign debug_status = {
    4'b0, efficiency_grade,    // [31:24] pad + Efficiency grade
    sparsity_ratio[7:0],       // [23:16] Sparsity ratio
    5'b0, voltage_setting,     // [15:8]  pad + Current voltage (3 bits)
    5'b0, frequency_setting    // [7:0]   pad + Current frequency (3 bits)
};

// Expose new counters
assign energy_estimate_pj = energy_estimate_pj_reg;
assign bytes_read_sram = bytes_read_sram_reg;
assign bytes_read_dram = bytes_read_dram_reg;
assign cycles_stalled_dma = cycles_stalled_dma_reg;
assign cycles_stalled_mask = cycles_stalled_mask_reg;
assign dynamic_energy_estimate_pj = dynamic_energy_estimate_pj_reg;
assign leakage_energy_estimate_pj = leakage_energy_estimate_pj_reg;

// CSR block instantiation (Phase 1 control stub)
// Compute instantaneous utilization (scaled to 0-1000 => milli-percent) using snapshot count
wire [15:0] utilization_milli_pct = (NUM_PES != 0) ? ((active_pe_count_fifo * 1000) / NUM_PES) : 16'd0;
wire [15:0] utilization_ma_milli_pct = (NUM_PES != 0) ? ((utilization_ma_internal * 1000) / NUM_PES) : 16'd0;
// Placeholder version & overflow signals
wire [31:0] version_feat_bitmap = 32'h0002_0001; // version 2, feature bitmap bits[15:0]
    // overflow_flags already declared earlier; retain single definition
// DVFS / efficiency modeling CSR outputs (unused internally yet)
    // (Declarations moved to top section)

// Router telemetry wires (from noc_router)
wire [31:0] router_flits_in_count;
wire [31:0] router_flits_out_count;
wire [31:0] router_flits_in_n, router_flits_in_s, router_flits_in_e, router_flits_in_w, router_flits_in_l;
wire [31:0] router_flits_out_n, router_flits_out_s, router_flits_out_e, router_flits_out_w, router_flits_out_l;
wire [31:0] router_stall_in_n, router_stall_in_s, router_stall_in_e, router_stall_in_w, router_stall_in_l;
wire [15:0] router_congestion_index; // window-based congestion index (milli)
wire [15:0] router_peak_inflight_milli; // peak simultaneous active inputs (milli)
wire [15:0] router_avg_queue_depth_milli; // avg queue depth (milli of inputs)
wire [31:0] router_stall_arb_count;
wire [31:0] router_stall_buf_count;
wire [31:0] router_stall_bp_count;
wire [15:0] router_pred_congestion_milli;
// Router credit telemetry wires (remaining credits per egress)
wire [3:0] router_credit_level_n;
wire [3:0] router_credit_level_s;
wire [3:0] router_credit_level_e;
wire [3:0] router_credit_level_w;
wire [3:0] router_credit_level_l;

simple_csr_block #(.MAC_LANES(MAC_LANES)) csr_blk (
    .clk(clk), .reset(reset),
    .csr_valid(csr_valid), .csr_write(csr_write), .csr_addr(csr_addr), .csr_wdata(csr_wdata), .csr_rdata(csr_rdata), .csr_ready(csr_ready),
    .precision_mode(csr_precision_mode),
    .sparsity_enable(csr_sparsity_enable), .sparsity_mode(csr_sparsity_mode),
    .lane_active_mask(csr_lane_active_mask), .start(csr_start), .stop(csr_stop),
    .phys_ops_lo(physical_operation_counter), .eff_ops_lo(operation_counter), .skipped_ops_lo(skipped_physical_operation_counter),
    .energy_pj(energy_estimate_pj_reg), .bytes_sram(bytes_read_sram_reg), .bytes_dram(bytes_read_dram_reg),
    .efficiency_milli_tops_w(efficiency_tops_w), .active_pe_count(active_pe_count_fifo), .sparsity_ratio(sparsity_ratio), .efficiency_grade(efficiency_grade),
    .dynamic_power_mw(dynamic_power_mw), .leakage_power_mw(leakage_power_mw),
    .dynamic_energy_pj(dynamic_energy_estimate_pj_reg), .leakage_energy_pj(leakage_energy_estimate_pj_reg),
    .utilization_milli_pct(utilization_milli_pct), .utilization_ma_milli_pct(utilization_ma_milli_pct),
    .adapt_current_mode(adapt_mode), .adapt_mode_eff_milli(adapt_mode_eff_milli),
    .mem_cycles_stalled_dma(cycles_stalled_dma_reg), .mem_cycles_stalled_mask(cycles_stalled_mask_reg),
    .mem_latency_sram_cycles(csr_mem_latency_sram_cycles), .mem_latency_dram_cycles(csr_mem_latency_dram_cycles),
    .mem_dram_hit_milli_pct(csr_mem_dram_hit_milli_pct), .mem_cfg_use_overrides(csr_mem_cfg_use_overrides),
    .util_high_thresh_pct(util_high_thresh_pct), .util_low_thresh_pct(util_low_thresh_pct),
    .perf_hyst_margin_milli(perf_hyst_margin_milli), .dvfs_min_settle_cycles(dvfs_min_settle_cycles),
    .reuse_factor(reuse_factor), .pack_eff_milli(pack_eff_milli), .sparse_eff_milli(sparse_eff_milli),
    // Leakage temperature scaling outputs
    .leak_ref_temp_c(csr_leak_ref_temp_c), .leak_alpha_milli(csr_leak_alpha_milli),
    .version_feat_bitmap(version_feat_bitmap), .overflow_flags(overflow_flags),
    // Adaptive sparsity
    .sparsity_adapt_enable(csr_sparsity_adapt_enable),
    .sparsity_thresh_2to4(csr_sparsity_thresh_2to4), .sparsity_thresh_1to4(csr_sparsity_thresh_1to4), .sparsity_thresh_1to8(csr_sparsity_thresh_1to8),
    .sparsity_hyst_milli(csr_sparsity_hyst_milli), .sparsity_min_hold_windows(csr_sparsity_min_hold_windows),
    // Contention
    .mem_contention_enable(csr_mem_contention_enable), .mem_tokens_per_cycle(csr_mem_tokens_per_cycle), .mem_token_capacity(csr_mem_token_capacity),
    .mem_dram_tokens_level(dram_tokens_level), .mem_dram_token_stall_cycles(dram_token_stall_cycles), .mem_dram_contention_events(dram_contention_events),
    // Router telemetry inputs
    .router_flits_in(router_flits_in_count), .router_flits_out(router_flits_out_count)
    , .router_flits_in_n(router_flits_in_n), .router_flits_in_s(router_flits_in_s), .router_flits_in_e(router_flits_in_e), .router_flits_in_w(router_flits_in_w), .router_flits_in_l(router_flits_in_l)
    , .router_flits_out_n(router_flits_out_n), .router_flits_out_s(router_flits_out_s), .router_flits_out_e(router_flits_out_e), .router_flits_out_w(router_flits_out_w), .router_flits_out_l(router_flits_out_l)
    , .router_stall_in_n(router_stall_in_n), .router_stall_in_s(router_stall_in_s), .router_stall_in_e(router_stall_in_e), .router_stall_in_w(router_stall_in_w), .router_stall_in_l(router_stall_in_l)
    , .router_congestion_index(router_congestion_index)
    , .router_peak_inflight_milli(router_peak_inflight_milli)
    , .router_avg_queue_depth_milli(router_avg_queue_depth_milli)
    , .router_stall_arb_count(router_stall_arb_count)
    , .router_stall_buf_count(router_stall_buf_count)
    , .router_stall_bp_count(router_stall_bp_count)
    , .router_pred_congestion_milli(router_pred_congestion_milli)
    , .router_credit_level_n(router_credit_level_n)
    , .router_credit_level_s(router_credit_level_s)
    , .router_credit_level_e(router_credit_level_e)
    , .router_credit_level_w(router_credit_level_w)
    , .router_credit_level_l(router_credit_level_l)
);

// Adaptive sparsity FSM integration
// Use sparsity_engine active PE count vs theoretical for density calculation when sample event occurs
wire [15:0] density_nonzero = active_pe_count; // from sparsity engine output
wire [15:0] density_total   = NUM_PES[15:0];
wire        density_sample_valid = sparse_valid_for_pe; // sample on valid sparsity engine cycle
wire [1:0]  adapt_mode;
wire        adapt_mode_change;
wire [15:0] adapt_last_density_milli;
supply0 unused_supply0;
wire [15:0] adapt_mode_eff_milli;
sparsity_adaptive_fsm adapt_fsm (
    .clk(clk), .reset(reset),
    .sample_valid(density_sample_valid), .nonzero_count(density_nonzero), .total_count(density_total),
    .manual_override_mode(~csr_sparsity_adapt_enable), .manual_mode_select(csr_sparsity_mode),
    .thresh_2to4(csr_sparsity_thresh_2to4), .thresh_1to4(csr_sparsity_thresh_1to4), .thresh_1to8(csr_sparsity_thresh_1to8),
    .hyst_milli(csr_sparsity_hyst_milli), .min_hold_windows(csr_sparsity_min_hold_windows),
    .util_milli_pct(utilization_milli_pct),
    .current_mode(adapt_mode), .mode_change_pulse(adapt_mode_change), .last_density_milli(adapt_last_density_milli),
    .window_complete(), .change_count(), .mode_eff_milli(adapt_mode_eff_milli)
);

// Effective sparsity mode selection
wire [1:0] effective_sparsity_mode = csr_sparsity_adapt_enable ? adapt_mode : csr_sparsity_mode;

// Enhanced NoC router with flow control
// (domain_power_enable_unused/domain_clock_enable_unused declared above)

noc_router_enhanced #(
    .FLIT_WIDTH(64),
    .ROUTER_X(TILE_ID),
    .ROUTER_Y(0),
    .INPUT_BUFFER(1)
) noc_router (
    .clk(clk),
    .reset(reset),
    
    // External NoC connections
    .flit_in_n(noc_flit_in_n),
    .flit_in_s(noc_flit_in_s),
    .flit_in_e(noc_flit_in_e),
    .flit_in_w(noc_flit_in_w),
    .flit_in_local(noc_flit_in_local),
    .valid_in_n(noc_valid_in_n),
    .valid_in_s(noc_valid_in_s),
    .valid_in_e(noc_valid_in_e),
    .valid_in_w(noc_valid_in_w),
    .valid_in_local(noc_valid_in_local),
    
    .flit_out_n(noc_flit_out_n),
    .flit_out_s(noc_flit_out_s),
    .flit_out_e(noc_flit_out_e),
    .flit_out_w(noc_flit_out_w),
    .flit_out_local(noc_flit_out_local),
    .valid_out_n(noc_valid_out_n),
    .valid_out_s(noc_valid_out_s),
    .valid_out_e(noc_valid_out_e),
    .valid_out_w(noc_valid_out_w),
    .valid_out_local(noc_valid_out_local),
    // Ready inputs (no backpressure in tile yet: tie high). Future: driven by downstream flow control.
    .ready_in_n(1'b1), .ready_in_s(1'b1), .ready_in_e(1'b1), .ready_in_w(1'b1), .ready_in_local(1'b1),
    .credit_in_n(1'b0), .credit_in_s(1'b0), .credit_in_e(1'b0), .credit_in_w(1'b0), .credit_in_local(1'b0),
    .flits_in_count(router_flits_in_count),
    .flits_out_count(router_flits_out_count),
    .flits_in_n_count(router_flits_in_n), .flits_in_s_count(router_flits_in_s), .flits_in_e_count(router_flits_in_e), .flits_in_w_count(router_flits_in_w), .flits_in_l_count(router_flits_in_l),
    .flits_out_n_count(router_flits_out_n), .flits_out_s_count(router_flits_out_s), .flits_out_e_count(router_flits_out_e), .flits_out_w_count(router_flits_out_w), .flits_out_l_count(router_flits_out_l),
    .stall_in_n_count(router_stall_in_n), .stall_in_s_count(router_stall_in_s), .stall_in_e_count(router_stall_in_e), .stall_in_w_count(router_stall_in_w), .stall_in_l_count(router_stall_in_l), .congestion_index_milli(router_congestion_index),
    .peak_inflight_milli(router_peak_inflight_milli),
    .avg_queue_depth_milli(router_avg_queue_depth_milli),
    .stall_arb_count(router_stall_arb_count),
    .stall_buf_count(router_stall_buf_count),
    .stall_bp_count(router_stall_bp_count),
    .predicted_congestion_milli(router_pred_congestion_milli),
    .credit_level_n(router_credit_level_n), .credit_level_s(router_credit_level_s), .credit_level_e(router_credit_level_e), .credit_level_w(router_credit_level_w), .credit_level_l(router_credit_level_l),
    
    // Local tile interface
    .tile_data_in({16'b0, active_pe_count, efficiency_tops_w, power_consumption_mw}),
    .tile_data_out(tile_data_out_unused),
    .tile_valid_in(tile_ready),
    .tile_valid_out(tile_valid_out_unused)
);

// Dummy wires for unused NoC local tile interface outputs
wire [63:0] tile_data_out_unused;
wire tile_valid_out_unused;
// (router_stall_bp_count already declared earlier with other router telemetry wires)

endmodule
