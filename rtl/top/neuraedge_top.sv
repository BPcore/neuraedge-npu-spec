// rtl/top/neuraedge_top.sv
// See Interface §3.2, NoC §4.3

module neuraedge_top #(
    parameter int TILE_ROWS      = 2,
    parameter int TILE_COLS      = 2,
    parameter int NOC_FLIT_WIDTH = 64
)(
    input  logic                      clk,
    input  logic                      rst_n,
    // Host interface, see Interface §3.2
    input  logic [NOC_FLIT_WIDTH-1:0] ext_flit_in,
    input  logic                      ext_valid_in,
    output logic                      ext_ready_out,
    output logic [NOC_FLIT_WIDTH-1:0] ext_flit_out,
    output logic                      ext_valid_out,
    input  logic                      ext_ready_in,
    // Interrupts (see Interface §2.1.4)
    output logic       irq_global,
    output logic [3:0] irq_perf,
    output logic [1:0] irq_power,
    output logic       irq_sec
);

    // Flattened mesh signals for tile↔mesh connection (NoC §4.3)
    localparam int NUM_TILES = TILE_ROWS*TILE_COLS;
    logic [NUM_TILES*5*NOC_FLIT_WIDTH-1:0] fully_flat_tile_flit_in;
    logic [NUM_TILES*5-1:0]               fully_flat_tile_valid_in;
    logic [NUM_TILES*5-1:0]               fully_flat_tile_ready_out;
    logic [NUM_TILES*5*NOC_FLIT_WIDTH-1:0] fully_flat_tile_flit_out;
    logic [NUM_TILES*5-1:0]               fully_flat_tile_valid_out;
    logic [NUM_TILES*5-1:0]               fully_flat_tile_ready_in;
    /* verilator lint_off UNUSED */
    // Unused slices > tile0 reserved for future multi-tile expansion (spec §3.2.2)
    /* verilator lint_on UNUSED */

    // Single tile prototype instantiation at mesh position 0 (row0,col0)
    // Flattening order per tile: ports 0..4 sequential blocks of FLIT_W / valid / ready
    wire [5*NOC_FLIT_WIDTH-1:0] t0_flit_in;
    wire [4:0]                  t0_valid_in;
    wire [4:0]                  t0_ready_out;
    wire [5*NOC_FLIT_WIDTH-1:0] t0_flit_out;
    wire [4:0]                  t0_valid_out;
    wire [4:0]                  t0_ready_in;

    // Map tile 0 local flattened window into global flattened buses
    // Host attaches to mesh router 0 local port; route its local port (index 4) directly to tile local (port 4)
    // Mesh expects tile-provided local port outputs at slice index (tile*5 + 4)
    // For now, drive directional ports (N,E,S,W) as zero from tile (no neighbors) and connect local port loopback.
    assign fully_flat_tile_flit_in[0 +: 4*NOC_FLIT_WIDTH] = '0; // N,E,S,W inputs zero
    assign fully_flat_tile_valid_in[0 +: 4]               = '0;
    // Local port input to mesh (slice 4) comes from tile's local outgoing flit_out (feedback path for testing)
    assign fully_flat_tile_flit_in[4*NOC_FLIT_WIDTH +: NOC_FLIT_WIDTH] = t0_flit_out[4*NOC_FLIT_WIDTH +: NOC_FLIT_WIDTH];
    assign fully_flat_tile_valid_in[4] = t0_valid_out[4];

    // Provide tile inputs from mesh outputs: local port output of mesh feeds tile local input
    assign t0_flit_in = fully_flat_tile_flit_out[0 +: 5*NOC_FLIT_WIDTH];
    assign t0_valid_in = fully_flat_tile_valid_out[0 +: 5];

    // Ready signaling: propagate tile ready back to mesh and assert ready for unused directional ports
    assign fully_flat_tile_ready_in[0 +: 4] = 4'hF; // directional always ready
    assign fully_flat_tile_ready_in[4]      = t0_ready_out[4];
    assign t0_ready_in = fully_flat_tile_ready_out[0 +: 5];

    // Zero any remaining mesh tile slots (if >1 tile configured)
    if (NUM_TILES > 1) begin : ZERO_REST
        assign fully_flat_tile_flit_in [5*NOC_FLIT_WIDTH +: (NUM_TILES-1)*5*NOC_FLIT_WIDTH] = '0;
        assign fully_flat_tile_valid_in[5 +: (NUM_TILES-1)*5] = '0;
        assign fully_flat_tile_ready_in[5 +: (NUM_TILES-1)*5] = '0;
    end

    neuraedge_tile #(.NOC_FLIT_W(NOC_FLIT_WIDTH)) u_tile0 (
        .clk(clk), .rst_n(rst_n),
        .flat_flit_in(t0_flit_in), .flat_valid_in(t0_valid_in), .flat_ready_out(t0_ready_out),
        .flat_flit_out(t0_flit_out), .flat_valid_out(t0_valid_out), .flat_ready_in(t0_ready_in)
    );

    // IRQ aggregation (prototype: tie from tile0 or 0 if not produced)
    assign irq_global = 1'b0; // TODO: connect from tile when implemented
    assign irq_perf   = '0;   // future: OR-reduce per-tile perf IRQs
    assign irq_power  = '0;   // future: power manager integration
    assign irq_sec    = 1'b0; // future: security events

    // --- Submodule NoC mesh instantiation (see NoC §4.3) ---
    router_mesh #(
        .ROWS      (TILE_ROWS),
        .COLS      (TILE_COLS),
        .FLIT_W    (NOC_FLIT_WIDTH)
    ) mesh_inst (
        .clk(clk),
        .rst_n(rst_n),
        .fully_flat_tile_flit_in  (fully_flat_tile_flit_in),
        .fully_flat_tile_valid_in (fully_flat_tile_valid_in),
        .fully_flat_tile_ready_out(fully_flat_tile_ready_out),
        .fully_flat_tile_flit_out (fully_flat_tile_flit_out),
        .fully_flat_tile_valid_out(fully_flat_tile_valid_out),
        .fully_flat_tile_ready_in (fully_flat_tile_ready_in),
        .ext_flit_in (ext_flit_in),
        .ext_valid_in(ext_valid_in),
        .ext_ready_out(ext_ready_out),
        .ext_flit_out(ext_flit_out),
        .ext_valid_out(ext_valid_out),
        .ext_ready_in(ext_ready_in)
    );

    // NOTE: Future work: replace prototype single-tile loopback with real host injection & multi-tile mapping (§3.2.2)

endmodule
