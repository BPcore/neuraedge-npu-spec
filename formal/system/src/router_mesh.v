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
    input  logic                   ext_ready_in,
    // Tile-facing I/O arrays (fully flattened for synthesis)
    output logic [ROWS*COLS*5*FLIT_W-1:0] fully_flat_tile_flit_out,
    output logic [ROWS*COLS*5-1:0]        fully_flat_tile_valid_out,
    input  logic [ROWS*COLS*5-1:0]        fully_flat_tile_ready_in,
    input  logic [ROWS*COLS*5*FLIT_W-1:0] fully_flat_tile_flit_in,
    input  logic [ROWS*COLS*5-1:0]        fully_flat_tile_valid_in,
    output logic [ROWS*COLS*5-1:0]        fully_flat_tile_ready_out
);

    // --- Flattened Bus Indexing Documentation ---
    // The tile-facing ports are fully flattened into a single 1D vector for
    // maximum synthesis compatibility. The logic below unpacks this 1D vector
    // into a 2D array of 5-port buses for use by the internal router logic.
    //
    // For a tile at coordinate (r, c), its linear index is:
    //   tile_idx = r * COLS + c
    //
    // Each tile has 5 ports (0-4), corresponding to N, E, S, W, and Local.
    //
    // The bit-range for a specific tile's signals is calculated as follows:
    //
    // For flit signals (width = 5 * FLIT_W per tile):
    //   - Slice: [ (tile_idx * 5 * FLIT_W) +: (5 * FLIT_W) ]
    //
    // For single-bit signals (valid/ready, width = 5 bits per tile):
    //   - Slice: [ (tile_idx * 5) +: 5 ]
    //
    // This mapping is used to connect the top-level signals to the internal
    // 2D array representation (`flat_tile_*`).

    // Internal signals as 1D packed vectors
    localparam NUM_TILES = ROWS * COLS;
    logic [NUM_TILES*5*FLIT_W-1:0] flat_tile_flit_out;
    logic [NUM_TILES*5-1:0]        flat_tile_valid_out;
    logic [NUM_TILES*5-1:0]        flat_tile_ready_in;
    logic [NUM_TILES*5*FLIT_W-1:0] flat_tile_flit_in;
    logic [NUM_TILES*5-1:0]        flat_tile_valid_in;
    logic [NUM_TILES*5-1:0]        flat_tile_ready_out;

    // Directly connect top-level ports to internal signals (no unpacking needed)
    assign flat_tile_flit_in   = fully_flat_tile_flit_in;
    assign flat_tile_valid_in  = fully_flat_tile_valid_in;
    assign flat_tile_ready_in  = fully_flat_tile_ready_in;
    assign fully_flat_tile_flit_out  = flat_tile_flit_out;
    assign fully_flat_tile_valid_out = flat_tile_valid_out;
    assign fully_flat_tile_ready_out = flat_tile_ready_out;

    // --- TEMPORARY STUB LOGIC ---
    // Loopback logic for each tile and port
    genvar i;
    generate
        for (i = 0; i < NUM_TILES*5; i = i + 1) begin : LOOPBACK
            assign flat_tile_flit_out[i*FLIT_W +: FLIT_W] = flat_tile_flit_in[i*FLIT_W +: FLIT_W];
            assign flat_tile_valid_out[i] = flat_tile_valid_in[i];
            assign flat_tile_ready_out[i] = flat_tile_ready_in[i];
        end
    endgenerate
    // --- END TEMPORARY STUB LOGIC ---

endmodule
