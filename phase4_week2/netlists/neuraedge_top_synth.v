// Synthesis-specific top module for NeuraEdge NPU
// This version avoids include statements and SystemVerilog dependencies

module neuraedge_top #(
    parameter TILE_ROWS       = 4,
    parameter TILE_COLS       = 4,
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

    localparam NUM_TILES = TILE_ROWS * TILE_COLS;

    // Simplified NoC interface signals
    wire [NUM_TILES*NOC_FLIT_WIDTH-1:0] tile_to_noc_flit;
    wire [NUM_TILES-1:0]                 tile_to_noc_valid;
    wire [NUM_TILES-1:0]                 tile_to_noc_ready;
    wire [NUM_TILES*NOC_FLIT_WIDTH-1:0] noc_to_tile_flit;
    wire [NUM_TILES-1:0]                 noc_to_tile_valid;
    wire [NUM_TILES-1:0]                 noc_to_tile_ready;

    // Instantiate simplified router mesh
    router_mesh #(
        .ROWS(TILE_ROWS),
        .COLS(TILE_COLS),
        .FLIT_W(NOC_FLIT_WIDTH),
        .FIFO_DEPTH(4)
    ) noc_mesh_inst (
        .clk(clk),
        .rst_n(rst_n),
        .ext_flit_in(ext_flit_in),
        .ext_valid_in(ext_valid_in),
        .ext_ready_out(ext_ready_out),
        .ext_flit_out(ext_flit_out),
        .ext_valid_out(ext_valid_out),
        .ext_ready_in(ext_ready_in),
        .tile_flit_in(tile_to_noc_flit),
        .tile_valid_in(tile_to_noc_valid),
        .tile_ready_out(tile_to_noc_ready),
        .tile_flit_out(noc_to_tile_flit),
        .tile_valid_out(noc_to_tile_valid),
        .tile_ready_in(noc_to_tile_ready)
    );

    // Generate tile instances
    genvar row, col;
    generate
        for (row = 0; row < TILE_ROWS; row = row + 1) begin : gen_row
            for (col = 0; col < TILE_COLS; col = col + 1) begin : gen_col
                localparam TILE_ID = row * TILE_COLS + col;
                
                neuraedge_tile #(
                    .TILE_ID(TILE_ID),
                    .PE_ROWS(8),
                    .PE_COLS(8),
                    .DATA_WIDTH(8),
                    .WEIGHT_WIDTH(8),
                    .ACCUM_WIDTH(24),
                    .NOC_FLIT_WIDTH(NOC_FLIT_WIDTH)
                ) tile_inst (
                    .clk(clk),
                    .rst_n(rst_n),
                    
                    // NoC interface
                    .noc_flit_in(noc_to_tile_flit[(TILE_ID+1)*NOC_FLIT_WIDTH-1:TILE_ID*NOC_FLIT_WIDTH]),
                    .noc_valid_in(noc_to_tile_valid[TILE_ID]),
                    .noc_ready_out(noc_to_tile_ready[TILE_ID]),
                    .noc_flit_out(tile_to_noc_flit[(TILE_ID+1)*NOC_FLIT_WIDTH-1:TILE_ID*NOC_FLIT_WIDTH]),
                    .noc_valid_out(tile_to_noc_valid[TILE_ID]),
                    .noc_ready_in(tile_to_noc_ready[TILE_ID])
                );
            end
        end
    endgenerate

endmodule
