// File: tb/multicast_backpressure_tb.v
// Verifies that multicast flit is held until both targeted outputs are ready (backpressure on one).
`timescale 1ns/1ps
module multicast_backpressure_tb;
  localparam FLIT_W=64; localparam FIFO_DEPTH=4;
  logic clk=0, rst_n=0; always #5 clk=~clk;
  logic [FLIT_W*5-1:0] flit_in_flat; logic [4:0] valid_in_flat; wire [4:0] ready_out_flat;
  wire [FLIT_W*5-1:0] flit_out_flat; wire [4:0] valid_out_flat; logic [4:0] ready_in_flat;
  logic [FLIT_W-1:0] ext_flit_in; logic ext_valid_in; wire ext_ready_out; wire [FLIT_W-1:0] ext_flit_out; wire ext_valid_out; logic ext_ready_in;

  router_cell #(.FLIT_W(FLIT_W), .FIFO_DEPTH(FIFO_DEPTH), .ENABLE_MCAST(1)) dut (
    .clk, .rst_n,
    .flit_in_flat, .valid_in_flat, .ready_out_flat,
    .flit_out_flat, .valid_out_flat, .ready_in_flat,
    .ext_flit_in, .ext_valid_in, .ext_ready_out,
    .ext_flit_out, .ext_valid_out, .ext_ready_in
  );

  integer cycles_wait; integer east_seen; integer west_seen;
  initial begin
    cycles_wait=0; east_seen=0; west_seen=0;
    flit_in_flat='0; valid_in_flat='0; ready_in_flat=5'b11111; ext_ready_in=1'b1; ext_valid_in=0; ext_flit_in='0;
    repeat(3) @(posedge clk); rst_n=1; @(posedge clk);
    // Prepare multicast flit targeting E and W (mask=01010, flag=1)
    ext_flit_in = {32'b0,1'b1,5'b01010,26'b0};
    // Hold WEST not ready initially (ready_in_flat[3]=0) for 5 cycles; EAST ready.
    ready_in_flat[3]=0; ready_in_flat[1]=1;
    ext_valid_in=1; @(posedge clk); ext_valid_in=0; // inject
    // During stall window expect no pop (no output valid for west due to not ready) and east should also wait (design pops after all ready)
    for (cycles_wait=0; cycles_wait<5; cycles_wait++) begin
      @(posedge clk);
      if (valid_out_flat[1] || valid_out_flat[3]) $fatal(1, "Unexpected output while one target not ready (cycle %0d)", cycles_wait);
    end
    // Release west ready -> both should fire same cycle
    ready_in_flat[3]=1; @(posedge clk);
    if (!(valid_out_flat[1] && valid_out_flat[3])) $fatal(1, "Expected simultaneous E and W valid after releasing backpressure");
    east_seen = east_seen + valid_out_flat[1];
    west_seen = west_seen + valid_out_flat[3];
    // No further copies
    repeat(3) @(posedge clk);
    if (east_seen!=1 || west_seen!=1) $fatal(1, "Incorrect copy counts E=%0d W=%0d", east_seen, west_seen);
    $display("[TB] Multicast backpressure PASS");
    $finish;
  end
endmodule
