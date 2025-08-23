`timescale 1ns/1ps
// Simple debug TB to observe router_cell multicast replication (N/E/S/W readiness all 1)
module multicast_router_cell_debug_tb;
  reg clk=0; always #1 clk=~clk; reg rst_n=0; initial begin repeat(3) @(posedge clk); rst_n=1; end
  localparam FLIT_W=64;
  wire [FLIT_W*5-1:0] flit_out_flat; wire [4:0] valid_out_flat; wire [4:0] ready_out_flat; wire [4:0] ready_in_flat = 5'b11111;
  reg  [FLIT_W*5-1:0] flit_in_flat=0; reg [4:0] valid_in_flat=0; // unused external ports
  reg  [FLIT_W-1:0] ext_flit_in; reg ext_valid_in; wire ext_ready_out; wire [FLIT_W-1:0] ext_flit_out; wire ext_valid_out; reg ext_ready_in=1'b1;
  router_cell #(.ENABLE_MCAST(1), .FLIT_W(FLIT_W)) dut (
    .clk(clk), .rst_n(rst_n),
    .flit_in_flat(flit_in_flat), .valid_in_flat(valid_in_flat), .ready_out_flat(ready_out_flat),
    .flit_out_flat(flit_out_flat), .valid_out_flat(valid_out_flat), .ready_in_flat(ready_in_flat),
    .ext_flit_in(ext_flit_in), .ext_valid_in(ext_valid_in), .ext_ready_out(ext_ready_out),
    .ext_flit_out(ext_flit_out), .ext_valid_out(ext_valid_out), .ext_ready_in(ext_ready_in)
  );
  // Stimulus: inject one multicast flit (E+W mask) then finish
  reg observed_dual; reg observed_flag_clear;
  // Combinational detection to avoid missing same-cycle pulse
  always @(*) begin
    if (!observed_dual && valid_out_flat[1] && valid_out_flat[3]) begin
      observed_dual = 1'b1;
      if (flit_out_flat[64*1 + 31]==1'b0 && flit_out_flat[64*3 + 31]==1'b0) observed_flag_clear = 1'b1;
    end
  end
  initial begin
  ext_valid_in=0; ext_flit_in=0; observed_dual=0; observed_flag_clear=0;
    @(posedge rst_n); @(posedge clk);
    ext_flit_in = {32'h0, (32'h8000_0000 | (5'b01010 << 26) | 26'h3)}; ext_valid_in=1'b1;
    wait(ext_ready_out); @(posedge clk); ext_valid_in=0;
    // Search window for dual replication
    repeat(12) begin
      @(posedge clk);
      if (!observed_dual && (valid_out_flat[1] && valid_out_flat[3])) begin
        observed_dual <= 1'b1;
        if (flit_out_flat[64*1 + 31]==1'b0 && flit_out_flat[64*3 + 31]==1'b0) observed_flag_clear <= 1'b1;
      end
    end
    $display("[multicast_router_cell_debug] observed_dual=%0d flag_clear=%0d", observed_dual, observed_flag_clear);
    if (!observed_dual) $fatal(1, "Did not observe simultaneous E/W valid for multicast flit");
    if (!observed_flag_clear) $fatal(1, "Flag not cleared on replicated outputs");
    $display("multicast_router_cell_debug_tb PASS");
    $finish;
  end
endmodule
