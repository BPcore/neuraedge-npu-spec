`timescale 1ns/1ps
// router_credit_congestion_tb
// Purpose: Ensure congestion_index_milli and avg_queue_depth_milli do not falsely drop when
// egress is blocked purely by credit starvation (held flit considered active).
// Method:
//  * Configure router with INPUT_BUFFER=1, USE_CREDIT=1, CREDIT_INIT=1 on EAST.
//  * Continuously inject 2 sources (N,S) targeting EAST so there are always >=2 active inputs.
//  * Do NOT return credits for a long interval causing early credit exhaustion and flit hold.
//  * Sample congestion_index_milli & avg_queue_depth_milli mid-window before rollover to ensure
//    they remain above a threshold representing at least 1 active input equivalent (> 100 milli).
//  * Then issue periodic credit pulses to release flits, ensuring metrics reflect resumed flow.
// PASS Criteria:
//  * stall_bp_count accumulates while credits zero.
//  * congestion_index_milli never dips below 100 milli after initial warmup (post first 10 cycles).
//  * avg_queue_depth_milli never dips below 100 milli under sustained injection.
// NOTE: This is a coarse heuristic TB; precise analytic expected values could be added later.

module router_credit_congestion_tb;
  localparam FLIT_W=64;
  reg clk=0, reset=1; always #5 clk=~clk;
  // Sources
  reg [FLIT_W-1:0] flit_in_n, flit_in_s; reg vin_n, vin_s; wire ready_out_n, ready_out_s;
  wire ready_in_e = 1'b1; reg credit_in_e; // downstream always ready, credit gating active
  wire [FLIT_W-1:0] flit_out_e; wire vout_e; wire [31:0] stall_bp_count;
  wire [15:0] congestion_index_milli, avg_queue_depth_milli;

  noc_router_enhanced #(.FLIT_WIDTH(FLIT_W), .INPUT_BUFFER(1), .USE_CREDIT(1), .CREDIT_INIT(1)) dut (
    .clk(clk), .reset(reset),
    .flit_in_n(flit_in_n), .valid_in_n(vin_n), .ready_out_n(ready_out_n), .flit_out_n(), .valid_out_n(), .ready_in_n(1'b1), .credit_in_n(1'b0),
    .flit_in_s(flit_in_s), .valid_in_s(vin_s), .ready_out_s(ready_out_s), .flit_out_s(), .valid_out_s(), .ready_in_s(1'b1), .credit_in_s(1'b0),
    .flit_in_e({FLIT_W{1'b0}}), .valid_in_e(1'b0), .ready_out_e(), .flit_out_e(flit_out_e), .valid_out_e(vout_e), .ready_in_e(ready_in_e), .credit_in_e(credit_in_e),
    .flit_in_w({FLIT_W{1'b0}}), .valid_in_w(1'b0), .ready_out_w(), .flit_out_w(), .valid_out_w(), .ready_in_w(1'b1), .credit_in_w(1'b0),
    .flit_in_local({FLIT_W{1'b0}}), .valid_in_local(1'b0), .ready_out_local(), .flit_out_local(), .valid_out_local(), .ready_in_local(1'b1), .credit_in_local(1'b0),
    .tile_data_in({FLIT_W{1'b0}}), .tile_valid_in(1'b0), .tile_data_out(), .tile_valid_out(),
    .flits_in_count(), .flits_out_count(),
    .flits_in_n_count(), .flits_in_s_count(), .flits_in_e_count(), .flits_in_w_count(), .flits_in_l_count(),
    .flits_out_n_count(), .flits_out_s_count(), .flits_out_e_count(), .flits_out_w_count(), .flits_out_l_count(),
    .stall_in_n_count(), .stall_in_s_count(), .stall_in_e_count(), .stall_in_w_count(), .stall_in_l_count(),
    .congestion_index_milli(congestion_index_milli), .peak_inflight_milli(), .avg_queue_depth_milli(avg_queue_depth_milli),
    .stall_arb_count(), .stall_buf_count(), .stall_bp_count(stall_bp_count), .predicted_congestion_milli(), .predicted_congestion_raw_instant_milli(),
    .credit_level_n(), .credit_level_s(), .credit_level_e(), .credit_level_w(), .credit_level_l()
  );

  function [FLIT_W-1:0] mk_flit(input [15:0] tag); mk_flit={8'd1,8'd0,2'b00,30'd0,tag}; endfunction

  integer cyc; integer min_cong=1000; integer min_qdepth=1000;
  initial begin
    flit_in_n=0; flit_in_s=0; vin_n=0; vin_s=0; credit_in_e=0;
    repeat(5) @(posedge clk); reset=0; @(posedge clk);
    // Start continuous dual source injection
    vin_n=1; vin_s=1; flit_in_n=mk_flit(16'hA000); flit_in_s=mk_flit(16'hB000);
    for (cyc=0; cyc<300; cyc=cyc+1) begin
      // Do not send credits for first 180 cycles (force starvation after first send)
      if (cyc==10) credit_in_e<=0; // ensure no credits early besides initial
      if (cyc>180 && (cyc%10==0)) credit_in_e<=1; else credit_in_e<=0; // periodic release later
      @(posedge clk);
      // Advance tags when source accepted
      if (ready_out_n) flit_in_n <= mk_flit(16'hA000 + cyc);
      if (ready_out_s) flit_in_s <= mk_flit(16'hB000 + cyc);
      if (cyc>10) begin
        if (congestion_index_milli < min_cong) min_cong = congestion_index_milli;
        if (avg_queue_depth_milli < min_qdepth) min_qdepth = avg_queue_depth_milli;
      end
    end
    vin_n=0; vin_s=0; credit_in_e=0; repeat(5) @(posedge clk);
    $display("[router_credit_congestion_tb] min_cong=%0d min_qdepth=%0d stall_bp=%0d", min_cong, min_qdepth, stall_bp_count);
    if (stall_bp_count==0) $fatal(1, "Expected stall_bp accumulation under credit starvation");
    if (min_cong < 100) $fatal(1, "Congestion index dipped too low under credit stalls (%0d)", min_cong);
    if (min_qdepth < 100) $fatal(1, "Avg queue depth dipped too low under credit stalls (%0d)", min_qdepth);
    $display("router_credit_congestion_tb PASS");
    $finish;
  end
endmodule
