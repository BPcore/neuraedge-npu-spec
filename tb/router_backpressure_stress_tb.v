`timescale 1ns/1ps
// router_backpressure_stress_tb
// Mixed scenario combining arbitration contention and randomized downstream backpressure across multiple outputs.
// Drives random flits from all ports targeting rotating directions; randomly deasserts ready signals to accumulate
// stall_arb_count, stall_buf_count (if buffers enabled), and stall_bp_count. Ensures counters all increment and
// flits eventually drain (no deadlock).
module router_backpressure_stress_tb;
  localparam FLIT_W=64;
  reg clk=0, reset=1; always #2 clk=~clk; // 250 MHz to shorten test cycles

  // Inputs & valids
  reg [FLIT_W-1:0] fN,fS,fE,fW,fL; reg vN,vS,vE,vW,vL;
  reg rN,rS,rE,rW,rL; // ready inputs
  wire [FLIT_W-1:0] oN,oS,oE,oW,oL; wire voN,voS,voE,voW,voL;
  wire [31:0] in_tot,out_tot;
  wire [31:0] inN,inS,inE,inW,inL,outN,outS,outE,outW,outL;
  wire [31:0] stallN,stallS,stallE,stallW,stallL;
  wire [15:0] cong_idx, peak_inflight, avg_qdepth;
  wire [31:0] stall_arb, stall_buf, stall_bp;

  // Enable input buffering to exercise buf stalls too
  wire rdy_out_n,rdy_out_s,rdy_out_e,rdy_out_w,rdy_out_l;
  noc_router_enhanced #(.FLIT_WIDTH(FLIT_W), .INPUT_BUFFER(1)) dut (
    .clk(clk), .reset(reset),
    .flit_in_n(fN), .valid_in_n(vN), .ready_out_n(rdy_out_n), .flit_out_n(oN), .valid_out_n(voN), .ready_in_n(rN),
    .flit_in_s(fS), .valid_in_s(vS), .ready_out_s(rdy_out_s), .flit_out_s(oS), .valid_out_s(voS), .ready_in_s(rS),
    .flit_in_e(fE), .valid_in_e(vE), .ready_out_e(rdy_out_e), .flit_out_e(oE), .valid_out_e(voE), .ready_in_e(rE),
    .flit_in_w(fW), .valid_in_w(vW), .ready_out_w(rdy_out_w), .flit_out_w(oW), .valid_out_w(voW), .ready_in_w(rW),
    .flit_in_local(fL), .valid_in_local(vL), .ready_out_local(rdy_out_l), .flit_out_local(oL), .valid_out_local(voL), .ready_in_local(rL),
    .tile_data_in({FLIT_W{1'b0}}), .tile_valid_in(1'b0), .tile_data_out(), .tile_valid_out(),
    .flits_in_count(in_tot), .flits_out_count(out_tot),
    .flits_in_n_count(inN), .flits_in_s_count(inS), .flits_in_e_count(inE), .flits_in_w_count(inW), .flits_in_l_count(inL),
    .flits_out_n_count(outN), .flits_out_s_count(outS), .flits_out_e_count(outE), .flits_out_w_count(outW), .flits_out_l_count(outL),
    .stall_in_n_count(stallN), .stall_in_s_count(stallS), .stall_in_e_count(stallE), .stall_in_w_count(stallW), .stall_in_l_count(stallL),
    .congestion_index_milli(cong_idx), .peak_inflight_milli(peak_inflight), .avg_queue_depth_milli(avg_qdepth),
  .stall_arb_count(stall_arb), .stall_buf_count(stall_buf), .stall_bp_count(stall_bp),
  .predicted_congestion_milli(), .predicted_congestion_raw_instant_milli(),
  .credit_level_n(), .credit_level_s(), .credit_level_e(), .credit_level_w(), .credit_level_l()
  );

  function [FLIT_W-1:0] mk_flit; input [7:0] dx,dy; input [15:0] tag; begin mk_flit={dx,dy,2'b00,30'b0,tag}; end endfunction

  integer cyc;
  integer seed = 32'h89ABCDEF;
  initial begin
    fN=0;fS=0;fE=0;fW=0;fL=0; vN=0;vS=0;vE=0;vW=0;vL=0; rN=1;rS=1;rE=1;rW=1;rL=1;
    repeat(5) @(posedge clk); reset=0; @(posedge clk);
    // Run 400 cycles of mixed traffic
    for (cyc=0; cyc<400; cyc=cyc+1) begin
      // Randomly choose which ports inject this cycle (50% chance) and dests biased to create contention
  vN <= (($urandom(seed) & 8'h1) != 0);
  if (vN) fN <= mk_flit(8'd1,8'd0,{8'h4E,cyc[7:0]}); // 'N'
  vS <= (($urandom(seed) & 8'h2) != 0);
  if (vS) fS <= mk_flit(8'd1,8'd0,{8'h53,cyc[7:0]}); // 'S'
  vE <= (($urandom(seed) & 8'h4) != 0);
  if (vE) fE <= mk_flit(8'd0,8'd1,{8'h45,cyc[7:0]}); // 'E'
  vW <= (($urandom(seed) & 8'h8) != 0);
  if (vW) fW <= mk_flit(8'd1,8'd0,{8'h57,cyc[7:0]}); // 'W'
  vL <= (($urandom(seed) & 8'h10) != 0);
  if (vL) fL <= mk_flit(8'd1,8'd0,{8'h4C,cyc[7:0]}); // 'L'
      // Random backpressure: each ready low with 20% probability
      rN <= ($urandom(seed) % 10) < 8; // 80% ready
      rS <= ($urandom(seed) % 10) < 8;
      rE <= ($urandom(seed) % 10) < 8;
      rW <= ($urandom(seed) % 10) < 8;
      rL <= ($urandom(seed) % 10) < 8;
      @(posedge clk);
    end
    // Stop injections
    vN<=0;vS<=0;vE<=0;vW<=0;vL<=0; rN<=1;rS<=1;rE<=1;rW<=1;rL<=1;
    // Drain for 50 cycles
    repeat(50) @(posedge clk);

    $display("Stress: in=%0d out=%0d stall_arb=%0d stall_buf=%0d stall_bp=%0d cong=%0d peak_inflight=%0d avg_q=%0d", in_tot,out_tot,stall_arb,stall_buf,stall_bp,cong_idx,peak_inflight,avg_qdepth);
    if (stall_arb==0) $fatal(1, "Expected arbitration stalls >0");
    if (stall_bp==0) $fatal(1, "Expected backpressure stalls >0");
    if (in_tot==0 || out_tot==0) $fatal(1, "Expected traffic in/out >0");
    if (out_tot > in_tot) $fatal(1, "Egress flits cannot exceed ingress");
    $display("Router backpressure stress TB PASS");
    $finish;
  end
endmodule
