`timescale 1ns/1ps

// Testbench: Validate predictive congestion EMA in raw mode vs buffered mode ripple.
// Instantiates router twice: one with INPUT_BUFFER=1 (default buffered basis) and one with
// PRED_CONG_RAW_MODE=1 to ensure stable 5-active plateau reaches 1000 within tolerance.

module router_pred_cong_raw_tb;
  localparam int FLIT_W = 64;
  reg clk=0; always #5 clk=~clk; // 100MHz
  reg rst=1;

  // Shared stimulus (always drive 5 actives after reset deassert)
  reg [FLIT_W-1:0] flit_dummy = 64'h0;
  reg v_n,v_e,v_s,v_w,v_l,tile_v;
  wire [15:0] pred_buf, pred_raw;

  // Buffered-mode DUT (default PRED_CONG_RAW_MODE=0, INPUT_BUFFER=1)
  noc_router_enhanced #(.FLIT_WIDTH(FLIT_W), .INPUT_BUFFER(1)) dut_buf (
    .clk(clk), .reset(rst),
  .flit_in_n(flit_dummy), .valid_in_n(v_n), .ready_out_n(), .ready_in_n(1'b1), .credit_in_n(1'b0),
  .flit_in_e(flit_dummy), .valid_in_e(v_e), .ready_out_e(), .ready_in_e(1'b1), .credit_in_e(1'b0),
  .flit_in_s(flit_dummy), .valid_in_s(v_s), .ready_out_s(), .ready_in_s(1'b1), .credit_in_s(1'b0),
  .flit_in_w(flit_dummy), .valid_in_w(v_w), .ready_out_w(), .ready_in_w(1'b1), .credit_in_w(1'b0),
  .flit_in_local(flit_dummy), .valid_in_local(v_l), .ready_out_local(), .ready_in_local(1'b1), .credit_in_local(1'b0),
    .tile_data_in({FLIT_W{1'b0}}), .tile_valid_in(tile_v),
    .flit_out_n(), .valid_out_n(), .flit_out_e(), .valid_out_e(), .flit_out_s(), .valid_out_s(), .flit_out_w(), .valid_out_w(), .flit_out_local(), .valid_out_local(),
    .flits_in_count(), .flits_out_count(), .flits_in_n_count(), .flits_in_s_count(), .flits_in_e_count(), .flits_in_w_count(), .flits_in_l_count(),
    .flits_out_n_count(), .flits_out_s_count(), .flits_out_e_count(), .flits_out_w_count(), .flits_out_l_count(),
    .stall_in_n_count(), .stall_in_s_count(), .stall_in_e_count(), .stall_in_w_count(), .stall_in_l_count(),
  .congestion_index_milli(), .peak_inflight_milli(), .avg_queue_depth_milli(), .stall_arb_count(), .stall_buf_count(), .stall_bp_count(),
  .predicted_congestion_milli(pred_buf), .predicted_congestion_raw_instant_milli(),
  .credit_level_n(), .credit_level_s(), .credit_level_e(), .credit_level_w(), .credit_level_l()
  );

  // Raw-mode DUT (no buffering for pure raw plateau demonstration)
  noc_router_enhanced #(.FLIT_WIDTH(FLIT_W), .INPUT_BUFFER(0), .PRED_CONG_RAW_MODE(1)) dut_raw (
    .clk(clk), .reset(rst),
  .flit_in_n(flit_dummy), .valid_in_n(v_n), .ready_out_n(), .ready_in_n(1'b1), .credit_in_n(1'b0),
  .flit_in_e(flit_dummy), .valid_in_e(v_e), .ready_out_e(), .ready_in_e(1'b1), .credit_in_e(1'b0),
  .flit_in_s(flit_dummy), .valid_in_s(v_s), .ready_out_s(), .ready_in_s(1'b1), .credit_in_s(1'b0),
  .flit_in_w(flit_dummy), .valid_in_w(v_w), .ready_out_w(), .ready_in_w(1'b1), .credit_in_w(1'b0),
  .flit_in_local(flit_dummy), .valid_in_local(v_l), .ready_out_local(), .ready_in_local(1'b1), .credit_in_local(1'b0),
    .tile_data_in({FLIT_W{1'b0}}), .tile_valid_in(tile_v),
    .flit_out_n(), .valid_out_n(), .flit_out_e(), .valid_out_e(), .flit_out_s(), .valid_out_s(), .flit_out_w(), .valid_out_w(), .flit_out_local(), .valid_out_local(),
    .flits_in_count(), .flits_out_count(), .flits_in_n_count(), .flits_in_s_count(), .flits_in_e_count(), .flits_in_w_count(), .flits_in_l_count(),
    .flits_out_n_count(), .flits_out_s_count(), .flits_out_e_count(), .flits_out_w_count(), .flits_out_l_count(),
    .stall_in_n_count(), .stall_in_s_count(), .stall_in_e_count(), .stall_in_w_count(), .stall_in_l_count(),
  .congestion_index_milli(), .peak_inflight_milli(), .avg_queue_depth_milli(), .stall_arb_count(), .stall_buf_count(), .stall_bp_count(),
  .predicted_congestion_milli(pred_raw), .predicted_congestion_raw_instant_milli(),
  .credit_level_n(), .credit_level_s(), .credit_level_e(), .credit_level_w(), .credit_level_l()
  );

  integer ema_ref; integer cyc;
  initial begin
    v_n=0; v_e=0; v_s=0; v_w=0; v_l=0; tile_v=0; ema_ref=0; cyc=0;
    repeat(5) @(posedge clk); rst=0;
    v_n=1; v_e=1; v_s=1; v_w=1; v_l=1; tile_v=1; // 5 active continuously
    for (cyc=0; cyc<160; cyc=cyc+1) begin
      ema_ref = ema_ref - (ema_ref>>3) + (1000>>3);
      @(posedge clk);
    end
    if (pred_raw < 970) begin $error("raw mode EMA too low: %0d", pred_raw); $fatal; end
    if (pred_buf > pred_raw) begin $error("buffered EMA exceeds raw unexpectedly: buf=%0d raw=%0d", pred_buf, pred_raw); $fatal; end
    if (pred_buf < 800) begin $error("buffered EMA unexpectedly low (<800): %0d", pred_buf); $fatal; end
    $display("[router_pred_cong_raw_tb] PASS raw=%0d buf=%0d", pred_raw, pred_buf);
    $finish;
  end
endmodule
