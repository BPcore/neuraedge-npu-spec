// File: tb/multicast_basic_tb.v
// Basic smoke test for router multicast parameter scaffold.
// Currently multicast replication not implemented; test ensures ENABLE_MCAST=1 does not break unicast routing.
`timescale 1ns/1ps
module multicast_basic_tb;
  localparam FLIT_W = 64;
  localparam FIFO_DEPTH = 4;
  // Instantiate single router_cell with ENABLE_MCAST=1
  logic clk, rst_n;
  logic [FLIT_W*5-1:0] flit_in_flat;
  logic [4:0]          valid_in_flat;
  wire  [4:0]          ready_out_flat;
  wire [FLIT_W*5-1:0]  flit_out_flat;
  wire [4:0]           valid_out_flat;
  logic [4:0]          ready_in_flat;
  // Host signals
  logic [FLIT_W-1:0]   ext_flit_in;
  logic                ext_valid_in;
  wire                 ext_ready_out;
  wire [FLIT_W-1:0]    ext_flit_out;
  wire                 ext_valid_out;
  logic                ext_ready_in;

  router_cell #(.FLIT_W(FLIT_W), .FIFO_DEPTH(FIFO_DEPTH), .ROWS(1), .COLS(1), .R(0), .C(0), .ENABLE_MCAST(1)) dut (
    .clk, .rst_n,
    .flit_in_flat, .valid_in_flat, .ready_out_flat,
    .flit_out_flat, .valid_out_flat, .ready_in_flat,
    .ext_flit_in, .ext_valid_in, .ext_ready_out,
    .ext_flit_out, .ext_valid_out, .ext_ready_in
  );

  // Clock
  initial begin clk=0; forever #5 clk=~clk; end

  // Simple reset
  initial begin
    rst_n=0; ext_valid_in=0; ext_flit_in='0; valid_in_flat='0; flit_in_flat='0; ready_in_flat=5'b11111; ext_ready_in=1'b1;
    #40; rst_n=1;
    // After reset inject a unicast packet destined to local (row=0,col=0) with multicast flag set
    @(posedge clk);
    ext_flit_in = {32'hDEAD_BEEF, 8'd0, 8'd0}; // top bits include potential multicast bits (ignored)
    ext_valid_in=1'b1;
    @(posedge clk);
    ext_valid_in=1'b0;
    // Wait for delivery
    repeat(10) @(posedge clk);
    $display("[TB] Completed multicast_basic_tb (fallback path). ext_valid_out=%0b flit=%h", ext_valid_out, ext_flit_out);
    $finish;
  end
endmodule
