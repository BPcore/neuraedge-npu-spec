// router_mesh_stress_random_multidest_tb.sv
// Purpose: Stress test for router_mesh - random multi-destination traffic with long-tail backpressure patterns.
// This is a scaffolded, self-contained testbench. Fill in connections to your existing router_mesh instance signals.

`timescale 1ns/1ps
module router_mesh_stress_random_multidest_tb;

  // Config via plusargs
  integer SEED = 1;
  integer RUN_CYCLES = 20000; // default shorter run for CI smoke
  localparam int ROWS = 2;
  localparam int COLS = 2;

  // Clock / reset
  reg clk = 0;
  always #5 clk = ~clk; // 100MHz sim timebase (10ns)
  reg rst_n = 0;

  // DUT nets: inputs we drive are regs; DUT outputs are wires
  reg  [ROWS*COLS*5*64-1:0] fully_flat_tile_flit_in;
  reg  [ROWS*COLS*5-1:0]   fully_flat_tile_valid_in;
  wire [ROWS*COLS*5-1:0]   fully_flat_tile_ready_out;
  wire [ROWS*COLS*5*64-1:0] fully_flat_tile_flit_out;
  wire [ROWS*COLS*5-1:0]   fully_flat_tile_valid_out;
  reg  [ROWS*COLS*5-1:0]   fully_flat_tile_ready_in;
  reg  [63:0] ext_flit_in;
  reg  ext_valid_in;
  wire ext_ready_out;
  wire [63:0] ext_flit_out;
  wire ext_valid_out;
  reg  ext_ready_in;
  wire [$clog2(4+1)-1:0] mesh_max_fifo_occ_o;
  wire [ROWS*COLS*$clog2(4+1)-1:0] mesh_fifo_occ_vec_o;

  // Instantiate DUT router_mesh (uses default parameter FIFO_DEPTH=4 etc.)
  router_mesh #(.ROWS(2), .COLS(2), .FLIT_W(64)) dut (
    .clk(clk), .rst_n(rst_n),
    .fully_flat_tile_flit_in(fully_flat_tile_flit_in),
    .fully_flat_tile_valid_in(fully_flat_tile_valid_in),
    .fully_flat_tile_ready_out(fully_flat_tile_ready_out),
    .fully_flat_tile_flit_out(fully_flat_tile_flit_out),
    .fully_flat_tile_valid_out(fully_flat_tile_valid_out),
    .fully_flat_tile_ready_in(fully_flat_tile_ready_in),
    .ext_flit_in(ext_flit_in), .ext_valid_in(ext_valid_in), .ext_ready_out(ext_ready_out),
    .ext_flit_out(ext_flit_out), .ext_valid_out(ext_valid_out), .ext_ready_in(ext_ready_in),
    .mesh_max_fifo_occ_o(mesh_max_fifo_occ_o), .mesh_fifo_occ_vec_o(mesh_fifo_occ_vec_o), .mesh_router_watermarks_o()
  );

  // Simple stimulus: random local injections to tile local ports and randomized ready backpressure to create long-tail stalls
  reg [63:0] tile_flit_mem [0:15];
  integer i;
  // procedural locals promoted to module scope for Verilator compatibility
  integer cycle;
  integer tile_idx;
  integer port_idx;
  integer hold;
  integer t;
  integer idx;
  integer fd;
  integer k;
  initial begin
    // seed PRNG
    if ($value$plusargs("SEED=%0d", SEED)) ;
    if (!$value$plusargs("RUN_CYCLES=%0d", RUN_CYCLES)) ;
    $display("[TB] router_mesh_stress_random_multidest_tb starting (SEED=%0d RUN_CYCLES=%0d)", SEED, RUN_CYCLES);
    rst_n = 0; repeat (10) @(posedge clk); rst_n = 1;
  // Preload some pseudo-random 64-bit flits (concat two 32-bit urandoms)
  // Embed a destination header in bits [15:0] where [15:8]=dest_row, [7:0]=dest_col
  for (i=0;i<16;i=i+1) begin
    tile_flit_mem[i] = { $urandom(SEED+i), $urandom(SEED+i+16) };
    // pick a random destination inside the mesh
    int dr = $urandom_range(0, ROWS-1);
    int dc = $urandom_range(0, COLS-1);
    tile_flit_mem[i][15:8] = dr[7:0];
    tile_flit_mem[i][7:0]  = dc[7:0];
  end

  // Main stimulus loop
  for (cycle=0; cycle<RUN_CYCLES; cycle=cycle+1) begin
      // Randomly toggle ready_in on some tile ports to create stalls
      // We'll create a long-tail hold by occasionally holding ready low for random duration
      if ($urandom_range(0,99) < 2) begin
        // long hold: deassert fully_flat_tile_ready_in on a random tile local port for 50..200 cycles
        tile_idx = $urandom_range(0,ROWS*COLS-1);
        port_idx = 4; // local port only for simplicity
        hold = $urandom_range(50,200);
        repeat (hold) begin
          // tie ready_in low for that local slice (we drive via a var below)
          fully_flat_tile_ready_in[tile_idx*5 + port_idx] <= 1'b0;
          @(posedge clk);
        end
        // release
        fully_flat_tile_ready_in[tile_idx*5 + port_idx] <= 1'b1;
      end
      // Random local injection: choose random tile and pulse its local valid with a flit from mem
      if ($urandom_range(0,99) < 35) begin
        t = $urandom_range(0,ROWS*COLS-1);
        idx = $urandom_range(0,15);
        // drive flattened local flit and valid (single-driver assignments)
        fully_flat_tile_flit_in[t*5*64 +: 64] <= tile_flit_mem[idx];
        fully_flat_tile_valid_in[t*5 +: 1] <= 1'b1;
        @(posedge clk);
        // deassert after one cycle
        fully_flat_tile_valid_in[t*5 +: 1] <= 1'b0;
        fully_flat_tile_flit_in[t*5*64 +: 64] <= 64'h0;
      end
      // progress clock
      @(posedge clk);
    end

    // sample occupancy vector and write JSON summary
    $display("[TB] Run complete - sampling mesh_max_fifo_occ_o = %0d", mesh_max_fifo_occ_o);
    // Emit a tiny JSON-style file for consumption by analysis scripts. Use $fopen
    fd = $fopen("build/router_mesh_stress_summary.json","w");
    if (fd) begin
      $fwrite(fd, "{\"mesh_max_fifo_occ\": %0d, \"run_cycles\": %0d}\n", mesh_max_fifo_occ_o, RUN_CYCLES);
      $fclose(fd);
      $display("[TB] Wrote build/router_mesh_stress_summary.json");
    end

    $display("[TB] Finished");
    $finish;
  end

  // Initialize external tile ready signals to 1 (ready by default) and zeros for inputs
  initial begin
    // default ready_in = 1 for all tiles
    for (k=0; k<ROWS*COLS*5; k=k+1) begin
      fully_flat_tile_ready_in[k] = 1'b1;
      fully_flat_tile_valid_in[k] = 1'b0;
      fully_flat_tile_flit_in[k*64 +: 64] = 64'h0;
    end
    ext_ready_in = 1'b1;
    ext_valid_in = 1'b0;
  end

endmodule
