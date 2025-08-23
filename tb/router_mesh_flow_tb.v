`timescale 1ns/1ps
`define ROUTER_DEBUG
// router_mesh_flow_tb: inject a flit at host (router 0,0) destined for tile (1,1) and
// confirm multi-hop delivery through (0,0)->(1,0)->(1,1) using XY routing.
// Dest encoding per router_cell: flit[15:8]=dest_row, flit[7:0]=dest_col.

module router_mesh_flow_tb;
  localparam int ROWS=2;
  localparam int COLS=2;
  localparam int FLIT_W=64;
  localparam int TILE_PORTS=5;
  localparam int DEST_R=1;
  localparam int DEST_C=1;

  reg clk=0; always #1 clk=~clk; // 500MHz nominal
  reg rst_n=0; initial begin
    repeat (4) @(posedge clk);
    rst_n=1;
  end

  // Host injection
  reg  [FLIT_W-1:0] ext_flit_in;
  reg               ext_valid_in;
  wire              ext_ready_out;
  wire [FLIT_W-1:0] ext_flit_out;
  wire              ext_valid_out;
  reg               ext_ready_in = 1'b1; // always ready to consume host egress

  // Flattened tile buses (only local ports used). Provide all-ready sinks.
  wire [ROWS*COLS*TILE_PORTS*FLIT_W-1:0] fully_flat_tile_flit_in  = '0; // no tile injection
  wire [ROWS*COLS*TILE_PORTS-1:0]        fully_flat_tile_valid_in = '0;
  wire [ROWS*COLS*TILE_PORTS-1:0]        fully_flat_tile_ready_out; // from mesh
  wire [ROWS*COLS*TILE_PORTS*FLIT_W-1:0] fully_flat_tile_flit_out;  // from mesh
  wire [ROWS*COLS*TILE_PORTS-1:0]        fully_flat_tile_valid_out; // from mesh
  // Make all tile local outputs ready (only need local port index 4 for each tile)
  wire [ROWS*COLS*TILE_PORTS-1:0]        fully_flat_tile_ready_in;
  // Initialize all ready low then set local bits via assigns below
  // (SystemVerilog default nets are 'z/0'; we define explicit pattern)
  // Only local ports are used so others remain 0.
  genvar ti;
  generate
    for (ti=0; ti<ROWS*COLS; ti=ti+1) begin : READY_GEN
      // Set only local port ready high (index tile*5+4). Others 0.
      localparam int LIDX = ti*TILE_PORTS + 4;
      assign fully_flat_tile_ready_in[LIDX] = 1'b1;
    end
  endgenerate

  // Instantiate mesh
  router_mesh #(.ROWS(ROWS), .COLS(COLS), .FLIT_W(FLIT_W)) dut (
    .clk(clk), .rst_n(rst_n),
    .fully_flat_tile_flit_in(fully_flat_tile_flit_in),
    .fully_flat_tile_valid_in(fully_flat_tile_valid_in),
    .fully_flat_tile_ready_out(fully_flat_tile_ready_out),
    .fully_flat_tile_flit_out(fully_flat_tile_flit_out),
    .fully_flat_tile_valid_out(fully_flat_tile_valid_out),
    .fully_flat_tile_ready_in(fully_flat_tile_ready_in),
    .ext_flit_in(ext_flit_in), .ext_valid_in(ext_valid_in), .ext_ready_out(ext_ready_out),
    .ext_flit_out(ext_flit_out), .ext_valid_out(ext_valid_out), .ext_ready_in(ext_ready_in)
  );

  // Tracking / check
  integer cycles_to_arrival = -1;
  integer cycle_count=0;
  always @(posedge clk) if (rst_n) cycle_count <= cycle_count + 1;

  // Destination local port index in flattened outputs
  localparam int DEST_TILE = DEST_R*COLS + DEST_C; // (1,1)=3
  localparam int DEST_LIDX = DEST_TILE*TILE_PORTS + 4; // local port offset
  wire dest_hit = fully_flat_tile_valid_out[DEST_LIDX];
  wire [FLIT_W-1:0] dest_flit = fully_flat_tile_flit_out[DEST_LIDX*FLIT_W +: FLIT_W];

  // Drive single flit after reset
  integer timeout;
  initial begin
    ext_valid_in = 0; ext_flit_in = '0;
    @(posedge rst_n);
    // Compose flit: header dest row/col in low 16 bits, rest pattern 0xA5
    ext_flit_in[7:0]   = DEST_C[7:0];
    ext_flit_in[15:8]  = DEST_R[7:0];
    ext_flit_in[63:16] = 48'hA5A5_A5A5_A5A5;
  ext_valid_in = 1'b1;
  $display("[ROUTER_MESH][INFO] Injecting host flit dest=(%0d,%0d)", DEST_R, DEST_C);
    // Wait for handshake
    while (!ext_ready_out) @(posedge clk);
    @(posedge clk); // one more cycle to register into FIFO
    ext_valid_in = 1'b0;
    // Wait for delivery
  timeout = 50;
    while (timeout>0 && !dest_hit) begin timeout=timeout-1; @(posedge clk); end
    if (!dest_hit) begin
      $display("[ROUTER_MESH][FAIL] Timed out waiting for flit at dest (%0d,%0d)", DEST_R, DEST_C);
      $finish; end
    // Verify header matches destination encoding
    if (dest_flit[15:8] != DEST_R || dest_flit[7:0] != DEST_C) begin
      $display("[ROUTER_MESH][FAIL] Received flit header mismatch: got r=%0d c=%0d", dest_flit[15:8], dest_flit[7:0]);
    end else begin
      $display("[ROUTER_MESH][PASS] Flit arrived at (1,1) in %0d cycles. Header ok.", cycle_count);
    end
    $finish;
  end

endmodule
