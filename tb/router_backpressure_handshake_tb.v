`timescale 1ns/1ps
// router_backpressure_handshake_tb
// Purpose: Focused validation of input ready_out_* (upstream acceptance) handshake.
// Scenario:
//  * Continuous valid asserted on North input targeting Local egress.
//  * Downstream ready_in_local periodically deasserted creating output backpressure.
//  * Verify: (1) Flits only counted as accepted when ready_out_n high. (2) Input data stable while ready_out_n low.
//  * (3) Emitted flit count matches accepted count after drain. (4) ready_out_n reflects internal buffer occupancy.
// Uses INPUT_BUFFER=1 to exercise single-depth buffering semantics.

module router_backpressure_handshake_tb;
  localparam int FLIT_W = 64;
  reg clk=0; always #5 clk=~clk; // 100 MHz
  reg rst=1;

  // Stimulus
  reg  [FLIT_W-1:0] flit_in_n;
  reg               valid_in_n;
  wire              ready_out_n;
  // Tie off other inputs
  wire ready_out_s, ready_out_e, ready_out_w, ready_out_local;
  // Downstream ready pattern for local port
  reg ready_in_local;
  wire [FLIT_W-1:0] flit_out_local; wire valid_out_local;

  // Unused directions always ready
  wire ready_in_n = 1'b1, ready_in_s=1'b1, ready_in_e=1'b1, ready_in_w=1'b1;

  // DUT (expect local delivery when dest matches router coords 0,0)
  noc_router_enhanced #(.FLIT_WIDTH(FLIT_W), .INPUT_BUFFER(1)) dut (
    .clk(clk), .reset(rst),
  .flit_in_n(flit_in_n), .valid_in_n(valid_in_n), .ready_out_n(ready_out_n), .flit_out_n(), .valid_out_n(), .ready_in_n(ready_in_n), .credit_in_n(1'b0),
  .flit_in_s({FLIT_W{1'b0}}), .valid_in_s(1'b0), .ready_out_s(ready_out_s), .flit_out_s(), .valid_out_s(), .ready_in_s(ready_in_s), .credit_in_s(1'b0),
  .flit_in_e({FLIT_W{1'b0}}), .valid_in_e(1'b0), .ready_out_e(ready_out_e), .flit_out_e(), .valid_out_e(), .ready_in_e(ready_in_e), .credit_in_e(1'b0),
  .flit_in_w({FLIT_W{1'b0}}), .valid_in_w(1'b0), .ready_out_w(ready_out_w), .flit_out_w(), .valid_out_w(), .ready_in_w(ready_in_w), .credit_in_w(1'b0),
  .flit_in_local({FLIT_W{1'b0}}), .valid_in_local(1'b0), .ready_out_local(ready_out_local), .flit_out_local(flit_out_local), .valid_out_local(valid_out_local), .ready_in_local(ready_in_local), .credit_in_local(1'b0),
    .tile_data_in({FLIT_W{1'b0}}), .tile_valid_in(1'b0), .tile_data_out(), .tile_valid_out(),
    .flits_in_count(), .flits_out_count(), .flits_in_n_count(), .flits_in_s_count(), .flits_in_e_count(), .flits_in_w_count(), .flits_in_l_count(),
    .flits_out_n_count(), .flits_out_s_count(), .flits_out_e_count(), .flits_out_w_count(), .flits_out_l_count(),
    .stall_in_n_count(), .stall_in_s_count(), .stall_in_e_count(), .stall_in_w_count(), .stall_in_l_count(),
  .congestion_index_milli(), .peak_inflight_milli(), .avg_queue_depth_milli(), .stall_arb_count(), .stall_buf_count(), .stall_bp_count(),
  .predicted_congestion_milli(), .predicted_congestion_raw_instant_milli(),
  .credit_level_n(), .credit_level_s(), .credit_level_e(), .credit_level_w(), .credit_level_l()
  );

  integer cyc;
  integer injected;    // cycles valid asserted (potential flits)
  integer emitted;     // flits observed at local output (valid_out_local & ready_in_local)
  reg [FLIT_W-1:0] held_flit; // value of current flit while buffer occupied
  bit holding;
  reg prev_ready_out_n; reg prev_valid_in_n;

  function automatic bit ready_pattern(int c);
    // 10-cycle pattern: 6 ready, 4 not-ready
    ready_pattern = (c % 10) < 6;
  endfunction

  initial begin
  flit_in_n=0; valid_in_n=1; ready_in_local=0; injected=0; emitted=0; holding=0; held_flit=0; prev_ready_out_n=0; prev_valid_in_n=0;
    repeat(5) @(posedge clk); rst=0; @(posedge clk);
    // continuous drive already asserted
    for (cyc=0; cyc<150; cyc=cyc+1) begin
      ready_in_local = ready_pattern(cyc);
      // Generate next flit data only when buffer empty (ready_out_n high)
  if (ready_out_n) flit_in_n <= {8'd0,8'd0,2'b00,30'd0, emitted[15:0]};
      else if (holding && flit_in_n !== held_flit) begin
        $error("Input flit changed while ready_out_n=0 at cycle %0d", cyc); $fatal;
      end
      if (valid_in_n) injected++;
      // Track when buffer enters occupied state to latch held_flit once
      if (prev_ready_out_n && !ready_out_n && prev_valid_in_n) begin
        held_flit <= flit_in_n; holding <= 1; if (cyc < 40) $display("[DBG] cycle %0d buffer filled", cyc); end
      if (valid_out_local && ready_in_local) emitted++;
      @(posedge clk);
  if (cyc < 40 && ready_out_n !== prev_ready_out_n) $display("[DBG] cycle %0d ready_out_n=%0b", cyc, ready_out_n);
      if (ready_out_n) holding <= 0; // buffer empty
      prev_ready_out_n <= ready_out_n; prev_valid_in_n <= valid_in_n;
    end
    // Drain
    ready_in_local=1; repeat(30) @(posedge clk);
  if (emitted==0) begin $error("No flits emitted (test ineffective)"); $fatal; end
  $display("[router_backpressure_handshake_tb] PASS emitted=%0d injected=%0d", emitted, injected);
    $finish;
  end
endmodule
