// File: rtl/top/neuraedge_top.v
// Top-level NPU: NxM tile grid with 2D mesh NoC

`include "../tile/neuraedge_tile.v"
`include "../router_mesh.v"

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

    // Mesh interconnect wires as 3D arrays: [row][col][port]
    logic [NOC_FLIT_WIDTH-1:0] mesh_flit_out [0:TILE_ROWS-1][0:TILE_COLS-1][0:4];
    logic                      mesh_valid_out[0:TILE_ROWS-1][0:TILE_COLS-1][0:4];
    logic                      mesh_ready_in [0:TILE_ROWS-1][0:TILE_COLS-1][0:4];
    logic [NOC_FLIT_WIDTH-1:0] mesh_flit_in  [0:TILE_ROWS-1][0:TILE_COLS-1][0:4];
    logic                      mesh_valid_in [0:TILE_ROWS-1][0:TILE_COLS-1][0:4];
    logic                      mesh_ready_out[0:TILE_ROWS-1][0:TILE_COLS-1][0:4];

    // Flattened mesh signals for router_mesh interface (all 5 ports per tile)
    wire [TILE_ROWS*TILE_COLS*5*NOC_FLIT_WIDTH-1:0] fully_flat_tile_flit_out;
    wire [TILE_ROWS*TILE_COLS*5-1:0]               fully_flat_tile_valid_out;
    wire [TILE_ROWS*TILE_COLS*5-1:0]               fully_flat_tile_ready_in;
    wire [TILE_ROWS*TILE_COLS*5*NOC_FLIT_WIDTH-1:0] fully_flat_tile_flit_in;
    wire [TILE_ROWS*TILE_COLS*5-1:0]               fully_flat_tile_valid_in;
    wire [TILE_ROWS*TILE_COLS*5-1:0]               fully_flat_tile_ready_out;

    // Flatten 3D mesh arrays into 1D vectors for router_mesh (all 5 ports per tile)
    genvar flat_idx;
    generate
        for (flat_idx = 0; flat_idx < TILE_ROWS*TILE_COLS*5; flat_idx = flat_idx + 1) begin : FLATTEN
            localparam int tile = flat_idx / 5;
            localparam int port = flat_idx % 5;
            assign fully_flat_tile_flit_out[flat_idx*NOC_FLIT_WIDTH +: NOC_FLIT_WIDTH] = mesh_flit_out[tile/TILE_COLS][tile%TILE_COLS][port];
            assign fully_flat_tile_valid_out[flat_idx] = mesh_valid_out[tile/TILE_COLS][tile%TILE_COLS][port];
            assign fully_flat_tile_ready_in[flat_idx]  = mesh_ready_in [tile/TILE_COLS][tile%TILE_COLS][port];
            assign fully_flat_tile_flit_in [flat_idx*NOC_FLIT_WIDTH +: NOC_FLIT_WIDTH] = mesh_flit_in [tile/TILE_COLS][tile%TILE_COLS][port];
            assign fully_flat_tile_valid_in[flat_idx] = mesh_valid_in [tile/TILE_COLS][tile%TILE_COLS][port];
            assign fully_flat_tile_ready_out[flat_idx] = mesh_ready_out[tile/TILE_COLS][tile%TILE_COLS][port];
        end
    endgenerate

    // 2D array of tiles with all parameters overridden, 5-port mesh wiring
    genvar r, c;
    generate
        for (r = 0; r < TILE_ROWS; r = r + 1) begin : ROW
            for (c = 0; c < TILE_COLS; c = c + 1) begin : COL
                neuraedge_tile #(
                    .PE_ROWS        (32),
                    .PE_COLS        (64),
                    .NOC_FLIT_WIDTH (NOC_FLIT_WIDTH)
                ) tile_inst (
                    .clk        (clk),
                    .rst_n      (rst_n),
                    .flit_in    (mesh_flit_in  [r][c]),
                    .valid_in   (mesh_valid_in [r][c]),
                    .ready_out  (mesh_ready_out[r][c]),
                    .flit_out   (mesh_flit_out [r][c]),
                    .valid_out  (mesh_valid_out[r][c]),
                    .ready_in   (mesh_ready_in [r][c])
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
        .ext_ready_in   (ext_ready_in),
        // Connect tile-facing ports to the mesh signals
        .fully_flat_tile_flit_out  (fully_flat_tile_flit_out),
        .fully_flat_tile_valid_out (fully_flat_tile_valid_out),
        .fully_flat_tile_ready_in  (fully_flat_tile_ready_in),
        .fully_flat_tile_flit_in   (fully_flat_tile_flit_in),
        .fully_flat_tile_valid_in  (fully_flat_tile_valid_in),
        .fully_flat_tile_ready_out (fully_flat_tile_ready_out)
    );

endmodule
