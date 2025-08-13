// rtl/top/neuraedge_top.sv
// See Interface §3.2, NoC §4.3

module neuraedge_top #(
    parameter int TILE_ROWS      = 2,
    parameter int TILE_COLS      = 2,
    parameter int NOC_FLIT_WIDTH = 64,
    parameter int AXI_ADDR_W     = 64
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
    logic [TILE_ROWS*TILE_COLS*5*NOC_FLIT_WIDTH-1:0] fully_flat_tile_flit_in;
    logic [TILE_ROWS*TILE_COLS*5-1:0]               fully_flat_tile_valid_in;
    logic [TILE_ROWS*TILE_COLS*5-1:0]               fully_flat_tile_ready_out;
    logic [TILE_ROWS*TILE_COLS*5*NOC_FLIT_WIDTH-1:0] fully_flat_tile_flit_out;
    logic [TILE_ROWS*TILE_COLS*5-1:0]               fully_flat_tile_valid_out;
    logic [TILE_ROWS*TILE_COLS*5-1:0]               fully_flat_tile_ready_in;
    // Interrupt wires per tile
    logic       irq_global_tile [TILE_ROWS*TILE_COLS-1:0];
    logic [3:0] irq_perf_tile   [TILE_ROWS*TILE_COLS-1:0];
    logic [1:0] irq_power_tile  [TILE_ROWS*TILE_COLS-1:0];
    logic       irq_sec_tile    [TILE_ROWS*TILE_COLS-1:0];

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

    // --- Insert tile array and local interconnect wiring here ---
    // See spec §3.2.2 for tile array instantiate and flatteners

endmodule
 