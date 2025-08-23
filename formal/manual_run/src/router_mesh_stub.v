`timescale 1ns/1ps
module router_mesh #(
  parameter ROWS = 2,
  parameter COLS = 2,
  parameter FLIT_W = 64,
  parameter FIFO_DEPTH = 4
)(
  input logic clk,
  input logic rst_n,
  input logic [ROWS*COLS*5*FLIT_W-1:0] fully_flat_tile_flit_in,
  input logic [ROWS*COLS*5-1:0]        fully_flat_tile_valid_in,
  output logic [ROWS*COLS*5-1:0]        fully_flat_tile_ready_out,
  output logic [ROWS*COLS*5*FLIT_W-1:0] fully_flat_tile_flit_out,
  output logic [ROWS*COLS*5-1:0]        fully_flat_tile_valid_out,
  input logic [ROWS*COLS*5-1:0]        fully_flat_tile_ready_in,
  input logic [FLIT_W-1:0]             ext_flit_in,
  input logic                          ext_valid_in,
  output logic                          ext_ready_out,
  output logic [FLIT_W-1:0]             ext_flit_out,
  output logic                          ext_valid_out,
  input logic                          ext_ready_in,
  output logic [$clog2(FIFO_DEPTH+1)-1:0] mesh_max_fifo_occ_o,
  output logic [ROWS*COLS*$clog2(FIFO_DEPTH+1)-1:0] mesh_fifo_occ_vec_o,
  output logic [ROWS*COLS*$clog2(FIFO_DEPTH+1)-1:0] mesh_router_watermarks_o
);

  // Simple stub: indicate ready when not in reset and zero outputs.
  assign fully_flat_tile_ready_out = { (ROWS*COLS*5){ rst_n } };
  assign fully_flat_tile_flit_out = { (ROWS*COLS*5*FLIT_W){ 1'b0 } };
  assign fully_flat_tile_valid_out = { (ROWS*COLS*5){ 1'b0 } };
  assign ext_ready_out = rst_n;
  assign ext_flit_out = {FLIT_W{1'b0}};
  assign ext_valid_out = 1'b0;
  assign mesh_max_fifo_occ_o = '0;
  assign mesh_fifo_occ_vec_o = '0;
  assign mesh_router_watermarks_o = '0;

endmodule
