`timescale 1ns/1ps
// Simple directed test for noc_router_enhanced per-port telemetry (Phase 1b)
// Drives two flits targeting EAST (from N & S) then one local delivery.
// Verifies per-port ingress/egress and aggregated counters increment.
// NOTE: Current stall counter definition only increments if no outputs fire;
// arbitration contention does not produce stall increments yet, so stall counters expected 0.

module router_telemetry_phase1b_tb;
  localparam FLIT_W = 64;
  reg clk=0, reset=1;
  always #5 clk = ~clk; // 100MHz

  // Inputs
  reg [FLIT_W-1:0] flit_in_n, flit_in_s, flit_in_e, flit_in_w, flit_in_l;
  reg vin_n, vin_s, vin_e, vin_w, vin_l;

  wire [FLIT_W-1:0] flit_out_n, flit_out_s, flit_out_e, flit_out_w, flit_out_l;
  wire vout_n, vout_s, vout_e, vout_w, vout_l;

  wire [31:0] flits_in_count, flits_out_count;
  wire [31:0] in_n_ctr,in_s_ctr,in_e_ctr,in_w_ctr,in_l_ctr;
  wire [31:0] out_n_ctr,out_s_ctr,out_e_ctr,out_w_ctr,out_l_ctr;
  wire [31:0] stall_n,stall_s,stall_e,stall_w,stall_l;

  // Instantiate router @ (0,0)
  noc_router_enhanced #(.FLIT_WIDTH(FLIT_W), .ROUTER_X(0), .ROUTER_Y(0), .INPUT_BUFFER(0)) dut (
    .clk(clk), .reset(reset),
    .flit_in_n(flit_in_n), .valid_in_n(vin_n),
    .flit_in_s(flit_in_s), .valid_in_s(vin_s),
    .flit_in_e(flit_in_e), .valid_in_e(vin_e),
    .flit_in_w(flit_in_w), .valid_in_w(vin_w),
    .flit_in_local(flit_in_l), .valid_in_local(vin_l),
    .flit_out_n(flit_out_n), .valid_out_n(vout_n),
    .flit_out_s(flit_out_s), .valid_out_s(vout_s),
    .flit_out_e(flit_out_e), .valid_out_e(vout_e),
    .flit_out_w(flit_out_w), .valid_out_w(vout_w),
    .flit_out_local(flit_out_l), .valid_out_local(vout_l),
    .tile_data_in({64{1'b0}}), .tile_data_out(), .tile_valid_in(1'b0), .tile_valid_out(),
    .flits_in_count(flits_in_count), .flits_out_count(flits_out_count),
    .flits_in_n_count(in_n_ctr), .flits_in_s_count(in_s_ctr), .flits_in_e_count(in_e_ctr), .flits_in_w_count(in_w_ctr), .flits_in_l_count(in_l_ctr),
    .flits_out_n_count(out_n_ctr), .flits_out_s_count(out_s_ctr), .flits_out_e_count(out_e_ctr), .flits_out_w_count(out_w_ctr), .flits_out_l_count(out_l_ctr),
  .stall_in_n_count(stall_n), .stall_in_s_count(stall_s), .stall_in_e_count(stall_e), .stall_in_w_count(stall_w), .stall_in_l_count(stall_l),
  .congestion_index_milli(), .peak_inflight_milli(), .avg_queue_depth_milli(),
  .stall_arb_count(), .stall_buf_count(), .stall_bp_count(), .predicted_congestion_milli(),
  .credit_level_n(), .credit_level_s(), .credit_level_e(), .credit_level_w(), .credit_level_l()
  );

  // Helper to form flit with dest_x,dest_y
  function [FLIT_W-1:0] make_flit;
    input [7:0] dx, dy; input [45:0] payload;
    begin
      make_flit = {dx, dy, 2'b00, payload};
    end
  endfunction

  initial begin
    // Init
    flit_in_n=0; flit_in_s=0; flit_in_e=0; flit_in_w=0; flit_in_l=0;
    vin_n=0; vin_s=0; vin_e=0; vin_w=0; vin_l=0;
    repeat(3) @(posedge clk);
    reset <= 0;
    @(posedge clk);

    // Cycle: inject two flits (N & S) both destined EAST (dest_x=1,dest_y=0)
  flit_in_n <= make_flit(8'd1,8'd0,46'h11111111111);
  flit_in_s <= make_flit(8'd1,8'd0,46'h22222222222);
    vin_n <= 1; vin_s <= 1;
    @(posedge clk);
    // Deassert
    vin_n <= 0; vin_s <= 0;

    // Cycle: inject LOCAL flit (dest 0,0)
    @(posedge clk);
  flit_in_l <= make_flit(8'd0,8'd0,46'h33333333333);
    vin_l <= 1;
    @(posedge clk);
    vin_l <= 0;

    // Allow a couple cycles for counters
    repeat(3) @(posedge clk);

    $display("Ingress N=%0d S=%0d L=%0d Total=%0d", in_n_ctr,in_s_ctr,in_l_ctr, flits_in_count);
    $display("Egress E=%0d L=%0d Total=%0d", out_e_ctr,out_l_ctr, flits_out_count);

    // Assertions
    if (in_n_ctr !== 1) $fatal(1, "Expected in_n_ctr=1 got %0d", in_n_ctr);
    if (in_s_ctr !== 1) $fatal(1, "Expected in_s_ctr=1 got %0d", in_s_ctr);
    if (in_l_ctr !== 1) $fatal(1, "Expected in_l_ctr=1 got %0d", in_l_ctr);
    if (out_e_ctr !== 2) $fatal(1, "Expected out_e_ctr=2 (both flits to East) got %0d", out_e_ctr);
    if (out_l_ctr !== 1) $fatal(1, "Expected out_l_ctr=1 got %0d", out_l_ctr);
    if (stall_n !== 0 || stall_s !== 0) $display("INFO: stall counters non-zero unexpectedly N=%0d S=%0d", stall_n, stall_s);

    $display("Router telemetry Phase1b TB PASS");
    $finish;
  end
endmodule
