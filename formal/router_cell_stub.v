`timescale 1ns/1ps
module router_cell #(
    parameter FLIT_W = 64,
    parameter FIFO_DEPTH = 4,
    parameter ROWS = 2,
    parameter COLS = 2,
    parameter R = 0,
    parameter C = 0,
    parameter ENABLE_MCAST = 0
)(
    input  logic clk,
    input  logic rst_n,
    input  logic [FLIT_W*5-1:0] flit_in_flat,
    input  logic [4:0]          valid_in_flat,
    output logic [4:0]          ready_out_flat,
    output logic [FLIT_W*5-1:0] flit_out_flat,
    output logic [4:0]          valid_out_flat,
    input  logic [4:0]          ready_in_flat,
    input  logic [FLIT_W-1:0]   ext_flit_in,
    input  logic                ext_valid_in,
    output logic                ext_ready_out,
    output logic [FLIT_W-1:0]   ext_flit_out,
    output logic                ext_valid_out,
    input  logic                ext_ready_in,
    output logic [$clog2(FIFO_DEPTH+1)-1:0] max_fifo_occ_o
);

  // Minimal stub: propagate ready when not in reset, zero outputs
  assign ready_out_flat = {5{rst_n}} & ready_in_flat; // conservative
  assign flit_out_flat = {FLIT_W*5{1'b0}};
  assign valid_out_flat = 5'b0;
  assign ext_ready_out = rst_n;
  assign ext_flit_out = {FLIT_W{1'b0}};
  assign ext_valid_out = 1'b0;
  assign max_fifo_occ_o = '0;

endmodule
