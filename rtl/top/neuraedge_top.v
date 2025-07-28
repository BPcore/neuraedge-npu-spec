// File: rtl/top/neuraedge_top.v
// Top-level NPU: NxM tile grid with 2D mesh NoC

`include "neuraedge_tile.v"
`include "router_mesh.v"

module neuraedge_top #(
    parameter TILE_ROWS       = 4,
    parameter TILE_COLS       = 4,
    parameter NOC_FLIT_WIDTH  = 64
)(
    input  logic                        clk,
    input  logic                        rst_n,
    // Global I/O to memory/host
    input  logic [NOC_FLIT_WIDTH-1:0]   ext_flit_in,
    input  logic                        ext_valid_in,
    output logic                        ext_ready_out,
    output logic [NOC_FLIT_WIDTH-1:0]   ext_flit_out,
    output logic                        ext_valid_out,
    input  logic                        ext_ready_in
);

    // 2D array of tiles
    genvar r, c;
    generate
        for (r = 0; r < TILE_ROWS; r = r + 1) begin : ROW
            for (c = 0; c < TILE_COLS; c = c + 1) begin : COL
                neuraedge_tile tile_inst (
                    .clk         (clk),
                    .rst_n       (rst_n),
                    // TODO: connect flit_in/flit_out to mesh router ports
                    .flit_in     (/* N,E,S,W,Local from mesh */),
                    .valid_in    (/* ... */),
                    .ready_out   (/* ... */),
                    .flit_out    (/* ... */),
                    .valid_out   (/* ... */),
                    .ready_in    (/* ... */)
                );
            end
        end
    endgenerate

    // Mesh NoC router fabric
    router_mesh #(
        .ROWS    (TILE_ROWS),
        .COLS    (TILE_COLS),
        .FLIT_W  (NOC_FLIT_WIDTH)
    ) mesh_inst (
        .clk            (clk),
        .rst_n          (rst_n),
        // Link the ext_* ports to the boundary routers
        .ext_flit_in    (ext_flit_in),
        .ext_valid_in   (ext_valid_in),
        .ext_ready_out  (ext_ready_out),
        .ext_flit_out   (ext_flit_out),
        .ext_valid_out  (ext_valid_out),
        .ext_ready_in   (ext_ready_in)
        // TODO: internal tile port arrays automatically connected
    );

endmodule
