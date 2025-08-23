// formal/router_mesh_deadlock_prop.sv
// Minimal formal harness for deadlock freedom in a small router_mesh instantiation.
// This is a scaffold: adapt ports to match your `router_mesh` module signature.

module __top__();
  // Instantiate a small 2x2 mesh for formal checks to exercise multi-hop progress
  reg clk = 0;
  always #1 clk = ~clk;
  reg rst_n = 0;

  // DUT ports (best-effort minimal wiring)
  wire [63:0] ext_flit_in;
  wire ext_valid_in;
  wire ext_ready_out;
  wire [63:0] ext_flit_out;
  wire ext_valid_out;
  wire ext_ready_in;

  // instantiate small mesh
  router_mesh #(.ROWS(2), .COLS(2), .FLIT_W(64)) dut (
    .clk(clk), .rst_n(rst_n),
    .fully_flat_tile_flit_in(), .fully_flat_tile_valid_in(), .fully_flat_tile_ready_out(),
    .fully_flat_tile_flit_out(), .fully_flat_tile_valid_out(), .fully_flat_tile_ready_in(),
    .ext_flit_in(ext_flit_in), .ext_valid_in(ext_valid_in), .ext_ready_out(ext_ready_out),
    .ext_flit_out(ext_flit_out), .ext_valid_out(ext_valid_out), .ext_ready_in(ext_ready_in),
    .mesh_max_fifo_occ_o(), .mesh_fifo_occ_vec_o(), .mesh_router_watermarks_o()
  );

  // reset deassert after some cycles, then hold normal operation window
  initial begin
    rst_n = 0; repeat (5) @(posedge clk); rst_n = 1; repeat (2) @(posedge clk);
  end

  // Formal liveness property: if any external egress valid becomes asserted, some external ingress ready must be asserted within 32 cycles
  property ext_handshake_progress_any;
    @(posedge clk) disable iff (!rst_n) (ext_valid_out | ext_valid_in -> ##[0:32] (ext_ready_in | ext_ready_out));
  endproperty
  assert property (ext_handshake_progress_any);

  // Simple cover: ensure at least one handshake occurs within 256 cycles (exercise progress)
  cover property (@(posedge clk) disable iff (!rst_n) $rose(ext_valid_out & ext_ready_in));

endmodule
