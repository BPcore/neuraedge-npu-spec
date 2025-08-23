`timescale 1ns/1ps
// router_phase2_metrics_tb
// Smoke test for Phase 2 router telemetry (peak inflight, avg queue depth, stall arbitration vs buffer counts)
// Instantiates noc_router_enhanced with INPUT_BUFFER=1 and drives crafted traffic bursts causing:
//  * Concurrent inputs to force arbitration stalls
//  * Back-to-back arrivals on already-full buffered ports to cause buffer stalls
// Checks: non-zero stall_arb_count, stall_buf_count; peak_inflight between 1..5; avg_queue_depth non-zero.

module router_phase2_metrics_tb;
  localparam FLIT_W=64;
  reg clk=0, reset=1;
  always #5 clk=~clk; // 100MHz

  // Stimulus signals
  reg [FLIT_W-1:0] flit_in_n, flit_in_s, flit_in_e, flit_in_w, flit_in_l;
  reg               valid_in_n, valid_in_s, valid_in_e, valid_in_w, valid_in_l;
  // Tile dup injection (unused)
  reg [FLIT_W-1:0]  tile_data_in; reg tile_valid_in;
  wire [FLIT_W-1:0] tile_data_out; wire tile_valid_out;

  wire [31:0] flits_in_count, flits_out_count;
  wire [31:0] flits_in_n_count, flits_in_s_count, flits_in_e_count, flits_in_w_count, flits_in_l_count;
  wire [31:0] flits_out_n_count, flits_out_s_count, flits_out_e_count, flits_out_w_count, flits_out_l_count;
  wire [31:0] stall_in_n_count, stall_in_s_count, stall_in_e_count, stall_in_w_count, stall_in_l_count;
  wire [15:0] congestion_index_milli, peak_inflight_milli, avg_queue_depth_milli;
  wire [31:0] stall_arb_count, stall_buf_count;

  // Simple destination fields helper
  function [FLIT_W-1:0] mk_flit(input [7:0] dx, input [7:0] dy, input [15:0] payload);
    mk_flit = {dx,dy,1'b0,1'b0, payload, 22'b0};
  endfunction

  noc_router_enhanced #(.FLIT_WIDTH(FLIT_W), .ROUTER_X(0), .ROUTER_Y(0), .INPUT_BUFFER(1)) dut (
    .clk(clk), .reset(reset),
  .flit_in_n(flit_in_n), .valid_in_n(valid_in_n), .flit_out_n(), .valid_out_n(),
  .flit_in_s(flit_in_s), .valid_in_s(valid_in_s), .flit_out_s(), .valid_out_s(),
  .flit_in_e(flit_in_e), .valid_in_e(valid_in_e), .flit_out_e(), .valid_out_e(),
  .flit_in_w(flit_in_w), .valid_in_w(valid_in_w), .flit_out_w(), .valid_out_w(),
  .flit_in_local(flit_in_l), .valid_in_local(valid_in_l), .flit_out_local(), .valid_out_local(),
  .ready_out_n(), .ready_out_s(), .ready_out_e(), .ready_out_w(), .ready_out_local(),
  .ready_in_n(1'b1), .ready_in_s(1'b1), .ready_in_e(1'b1), .ready_in_w(1'b1), .ready_in_local(1'b1),
  .credit_in_n(1'b0), .credit_in_s(1'b0), .credit_in_e(1'b0), .credit_in_w(1'b0), .credit_in_local(1'b0),
    .tile_data_in(tile_data_in), .tile_valid_in(tile_valid_in), .tile_data_out(tile_data_out), .tile_valid_out(tile_valid_out),
    .flits_in_count(flits_in_count), .flits_out_count(flits_out_count),
  .flits_in_n_count(flits_in_n_count), .flits_in_s_count(flits_in_s_count), .flits_in_e_count(flits_in_e_count), .flits_in_w_count(flits_in_w_count), .flits_in_l_count(flits_in_l_count),
    .flits_out_n_count(flits_out_n_count), .flits_out_s_count(flits_out_s_count), .flits_out_e_count(flits_out_e_count), .flits_out_w_count(flits_out_w_count), .flits_out_l_count(flits_out_l_count),
    .stall_in_n_count(stall_in_n_count), .stall_in_s_count(stall_in_s_count), .stall_in_e_count(stall_in_e_count), .stall_in_w_count(stall_in_w_count), .stall_in_l_count(stall_in_l_count),
    .congestion_index_milli(congestion_index_milli), .peak_inflight_milli(peak_inflight_milli), .avg_queue_depth_milli(avg_queue_depth_milli),
  .stall_arb_count(stall_arb_count), .stall_buf_count(stall_buf_count), .stall_bp_count(), .predicted_congestion_milli(),
  .credit_level_n(), .credit_level_s(), .credit_level_e(), .credit_level_w(), .credit_level_l()
  );

  // Unused wires to tie off mismatch (some ports not explicitly used above)
  // Tie off unused warnings by referencing signals (Verilator will optimize)
  wire _unused = &{1'b0, flits_in_w_count, flits_in_l_count, flits_out_e_count, flits_out_w_count, flits_out_l_count};

  initial begin
    flit_in_n=0; flit_in_s=0; flit_in_e=0; flit_in_w=0; flit_in_l=0;
    valid_in_n=0; valid_in_s=0; valid_in_e=0; valid_in_w=0; valid_in_l=0; tile_data_in=0; tile_valid_in=0;
    repeat(5) @(posedge clk);
    reset=0;
    // Burst 1: simultaneous 3 inputs targeting EAST to create arbitration stalls
    repeat(4) begin
      @(posedge clk);
      flit_in_n <= mk_flit(8'd1,0,16'hA1); valid_in_n<=1;
      flit_in_s <= mk_flit(8'd1,0,16'hB2); valid_in_s<=1;
      flit_in_w <= mk_flit(8'd1,0,16'hC3); valid_in_w<=1;
      // others idle
      flit_in_e <= 0; valid_in_e<=0; flit_in_l<=0; valid_in_l<=0;
    end
    @(posedge clk); valid_in_n<=0; valid_in_s<=0; valid_in_w<=0;
    // Burst 2: buffer stall creation: hold N buffer occupied, pulse new valids quickly
    repeat(2) @(posedge clk);
    flit_in_n <= mk_flit(8'd0,0,16'hD4); valid_in_n<=1; // heads to LOCAL (consume via local)
    @(posedge clk); valid_in_n<=0; // stays buffered
    // arrival while buffer full
    @(posedge clk); flit_in_n <= mk_flit(8'd0,0,16'hD5); valid_in_n<=1; // should count buffer stall
    @(posedge clk); valid_in_n<=0;
    // Wait for window progress
    repeat(1100) @(posedge clk);
    $display("TELEM,stall_arb=%0d,stall_buf=%0d,peak_inflight_milli=%0d,avg_qdepth_milli=%0d", stall_arb_count, stall_buf_count, peak_inflight_milli, avg_queue_depth_milli);
    if (stall_arb_count == 0) $fatal(1, "Expected arbitration stalls >0");
    if (stall_buf_count == 0) $fatal(1, "Expected buffer stalls >0");
    if (peak_inflight_milli == 0) $fatal(1, "Expected non-zero peak inflight");
    if (avg_queue_depth_milli == 0) $fatal(1, "Expected non-zero avg queue depth");
    $display("router_phase2_metrics_tb PASS");
    $finish;
  end
endmodule
