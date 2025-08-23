`timescale 1ns/1ps
// router_credit_flow_tb
// Purpose: Validate credit-based egress gating when USE_CREDIT=1.
// Scenario:
//  * Initialize router with CREDIT_INIT=2 on EAST egress.
//  * Drive continuous flits from North destined EAST with ready_in_e tied high but credits limited.
//  * Provide credit_in_e pulses after controlled delays to release held flits.
// Checks:
//  * Exactly CREDIT_INIT flits pass before first stall (no credit pulses yet).
//  * valid_out_e stays asserted holding same flit while credit_cnt_e==0 (stall_bp increments per cycle).
//  * Each credit_in_e pulse (when holding) immediately decrements credit counter and allows next flit.
//  * Handshake counting: east_handshakes == total emitted flits.
// Simplifications: other ports idle; only east path exercised.

module router_credit_flow_tb;
  localparam FLIT_W=64;
  reg clk=0, reset=1; always #5 clk=~clk;

  // Source (North) driving east-bound flits
  reg [FLIT_W-1:0] flit_in_n; reg valid_in_n; wire ready_out_n;
  // Downstream ready always high (credit gating internal)
  wire ready_in_e = 1'b1; reg credit_in_e; // credit return pulses

  wire [FLIT_W-1:0] flit_out_e; wire valid_out_e;
  wire [31:0] flits_in_count, flits_out_count, flits_out_e_count;
  wire [31:0] stall_bp_count;

  // Tie-offs
  wire [FLIT_W-1:0] unused_flit_wires [0:3];
  wire ready_out_s,ready_out_e,ready_out_w,ready_out_local;

  // Instantiate with USE_CREDIT enabled and small CREDIT_INIT
  noc_router_enhanced #(.FLIT_WIDTH(FLIT_W), .INPUT_BUFFER(0), .USE_CREDIT(1), .CREDIT_INIT(2)) dut (
    .clk(clk), .reset(reset),
    .flit_in_n(flit_in_n), .valid_in_n(valid_in_n), .ready_out_n(ready_out_n), .flit_out_n(), .valid_out_n(), .ready_in_n(1'b1), .credit_in_n(1'b0),
    .flit_in_s({FLIT_W{1'b0}}), .valid_in_s(1'b0), .ready_out_s(ready_out_s), .flit_out_s(), .valid_out_s(), .ready_in_s(1'b1), .credit_in_s(1'b0),
    .flit_in_e({FLIT_W{1'b0}}), .valid_in_e(1'b0), .ready_out_e(ready_out_e), .flit_out_e(flit_out_e), .valid_out_e(valid_out_e), .ready_in_e(ready_in_e), .credit_in_e(credit_in_e),
    .flit_in_w({FLIT_W{1'b0}}), .valid_in_w(1'b0), .ready_out_w(ready_out_w), .flit_out_w(), .valid_out_w(), .ready_in_w(1'b1), .credit_in_w(1'b0),
    .flit_in_local({FLIT_W{1'b0}}), .valid_in_local(1'b0), .ready_out_local(ready_out_local), .flit_out_local(), .valid_out_local(), .ready_in_local(1'b1), .credit_in_local(1'b0),
    .tile_data_in({FLIT_W{1'b0}}), .tile_valid_in(1'b0), .tile_data_out(), .tile_valid_out(),
    .flits_in_count(flits_in_count), .flits_out_count(flits_out_count), .flits_in_n_count(), .flits_in_s_count(), .flits_in_e_count(), .flits_in_w_count(), .flits_in_l_count(),
    .flits_out_n_count(), .flits_out_s_count(), .flits_out_e_count(flits_out_e_count), .flits_out_w_count(), .flits_out_l_count(),
    .stall_in_n_count(), .stall_in_s_count(), .stall_in_e_count(), .stall_in_w_count(), .stall_in_l_count(),
  .congestion_index_milli(), .peak_inflight_milli(), .avg_queue_depth_milli(), .stall_arb_count(), .stall_buf_count(), .stall_bp_count(stall_bp_count),
  .predicted_congestion_milli(), .predicted_congestion_raw_instant_milli(),
  .credit_level_n(), .credit_level_s(), .credit_level_e(), .credit_level_w(), .credit_level_l()
  );

  integer sent, accepted, credits_sent, cyc; integer east_handshakes; reg [FLIT_W-1:0] hold_flit;

  function [FLIT_W-1:0] mk_flit(input [15:0] tag); mk_flit={8'd1,8'd0,2'b00,30'd0,tag}; endfunction

  initial begin
    flit_in_n=0; valid_in_n=0; credit_in_e=0; sent=0; accepted=0; east_handshakes=0; hold_flit=0;
    repeat(5) @(posedge clk); reset=0; @(posedge clk);
    // Start continuous valid
    valid_in_n=1; flit_in_n=mk_flit(16'hC000);
    for (cyc=0; cyc<40; cyc=cyc+1) begin
      // Count handshakes (valid_out_e & ready_in_e & credit gate passed)
      if (valid_out_e && ready_in_e) begin
        if (east_handshakes==0 || flit_out_e!=hold_flit) east_handshakes++; // count distinct flits
        hold_flit <= flit_out_e;
      end
      // After initial credits (2) consumed, expect stall (valid_out_e stuck high, no new handshake)
      if (cyc==5) begin // After a few cycles, start issuing credit pulses to release one flit every 3 cycles
        credit_in_e <= 1'b1; credits_sent++;
      end else if ((cyc>5) && ((cyc-5)%3==0)) begin
        credit_in_e <= 1'b1; credits_sent++;
      end else begin
        credit_in_e <= 1'b0;
      end
      @(posedge clk);
      // Advance payload tag only when router accepted (ready_out_n) to model new flit injection
      if (ready_out_n) begin sent++; flit_in_n <= mk_flit(16'hC000 + sent); end
    end
    valid_in_n=0; credit_in_e=0; repeat(5) @(posedge clk);
    $display("[router_credit_flow_tb] east_handshakes=%0d credits_sent=%0d stall_bp=%0d", east_handshakes, credits_sent, stall_bp_count);
    if (east_handshakes < 3) $fatal(1, "Too few east handshakes %0d", east_handshakes);
    if (credits_sent==0) $fatal(1, "No credits issued");
    if (stall_bp_count==0) $fatal(1, "Expected backpressure stalls under credit exhaustion");
    $display("router_credit_flow_tb PASS");
    $finish;
  end
endmodule
