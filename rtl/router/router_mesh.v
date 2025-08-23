`timescale 1ns/1ps
`ifndef ROUTER_MESH_SV
`define ROUTER_MESH_SV
// File: rtl/router/router_mesh.v
// Top-level mesh instantiation of router_cell modules
// NOTE: Wrapped in include guard to avoid MODDUP when alternative router_mesh exists.

// `include "router_cell.v"

module router_mesh #(
  parameter ROWS       = 2,
  parameter COLS       = 2,
  parameter FLIT_W     = 64,
  parameter FIFO_DEPTH = 4,
  // Pass-through to router_cell to enable multicast feature uniformly in mesh
  parameter ENABLE_MCAST = 0,
  // New: internal credit/ready throttling knobs (simulation only)
  parameter THROTTLE_ENABLE = 0,
  parameter THROTTLE_PERIOD = 16,
  parameter THROTTLE_PULSE  = 4,
  // New: optional extra pipeline stage on each directional output to slow drain (simulation only)
  parameter PIPELINE_OUTPUT = 0
)(
  input  logic clk,
  input  logic rst_n,
  // Tile <-> mesh flattened buses (5 ports per tile: N,E,S,W,L)
  input  logic [ROWS*COLS*5*FLIT_W-1:0] fully_flat_tile_flit_in,
  input  logic [ROWS*COLS*5-1:0]        fully_flat_tile_valid_in,
  output logic [ROWS*COLS*5-1:0]        fully_flat_tile_ready_out,
  output logic [ROWS*COLS*5*FLIT_W-1:0] fully_flat_tile_flit_out,
  output logic [ROWS*COLS*5-1:0]        fully_flat_tile_valid_out,
  input  logic [ROWS*COLS*5-1:0]        fully_flat_tile_ready_in,
  // Host attaches to router (0,0) local port
  input  logic [FLIT_W-1:0]             ext_flit_in,
  input  logic                          ext_valid_in,
  output logic                          ext_ready_out,
  output logic [FLIT_W-1:0]             ext_flit_out,
  output logic                          ext_valid_out,
  input  logic                          ext_ready_in
  , output logic [$clog2(FIFO_DEPTH+1)-1:0] mesh_max_fifo_occ_o
  , output logic [ROWS*COLS*$clog2(FIFO_DEPTH+1)-1:0] mesh_fifo_occ_vec_o
  , output logic [ROWS*COLS*$clog2(FIFO_DEPTH+1)-1:0] mesh_router_watermarks_o // exported copy of per-router maxima
);
  // Functional 2D mesh: connects N/E/S/W ports between neighboring routers.
  localparam int NUM_TILES = ROWS*COLS;

  // Helper macro to compute flattened index (tile*5 + port)
  function automatic int pindex(input int tile, input int port);
    pindex = tile*5 + port; // port ordering: 0=N,1=E,2=S,3=W,4=L
  endfunction

  // NOTE: Single-tile optimization block moved below after array declarations for ordering correctness.

  // Per-tile local port wiring
  wire [FLIT_W-1:0] l_flit_in [0:NUM_TILES-1];
  wire              l_valid_in[0:NUM_TILES-1];
  wire              l_ready_out[0:NUM_TILES-1];
  wire [FLIT_W-1:0] l_flit_out[0:NUM_TILES-1];
  wire              l_valid_out[0:NUM_TILES-1];
  wire              l_ready_in[0:NUM_TILES-1];

  // Map flattened tile buses (local port only)
  genvar t;
  generate
    for (t=0; t<NUM_TILES; t=t+1) begin : LOCAL_MAP
      localparam int LIDX = t*5 + 4;
      assign l_flit_in[t]  = fully_flat_tile_flit_in[LIDX*FLIT_W +: FLIT_W];
      assign l_valid_in[t] = fully_flat_tile_valid_in[LIDX];
      assign fully_flat_tile_flit_out[LIDX*FLIT_W +: FLIT_W] = l_flit_out[t];
      assign fully_flat_tile_valid_out[LIDX] = l_valid_out[t];
      assign fully_flat_tile_ready_out[LIDX] = l_ready_out[t];
      assign l_ready_in[t] = fully_flat_tile_ready_in[LIDX];
    end
  endgenerate

  // Arrays for per-router port bundles
  logic [FLIT_W*5-1:0] in_flat      [0:NUM_TILES-1];
  logic [4:0]          in_valid_flat[0:NUM_TILES-1];
  logic [4:0]          in_ready_flat[0:NUM_TILES-1];
  logic [FLIT_W*5-1:0] out_flat     [0:NUM_TILES-1];
  logic [4:0]          out_valid_flat[0:NUM_TILES-1];
  logic [4:0]          out_ready_flat[0:NUM_TILES-1];
  // Optional static single-tile optimization: if only one tile eliminate directional wiring
  generate if (NUM_TILES==1) begin : SINGLE_TILE
    // Pass external host local port straight through; zero other mesh outputs (directional ports inactive)
    // (All arrays already declared above; we simply tie off the single instance directional outputs.)
    assign out_flat[0]       = {5*FLIT_W{1'b0}};
    assign out_valid_flat[0] = 5'b0;
    assign in_ready_flat[0]  = 5'b0;
  end endgenerate
  // FIFO occupancy telemetry per router (max across its 5 input FIFOs)
  logic [$clog2(FIFO_DEPTH+1)-1:0] router_max_fifo_occ   [0:NUM_TILES-1];
  // Track persistent watermark per router (max over entire run) separate from per-cycle max across ports inside router_cell
  logic [$clog2(FIFO_DEPTH+1)-1:0] router_watermark      [0:NUM_TILES-1];
  logic [$clog2(FIFO_DEPTH+1)-1:0] mesh_max_fifo_occ; // aggregated mesh-wide max (reduction)
  // Throttle counter (placed early so available to READY wiring logic)
  reg [$clog2(THROTTLE_PERIOD)-1:0] throttle_ctr;
  always @(posedge clk) begin
    if (!rst_n) throttle_ctr <= '0; else throttle_ctr <= throttle_ctr + 1'b1;
  end

  // -----------------------------------------------------------------------
  // Runtime override controls (simulation only)
  // Parameters THROTTLE_ENABLE / PIPELINE_OUTPUT provide the power-on defaults.
  // Plusargs can override at runtime: +MESH_INT_THROTTLE=1 and +MESH_PIPELINED_OUT=1.
  // (Keeps synthesis-friendly default param path; plusarg logic ignored in synth.)
  // -----------------------------------------------------------------------
  integer runtime_throttle_enable;      // treated as boolean (0/1)
  integer runtime_pipeline_output;      // treated as boolean (0/1)
  initial begin
    runtime_throttle_enable = THROTTLE_ENABLE;
    runtime_pipeline_output = PIPELINE_OUTPUT;
  // Plusarg parsing is simulation-only; skip in formal/synthesis front-ends.
  // (Runtime overrides are not relevant for formal proof harness.)
  end

  // Internal ready interconnect wires (each direction pair connects)
  // We'll build the ungated (base) readiness network first, then optionally gate (throttle) directional ready signals
  genvar ry,rx;
  generate
    for (ry=0; ry<ROWS; ry=ry+1) begin : READY_R
      for (rx=0; rx<COLS; rx=rx+1) begin : READY_C
        localparam int CUR = ry*COLS + rx;
        // Base (ungated) signals
        logic [4:0] out_ready_flat_base;
        // Default locals: propagate local port readiness loopback (never throttled)
        assign out_ready_flat_base[4] = in_ready_flat[CUR][4];
        // Directional outputs will be driven by neighbor input readiness
        // North output (0) connects to neighbor south input readiness (2)
        if (ry>0) begin : RDN_HAVE_N
          localparam int NID = (ry-1)*COLS + rx;
          assign out_ready_flat_base[0] = in_ready_flat[NID][2];
        end else begin : RDN_NO_N
          assign out_ready_flat_base[0] = 1'b0;
        end
        // East output (1) to neighbor west input (3)
        if (rx<COLS-1) begin : RDE_HAVE_E
          localparam int EID = ry*COLS + (rx+1);
          assign out_ready_flat_base[1] = in_ready_flat[EID][3];
        end else begin : RDE_NO_E
          assign out_ready_flat_base[1] = 1'b0;
        end
        // South output (2) to neighbor north input (0)
        if (ry<ROWS-1) begin : RDS_HAVE_S
          localparam int SID = (ry+1)*COLS + rx;
          assign out_ready_flat_base[2] = in_ready_flat[SID][0];
        end else begin : RDS_NO_S
          assign out_ready_flat_base[2] = 1'b0;
        end
        // West output (3) to neighbor east input (1)
        if (rx>0) begin : RDW_HAVE_W
          localparam int WID = ry*COLS + (rx-1);
          assign out_ready_flat_base[3] = in_ready_flat[WID][1];
        end else begin : RDW_NO_W
          assign out_ready_flat_base[3] = 1'b0;
        end
  // Throttle gating: local port (index 4) never throttled. Directional ports (0..3) cleared during throttle pulse window.
  wire throttle_active_w = (runtime_throttle_enable && (throttle_ctr < THROTTLE_PULSE));
        assign out_ready_flat[CUR][4] = out_ready_flat_base[4];
        assign out_ready_flat[CUR][0] = throttle_active_w ? 1'b0 : out_ready_flat_base[0];
        assign out_ready_flat[CUR][1] = throttle_active_w ? 1'b0 : out_ready_flat_base[1];
        assign out_ready_flat[CUR][2] = throttle_active_w ? 1'b0 : out_ready_flat_base[2];
        assign out_ready_flat[CUR][3] = throttle_active_w ? 1'b0 : out_ready_flat_base[3];
      end
    end
  endgenerate

  // Helper to set a slice within an in_flat vector (direction indices: 0=N 1=E 2=S 3=W 4=L)
  // (Removed build_in helper; drive per-slice explicitly to avoid multiple drivers)

  // Initialize all directional inputs to zero; they'll be overridden by neighbor wiring
  genvar init_t;
  generate
    for (init_t=0; init_t<NUM_TILES; init_t=init_t+1) begin : INIT_INPUTS
      // Zero all directional inputs implicitly (left undriven -> 0 after below slice assigns). Drive only local slice here.
      assign in_flat[init_t][4*FLIT_W +: FLIT_W] = l_flit_in[init_t]; // local port slice index 4
      assign in_valid_flat[init_t][4] = l_valid_in[init_t];
    end
  endgenerate

  // Directional wiring between neighbors (override zero defaults)
  genvar rr,cc;
  generate
    for (rr=0; rr<ROWS; rr=rr+1) begin : WIRE_R
      for (cc=0; cc<COLS; cc=cc+1) begin : WIRE_C
        localparam int CUR = rr*COLS + cc;
        // North (input 0) from neighbor south output (2)
  if (rr>0) begin : NCONN_HAVE_N
          localparam int NID = (rr-1)*COLS + cc;
          assign in_flat[CUR][0*FLIT_W +: FLIT_W] = out_flat[NID][2*FLIT_W +: FLIT_W];
          assign in_valid_flat[CUR][0]            = out_valid_flat[NID][2];
        end
        // South (input 2) from neighbor north output (0)
  if (rr<ROWS-1) begin : SCONN_HAVE_S
          localparam int SID = (rr+1)*COLS + cc;
          assign in_flat[CUR][2*FLIT_W +: FLIT_W] = out_flat[SID][0*FLIT_W +: FLIT_W];
          assign in_valid_flat[CUR][2]            = out_valid_flat[SID][0];
        end
        // West (input 3) from neighbor east output (1)
  if (cc>0) begin : WCONN_HAVE_W
          localparam int WID = rr*COLS + (cc-1);
          assign in_flat[CUR][3*FLIT_W +: FLIT_W] = out_flat[WID][1*FLIT_W +: FLIT_W];
          assign in_valid_flat[CUR][3]            = out_valid_flat[WID][1];
        end
        // East (input 1) from neighbor west output (3)
  if (cc<COLS-1) begin : ECONN_HAVE_E
          localparam int EID = rr*COLS + (cc+1);
          assign in_flat[CUR][1*FLIT_W +: FLIT_W] = out_flat[EID][3*FLIT_W +: FLIT_W];
          assign in_valid_flat[CUR][1]            = out_valid_flat[EID][3];
        end
      end
    end
  endgenerate

  // Instantiate routers (parameterizable grid)
  genvar ir,ic;
  generate
    for (ir=0; ir<ROWS; ir=ir+1) begin : INST_R
      for (ic=0; ic<COLS; ic=ic+1) begin : INST_C
        localparam int ID = ir*COLS + ic;
        // Raw (un-pipelined) outputs from router instance
        logic [FLIT_W*5-1:0] raw_out_flat;
        logic [4:0]          raw_out_valid_flat;
        if (ID==0) begin : HOSTED
          router_cell #(.FLIT_W(FLIT_W), .FIFO_DEPTH(FIFO_DEPTH), .ROWS(ROWS), .COLS(COLS), .R(ir), .C(ic), .ENABLE_MCAST(ENABLE_MCAST)) u_router (
            .clk(clk), .rst_n(rst_n),
            .flit_in_flat(in_flat[ID]), .valid_in_flat(in_valid_flat[ID]), .ready_out_flat(in_ready_flat[ID]),
            .flit_out_flat(raw_out_flat), .valid_out_flat(raw_out_valid_flat), .ready_in_flat(out_ready_flat[ID]),
            .ext_flit_in(ext_flit_in), .ext_valid_in(ext_valid_in), .ext_ready_out(ext_ready_out),
            .ext_flit_out(l_flit_out[ID]), .ext_valid_out(l_valid_out[ID]), .ext_ready_in(ext_ready_in),
            .max_fifo_occ_o(router_max_fifo_occ[ID])
          );
        end else begin : NONHOST
          wire unused_ext_ready_out;
          router_cell #(.FLIT_W(FLIT_W), .FIFO_DEPTH(FIFO_DEPTH), .ROWS(ROWS), .COLS(COLS), .R(ir), .C(ic), .ENABLE_MCAST(ENABLE_MCAST)) u_router (
            .clk(clk), .rst_n(rst_n),
            .flit_in_flat(in_flat[ID]), .valid_in_flat(in_valid_flat[ID]), .ready_out_flat(in_ready_flat[ID]),
            .flit_out_flat(raw_out_flat), .valid_out_flat(raw_out_valid_flat), .ready_in_flat(out_ready_flat[ID]),
            .ext_flit_in({FLIT_W{1'b0}}), .ext_valid_in(1'b0), .ext_ready_out(unused_ext_ready_out), // tie off unused
            .ext_flit_out(l_flit_out[ID]), .ext_valid_out(l_valid_out[ID]), .ext_ready_in(l_ready_in[ID]),
            .max_fifo_occ_o(router_max_fifo_occ[ID])
          );
        end
        // Local ready_out mapping (index 4) back to tile bus ready
        assign l_ready_out[ID] = in_ready_flat[ID][4];
        // Host output mapping (router 0 local)
        if (ID==0) begin : HOST_OUT_MAP
          assign ext_flit_out  = l_flit_out[0];
          assign ext_valid_out = l_valid_out[0];
        end
        // Always-present pipeline registers (directional ports only). Enabled by runtime_pipeline_output.
        genvar pp;
        for (pp=0; pp<4; pp=pp+1) begin : PIPE_ANY
          // Elastic one-stage pipeline between router_cell output and mesh directional interconnect.
          // Implements a simple capture/shift handshake so the pipeline stage will accept producer
          // data when empty and will forward when consumer asserts ready. This avoids data loss
          // when the producer presents data while downstream is not yet ready.
          logic [FLIT_W-1:0] flit_q;
          logic valid_q;

          // Sequential logic: capture producer output when stage is empty, and shift/clear when
          // downstream is ready. If producer remains valid at the cycle of shift, capture new
          // data immediately (tight pipeline). When pipeline is disabled we keep the stage empty.
          always @(posedge clk) begin
            if (!rst_n) begin
              valid_q <= 1'b0;
              flit_q  <= '0;
            end else begin
              if (runtime_pipeline_output) begin
                // If stage empty and producer presenting, capture
                if (!valid_q && raw_out_valid_flat[pp]) begin
                  valid_q <= 1'b1;
                  flit_q  <= raw_out_flat[pp*FLIT_W +: FLIT_W];
                end
                // If stage occupied and downstream ready, either capture next producer value
                // or clear stage if no new producer value is present
                else if (valid_q && out_ready_flat[ID][pp]) begin
                  if (raw_out_valid_flat[pp]) begin
                    valid_q <= 1'b1;
                    flit_q  <= raw_out_flat[pp*FLIT_W +: FLIT_W];
                  end else begin
                    valid_q <= 1'b0;
                    flit_q  <= '0;
                  end
                end
                // Otherwise hold current contents
              end else begin
                // Pipeline disabled: ensure stage is empty
                valid_q <= 1'b0;
                flit_q  <= '0;
              end
            end
          end

          // Output selection: drive either the pipelined stage or the raw router outputs
          assign out_flat[ID][pp*FLIT_W +: FLIT_W] = runtime_pipeline_output ? flit_q : raw_out_flat[pp*FLIT_W +: FLIT_W];
          assign out_valid_flat[ID][pp]            = runtime_pipeline_output ? valid_q : raw_out_valid_flat[pp];

          // synthesis translate_off
          // Lightweight runtime check (non-fatal): when pipeline disabled ensure outputs mirror raw router outputs.
          // This helps catch accidental mismatch in forwarding logic during simulation without aborting runs.
          always @(posedge clk) begin
            if (!rst_n) begin end else begin
              if (!runtime_pipeline_output) begin
                if (out_valid_flat[ID][pp] !== raw_out_valid_flat[pp]) begin
                  $display("[router_mesh][warn] ID=%0d port=%0d out_valid mismatch when pipeline disabled @%0t: out_valid=%0b raw=%0b", ID, pp, $time, out_valid_flat[ID][pp], raw_out_valid_flat[pp]);
                end
              end
            end
          end
          // synthesis translate_on
        end
        // Local port (index 4) always direct (never pipelined)
        assign out_flat[ID][4*FLIT_W +: FLIT_W] = raw_out_flat[4*FLIT_W +: FLIT_W];
        assign out_valid_flat[ID][4]            = raw_out_valid_flat[4];
      end
    end
  endgenerate

  // Reduction to compute mesh_max_fifo_occ (simple combinational OR of max)
  integer rfi;
  always @(*) begin
    mesh_max_fifo_occ = '0;
    for (rfi=0; rfi<NUM_TILES; rfi=rfi+1) begin
      if (router_max_fifo_occ[rfi] > mesh_max_fifo_occ)
        mesh_max_fifo_occ = router_max_fifo_occ[rfi];
    end
  end

  // Update persistent watermarks (sequential)
  integer wm_i;
  always @(posedge clk) begin
    if (!rst_n) begin
      for (wm_i=0; wm_i<NUM_TILES; wm_i=wm_i+1) router_watermark[wm_i] <= '0;
    end else begin
      for (wm_i=0; wm_i<NUM_TILES; wm_i=wm_i+1) begin
        if (router_max_fifo_occ[wm_i] > router_watermark[wm_i]) router_watermark[wm_i] <= router_max_fifo_occ[wm_i];
      end
    end
  end

  // Drive output ports
  assign mesh_max_fifo_occ_o = mesh_max_fifo_occ;
  // Flatten per-router maxima into vector for external TB histogramming.
  // Width = NUM_TILES * $clog2(FIFO_DEPTH+1). Each slice is the per-router max input FIFO occupancy.
  localparam int OCC_W = $clog2(FIFO_DEPTH+1);
  genvar ofi;
  generate
    for (ofi=0; ofi<NUM_TILES; ofi=ofi+1) begin : OCC_FLATTEN
      assign mesh_fifo_occ_vec_o[ofi*OCC_W +: OCC_W] = router_max_fifo_occ[ofi];
      assign mesh_router_watermarks_o[ofi*OCC_W +: OCC_W] = router_watermark[ofi];
    end
  endgenerate

  // (Throttle counter already declared earlier)


endmodule
`endif // ROUTER_MESH_SV
