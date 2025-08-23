// File: rtl/top/neuraedge_top_standalone.v
// Top-level NPU: 2x2 tile grid with 2D mesh NoC
// Architecture: 4 tiles × 2048 MACs/tile = 8192 total MACs for 50 TOPS
// Standalone version without includes for synthesis

(* KEEP_HIERARCHY = "TRUE" *)
module neuraedge_top #(
    parameter TILE_ROWS       = 2,     // Architecture: 2x2 = 4 total tiles
    parameter TILE_COLS       = 2,     // Architecture: 4 tiles for 50 TOPS target
    parameter NOC_FLIT_WIDTH  = 64
)(
    input                               clk,
    input                               rst_n,
    // Global I/O to memory/host
    input  [NOC_FLIT_WIDTH-1:0]        ext_flit_in,
    input                               ext_valid_in,
    output                              ext_ready_out,
    output [NOC_FLIT_WIDTH-1:0]        ext_flit_out,
    output                              ext_valid_out,
    input                               ext_ready_in
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

    // Global mesh router instantiation
    router_mesh #(
        .ROWS(TILE_ROWS),
        .COLS(TILE_COLS),
        .FLIT_W(NOC_FLIT_WIDTH),
        .FIFO_DEPTH(4)
    ) mesh_inst (
        .clk(clk),
        .rst_n(rst_n),
        .fully_flat_tile_flit_in(fully_flat_tile_flit_out),   
        .fully_flat_tile_valid_in(fully_flat_tile_valid_out), 
        .fully_flat_tile_ready_out(fully_flat_tile_ready_in), 
        .fully_flat_tile_flit_out(fully_flat_tile_flit_in),   
        .fully_flat_tile_valid_out(fully_flat_tile_valid_in), 
        .fully_flat_tile_ready_in(fully_flat_tile_ready_out), 
        .ext_flit_in(ext_flit_in),
        .ext_valid_in(ext_valid_in),
        .ext_ready_out(ext_ready_out),
        .ext_flit_out(ext_flit_out),
        .ext_valid_out(ext_valid_out),
        .ext_ready_in(ext_ready_in)
    );

    // Instantiate tile array (2x2 = 4 tiles total)
    genvar tile_row, tile_col;
    generate
        for (tile_row = 0; tile_row < TILE_ROWS; tile_row = tile_row + 1) begin : TILE_ROW_GEN
            for (tile_col = 0; tile_col < TILE_COLS; tile_col = tile_col + 1) begin : TILE_COL_GEN
                // Flatten each tile's 5 ports into wire arrays
                wire [5*NOC_FLIT_WIDTH-1:0] tile_flat_flit_in;
                wire [4:0]                  tile_flat_valid_in;
                wire [4:0]                  tile_flat_ready_out;
                wire [5*NOC_FLIT_WIDTH-1:0] tile_flat_flit_out;
                wire [4:0]                  tile_flat_valid_out;
                wire [4:0]                  tile_flat_ready_in;

                // Connect flattened tile signals to mesh arrays
                genvar port;
                for (port = 0; port < 5; port = port + 1) begin : PORT_CONNECT
                    assign tile_flat_flit_in[port*NOC_FLIT_WIDTH +: NOC_FLIT_WIDTH] = mesh_flit_in[tile_row][tile_col][port];
                    assign tile_flat_valid_in[port] = mesh_valid_in[tile_row][tile_col][port];
                    assign mesh_ready_out[tile_row][tile_col][port] = tile_flat_ready_out[port];
                    assign mesh_flit_out[tile_row][tile_col][port] = tile_flat_flit_out[port*NOC_FLIT_WIDTH +: NOC_FLIT_WIDTH];
                    assign mesh_valid_out[tile_row][tile_col][port] = tile_flat_valid_out[port];
                    assign tile_flat_ready_in[port] = mesh_ready_in[tile_row][tile_col][port];
                end

                neuraedge_tile tile_inst (
                    .clk(clk),
                    .rst_n(rst_n),
                    .flat_flit_in(tile_flat_flit_in),
                    .flat_valid_in(tile_flat_valid_in),
                    .flat_ready_out(tile_flat_ready_out),
                    .flat_flit_out(tile_flat_flit_out),
                    .flat_valid_out(tile_flat_valid_out),
                    .flat_ready_in(tile_flat_ready_in)
                );
            end
        end
    endgenerate

endmodule
