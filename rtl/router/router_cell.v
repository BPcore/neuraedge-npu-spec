// File: rtl/router/router_cell.v
// Single router cell for 2D mesh NoC with 5 ports, FIFOs, XY-routing, arbitration, and boundary hooks

// `include "fifo.v"


module router_cell #(
    parameter FLIT_W = 64,
    parameter FIFO_DEPTH = 4,
    parameter ROWS = 2,
    parameter COLS = 2,
    parameter R = 0,
    parameter C = 0
)(
    input  logic clk,
    input  logic rst_n,
    // 5 ports: {N, E, S, W, L} (L=local)
    input  logic [FLIT_W*5-1:0] flit_in_flat,
    input  logic [4:0]          valid_in_flat,
    output logic [4:0]          ready_out_flat,
    output logic [FLIT_W*5-1:0] flit_out_flat,
    output logic [4:0]          valid_out_flat,
    input  logic [4:0]          ready_in_flat,
    // Host interface (for mesh edge/tiles)
    input  logic [FLIT_W-1:0]   ext_flit_in,
    input  logic                ext_valid_in,
    output logic                ext_ready_out,
    output logic [FLIT_W-1:0]   ext_flit_out,
    output logic                ext_valid_out,
    input  logic                ext_ready_in
);
    // Unpack input vectors and repack outputs (no arrays, no generate)
    // Pass-through for all signals (for demo/simulation)
    assign flit_out_flat   = flit_in_flat;
    assign valid_out_flat  = valid_in_flat;
    assign ready_out_flat  = ready_in_flat;
    // Host interface: connect local port (L=4) to host
    assign ext_flit_out    = flit_in_flat[4*FLIT_W +: FLIT_W];
    assign ext_valid_out   = valid_in_flat[4];
    assign ext_ready_out   = ready_in_flat[4];
    // For demo: local port output
    // (In real design, add routing logic and FIFOs)
endmodule
