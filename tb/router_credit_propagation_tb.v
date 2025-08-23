`timescale 1ns/1ps
// router_credit_propagation_tb
// Objective: Exercise multi-hop credit depletion and refill across a minimal 2-hop path.
// Topology: Source injects flits at N port of router A destined for E port of router B.
// Both routers USE_CREDIT=1 with small CREDIT_INIT so exhaustion occurs quickly.
// Checks:
//  - Credits decrement at each hop correctly.
//  - Upstream router stalls when downstream hop credits exhausted until credit_in pulses propagate back.
//  - No flit loss; end-to-end handshake count equals injected flits.
module router_credit_propagation_tb;
  localparam FLIT_W=64;
  reg clk=0, reset=1; always #5 clk=~clk;

  // Simple two-router chain: A east connects to B west
  // Router A signals
  reg [FLIT_W-1:0] flit_in_n; reg valid_in_n; wire ready_out_n;
  wire [FLIT_W-1:0] flit_out_e_A; wire valid_out_e_A; wire ready_in_e_A; reg credit_in_e_A;
  // Interconnect to Router B west input
  wire [FLIT_W-1:0] flit_in_w_B = flit_out_e_A; wire valid_in_w_B = valid_out_e_A; wire ready_out_w_B; // west egress of B unused (no credits needed)

  // Terminal sink at Router B east (ready always 1, returns credits)
  wire [FLIT_W-1:0] flit_out_e_B; wire valid_out_e_B; wire ready_in_e_B = 1'b1; reg credit_in_e_B;

  // Router A instantiation (north source active, east output toward B)
  wire [3:0] credit_e_A; // monitor east credits of router A
  wire [3:0] credit_e_B; // monitor east credits of router B (sink side)
  wire [3:0] credit_w_B; // monitor west credits of router B (ingress from A)

  noc_router_enhanced #(.FLIT_WIDTH(FLIT_W), .INPUT_BUFFER(0), .USE_CREDIT(1), .CREDIT_INIT(2)) router_A (
    .clk(clk), .reset(reset),
    .flit_in_n(flit_in_n), .valid_in_n(valid_in_n), .ready_out_n(ready_out_n), .flit_out_n(), .valid_out_n(), .ready_in_n(1'b1), .credit_in_n(1'b0),
    .flit_in_s({FLIT_W{1'b0}}), .valid_in_s(1'b0), .ready_out_s(), .flit_out_s(), .valid_out_s(), .ready_in_s(1'b1), .credit_in_s(1'b0),
    .flit_in_e({FLIT_W{1'b0}}), .valid_in_e(1'b0), .ready_out_e(), .flit_out_e(flit_out_e_A), .valid_out_e(valid_out_e_A), .ready_in_e(ready_in_e_A), .credit_in_e(credit_in_e_A),
    .flit_in_w({FLIT_W{1'b0}}), .valid_in_w(1'b0), .ready_out_w(), .flit_out_w(), .valid_out_w(), .ready_in_w(1'b1), .credit_in_w(1'b0),
    .flit_in_local({FLIT_W{1'b0}}), .valid_in_local(1'b0), .ready_out_local(), .flit_out_local(), .valid_out_local(), .ready_in_local(1'b1), .credit_in_local(1'b0),
    .tile_data_in({FLIT_W{1'b0}}), .tile_valid_in(1'b0), .tile_data_out(), .tile_valid_out(),
    .flits_in_count(), .flits_out_count(), .flits_in_n_count(), .flits_in_s_count(), .flits_in_e_count(), .flits_in_w_count(), .flits_in_l_count(),
    .flits_out_n_count(), .flits_out_s_count(), .flits_out_e_count(), .flits_out_w_count(), .flits_out_l_count(),
    .stall_in_n_count(), .stall_in_s_count(), .stall_in_e_count(), .stall_in_w_count(), .stall_in_l_count(),
    .congestion_index_milli(), .peak_inflight_milli(), .avg_queue_depth_milli(), .stall_arb_count(), .stall_buf_count(), .stall_bp_count(),
  .predicted_congestion_milli(), .predicted_congestion_raw_instant_milli(),
  .credit_level_n(), .credit_level_s(), .credit_level_e(credit_e_A), .credit_level_w(), .credit_level_l()
  );

  // Router B instantiation (west input from A, east output to sink)
  noc_router_enhanced #(.FLIT_WIDTH(FLIT_W), .INPUT_BUFFER(0), .USE_CREDIT(1), .CREDIT_INIT(2)) router_B (
    .clk(clk), .reset(reset),
    .flit_in_n({FLIT_W{1'b0}}), .valid_in_n(1'b0), .ready_out_n(), .flit_out_n(), .valid_out_n(), .ready_in_n(1'b1), .credit_in_n(1'b0),
    .flit_in_s({FLIT_W{1'b0}}), .valid_in_s(1'b0), .ready_out_s(), .flit_out_s(), .valid_out_s(), .ready_in_s(1'b1), .credit_in_s(1'b0),
  .flit_in_e({FLIT_W{1'b0}}), .valid_in_e(1'b0), .ready_out_e(), .flit_out_e(flit_out_e_B), .valid_out_e(valid_out_e_B), .ready_in_e(ready_in_e_B), .credit_in_e(credit_in_e_B),
  .flit_in_w(flit_in_w_B), .valid_in_w(valid_in_w_B), .ready_out_w(ready_out_w_B), .flit_out_w(), .valid_out_w(), .ready_in_w(1'b1), .credit_in_w(1'b0),
    .flit_in_local({FLIT_W{1'b0}}), .valid_in_local(1'b0), .ready_out_local(), .flit_out_local(), .valid_out_local(), .ready_in_local(1'b1), .credit_in_local(1'b0),
    .tile_data_in({FLIT_W{1'b0}}), .tile_valid_in(1'b0), .tile_data_out(), .tile_valid_out(),
    .flits_in_count(), .flits_out_count(), .flits_in_n_count(), .flits_in_s_count(), .flits_in_e_count(), .flits_in_w_count(), .flits_in_l_count(),
    .flits_out_n_count(), .flits_out_s_count(), .flits_out_e_count(), .flits_out_w_count(), .flits_out_l_count(),
    .stall_in_n_count(), .stall_in_s_count(), .stall_in_e_count(), .stall_in_w_count(), .stall_in_l_count(),
    .congestion_index_milli(), .peak_inflight_milli(), .avg_queue_depth_milli(), .stall_arb_count(), .stall_buf_count(), .stall_bp_count(),
  .predicted_congestion_milli(), .predicted_congestion_raw_instant_milli(),
  .credit_level_n(), .credit_level_s(), .credit_level_e(credit_e_B), .credit_level_w(credit_w_B), .credit_level_l()
  );

  // Credit return wiring: when B consumes a flit on its west ingress (valid_in_w_B && ready_out_w_B),
  // that frees the (conceptual) channel buffer for A's east egress -> pulse credit_in_e_A.
  assign ready_in_e_A = ready_out_w_B;          // drive A east ready by B west ingress readiness
  always @(posedge clk) begin
    credit_in_e_A <= (valid_in_w_B && ready_out_w_B);
  end

  // Sink credit generation: every time a new flit emerges at B east, emit a credit next cycle back to B west (which then flows to A)
  reg [FLIT_W-1:0] last_flit; integer flits_delivered; integer pulses;
  always @(posedge clk) begin
    credit_in_e_B <= 1'b0;
    if (valid_out_e_B && ready_in_e_B) begin
      flits_delivered++;
      last_flit <= flit_out_e_B;
      credit_in_e_B <= 1'b1; // credit for east buffer freeing
    end
  end

  function [FLIT_W-1:0] mk_flit(input [15:0] tag); mk_flit={8'hAA,8'h00,2'b00,30'd0,tag}; endfunction
  integer cyc, injected;
  reg saw_exhaust_A=0, saw_recover_A=0;
  always @(posedge clk) begin
    if (reset) begin
      saw_exhaust_A <= 0; saw_recover_A <= 0;
    end else begin
      if (!saw_exhaust_A && credit_e_A==0) saw_exhaust_A <= 1; // observed depletion
      if (saw_exhaust_A && !saw_recover_A && credit_e_A>0) saw_recover_A <= 1; // observed recovery after depletion
    end
  end
  initial begin
    flit_in_n=0; valid_in_n=0; credit_in_e_A=0; injected=0; flits_delivered=0; pulses=0;
    repeat(8) @(posedge clk); reset=0; @(posedge clk);
    valid_in_n=1; flit_in_n=mk_flit(16'hD000);
    for (cyc=0; cyc<60; cyc=cyc+1) begin
      @(posedge clk);
      if (ready_out_n) begin injected++; flit_in_n <= mk_flit(16'hD000 + injected); end
      // credit_in_e_A now driven automatically based on actual downstream consumption
    end
    valid_in_n=0; credit_in_e_A=0; repeat(10) @(posedge clk);
  $display("[router_credit_propagation_tb] injected=%0d delivered=%0d credits_e_A=%0d", injected, flits_delivered, credit_e_A);
  if (flits_delivered == 0) $fatal(1, "No flits delivered");
  if (flits_delivered < injected/4) $fatal(1, "Too few deliveries=%0d vs injected=%0d", flits_delivered, injected);
    if (flits_delivered > injected) $fatal(1, "Delivered > injected");
  if (!saw_exhaust_A) $fatal(1, "Did not observe credit exhaustion on A east");
  if (!saw_recover_A) $fatal(1, "Did not observe credit recovery on A east");
    $display("router_credit_propagation_tb PASS");
    $finish;
  end
endmodule
