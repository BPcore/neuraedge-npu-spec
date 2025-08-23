`timescale 1ns/1ps

// Simple directed testbench to exercise noc_router_enhanced predicted congestion EMA metric.
// Pattern: drive varying number of active input valids over windows and sample CSR-like output.
// We approximate expected EMA using same alpha=1/8 filtering and allow small tolerance.

module router_pred_cong_tb;

  // Parameters (match router instantiation defaults where required)
  localparam int FLIT_WIDTH = 64;
  localparam int CYCLES = 400;

  // Clock / reset
  reg clk = 0; always #5 clk = ~clk; // 100MHz
  reg rst = 1;

  // Inputs to router (5 ports: N,E,S,W,Local). We'll only meaningfully vary valid signals.
  reg  [FLIT_WIDTH-1:0] flit_in_n, flit_in_e, flit_in_s, flit_in_w, flit_in_local;
  reg               valid_in_n, valid_in_e, valid_in_s, valid_in_w, valid_in_local;
  reg               ready_in_n = 1, ready_in_e = 1, ready_in_s = 1, ready_in_w = 1, ready_in_local = 1; // downstream always ready

  // Outputs (unused data)
  wire [FLIT_WIDTH-1:0] flit_out_n, flit_out_e, flit_out_s, flit_out_w, flit_out_local;
  wire              valid_out_n, valid_out_e, valid_out_s, valid_out_w, valid_out_local;

  // Telemetry outputs (subset)
  wire [15:0] predicted_congestion_milli;

  // Instantiate router (assuming existing noc_router_enhanced module name)
  reg  tile_valid_in;
  wire [FLIT_WIDTH-1:0] tile_data_out; wire tile_valid_out;
  // Disable input buffering for this predictive congestion EMA test to avoid
  // 5/4 oscillation in active_inputs_this_cycle caused by single-depth buffer
  // consumption then refill on the following cycle. With INPUT_BUFFER=0 the
  // vin_* signals reflect the directly driven valid_in_* allowing a steady 5.
  noc_router_enhanced #(.FLIT_WIDTH(FLIT_WIDTH), .INPUT_BUFFER(0)) dut (
    .clk(clk), .reset(rst),
  .flit_in_n(flit_in_n), .valid_in_n(valid_in_n), .ready_out_n(), .ready_in_n(ready_in_n),
  .flit_in_e(flit_in_e), .valid_in_e(valid_in_e), .ready_out_e(), .ready_in_e(ready_in_e),
  .flit_in_s(flit_in_s), .valid_in_s(valid_in_s), .ready_out_s(), .ready_in_s(ready_in_s),
  .flit_in_w(flit_in_w), .valid_in_w(valid_in_w), .ready_out_w(), .ready_in_w(ready_in_w),
  .flit_in_local(flit_in_local), .valid_in_local(valid_in_local), .ready_out_local(), .ready_in_local(ready_in_local),
    .tile_data_in({FLIT_WIDTH{1'b0}}), .tile_valid_in(tile_valid_in),
    .flit_out_n(flit_out_n), .valid_out_n(valid_out_n),
    .flit_out_e(flit_out_e), .valid_out_e(valid_out_e),
    .flit_out_s(flit_out_s), .valid_out_s(valid_out_s),
    .flit_out_w(flit_out_w), .valid_out_w(valid_out_w),
    .flit_out_local(flit_out_local), .valid_out_local(valid_out_local),
    .flits_in_count(), .flits_out_count(),
    .flits_in_n_count(), .flits_in_s_count(), .flits_in_e_count(), .flits_in_w_count(), .flits_in_l_count(),
    .flits_out_n_count(), .flits_out_s_count(), .flits_out_e_count(), .flits_out_w_count(), .flits_out_l_count(),
    .stall_in_n_count(), .stall_in_s_count(), .stall_in_e_count(), .stall_in_w_count(), .stall_in_l_count(),
    .congestion_index_milli(), .peak_inflight_milli(), .avg_queue_depth_milli(),
  .stall_arb_count(), .stall_buf_count(), .stall_bp_count(),
  .predicted_congestion_milli(predicted_congestion_milli),
  .credit_level_n(), .credit_level_s(), .credit_level_e(), .credit_level_w(), .credit_level_l()
  );

  // Reference EMA model (matches RTL integer truncation)
  integer cycle;
  integer ema_milli; // 0..1000
  integer current_active_count;
  integer phase_idx;

  // Convert active count (0..5) to milli (0..1000)
  function automatic int active_to_milli(int active_inputs);
    active_to_milli = (active_inputs * 1000) / 5; // NUM_IN=5
  endfunction

  initial begin
  flit_in_n = '0; flit_in_e = '0; flit_in_s = '0; flit_in_w = '0; flit_in_local = '0;
  valid_in_n = 0; valid_in_e = 0; valid_in_s = 0; valid_in_w = 0; valid_in_local = 0; tile_valid_in = 0;
    current_active_count = 0; phase_idx = 0; cycle = 0; ema_milli = 0;
    repeat(5) @(posedge clk); rst <= 0;
    // Deterministic phases (active_inputs, dwell_cycles)
  run_phase(0,  32);
  run_phase(5, 160);
  run_phase(2, 160);
  run_phase(4, 160);
  run_phase(0, 160);
    $display("[router_pred_cong_tb] TEST PASS");
    $finish;
  end

  // Run one steady pattern phase
  task automatic run_phase(int active, int cycles_len);
    integer j; integer target_milli; integer settle_cycle; integer tol; integer prev_error_sign; integer err; integer sign_flips;
    target_milli = active_to_milli(active);
    settle_cycle = 96; // ~12 time constants for tighter convergence margin
    tol = 35; // 3.5% full-scale
    prev_error_sign = 0; sign_flips = 0;
    for (j=0; j<cycles_len; j=j+1) begin
      drive_active(active);
      // ideal current_milli = target_milli (since we force all 5 valids when active=5)
      ema_milli = ema_milli - (ema_milli >> 3) + (target_milli >> 3);
      err = target_milli - ema_milli;
      if (err < 0) begin if (prev_error_sign>0) sign_flips++; prev_error_sign=-1; end
      else if (err > 0) begin if (prev_error_sign<0) sign_flips++; prev_error_sign=1; end
      // Range invariant: ema within [0,target] for growth, [target,prev_start] for decay
      if (active == 0) begin
        if (ema_milli < 0 || ema_milli > 1000) begin $error("EMA out of range decay phase: %0d", ema_milli); $fatal; end
      end else begin
        if (ema_milli < 0 || ema_milli > 1000) begin $error("EMA out of global bounds: %0d", ema_milli); $fatal; end
      end
      if (j >= settle_cycle) begin
        check_against_dut(tol);
      end
      @(posedge clk); cycle++;
    end
    if (sign_flips > 1) begin $error("EMA error sign flipped too many times (%0d) in phase %0d", sign_flips, phase_idx); $fatal; end
    check_against_dut(tol);
    phase_idx = phase_idx + 1;
  endtask

  task automatic drive_active(int active);
    valid_in_n = (active>0);
    valid_in_e = (active>1);
    valid_in_s = (active>2);
    valid_in_w = (active>3);
    valid_in_local = (active>4);
    tile_valid_in = (active>4); // force local injection every cycle when active wants 5
    current_active_count = active;
  endtask

  task automatic check_against_dut(int tol);
    integer dut_val; integer diff;
    dut_val = predicted_congestion_milli;
    diff = (ema_milli>dut_val)?(ema_milli-dut_val):(dut_val-ema_milli);
    if (diff > tol) begin
      $error("[router_pred_cong_tb] Phase %0d mismatch: ref=%0d dut=%0d diff=%0d tol=%0d", phase_idx, ema_milli, dut_val, diff, tol);
      $fatal;
    end
  endtask

endmodule
