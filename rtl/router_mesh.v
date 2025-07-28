// File: rtl/router_mesh.v
// 2D mesh network connecting TILE_ROWS×TILE_COLS endpoints

module router_mesh #(
    parameter ROWS    = 4,
    parameter COLS    = 4,
    parameter FLIT_W  = 64
)(
    input  logic                   clk,
    input  logic                   rst_n,
    // External I/O
    input  logic [FLIT_W-1:0]      ext_flit_in,
    input  logic                   ext_valid_in,
    output logic                   ext_ready_out,
    output logic [FLIT_W-1:0]      ext_flit_out,
    output logic                   ext_valid_out,
    input  logic                   ext_ready_in
    // Internally: flit_in[TILES], flit_out[TILES], etc.
);

    // TODO: implement mesh router grid, connect to tile ports

endmodule
