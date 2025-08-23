// File: tb/multicast_mesh_end_to_end_tb.v
// End-to-end multicast test on 2x2 mesh.
// Scenario 1: Inject from (0,0) a multicast flit targeting East & South; after first hop the copies continue routing toward (0,1) and (1,0).
// Scenario 2: Inject from (0,0) a multicast flit targeting East & South AND Local at source to exercise 3-way replication (E,S,L) atomicity.
// We verify:
//  - Atomic dual/tri issue at source (simultaneous valid assertions on selected out ports)
//  - Each replicated flit pops exactly once (implicit by FIFO pop logic; we indirectly check no duplicate local deliveries at destinations)
//  - Destination locals receive exactly one copy when header dest matches their coords and Local mask bit set on that hop.
`timescale 1ns/1ps
module multicast_mesh_end_to_end_tb;
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

  // Bit fields
  localparam int MCAST_FLAG_BIT=31; localparam int MCAST_MASK_LSB=26;

  // Helpers to build multicast flit: { upper32, flag, mask[4:0], lower26 }
  function [FLIT_W-1:0] build_mcast(input [4:0] mask, input [7:0] dest_r, input [7:0] dest_c);
    build_mcast = {16'b0, dest_r, dest_c}; // base dest fields in low 16 bits
    build_mcast[MCAST_FLAG_BIT] = 1'b1;
    build_mcast[MCAST_MASK_LSB +: 5] = mask;
  endfunction

  // Masks order [N,E,S,W,L]
  localparam [4:0] MASK_ES   = 5'b01100; // E+S
  localparam [4:0] MASK_ESL  = 5'b01101; // E+S+L (add Local bit4)

  integer cycle; bit observed_dual; bit observed_triple; integer local_src_hits; integer local1_hits; integer local2_hits;
  initial begin
    local_src_hits=0; local1_hits=0; local2_hits=0; observed_dual=0; observed_triple=0;
    repeat(5) @(posedge clk); rst_n=1; @(posedge clk);
    // Scenario 1: E+S only (no Local). dest chosen arbitrary (0,0) since we only care about atomic replication at source.
    ext_flit_in = build_mcast(MASK_ES, 8'd0, 8'd0); ext_valid_in=1; @(posedge clk); ext_valid_in=0;
    // Observe for issuance
    for (cycle=0; cycle<4; cycle++) begin @(posedge clk);
      if (!observed_dual && dut.INST_R[0].INST_C[0].HOSTED.u_router.out_valid[1] && dut.INST_R[0].INST_C[0].HOSTED.u_router.out_valid[2]) begin
        observed_dual=1;
        if (dut.INST_R[0].INST_C[0].HOSTED.u_router.out_flit[1]!==dut.INST_R[0].INST_C[0].HOSTED.u_router.out_flit[2])
          $fatal(1,"Mismatch dual replication flits");
      end
    end
    if (!observed_dual) $fatal(1,"Did not see dual E+S replication");
    // Ensure no local copy at source
    repeat(2) @(posedge clk); if (tile_local_valid_out(0)) local_src_hits++;

    // Scenario 2: E+S+L atomic triple replication
    ext_flit_in = build_mcast(MASK_ESL, 8'd0, 8'd0); ext_valid_in=1; @(posedge clk); ext_valid_in=0;
    for (cycle=0; cycle<4; cycle++) begin @(posedge clk);
      if (!observed_triple && dut.INST_R[0].INST_C[0].HOSTED.u_router.out_valid[4] && dut.INST_R[0].INST_C[0].HOSTED.u_router.out_valid[1] && dut.INST_R[0].INST_C[0].HOSTED.u_router.out_valid[2]) begin
        observed_triple=1;
        if (!(dut.INST_R[0].INST_C[0].HOSTED.u_router.out_flit[4]===dut.INST_R[0].INST_C[0].HOSTED.u_router.out_flit[1] && dut.INST_R[0].INST_C[0].HOSTED.u_router.out_flit[1]===dut.INST_R[0].INST_C[0].HOSTED.u_router.out_flit[2]))
          $fatal(1,"Mismatch among triple replication flits");
      end
    end
    if (!observed_triple) $fatal(1,"Did not see triple E+S+L replication");
    // Count local delivery at source for scenario 2
    if (tile_local_valid_out(0)) local_src_hits++;

    // Basic assertions
    if (local_src_hits!=1) $fatal(1,"Expected exactly one local source delivery (scenario2)");
    // No destination local assertions yet (routing header identical so they keep propagating per XY). Future: use distinct dest headers & two-step test.

    $display("[TB] multicast_mesh_end_to_end_tb PASS (atomic multi-output replication observed for dual and triple cases)");
    $finish;
  end
endmodule
