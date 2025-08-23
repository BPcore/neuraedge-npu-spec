// File: tb/multicast_flag_clear_tb.v
// Purpose: Verify one-hop multicast semantic (MCAST_CLEAR_ON_SEND=1) clears the multicast flag bit (31)
// so downstream routers treat replicated flits as unicast and do not further replicate.
// Scenario:
//  - 2x2 mesh, multicast enabled.
//  - Inject at (0,0) a flit with mask selecting East + Local (E,L) -> mask 5'b01001.
//  - Header dest row/col set to (0,1) (router to the East) so the East copy should be delivered Local immediately at router (0,1).
//  - Assertions:
//     * Source router issues East & Local simultaneously (atomic replication) for that flit.
//     * Local copy at source retains (or may have cleared) flag? (Design clears flag on all replicated outputs). We check that outgoing east copy has flag cleared when observed at destination local.
//     * Destination local (tile ID1) receives exactly one flit; its bit31 must be 0 (flag cleared) proving downstream will not attempt further replication.
//     * No second replication wave observed (no other local ports receive the flit, and source does not re-emit same flit later).
`timescale 1ns/1ps
module multicast_flag_clear_tb;
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
  integer ti; initial begin for (ti=0; ti<ROWS*COLS*5; ti=ti+1) fully_flat_tile_ready_in[ti]=1'b1; end

  function [FLIT_W-1:0] tile_local_flit_out(input int id); tile_local_flit_out = fully_flat_tile_flit_out[(id*5+4)*FLIT_W +: FLIT_W]; endfunction
  function bit tile_local_valid_out(input int id); tile_local_valid_out = fully_flat_tile_valid_out[id*5+4]; endfunction

  localparam int MCAST_FLAG_BIT=31; localparam int MCAST_MASK_LSB=26;
  // Build initial flit: mask E + L (bits1 and4) => 5'b01001
  localparam [4:0] MASK_EL = 5'b01001; // [N,E,S,W,L]

  function [FLIT_W-1:0] build_mcast(input [4:0] mask, input [7:0] dest_r, input [7:0] dest_c);
    build_mcast = {16'b0, dest_r, dest_c}; // dest in low 16 bits
    build_mcast[MCAST_FLAG_BIT] = 1'b1;
    build_mcast[MCAST_MASK_LSB +: 5] = mask;
  endfunction

  integer cycle; bit observed_issue; bit dest_seen; bit src_local_seen;
  reg [FLIT_W-1:0] dest_flit_captured;
  initial begin
    observed_issue=0; dest_seen=0; src_local_seen=0; dest_flit_captured='0;
    repeat(4) @(posedge clk); rst_n=1; @(posedge clk);
    // Inject flit
    ext_flit_in = build_mcast(MASK_EL, 8'd0, 8'd1); // dest (0,1)
    ext_valid_in=1; @(posedge clk); ext_valid_in=0;
    // Observe up to 12 cycles
    for (cycle=0; cycle<12; cycle++) begin
      @(posedge clk);
      // Source atomic issue check (east=1, local=4)
      if (!observed_issue && dut.INST_R[0].INST_C[0].HOSTED.u_router.out_valid[1] && dut.INST_R[0].INST_C[0].HOSTED.u_router.out_valid[4]) begin
        observed_issue=1;
        if (dut.INST_R[0].INST_C[0].HOSTED.u_router.out_flit[1] !== dut.INST_R[0].INST_C[0].HOSTED.u_router.out_flit[4])
          $fatal(1,"Mismatch between source E and Local replicated flits");
      end
      // Source local delivery (should appear exactly once)
      if (tile_local_valid_out(0)) begin
        if (src_local_seen) $fatal(1,"Source local received duplicate copy");
        src_local_seen=1;
        if (tile_local_flit_out(0)[MCAST_FLAG_BIT] !== 1'b0) $fatal(1,"Source local copy still has multicast flag set (expected cleared)");
      end
      // Destination local at tile1 (0,1)
      if (tile_local_valid_out(1)) begin
        if (dest_seen) $fatal(1,"Destination tile received duplicate copy");
        dest_seen=1; dest_flit_captured = tile_local_flit_out(1);
        if (dest_flit_captured[MCAST_FLAG_BIT] !== 1'b0) $fatal(1,"Destination flit multicast flag not cleared");
      end
      // Ensure other locals don't see the flit
      if (tile_local_valid_out(2) || tile_local_valid_out(3)) $fatal(1,"Unexpected local delivery at tile2 or tile3");
    end
    if (!observed_issue) $fatal(1,"Did not observe atomic E+L replication at source");
    if (!src_local_seen) $fatal(1,"Source local did not receive its copy");
    if (!dest_seen) $fatal(1,"Destination local did not receive copy");
    $display("[TB] multicast_flag_clear_tb PASS (flag cleared downstream & no further replication)");
    $finish;
  end
endmodule
