// File: tb/multicast_dual_fanout_tb.v
// Directed test to verify multicast replication to two outputs (E and W) in same cycle.
// Mask bits order: [N,E,S,W,L] -> set E=1, W=1 => 5'b01010.
`timescale 1ns/1ps
module multicast_dual_fanout_tb;
  localparam FLIT_W = 64;
  localparam FIFO_DEPTH = 4;
  // Signals
  logic clk, rst_n;
  logic [FLIT_W*5-1:0] flit_in_flat;
  logic [4:0]          valid_in_flat;
  wire  [4:0]          ready_out_flat;
  wire [FLIT_W*5-1:0]  flit_out_flat;
  wire [4:0]           valid_out_flat;
  logic [4:0]          ready_in_flat;
  // Host injection (local port merge inside router_cell)
  logic [FLIT_W-1:0]   ext_flit_in;
  logic                ext_valid_in;
  wire                 ext_ready_out;
  wire [FLIT_W-1:0]    ext_flit_out;
  wire                 ext_valid_out;
  logic                ext_ready_in;

  // Bit positions (must match router_cell defaults)
  localparam int MCAST_FLAG_BIT = 31;
  localparam int MCAST_MASK_LSB = 26;

  // DUT with multicast enabled
  router_cell #(.FLIT_W(FLIT_W), .FIFO_DEPTH(FIFO_DEPTH), .ROWS(1), .COLS(1), .R(0), .C(0), .ENABLE_MCAST(1)) dut (
    .clk, .rst_n,
    .flit_in_flat, .valid_in_flat, .ready_out_flat,
    .flit_out_flat, .valid_out_flat, .ready_in_flat,
    .ext_flit_in, .ext_valid_in, .ext_ready_out,
    .ext_flit_out, .ext_valid_out, .ext_ready_in
  );

  // Clock generation
  initial begin clk=0; forever #5 clk=~clk; end

  // Ready defaults: all outputs ready every cycle
  initial begin ready_in_flat = 5'b11111; ext_ready_in=1'b1; end

  // Simple stimulus
  integer cycle;
  integer east_hits; integer west_hits; integer other_hits;
  function [FLIT_W-1:0] slice_flit(input [FLIT_W*5-1:0] bus, input integer idx);
    slice_flit = bus[idx*FLIT_W +: FLIT_W];
  endfunction
  initial begin
    rst_n=0; ext_valid_in=0; ext_flit_in='0; valid_in_flat='0; flit_in_flat='0; east_hits=0; west_hits=0; other_hits=0;
    repeat(5) @(posedge clk);
    rst_n=1;
  // Wait 2 cycles then inject multicast flit with mask E+W (bits 30:26) and flag bit 31.
  repeat(2) @(posedge clk);
  // Build flit via concatenation to stay compatible with older iverilog parsing
  // Layout: [63:32] zeros | bit31 flag | bits30:26 mask | [25:0] zeros
  ext_flit_in = {32'b0, 1'b1, 5'b01010, 26'b0};
    ext_valid_in=1'b1;
    @(posedge clk); // one cycle injection
    ext_valid_in=1'b0;
  // Observe outputs for up to 10 cycles
    for (cycle=0; cycle<10; cycle++) begin
      @(posedge clk);
      if (valid_out_flat[1]) begin
        east_hits = east_hits + 1;
        if (slice_flit(flit_out_flat,1) !== ext_flit_in) $fatal(1, "EAST flit mismatch");
      end
      if (valid_out_flat[3]) begin
        west_hits = west_hits + 1;
        if (slice_flit(flit_out_flat,3) !== ext_flit_in) $fatal(1, "WEST flit mismatch");
      end
      if (valid_out_flat[0] || valid_out_flat[2] || valid_out_flat[4]) begin
  other_hits = other_hits + 1;
      end
    end
    if (east_hits!=1 || west_hits!=1) begin
      $fatal(1, "Expected exactly one flit on EAST and WEST each (got E=%0d W=%0d)", east_hits, west_hits);
    end
    if (other_hits!=0) begin
      $fatal(1, "Unexpected flit(s) on non-masked outputs (count=%0d)", other_hits);
    end
    $display("[TB] Multicast dual fanout PASS (E and W each received one copy)");
    $finish;
  end
endmodule
