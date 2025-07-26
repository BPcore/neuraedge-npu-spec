// File: rtl/tile/neuraedge_tile.v
// Description: Top-level for a single NeuraEdge NPU tile.
//              Instantiates a 32x64 array of Processing Elements (PEs)
//              and connects to the Network-on-Chip (NoC).

`include "neuraedge_pe.v"

module neuraedge_tile #(
    parameter PE_ROWS = 32,
    parameter PE_COLS = 64,
    parameter NOC_FLIT_WIDTH = 64
)(
    input  logic clk,
    input  logic rst_n,

    // NoC Interface (North, East, South, West, Local)
    input  logic [NOC_FLIT_WIDTH-1:0] flit_in[5],
    input  logic                      valid_in[5],
    output logic                      ready_out[5],

    output logic [NOC_FLIT_WIDTH-1:0] flit_out[5],
    output logic                      valid_out[5],
    input  logic                      ready_in[5]
);

    // PE Array
    neuraedge_pe pe_array [PE_ROWS-1:0][PE_COLS-1:0] (
        .clk(clk),
        .rst_n(rst_n)
        // Connections to be added
    );

    // NoC Router
    noc_router router_inst (
        .clk(clk),
        .rst_n(rst_n),
        .flit_in(flit_in),
        .valid_in(valid_in),
        .ready_out(ready_out),
        .flit_out(flit_out),
        .valid_out(valid_out),
        .ready_in(ready_in)
    );

    // --- PE Interconnect Logic ---
    // Placeholder: Logic to route data and weights between PEs and the NoC.
    // This will be based on the specific dataflow architecture (e.g., weight-stationary).

endmodule
