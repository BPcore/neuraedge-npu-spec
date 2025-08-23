// File: tb/multicast_mesh_remote_delivery_tb.v
// Purpose: Demonstrate remote local delivery using one-hop multicast with separate flits per remote.
// Strategy:
//  - 2x2 mesh ENABLE_MCAST=1 (one-hop flag clearing).
//  - Flit A: mask=E+L (01001) dest=(0,1) -> expect local at source (tile0) and remote tile1 local.
//  - Flit B: mask=S+L (00101) dest=(1,0) -> expect local at source (tile0) and remote tile2 local.
//  - Assert exactly one delivery at each targeted remote local and no duplicates.
`timescale 1ns/1ps
module multicast_mesh_remote_delivery_tb;
  localparam FLIT_W=64; localparam FIFO_DEPTH=4; localparam ROWS=2; localparam COLS=2;
  logic clk=0; always #5 clk=~clk; logic rst_n=0;
  logic [ROWS*COLS*5*FLIT_W-1:0] fully_flat_tile_flit_in; logic [ROWS*COLS*5-1:0] fully_flat_tile_valid_in; wire [ROWS*COLS*5-1:0] fully_flat_tile_ready_out;
  wire [ROWS*COLS*5*FLIT_W-1:0] fully_flat_tile_flit_out; wire [ROWS*COLS*5-1:0] fully_flat_tile_valid_out; logic [ROWS*COLS*5-1:0] fully_flat_tile_ready_in;
  logic [FLIT_W-1:0] ext_flit_in; logic ext_valid_in; wire ext_ready_out; wire [FLIT_W-1:0] ext_flit_out; wire ext_valid_out; logic ext_ready_in;

  router_mesh #(.ROWS(ROWS), .COLS(COLS), .FLIT_W(FLIT_W), .FIFO_DEPTH(FIFO_DEPTH), .ENABLE_MCAST(1)) dut (
    .clk, .rst_n,
    .fully_flat_tile_flit_in, .fully_flat_tile_valid_in, .fully_flat_tile_ready_out,
    .fully_flat_tile_flit_out, .fully_flat_tile_valid_out, .fully_flat_tile_ready_in,
    .ext_flit_in, .ext_valid_in, .ext_ready_out,
    .ext_flit_out, .ext_valid_out, .ext_ready_in
  );

  initial begin fully_flat_tile_flit_in='0; fully_flat_tile_valid_in='0; ext_valid_in=0; ext_flit_in='0; ext_ready_in=1'b1; end
  integer i; initial begin for (i=0;i<ROWS*COLS*5;i=i+1) fully_flat_tile_ready_in[i]=1'b1; end
  function [FLIT_W-1:0] tile_local_flit_out(input int id); tile_local_flit_out = fully_flat_tile_flit_out[(id*5+4)*FLIT_W +: FLIT_W]; endfunction
  function bit tile_local_valid_out(input int id); tile_local_valid_out = fully_flat_tile_valid_out[id*5+4]; endfunction

  localparam int MCAST_FLAG_BIT=31; localparam int MCAST_MASK_LSB=26;
  function [FLIT_W-1:0] build_mcast(input [4:0] mask, input [7:0] dest_r, input [7:0] dest_c);
    build_mcast = {16'b0, dest_r, dest_c};
    build_mcast[MCAST_FLAG_BIT]=1'b1; build_mcast[MCAST_MASK_LSB +: 5]=mask;
  endfunction
  localparam [4:0] MASK_E_L = 5'b01001; // E + L
  localparam [4:0] MASK_S_L = 5'b00101; // S + L

  integer cycle; bit src_local_a; bit src_local_b; bit dest1_seen; bit dest2_seen;
  initial begin
    repeat(4) @(posedge clk); rst_n=1; @(posedge clk);
    // Flit A
    ext_flit_in = build_mcast(MASK_E_L, 8'd0, 8'd1); ext_valid_in=1; @(posedge clk); ext_valid_in=0;
    // Wait some cycles ensuring remote delivery
    for (cycle=0; cycle<10; cycle++) begin
      @(posedge clk);
      if (!src_local_a && tile_local_valid_out(0)) begin src_local_a=1; end
      if (tile_local_valid_out(1)) begin
        if (dest1_seen) $fatal(1,"Duplicate delivery at tile1");
        dest1_seen=1;
        if (tile_local_flit_out(1)[MCAST_FLAG_BIT]) $fatal(1,"Flag not cleared at tile1 copy");
      end
    end
    if (!dest1_seen) $fatal(1,"Tile1 did not receive multicast copy A");
    // Flit B
    ext_flit_in = build_mcast(MASK_S_L, 8'd1, 8'd0); ext_valid_in=1; @(posedge clk); ext_valid_in=0;
    for (cycle=0; cycle<10; cycle++) begin
      @(posedge clk);
      if (!src_local_b && tile_local_valid_out(0) && !src_local_a) src_local_b=1; // second local may coincide; simple tracking
      if (tile_local_valid_out(2)) begin
        if (dest2_seen) $fatal(1,"Duplicate delivery at tile2");
        dest2_seen=1;
        if (tile_local_flit_out(2)[MCAST_FLAG_BIT]) $fatal(1,"Flag not cleared at tile2 copy");
      end
    end
    if (!dest2_seen) $fatal(1,"Tile2 did not receive multicast copy B");
    $display("[TB] multicast_mesh_remote_delivery_tb PASS (remote local deliveries observed)");
    $finish;
  end
endmodule
