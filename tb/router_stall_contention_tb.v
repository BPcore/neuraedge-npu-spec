`timescale 1ns/1ps
// Test contention-driven stall counters and congestion index behavior.
module router_stall_contention_tb;
  localparam FLIT_W=64;
  reg clk=0, reset=1; always #5 clk=~clk; // 100MHz

  // Inputs
  reg [FLIT_W-1:0] fN,fS,fE,fW,fL; reg vN,vS,vE,vW,vL;
  wire [FLIT_W-1:0] oN,oS,oE,oW,oL; wire voN,voS,voE,voW,voL;
  wire [31:0] in_tot,out_tot;
  wire [31:0] inN,inS,inE,inW,inL,outN,outS,outE,outW,outL;
  wire [31:0] stallN,stallS,stallE,stallW,stallL;
  wire [15:0] cong_idx; wire [15:0] peak_inflight;

  noc_router_enhanced #(.FLIT_WIDTH(FLIT_W), .INPUT_BUFFER(0)) dut(
    .clk(clk), .reset(reset),
  .flit_in_n(fN), .valid_in_n(vN), .flit_in_s(fS), .valid_in_s(vS),
  .flit_in_e(fE), .valid_in_e(vE), .flit_in_w(fW), .valid_in_w(vW),
  .flit_in_local(fL), .valid_in_local(vL),
    .flit_out_n(oN), .valid_out_n(voN), .flit_out_s(oS), .valid_out_s(voS),
    .flit_out_e(oE), .valid_out_e(voE), .flit_out_w(oW), .valid_out_w(voW),
  .flit_out_local(oL), .valid_out_local(voL),
  .ready_out_n(), .ready_out_s(), .ready_out_e(), .ready_out_w(), .ready_out_local(),
  .ready_in_n(1'b1), .ready_in_s(1'b1), .ready_in_e(1'b1), .ready_in_w(1'b1), .ready_in_local(1'b1),
  .credit_in_n(1'b0), .credit_in_s(1'b0), .credit_in_e(1'b0), .credit_in_w(1'b0), .credit_in_local(1'b0),
    .tile_data_in({64{1'b0}}), .tile_data_out(), .tile_valid_in(1'b0), .tile_valid_out(),
    .flits_in_count(in_tot), .flits_out_count(out_tot),
    .flits_in_n_count(inN), .flits_in_s_count(inS), .flits_in_e_count(inE), .flits_in_w_count(inW), .flits_in_l_count(inL),
    .flits_out_n_count(outN), .flits_out_s_count(outS), .flits_out_e_count(outE), .flits_out_w_count(outW), .flits_out_l_count(outL),
    .stall_in_n_count(stallN), .stall_in_s_count(stallS), .stall_in_e_count(stallE), .stall_in_w_count(stallW), .stall_in_l_count(stallL),
  .congestion_index_milli(cong_idx), .peak_inflight_milli(peak_inflight), .avg_queue_depth_milli(),
  .stall_arb_count(), .stall_buf_count(), .stall_bp_count(), .predicted_congestion_milli(),
  .credit_level_n(), .credit_level_s(), .credit_level_e(), .credit_level_w(), .credit_level_l()
  );

  function [FLIT_W-1:0] flit; input [7:0] dx,dy; input [15:0] tag; begin flit={dx,dy,2'b00, {30{1'b0}}, tag}; end endfunction

  integer cycle;
  initial begin
    fN=0;fS=0;fE=0;fW=0;fL=0; vN=0;vS=0;vE=0;vW=0;vL=0;
    repeat(3) @(posedge clk); reset=0; @(posedge clk);
    // Drive sustained contention: N,S,E,W all target EAST for 10 cycles, only one granted per cycle.
    for (cycle=0; cycle<10; cycle=cycle+1) begin
      // Tags encode source port in upper nibble (1-N,2-S,3-E,4-W) plus cycle count low bits
      fN <= flit(8'd1,8'd0,16'h1000+cycle);
      fS <= flit(8'd1,8'd0,16'h2000+cycle);
      fE <= flit(8'd1,8'd0,16'h3000+cycle);
      fW <= flit(8'd1,8'd0,16'h4000+cycle);
      vN <= 1; vS <= 1; vE <= 1; vW <= 1; vL <= 0;
      @(posedge clk);
    end
    vN<=0;vS<=0;vE<=0;vW<=0; @(posedge clk);
  // Allow a few idle cycles (congestion metric is window-based; wait modest cycles for accumulation)
  repeat(120) @(posedge clk); // allow rolling congestion metric to accumulate

    $display("Stalls N=%0d S=%0d E=%0d W=%0d L=%0d", stallN,stallS,stallE,stallW,stallL);
    // Because only one of 4 contenders wins each cycle, expect roughly 3 stalls per cycle distributed; each input should have >0 stalls.
    if (stallN==0 || stallS==0 || stallE==0 || stallW==0) $fatal(1, "Expected non-zero stalls on all external ports");
  $display("Congestion index milli=%0d peak_inflight=%0d", cong_idx, peak_inflight);
  if (cong_idx==0) $fatal(1, "Expected non-zero congestion index (rolling)");
    $display("Router stall contention TB PASS");
    $finish;
  end
endmodule
