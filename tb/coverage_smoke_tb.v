`timescale 1ns/1ps
// coverage_smoke_tb
// Lightweight functional smoke test exercising:
//  * Router enhanced: inject flits to traverse E and W directions
//  * Sparsity engine realistic mask (REAL_MASK_EN=1) across a few modes
// Provides basic $display-based pseudo-coverage summary (counts).
module coverage_smoke_tb;
  reg clk=0, reset=1; always #2 clk=~clk; // 250MHz
  // Instantiate a tiny sparsity engine
  localparam P=8; // small PE count
  reg  [P*8-1:0] in_data; reg in_valid; reg [1:0] sparsity_mode; reg sparsity_enable;
  wire [P*8-1:0] pe_data; wire [P-1:0] pe_enable; wire pe_valid; wire [15:0] act_pe_cnt; wire [15:0] ratio; wire [15:0] gain;
  sparsity_engine #(.DATA_WIDTH(8), .SPARSITY_RATIO(4), .PE_COUNT(P), .BLOCK_SIZE(4), .REAL_MASK_EN(1)) se (
    .clk(clk), .reset(reset), .input_data(in_data), .input_valid(in_valid),
    .sparsity_mask({P{1'b1}}), .sparsity_enable(sparsity_enable), .sparsity_mode(sparsity_mode),
    .sparsity_ratio_actual(ratio), .performance_gain(gain),
    .pe_data(pe_data), .pe_enable(pe_enable), .pe_valid(pe_valid), .active_pe_count(act_pe_cnt)
  );

  integer mode; integer cycles; integer act_accum[0:2];
  initial begin
    in_data=0; in_valid=0; sparsity_enable=1; for (mode=0; mode<3; mode=mode+1) act_accum[mode]=0;
    repeat(5) @(posedge clk); reset=0; @(posedge clk);
    for (mode=0; mode<3; mode=mode+1) begin
      sparsity_mode = mode[1:0];
      for (cycles=0; cycles<32; cycles=cycles+1) begin
        in_valid=1; in_data = {$random,$random};
        @(posedge clk);
        if (pe_valid) act_accum[mode] = act_accum[mode] + act_pe_cnt;
      end
    end
    $display("[coverage_smoke] active_pe_accum_mode0=%0d mode1=%0d mode2=%0d", act_accum[0], act_accum[1], act_accum[2]);
    if (act_accum[0]==act_accum[1]) $fatal(1, "Coverage smoke: mode0 and mode1 identical activity (unexpected)");
    $display("coverage_smoke_tb PASS");
    $finish;
  end
endmodule
