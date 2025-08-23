`timescale 1ns/1ps
// tile_energy_absolute_tb (rev2)
// Goal: Absolute verification of tile energy accumulation using the tile's own
// reported internal telemetry (freq, dynamic power, leakage power) each cycle.
// We recompute a reference model cycle-by-cycle with identical integer math:
//   incr = (power_mW * cycle_time_ps) / 1000 ; cycle_time_ps = 1_000_000 / freq_MHz
// Two phases are exercised: baseline temperature then elevated temperature to
// perturb leakage scaling (quadratic model). We allow a small tolerance (<1%).
// This avoids depending on hardcoded assumed power values and remains robust
// if DVFS / power coefficients evolve.

module tile_energy_absolute_tb;
  // Simulation clock: 1ns period => 1 GHz (arbitrary; tile's internal freq table drives energy math)
  reg clk=0, reset=1; always #0.5 clk = ~clk;
  // Match tile default data width
  localparam int DATA_WIDTH = 8;

  // Drive key power manager influencing inputs (others tied off)
  reg  [7:0]  power_mode       = 8'd0;      // max performance initially
  reg  [15:0] power_budget_mw  = 16'd6000;  // ample budget
  reg  [7:0]  temperature      = 8'd60;     // baseline temperature (C)
  reg  [15:0] performance_target = 16'd2000; // arbitrary target
  reg         sparsity_enable = 1'b0;
  reg  [1:0]  sparsity_mode   = 2'b00;
  reg  [1:0]  precision_mode  = 2'b00;      // INT8
  reg  [0:0]  lane_active_mask = 1'b1;      // single PE active mask

  // Small tile configuration for fast simulation
  localparam int PE_ROWS = 1;
  localparam int PE_COLS = 1;
  localparam int MAC_LANES = 1;

  // Tie off wide data & NoC interfaces
  wire [DATA_WIDTH*16-1:0] data_in = {DATA_WIDTH*16{1'b0}}; // DATA_WIDTH comes from tile param default (8)
  wire data_valid = 1'b0;
  wire [15:0] data_pattern = 16'd0;
  wire [63:0] noc_flit_in_n=64'd0, noc_flit_in_s=64'd0, noc_flit_in_e=64'd0, noc_flit_in_w=64'd0, noc_flit_in_local=64'd0;
  wire noc_valid_in_n=1'b0, noc_valid_in_s=1'b0, noc_valid_in_e=1'b0, noc_valid_in_w=1'b0, noc_valid_in_local=1'b0;
  wire [63:0] noc_flit_out_n, noc_flit_out_s, noc_flit_out_e, noc_flit_out_w, noc_flit_out_local;
  wire noc_valid_out_n, noc_valid_out_s, noc_valid_out_e, noc_valid_out_w, noc_valid_out_local;

  // Unused outputs / monitors
  wire [31:0] ops_per_second, phys_ops_per_second, eff_ops_per_second, skipped_phys_ops_per_second;
  wire [15:0] power_consumption_mw, efficiency_tops_w; wire [3:0] efficiency_grade; wire [15:0] active_pe_count, sparsity_ratio;
  wire [63:0] energy_estimate_pj, dynamic_energy_estimate_pj, leakage_energy_estimate_pj;
  wire [31:0] bytes_read_sram, bytes_read_dram, cycles_stalled_dma, cycles_stalled_mask; wire tile_ready; wire [31:0] debug_status;

  // Instantiate tile (expose internal nets via hierarchy for telemetry)
  // Instantiate tile with sparsity engine disabled for energy-focused test
  neuraedge_tile_50tops #(.PE_ROWS(PE_ROWS), .PE_COLS(PE_COLS), .MAC_LANES(MAC_LANES), .DISABLE_SPARSITY_ENGINE(1)) tile (
    .clk(clk), .reset(reset),
    .power_mode(power_mode), .power_budget_mw(power_budget_mw), .temperature(temperature), .performance_target(performance_target),
    .sparsity_enable(sparsity_enable), .sparsity_mode(sparsity_mode), .precision_mode(precision_mode), .lane_active_mask(lane_active_mask),
    // CSR interface disabled
    .csr_valid(1'b0), .csr_write(1'b0), .csr_addr(8'd0), .csr_wdata(32'd0), .csr_rdata(), .csr_ready(),
    // Data
    .data_in(data_in), .data_valid(data_valid), .data_pattern(data_pattern),
    // NoC
    .noc_flit_in_n(noc_flit_in_n), .noc_flit_in_s(noc_flit_in_s), .noc_flit_in_e(noc_flit_in_e), .noc_flit_in_w(noc_flit_in_w), .noc_flit_in_local(noc_flit_in_local),
    .noc_valid_in_n(noc_valid_in_n), .noc_valid_in_s(noc_valid_in_s), .noc_valid_in_e(noc_valid_in_e), .noc_valid_in_w(noc_valid_in_w), .noc_valid_in_local(noc_valid_in_local),
    .noc_flit_out_n(noc_flit_out_n), .noc_flit_out_s(noc_flit_out_s), .noc_flit_out_e(noc_flit_out_e), .noc_flit_out_w(noc_flit_out_w), .noc_flit_out_local(noc_flit_out_local),
    .noc_valid_out_n(noc_valid_out_n), .noc_valid_out_s(noc_valid_out_s), .noc_valid_out_e(noc_valid_out_e), .noc_valid_out_w(noc_valid_out_w), .noc_valid_out_local(noc_valid_out_local),
    // Perf / energy outputs
    .ops_per_second(ops_per_second), .phys_ops_per_second(phys_ops_per_second), .eff_ops_per_second(eff_ops_per_second), .skipped_phys_ops_per_second(skipped_phys_ops_per_second),
    .power_consumption_mw(power_consumption_mw), .efficiency_tops_w(efficiency_tops_w), .efficiency_grade(efficiency_grade), .active_pe_count(active_pe_count), .sparsity_ratio(sparsity_ratio),
    .energy_estimate_pj(energy_estimate_pj), .bytes_read_sram(bytes_read_sram), .bytes_read_dram(bytes_read_dram), .cycles_stalled_dma(cycles_stalled_dma), .cycles_stalled_mask(cycles_stalled_mask),
    .dynamic_energy_estimate_pj(dynamic_energy_estimate_pj), .leakage_energy_estimate_pj(leakage_energy_estimate_pj), .tile_ready(tile_ready), .debug_status(debug_status)
  );

  // Reference accumulators
  reg [63:0] ref_total=0, ref_dyn=0, ref_leak=0;
  integer cycle_count=0;
  localparam int PHASE1_CYCLES = 200;
  localparam int PHASE2_CYCLES = 300; // total 500 (after stabilization)
  // Store phase 1 snapshots
  reg [63:0] phase1_total, phase1_dyn, phase1_leak;
  // Tolerances
  integer tol_total, tol_dyn, tol_leak;

  // Helper task: accumulate one cycle based on current telemetry
  task accumulate_cycle;
    integer freq_mhz;
    integer cycle_time_ps;
    integer incr_t, incr_d, incr_l;
  begin
    freq_mhz = tile.current_freq_mhz; // hierarchical internal net
    if (freq_mhz != 0) begin
      cycle_time_ps = 1000000 / freq_mhz; // integer truncation matches RTL
      incr_d = (tile.dynamic_power_mw * cycle_time_ps) / 1000;
      incr_l = (tile.leakage_power_mw * cycle_time_ps) / 1000;
      incr_t = (tile.current_power_mw * cycle_time_ps) / 1000;
      ref_dyn  = ref_dyn  + incr_d;
      ref_leak = ref_leak + incr_l;
      ref_total= ref_total+ incr_t;
    end
  end
  endtask

  // Main stimulus / checking
  initial begin
    // Reset sequence
    repeat(10) @(posedge clk); reset = 0; @(posedge clk);
    // Allow initial DVFS settle
    repeat(50) begin @(posedge clk); accumulate_cycle(); cycle_count++; end
    $display("[ABS_ENERGY] Post-settle start: freq=%0d MHz dyn=%0d mW leak=%0d mW", tile.current_freq_mhz, tile.dynamic_power_mw, tile.leakage_power_mw);

    // Phase 1
  repeat(PHASE1_CYCLES) begin @(posedge clk); accumulate_cycle(); cycle_count++; end
  phase1_total = ref_total;
  phase1_dyn   = ref_dyn;
  phase1_leak  = ref_leak;
    $display("[ABS_ENERGY] End Phase1 cycles=%0d ref_total=%0d tile_total=%0d", cycle_count, ref_total, energy_estimate_pj);

    // Perturb temperature to alter leakage scaling (should change per-cycle leakage increment)
    temperature = 8'd90; // hotter => higher leakage
    repeat(20) begin @(posedge clk); accumulate_cycle(); cycle_count++; end // allow a few cycles for scaling propagation
    // Phase 2
    repeat(PHASE2_CYCLES) begin @(posedge clk); accumulate_cycle(); cycle_count++; end

    // Final comparison (allow <=1% + 5 pJ tolerance to account for truncated integer math & potential DVFS adjustments mid-cycle)
  tol_total = (ref_total/100) + 5;
  tol_dyn   = (ref_dyn/100)   + 5;
  tol_leak  = (ref_leak/100)  + 5;

    $display("[ABS_ENERGY] Phase1 ref_total=%0d dyn=%0d leak=%0d", phase1_total, phase1_dyn, phase1_leak);
    $display("[ABS_ENERGY] Final ref_total=%0d dyn=%0d leak=%0d", ref_total, ref_dyn, ref_leak);
    $display("[ABS_ENERGY] Tile  total=%0d dyn=%0d leak=%0d", energy_estimate_pj, dynamic_energy_estimate_pj, leakage_energy_estimate_pj);

    if ( (energy_estimate_pj > ref_total ? (energy_estimate_pj - ref_total) : (ref_total - energy_estimate_pj)) > tol_total ) begin
      $fatal(1, "Total energy mismatch tol=%0d ref=%0d tile=%0d", tol_total, ref_total, energy_estimate_pj);
    end
    if ( (dynamic_energy_estimate_pj > ref_dyn ? (dynamic_energy_estimate_pj - ref_dyn) : (ref_dyn - dynamic_energy_estimate_pj)) > tol_dyn ) begin
      $fatal(1, "Dynamic energy mismatch tol=%0d ref=%0d tile=%0d", tol_dyn, ref_dyn, dynamic_energy_estimate_pj);
    end
    if ( (leakage_energy_estimate_pj > ref_leak ? (leakage_energy_estimate_pj - ref_leak) : (ref_leak - leakage_energy_estimate_pj)) > tol_leak ) begin
      $fatal(1, "Leakage energy mismatch tol=%0d ref=%0d tile=%0d", tol_leak, ref_leak, leakage_energy_estimate_pj);
    end

    $display("tile_energy_absolute_tb PASS (|err_total|=%0d <= %0d)", (energy_estimate_pj>ref_total)?(energy_estimate_pj-ref_total):(ref_total-energy_estimate_pj), tol_total);
    $finish;
  end
endmodule
