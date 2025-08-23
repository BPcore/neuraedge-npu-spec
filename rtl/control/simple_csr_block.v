// Simple CSR block (Phase 1) providing register access to key control and counter signals.
// NOTE: This is a lightweight placeholder; integrate with RISC-V core later.
// Address map aligned with architecture doc Section 14.
//  - 32-bit word addresses (byte offsets /4). Reads synchronous, writes on rising clock.

module simple_csr_block #(
    parameter MAC_LANES = 4
) (
    input  wire        clk,
    input  wire        reset,
    // CSR access interface (simple handshake)
    input  wire        csr_valid,
    input  wire        csr_write,
    input  wire [7:0]  csr_addr,      // byte offset low bits (assume aligned)
    input  wire [31:0] csr_wdata,
    output reg  [31:0] csr_rdata,
    output reg         csr_ready,

    // Control outputs
    output reg  [1:0]  precision_mode,
    output reg         sparsity_enable,
    output reg  [1:0]  sparsity_mode,
    output reg  [MAC_LANES-1:0] lane_active_mask,
    output reg         start,
    output reg         stop,
    // Status / counter inputs
    input  wire [31:0] phys_ops_lo,
    input  wire [31:0] eff_ops_lo,
    input  wire [31:0] skipped_ops_lo,
    input  wire [63:0] energy_pj,
    input  wire [31:0] bytes_sram,
    input  wire [31:0] bytes_dram,
    input  wire [15:0] efficiency_milli_tops_w,
    input  wire [15:0] active_pe_count,
    input  wire [15:0] sparsity_ratio,
    input  wire [3:0]  efficiency_grade,
    // Phase 2 telemetry extensions
    input  wire [15:0] dynamic_power_mw,
    input  wire [15:0] leakage_power_mw,
    // Phase 2.5: expose separated dynamic/leakage energy and utilization
    input  wire [63:0] dynamic_energy_pj,
    input  wire [63:0] leakage_energy_pj,
    input  wire [15:0] utilization_milli_pct,  // instantaneous util (0-1000)
    input  wire [15:0] utilization_ma_milli_pct, // moving average util (0-1000)
    // Adaptive sparsity telemetry
    input  wire [1:0]  adapt_current_mode,
    input  wire [15:0] adapt_mode_eff_milli,
    // Memory latency injector telemetry inputs (optional)
    input  wire [31:0] mem_cycles_stalled_dma,
    input  wire [31:0] mem_cycles_stalled_mask,
    // Memory latency injector configuration outputs
    output reg  [15:0] mem_latency_sram_cycles,
    output reg  [15:0] mem_latency_dram_cycles,
    output reg  [9:0]  mem_dram_hit_milli_pct,
    output reg         mem_cfg_use_overrides,
    // New power/DVFS control outputs (runtime adjustable)
    output reg  [7:0]  util_high_thresh_pct,
    output reg  [7:0]  util_low_thresh_pct,
    output reg  [15:0] perf_hyst_margin_milli,   // milli TOPS/W margin
    output reg  [7:0]  dvfs_min_settle_cycles,
    // Leakage temperature scaling controls
    output reg  [7:0]  leak_ref_temp_c,
    output reg  [15:0] leak_alpha_milli,
    output reg  [15:0] leak_beta_milli,       // quadratic leakage temp coefficient (milli)
    // Reuse & efficiency modeling controls
    output reg  [15:0] reuse_factor,            // >0 => divide DRAM bytes
    output reg  [15:0] pack_eff_milli,          // 0-1000
    output reg  [15:0] sparse_eff_milli,        // 0-1000
    // Adaptive sparsity controls
    output reg         sparsity_adapt_enable,
    output reg  [9:0]  sparsity_thresh_2to4,
    output reg  [9:0]  sparsity_thresh_1to4,
    output reg  [9:0]  sparsity_thresh_1to8,
    output reg  [9:0]  sparsity_hyst_milli,
    output reg  [7:0]  sparsity_min_hold_windows,
    // Memory contention controls
    output reg         mem_contention_enable,
    output reg  [7:0]  mem_tokens_per_cycle,
    output reg  [15:0] mem_token_capacity,
    // Memory contention telemetry inputs (from injector wrapper when integrated)
    input  wire [15:0] mem_dram_tokens_level,
    input  wire [31:0] mem_dram_token_stall_cycles,
    input  wire [31:0] mem_dram_contention_events,
    // Router telemetry (Phase 1 minimal)
    input  wire [31:0] router_flits_in,
    input  wire [31:0] router_flits_out,
    // Router telemetry Phase 1b (per-port + stall + congestion)
    input  wire [31:0] router_flits_in_n,
    input  wire [31:0] router_flits_in_s,
    input  wire [31:0] router_flits_in_e,
    input  wire [31:0] router_flits_in_w,
    input  wire [31:0] router_flits_in_l,
    input  wire [31:0] router_flits_out_n,
    input  wire [31:0] router_flits_out_s,
    input  wire [31:0] router_flits_out_e,
    input  wire [31:0] router_flits_out_w,
    input  wire [31:0] router_flits_out_l,
    input  wire [31:0] router_stall_in_n,
    input  wire [31:0] router_stall_in_s,
    input  wire [31:0] router_stall_in_e,
    input  wire [31:0] router_stall_in_w,
    input  wire [31:0] router_stall_in_l,
    input  wire [15:0] router_congestion_index,
    input  wire [15:0] router_peak_inflight_milli,
    input  wire [15:0] router_avg_queue_depth_milli,
    input  wire [31:0] router_stall_arb_count,
    input  wire [31:0] router_stall_buf_count,
    input  wire [31:0] router_stall_bp_count,
    input  wire [15:0] router_pred_congestion_milli,
    // Router credit telemetry (remaining credits per egress if credit mode enabled)
    input  wire [3:0]  router_credit_level_n,
    input  wire [3:0]  router_credit_level_s,
    input  wire [3:0]  router_credit_level_e,
    input  wire [3:0]  router_credit_level_w,
    input  wire [3:0]  router_credit_level_l,
    // Version / feature bitmap input (from top or parameters)
    input  wire [31:0] version_feat_bitmap,
    // Overflow/status flags input
    input  wire [7:0]  overflow_flags
);

// Internal registers for CONTROL / STATUS
reg busy;

// Write side
reg [2:0] router_port_sel; // 0:N 1:S 2:E 3:W 4:L
always @(posedge clk) begin
    if (reset) begin
        precision_mode    <= 2'b00;
        sparsity_enable   <= 1'b0;
        sparsity_mode     <= 2'b00;
        lane_active_mask  <= {MAC_LANES{1'b1}};
        start             <= 1'b0;
        stop              <= 1'b0;
        busy              <= 1'b0;
        csr_ready         <= 1'b0;
        util_high_thresh_pct   <= 8'd75;
        util_low_thresh_pct    <= 8'd55;
        perf_hyst_margin_milli <= 16'd500;
    dvfs_min_settle_cycles <= 8'd50;
    leak_ref_temp_c        <= 8'd50;  // default characterization point 50C
    leak_alpha_milli       <= 16'd20; // default +2% per C (20 milli per C)
    leak_beta_milli        <= 16'd0;  // disabled quadratic by default
        reuse_factor           <= 16'd1;
        pack_eff_milli         <= 16'd1000;
        sparse_eff_milli       <= 16'd1000;
    sparsity_adapt_enable  <= 1'b0;
    sparsity_thresh_2to4   <= 10'd750; // milli density thresholds (example)
    sparsity_thresh_1to4   <= 10'd500;
    sparsity_thresh_1to8   <= 10'd250;
    sparsity_hyst_milli    <= 10'd25;  // 2.5% hysteresis
    sparsity_min_hold_windows <= 8'd4;  // hold for 4 windows
    mem_contention_enable <= 1'b0;
    mem_tokens_per_cycle  <= 8'd8;
    mem_token_capacity    <= 16'd128;
    mem_latency_sram_cycles <= 16'd2;
    mem_latency_dram_cycles <= 16'd30;
    mem_dram_hit_milli_pct  <= 10'd0; // default no cache hits
    mem_cfg_use_overrides   <= 1'b0;
    end else begin
        csr_ready <= 1'b0;
        start <= 1'b0; // pulse
        stop  <= 1'b0; // pulse
        if (csr_valid && csr_write && !csr_ready) begin
            csr_ready <= 1'b1;
            case (csr_addr[7:2]) // word address
                6'h0: begin // CONTROL 0x000
                    start <= csr_wdata[0];
                    stop  <= csr_wdata[1];
                end
                6'h4: begin // PRECISION_MODE 0x010
                    precision_mode <= csr_wdata[1:0];
                end
                6'h6: begin // PACK_CONFIG 0x018 (lanes mask)
                    lane_active_mask <= csr_wdata[MAC_LANES-1:0];
                end
                6'h5: begin // SPARSITY_MASK_BASE placeholder ignore
                    sparsity_enable <= csr_wdata[0];
                    sparsity_mode   <= csr_wdata[2:1];
                end
                6'h7: begin // SPARSITY_ADAPT_CTRL 0x01C (enable bit)
                    sparsity_adapt_enable <= csr_wdata[0];
                end
                6'h8: begin // SPARSE_THRESH_2TO4 0x020
                    sparsity_thresh_2to4 <= csr_wdata[9:0];
                end
                6'h9: begin // SPARSE_THRESH_1TO4 0x024
                    sparsity_thresh_1to4 <= csr_wdata[9:0];
                end
                6'hA: begin // SPARSE_THRESH_1TO8 0x028
                    sparsity_thresh_1to8 <= csr_wdata[9:0];
                end
                6'hB: begin // SPARSE_HYST_MINHOLD 0x02C {hyst[9:0], min_hold[7:0]}
                    sparsity_hyst_milli <= csr_wdata[9:0];
                    sparsity_min_hold_windows <= csr_wdata[17:10];
                end
                6'h35: begin // MEM_CONTENTION_CTRL 0x0D4 {capacity[31:16], tokens_per_cycle[15:8], enable[0]}
                    mem_contention_enable <= csr_wdata[0];
                    mem_tokens_per_cycle  <= csr_wdata[15:8];
                    mem_token_capacity    <= csr_wdata[31:16];
                end
                6'h28: begin // UTIL_HIGH_THRESH_PCT 0x0A0
                    util_high_thresh_pct <= csr_wdata[7:0];
                end
                6'h29: begin // UTIL_LOW_THRESH_PCT 0x0A4
                    util_low_thresh_pct <= csr_wdata[7:0];
                end
                6'h2A: begin // PERF_HYST_MARGIN 0x0A8
                    perf_hyst_margin_milli <= csr_wdata[15:0];
                end
                6'h2B: begin // MIN_SETTLE_CYC 0x0AC
                    dvfs_min_settle_cycles <= csr_wdata[7:0];
                end
                6'h40: begin // LEAK_REF_TEMP_C 0x100 (extended map)
                    leak_ref_temp_c <= csr_wdata[7:0];
                end
                6'h41: begin // LEAK_ALPHA_MILLI 0x104 (milli per C above ref)
                    leak_alpha_milli <= csr_wdata[15:0];
                end
                6'h44: begin // LEAK_BETA_MILLI 0x110 (quadratic term milli)
                    leak_beta_milli <= csr_wdata[15:0];
                end
                6'h2C: begin // REUSE_FACTOR 0x0B0
                    if (csr_wdata[15:0] != 16'd0) reuse_factor <= csr_wdata[15:0];
                end
                6'h2D: begin // PACK_EFF_MILLI 0x0B4
                    pack_eff_milli <= csr_wdata[15:0];
                end
                6'h2E: begin // SPARSE_EFF_MILLI 0x0B8
                    sparse_eff_milli <= csr_wdata[15:0];
                end
                6'h2F: begin // MEM_LAT_SRAM 0x0BC
                    mem_latency_sram_cycles <= csr_wdata[15:0];
                end
                6'h30: begin // MEM_LAT_DRAM 0x0C0
                    mem_latency_dram_cycles <= csr_wdata[15:0];
                end
                6'h31: begin // MEM_DRAM_HIT_MILLI_PCT 0x0C4 (lower 10 bits)
                    mem_dram_hit_milli_pct <= csr_wdata[9:0];
                end
                6'h32: begin // MEM_CFG_ENABLE 0x0C8
                    mem_cfg_use_overrides <= csr_wdata[0];
                end
                6'h3B: begin // ROUTER_PORT_SEL (write-only, read returns current selection)
                    router_port_sel <= csr_wdata[2:0];
                end
                default: ;
            endcase
        end
    end
end

// Read mux
always @(*) begin
    csr_rdata = 32'h0;
    case (csr_addr[7:2])
        6'h0: csr_rdata = {30'b0, stop, start}; // CONTROL
        // STATUS: [31]=busy, [30:27]=grade, [26:16]=reserved, [15:0]=efficiency_milli_tops_w
    6'h1: csr_rdata = {busy, efficiency_grade[3:0], 11'b00000000000, efficiency_milli_tops_w[15:0]}; // STATUS (packed)
        6'h4: csr_rdata = {30'b0, precision_mode}; // PRECISION_MODE
        6'h5: csr_rdata = {29'b0, sparsity_mode, sparsity_enable}; // SPARSITY control
    6'h7: csr_rdata = {31'b0, sparsity_adapt_enable};
    6'h8: csr_rdata = {22'b0, sparsity_thresh_2to4};
    6'h9: csr_rdata = {22'b0, sparsity_thresh_1to4};
    6'hA: csr_rdata = {22'b0, sparsity_thresh_1to8};
    6'hB: csr_rdata = {14'b0, sparsity_min_hold_windows, sparsity_hyst_milli};
    6'h6: csr_rdata = {{(32-MAC_LANES){1'b0}}, lane_active_mask}; // PACK_CONFIG
        6'hC: csr_rdata = phys_ops_lo; // PHYS_OPS_LO 0x030
        6'hE: csr_rdata = eff_ops_lo;  // EFF_OPS_LO  0x038
        6'h10: csr_rdata = skipped_ops_lo; // SKIPPED_OPS_LO 0x040
        6'h14: csr_rdata = bytes_sram; // BYTES_SRAM 0x050
        6'h15: csr_rdata = bytes_dram; // BYTES_DRAM 0x054
        6'h18: csr_rdata = energy_pj[31:0]; // ENERGY_PJ_LO 0x060
        6'h19: csr_rdata = energy_pj[63:32]; // ENERGY_PJ_HI 0x064
    6'h1C: csr_rdata = {16'b0, sparsity_ratio}; // SPARSITY_RATIO
    6'h1D: csr_rdata = {16'b0, dynamic_power_mw}; // DYNAMIC_POWER
    6'h1E: csr_rdata = {16'b0, leakage_power_mw}; // LEAKAGE_POWER
    6'h20: csr_rdata = dynamic_energy_pj[31:0];   // DYNAMIC_ENERGY_PJ_LO 0x080
    6'h21: csr_rdata = dynamic_energy_pj[63:32];  // DYNAMIC_ENERGY_PJ_HI 0x084
    6'h22: csr_rdata = leakage_energy_pj[31:0];   // LEAKAGE_ENERGY_PJ_LO 0x088
    6'h23: csr_rdata = leakage_energy_pj[63:32];  // LEAKAGE_ENERGY_PJ_HI 0x08C
    6'h24: csr_rdata = {16'b0, utilization_milli_pct}; // UTILIZATION_MILLI_PCT 0x090
    6'h25: csr_rdata = {16'b0, utilization_ma_milli_pct}; // UTILIZATION_MA_MILLI_PCT 0x094
    6'h42: csr_rdata = {30'b0, adapt_current_mode}; // ADAPT_CURRENT_MODE 0x108
    6'h43: csr_rdata = {16'b0, adapt_mode_eff_milli}; // ADAPT_MODE_EFF_MILLI 0x10C
    6'h26: csr_rdata = version_feat_bitmap; // VERSION / FEATURE 0x098
    6'h27: csr_rdata = {24'b0, overflow_flags}; // STATUS2 / OVERFLOW 0x09C
    6'h28: csr_rdata = {24'b0, util_high_thresh_pct};
    6'h29: csr_rdata = {24'b0, util_low_thresh_pct};
    6'h2A: csr_rdata = {16'b0, perf_hyst_margin_milli};
    6'h2B: csr_rdata = {24'b0, dvfs_min_settle_cycles};
    6'h40: csr_rdata = {24'b0, leak_ref_temp_c};
    6'h41: csr_rdata = {16'b0, leak_alpha_milli};
    6'h44: csr_rdata = {16'b0, leak_beta_milli};
    6'h2C: csr_rdata = {16'b0, reuse_factor};
    6'h2D: csr_rdata = {16'b0, pack_eff_milli};
    6'h2E: csr_rdata = {16'b0, sparse_eff_milli};
    6'h2F: csr_rdata = {16'b0, mem_latency_sram_cycles};
    6'h30: csr_rdata = {16'b0, mem_latency_dram_cycles};
    6'h31: csr_rdata = {22'b0, mem_dram_hit_milli_pct};
    6'h32: csr_rdata = {31'b0, mem_cfg_use_overrides};
    6'h33: csr_rdata = mem_cycles_stalled_dma; // expose memory stall cycles
    6'h34: csr_rdata = mem_cycles_stalled_mask; // sparsity/mask stall cycles
    6'h35: csr_rdata = {mem_token_capacity, mem_tokens_per_cycle, 7'b0, mem_contention_enable};
    6'h36: csr_rdata = {16'b0, mem_dram_tokens_level};
    6'h37: csr_rdata = mem_dram_token_stall_cycles;
    6'h38: csr_rdata = mem_dram_contention_events;
    6'h39: csr_rdata = router_flits_in;  // ROUTER_FLITS_IN 0x0E4
    6'h3A: csr_rdata = router_flits_out; // ROUTER_FLITS_OUT 0x0E8
    6'h3B: csr_rdata = {29'b0, router_port_sel}; // ROUTER_PORT_SEL (0x0EC) write/read
    6'h3C: begin // ROUTER_PORT_IN (banked ingress count)
        case (router_port_sel)
            3'd0: csr_rdata = router_flits_in_n;
            3'd1: csr_rdata = router_flits_in_s;
            3'd2: csr_rdata = router_flits_in_e;
            3'd3: csr_rdata = router_flits_in_w;
            3'd4: csr_rdata = router_flits_in_l;
            default: csr_rdata = 32'h0;
        endcase
    end
    6'h3D: begin // ROUTER_PORT_OUT (banked egress count)
        case (router_port_sel)
            3'd0: csr_rdata = router_flits_out_n;
            3'd1: csr_rdata = router_flits_out_s;
            3'd2: csr_rdata = router_flits_out_e;
            3'd3: csr_rdata = router_flits_out_w;
            3'd4: csr_rdata = router_flits_out_l;
            default: csr_rdata = 32'h0;
        endcase
    end
    6'h3E: begin // ROUTER_PORT_STALL (banked stall ingress count)
        case (router_port_sel)
            3'd0: csr_rdata = router_stall_in_n;
            3'd1: csr_rdata = router_stall_in_s;
            3'd2: csr_rdata = router_stall_in_e;
            3'd3: csr_rdata = router_stall_in_w;
            3'd4: csr_rdata = router_stall_in_l;
            default: csr_rdata = 32'h0;
        endcase
    end
    6'h3F: csr_rdata = {16'b0, router_congestion_index}; // ROUTER_CONGESTION_INDEX (window weighted milli)
    6'h44: csr_rdata = {16'b0, router_peak_inflight_milli}; // ROUTER_PEAK_INFLIGHT_MILLI (reuse 0x110 if gap acceptable)
    6'h45: csr_rdata = {16'b0, router_avg_queue_depth_milli}; // ROUTER_AVG_QDEPTH_MILLI
    6'h46: csr_rdata = router_stall_arb_count; // ROUTER_STALL_ARB_COUNT
    6'h47: csr_rdata = router_stall_buf_count; // ROUTER_STALL_BUF_COUNT (future real buf stalls)
    6'h48: csr_rdata = router_stall_bp_count;  // ROUTER_STALL_BP_COUNT (downstream not-ready stalls)
    6'h49: csr_rdata = {16'b0, router_pred_congestion_milli}; // ROUTER_PRED_CONG_MILLI (EMA active load)
    6'h4A: begin // ROUTER_PORT_CREDITS (banked credit remaining for selected egress)
        case (router_port_sel)
            3'd0: csr_rdata = {28'b0, router_credit_level_n};
            3'd1: csr_rdata = {28'b0, router_credit_level_s};
            3'd2: csr_rdata = {28'b0, router_credit_level_e};
            3'd3: csr_rdata = {28'b0, router_credit_level_w};
            3'd4: csr_rdata = {28'b0, router_credit_level_l};
            default: csr_rdata = 32'h0;
        endcase
    end
    // NOTE: Optional debug: repurpose reserved space or extend map for peak inflight if needed
        default: csr_rdata = 32'hDEADBEEF;
    endcase
end

endmodule
