// File: rtl/router/router_mesh.v
// Top-level mesh instantiation of router_cell modules

// `include "router_cell.v"

module router_mesh #(
    parameter ROWS      = 4,
    parameter COLS      = 4,
    parameter FLIT_W    = 64,
    parameter FIFO_DEPTH= 4
)(
    input  logic clk,
    input  logic rst_n,

    // Flattened tile↔mesh buses (sized ROWS*COLS*5*FLIT_W and ROWS*COLS*5)
    input  logic [ROWS*COLS*5*FLIT_W-1:0]    fully_flat_tile_flit_in,
    input  logic [ROWS*COLS*5-1:0]           fully_flat_tile_valid_in,
    output logic [ROWS*COLS*5-1:0]           fully_flat_tile_ready_out,

    output logic [ROWS*COLS*5*FLIT_W-1:0]    fully_flat_tile_flit_out,
    output logic [ROWS*COLS*5-1:0]           fully_flat_tile_valid_out,
    input  logic [ROWS*COLS*5-1:0]           fully_flat_tile_ready_in,

    // External host interface
    input  logic [FLIT_W-1:0] ext_flit_in,
    input  logic             ext_valid_in,
    output logic             ext_ready_out,
    output logic [FLIT_W-1:0] ext_flit_out,
    output logic             ext_valid_out,
    input  logic             ext_ready_in
);
    // Flattened mesh signals: [tile*5 + port]
    localparam int NUM_TILES = ROWS*COLS;
    localparam int NUM_PORTS = 5;
    logic [FLIT_W-1:0] mesh_flit_in  [0:NUM_TILES*NUM_PORTS-1];
    logic             mesh_valid_in  [0:NUM_TILES*NUM_PORTS-1];
    logic             mesh_ready_out [0:NUM_TILES*NUM_PORTS-1];
    logic [FLIT_W-1:0] mesh_flit_out [0:NUM_TILES*NUM_PORTS-1];
    logic             mesh_valid_out [0:NUM_TILES*NUM_PORTS-1];
    logic             mesh_ready_in  [0:NUM_TILES*NUM_PORTS-1];

    // Explicit packed vectors for each router instance (2x2 mesh example)
    logic [FLIT_W*5-1:0] mesh_flit_in_flat_0, mesh_flit_in_flat_1, mesh_flit_in_flat_2, mesh_flit_in_flat_3;
    logic [4:0] mesh_valid_in_flat_0, mesh_valid_in_flat_1, mesh_valid_in_flat_2, mesh_valid_in_flat_3;
    logic [4:0] mesh_ready_out_flat_0, mesh_ready_out_flat_1, mesh_ready_out_flat_2, mesh_ready_out_flat_3;
    logic [FLIT_W*5-1:0] mesh_flit_out_flat_0, mesh_flit_out_flat_1, mesh_flit_out_flat_2, mesh_flit_out_flat_3;
    logic [4:0] mesh_valid_out_flat_0, mesh_valid_out_flat_1, mesh_valid_out_flat_2, mesh_valid_out_flat_3;
    logic [4:0] mesh_ready_in_flat_0, mesh_ready_in_flat_1, mesh_ready_in_flat_2, mesh_ready_in_flat_3;

    // Unflatten/flatten only for tile interface buses (single driver)
    genvar flat_idx;
    generate
      for (flat_idx = 0; flat_idx < NUM_TILES*NUM_PORTS; flat_idx = flat_idx + 1) begin : UNFLAT
        assign fully_flat_tile_ready_out[flat_idx] = mesh_ready_out[flat_idx];
        assign fully_flat_tile_flit_out[flat_idx*FLIT_W +: FLIT_W] = mesh_flit_out[flat_idx];
        assign fully_flat_tile_valid_out[flat_idx] = mesh_valid_out[flat_idx];
        assign mesh_ready_in [flat_idx]  = fully_flat_tile_ready_in[flat_idx];
      end
    endgenerate



    // --- Mesh neighbor wiring for 2x2 mesh, single driver per net ---
    // Local wires for each router's ports
    // Router 0,0
    logic [FLIT_W-1:0] n00_flit, e00_flit, s00_flit, w00_flit, l00_flit;
    logic n00_valid, e00_valid, s00_valid, w00_valid, l00_valid;
    logic n00_ready, e00_ready, s00_ready, w00_ready, l00_ready;
    // Router 0,1
    logic [FLIT_W-1:0] n01_flit, e01_flit, s01_flit, w01_flit, l01_flit;
    logic n01_valid, e01_valid, s01_valid, w01_valid, l01_valid;
    logic n01_ready, e01_ready, s01_ready, w01_ready, l01_ready;
    // Router 1,0
    logic [FLIT_W-1:0] n10_flit, e10_flit, s10_flit, w10_flit, l10_flit;
    logic n10_valid, e10_valid, s10_valid, w10_valid, l10_valid;
    logic n10_ready, e10_ready, s10_ready, w10_ready, l10_ready;
    // Router 1,1
    logic [FLIT_W-1:0] n11_flit, e11_flit, s11_flit, w11_flit, l11_flit;
    logic n11_valid, e11_valid, s11_valid, w11_valid, l11_valid;
    logic n11_ready, e11_ready, s11_ready, w11_ready, l11_ready;

    // --- Neighbor/host wiring ---
    // North edge: host inject
    assign n00_flit = ext_flit_in;
    assign n00_valid = ext_valid_in;
    assign n00_ready = ext_ready_out;
    assign n01_flit = ext_flit_in;
    assign n01_valid = ext_valid_in;
    assign n01_ready = ext_ready_out;
    // South edge: tie off
    assign s10_flit = '0;
    assign s10_valid = '0;
    assign s10_ready = 1'b0;
    assign s11_flit = '0;
    assign s11_valid = '0;
    assign s11_ready = 1'b0;
    // East edge: tie off
    assign e01_flit = '0;
    assign e01_valid = '0;
    assign e01_ready = 1'b0;
    assign e11_flit = '0;
    assign e11_valid = '0;
    assign e11_ready = 1'b0;
    // West edge: tie off
    assign w00_flit = '0;
    assign w00_valid = '0;
    assign w00_ready = 1'b0;
    assign w10_flit = '0;
    assign w10_valid = '0;
    assign w10_ready = 1'b0;
    // Internal mesh connections
    // (0,0) E <-> (0,1) W
    assign e00_flit = w01_flit;
    assign e00_valid = w01_valid;
    assign e00_ready = w01_ready;
    assign w01_flit = e00_flit;
    assign w01_valid = e00_valid;
    assign w01_ready = e00_ready;
    // (0,0) S <-> (1,0) N
    assign s00_flit = n10_flit;
    assign s00_valid = n10_valid;
    assign s00_ready = n10_ready;
    assign n10_flit = s00_flit;
    assign n10_valid = s00_valid;
    assign n10_ready = s00_ready;
    // (0,1) S <-> (1,1) N
    assign s01_flit = n11_flit;
    assign s01_valid = n11_valid;
    assign s01_ready = n11_ready;
    assign n11_flit = s01_flit;
    assign n11_valid = s01_valid;
    assign n11_ready = s01_ready;
    // (1,0) E <-> (1,1) W
    assign e10_flit = w11_flit;
    assign e10_valid = w11_valid;
    assign e10_ready = w11_ready;
    assign w11_flit = e10_flit;
    assign w11_valid = e10_valid;
    assign w11_ready = e10_ready;

    // --- Assign to mesh arrays (single driver per element) ---
    // mesh_flit_in/valid_in/ready_out: [router*5 + port]
    // Router 0,0
    assign mesh_flit_in[0] = n00_flit;
    assign mesh_valid_in[0] = n00_valid;
    assign mesh_ready_out[0] = n00_ready;
    assign mesh_flit_in[1] = e00_flit;
    assign mesh_valid_in[1] = e00_valid;
    assign mesh_ready_out[1] = e00_ready;
    assign mesh_flit_in[2] = s00_flit;
    assign mesh_valid_in[2] = s00_valid;
    assign mesh_ready_out[2] = s00_ready;
    assign mesh_flit_in[3] = w00_flit;
    assign mesh_valid_in[3] = w00_valid;
    assign mesh_ready_out[3] = w00_ready;
    // Router 0,1
    assign mesh_flit_in[5] = n01_flit;
    assign mesh_valid_in[5] = n01_valid;
    assign mesh_ready_out[5] = n01_ready;
    assign mesh_flit_in[6] = e01_flit;
    assign mesh_valid_in[6] = e01_valid;
    assign mesh_ready_out[6] = e01_ready;
    assign mesh_flit_in[7] = s01_flit;
    assign mesh_valid_in[7] = s01_valid;
    assign mesh_ready_out[7] = s01_ready;
    assign mesh_flit_in[8] = w01_flit;
    assign mesh_valid_in[8] = w01_valid;
    assign mesh_ready_out[8] = w01_ready;
    // Router 1,0
    assign mesh_flit_in[10] = n10_flit;
    assign mesh_valid_in[10] = n10_valid;
    assign mesh_ready_out[10] = n10_ready;
    assign mesh_flit_in[11] = e10_flit;
    assign mesh_valid_in[11] = e10_valid;
    assign mesh_ready_out[11] = e10_ready;
    assign mesh_flit_in[12] = s10_flit;
    assign mesh_valid_in[12] = s10_valid;
    assign mesh_ready_out[12] = s10_ready;
    assign mesh_flit_in[13] = w10_flit;
    assign mesh_valid_in[13] = w10_valid;
    assign mesh_ready_out[13] = w10_ready;
    // Router 1,1
    assign mesh_flit_in[15] = n11_flit;
    assign mesh_valid_in[15] = n11_valid;
    assign mesh_ready_out[15] = n11_ready;
    assign mesh_flit_in[16] = e11_flit;
    assign mesh_valid_in[16] = e11_valid;
    assign mesh_ready_out[16] = e11_ready;
    assign mesh_flit_in[17] = s11_flit;
    assign mesh_valid_in[17] = s11_valid;
    assign mesh_ready_out[17] = s11_ready;
    assign mesh_flit_in[18] = w11_flit;
    assign mesh_valid_in[18] = w11_valid;
    assign mesh_ready_out[18] = w11_ready;

    // Flattened host interface signals for each router (NUM_TILES)
    logic [FLIT_W-1:0] host_ext_flit_in   [0:NUM_TILES-1];
    logic              host_ext_valid_in  [0:NUM_TILES-1];
    logic              host_ext_ready_out [0:NUM_TILES-1];
    logic [FLIT_W-1:0] host_ext_flit_out  [0:NUM_TILES-1];
    logic              host_ext_valid_out [0:NUM_TILES-1];
    logic              host_ext_ready_in  [0:NUM_TILES-1];

    integer t_idx;
    always @* begin
      for (t_idx = 0; t_idx < NUM_TILES; t_idx = t_idx + 1) begin
        // Input from host only to tile 0 ([0][0])
        host_ext_flit_in[t_idx]  = (t_idx == 0) ? ext_flit_in  : {FLIT_W{1'b0}};
        host_ext_valid_in[t_idx] = (t_idx == 0) ? ext_valid_in : 1'b0;
        // Output to host only from tile NUM_TILES-1*COLS ([ROWS-1][0])
        host_ext_ready_in[t_idx] = (t_idx == (ROWS-1)*COLS) ? ext_ready_in : 1'b0;
      end
    end

    // Connect mesh outputs to host outputs
    assign ext_ready_out = host_ext_ready_out[0];
    assign ext_flit_out  = host_ext_flit_out[(ROWS-1)*COLS];
    assign ext_valid_out = host_ext_valid_out[(ROWS-1)*COLS];

    // Instantiate the mesh of router_cells (2x2 mesh example)
    router_cell #(.FLIT_W(FLIT_W), .FIFO_DEPTH(FIFO_DEPTH), .ROWS(ROWS), .COLS(COLS), .R(0), .C(0)) cell_0 (
      .clk(clk), .rst_n(rst_n),
      .flit_in_flat(mesh_flit_in_flat_0), .valid_in_flat(mesh_valid_in_flat_0), .ready_out_flat(mesh_ready_out_flat_0),
      .flit_out_flat(mesh_flit_out_flat_0), .valid_out_flat(mesh_valid_out_flat_0), .ready_in_flat(mesh_ready_in_flat_0),
      .ext_flit_in(host_ext_flit_in[0]), .ext_valid_in(host_ext_valid_in[0]), .ext_ready_out(host_ext_ready_out[0]),
      .ext_flit_out(host_ext_flit_out[0]), .ext_valid_out(host_ext_valid_out[0]), .ext_ready_in(host_ext_ready_in[0])
    );
    router_cell #(.FLIT_W(FLIT_W), .FIFO_DEPTH(FIFO_DEPTH), .ROWS(ROWS), .COLS(COLS), .R(0), .C(1)) cell_1 (
      .clk(clk), .rst_n(rst_n),
      .flit_in_flat(mesh_flit_in_flat_1), .valid_in_flat(mesh_valid_in_flat_1), .ready_out_flat(mesh_ready_out_flat_1),
      .flit_out_flat(mesh_flit_out_flat_1), .valid_out_flat(mesh_valid_out_flat_1), .ready_in_flat(mesh_ready_in_flat_1),
      .ext_flit_in(host_ext_flit_in[1]), .ext_valid_in(host_ext_valid_in[1]), .ext_ready_out(host_ext_ready_out[1]),
      .ext_flit_out(host_ext_flit_out[1]), .ext_valid_out(host_ext_valid_out[1]), .ext_ready_in(host_ext_ready_in[1])
    );
    router_cell #(.FLIT_W(FLIT_W), .FIFO_DEPTH(FIFO_DEPTH), .ROWS(ROWS), .COLS(COLS), .R(1), .C(0)) cell_2 (
      .clk(clk), .rst_n(rst_n),
      .flit_in_flat(mesh_flit_in_flat_2), .valid_in_flat(mesh_valid_in_flat_2), .ready_out_flat(mesh_ready_out_flat_2),
      .flit_out_flat(mesh_flit_out_flat_2), .valid_out_flat(mesh_valid_out_flat_2), .ready_in_flat(mesh_ready_in_flat_2),
      .ext_flit_in(host_ext_flit_in[2]), .ext_valid_in(host_ext_valid_in[2]), .ext_ready_out(host_ext_ready_out[2]),
      .ext_flit_out(host_ext_flit_out[2]), .ext_valid_out(host_ext_valid_out[2]), .ext_ready_in(host_ext_ready_in[2])
    );
    router_cell #(.FLIT_W(FLIT_W), .FIFO_DEPTH(FIFO_DEPTH), .ROWS(ROWS), .COLS(COLS), .R(1), .C(1)) cell_3 (
      .clk(clk), .rst_n(rst_n),
      .flit_in_flat(mesh_flit_in_flat_3), .valid_in_flat(mesh_valid_in_flat_3), .ready_out_flat(mesh_ready_out_flat_3),
      .flit_out_flat(mesh_flit_out_flat_3), .valid_out_flat(mesh_valid_out_flat_3), .ready_in_flat(mesh_ready_in_flat_3),
      .ext_flit_in(host_ext_flit_in[3]), .ext_valid_in(host_ext_valid_in[3]), .ext_ready_out(host_ext_ready_out[3]),
      .ext_flit_out(host_ext_flit_out[3]), .ext_valid_out(host_ext_valid_out[3]), .ext_ready_in(host_ext_ready_in[3])
    );
endmodule
