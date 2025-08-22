// File: rtl/router/router_cell.v
`define ROUTER_DEBUG
// Single router cell for 2D mesh NoC with 5 ports, FIFOs, XY-routing, arbitration, and boundary hooks

// `include "fifo.v"


module router_cell #(
    parameter FLIT_W = 64,
    parameter FIFO_DEPTH = 4,
    parameter ROWS = 2,
    parameter COLS = 2,
    parameter R = 0,
    parameter C = 0,
    // Experimental multicast enable (fanout replication). Default 0 keeps legacy behavior.
    // When ENABLE_MCAST==1, multicast flagged flits (bit MCAST_FLAG_BIT) will be handled.
    // NOTE: Replication logic not yet implemented – enabling will trigger a synthesis/sim time error for now.
    parameter ENABLE_MCAST = 0,
    // When set, multicast flag bit is cleared in replicated outputs so downstream routers treat copies as unicast (prevents unintended multi-hop cascading)
    parameter MCAST_CLEAR_ON_SEND = 1,
    // Header bit locations (only used if ENABLE_MCAST)
    parameter int MCAST_FLAG_BIT = 31,
    // Mask bits for 5 outputs (N,E,S,W,L) packed starting at MCAST_MASK_LSB (default bits 30:26)
    parameter int MCAST_MASK_LSB = 26
)(
    input  logic clk,
    input  logic rst_n,
    // 5 directional ports (N,E,S,W,L) flattened
    input  logic [FLIT_W*5-1:0] flit_in_flat,
    input  logic [4:0]          valid_in_flat,
    output logic [4:0]          ready_out_flat,
    output logic [FLIT_W*5-1:0] flit_out_flat,
    output logic [4:0]          valid_out_flat,
    input  logic [4:0]          ready_in_flat,
    // Host (maps to Local port L=4)
    input  logic [FLIT_W-1:0]   ext_flit_in,
    input  logic                ext_valid_in,
    output logic                ext_ready_out,
    output logic [FLIT_W-1:0]   ext_flit_out,
    output logic                ext_valid_out,
    input  logic                ext_ready_in
);
    // ------------------------------------------------------------------
    // Unpack inputs
    logic [FLIT_W-1:0] in_flit [0:4];
    logic              in_valid[0:4];
    logic              in_ready[0:4];
    logic [FLIT_W-1:0] out_flit[0:4];
    logic              out_valid[0:4];
    logic              out_ready[0:4];
    genvar gv;
    // Expect flat ordering [N,E,S,W,L] (0..4)
    generate
        for (gv=0; gv<5; gv=gv+1) begin : UNPACK
            assign in_flit[gv]  = flit_in_flat [gv*FLIT_W +: FLIT_W];
            assign in_valid[gv] = valid_in_flat[gv];
            assign ready_out_flat[gv] = in_ready[gv];
            assign flit_out_flat [gv*FLIT_W +: FLIT_W] = out_flit[gv];
            assign valid_out_flat[gv] = out_valid[gv];
            assign out_ready[gv] = ready_in_flat[gv];
        end
    endgenerate
    // Host <-> Local port multiplex (inject + extract)
    // Treat host injection as an additional OR into local input (simple for now)
    wire host_in_accept = ext_valid_in && in_ready[4];
    wire local_in_valid = in_valid[4] || ext_valid_in;
    wire [FLIT_W-1:0] local_in_flit = ext_valid_in ? ext_flit_in : in_flit[4];
    assign ext_ready_out = in_ready[4];
    assign ext_flit_out  = out_flit[4];
    assign ext_valid_out = out_valid[4];

    // Replace original local signals
    wire [FLIT_W-1:0] adj_in_flit [0:4];
    wire              adj_in_valid[0:4];
    generate
        for (gv=0; gv<5; gv=gv+1) begin : LOCAL_MERGE
            assign adj_in_flit[gv]  = (gv==4) ? local_in_flit  : in_flit[gv];
            assign adj_in_valid[gv] = (gv==4) ? local_in_valid : in_valid[gv];
        end
    endgenerate

    // ------------------------------------------------------------------
    // Per-port input FIFOs (simple ready/valid buffering)
    logic [FLIT_W-1:0] fifo_dout [0:4];
    logic              fifo_dv   [0:4];
    logic              fifo_pop  [0:4];
    generate
        for (gv=0; gv<5; gv=gv+1) begin : INFIFO
            fifo #(.WIDTH(FLIT_W), .DEPTH(FIFO_DEPTH)) infifo (
                .clk(clk), .rst_n(rst_n),
                .din(adj_in_flit[gv]), .din_valid(adj_in_valid[gv]), .din_ready(in_ready[gv]),
                .dout(fifo_dout[gv]), .dout_valid(fifo_dv[gv]), .dout_ready(fifo_pop[gv])
            );
        end
    endgenerate

    // ------------------------------------------------------------------
    // Minimal XY routing: assume flit header[15:8]=dest_row, [7:0]=dest_col (if width>=16)
    function automatic [2:0] route_dir(input [FLIT_W-1:0] flit);
        if (FLIT_W < 16) begin route_dir = 3'd4; end
        else begin
            logic [7:0] dest_r = flit[15:8];
            logic [7:0] dest_c = flit[7:0];
            // Cast parameters to 8-bit for aligned unsigned comparison to silence UNSIGNED warnings
            logic [7:0] this_r = 8'(R);
            logic [7:0] this_c = 8'(C);
            if (dest_r < this_r) route_dir = 3'd0; // North
            else if (dest_r > this_r) route_dir = 3'd2; // South
            else if (dest_c < this_c) route_dir = 3'd3; // West
            else if (dest_c > this_c) route_dir = 3'd1; // East
            else route_dir = 3'd4; // Local
        end
    endfunction

    // Collect requests per output port (precompute target direction per input)
    logic [2:0] target_dir[0:4];
    logic [4:0] req_to_out [0:4]; // [input][output]
    // Multicast decoded masks per input (if feature enabled)
    logic [4:0] mcast_mask[0:4];
    logic       mcast_flag[0:4];
    integer i,j,k; // k reused later
    always @(*) begin
        for (i=0;i<5;i=i+1) begin
            target_dir[i] = route_dir(fifo_dout[i]);
            for (j=0;j<5;j=j+1) req_to_out[i][j]=1'b0;
            // Decode multicast fields
            if (ENABLE_MCAST && FLIT_W > MCAST_FLAG_BIT) begin
                mcast_flag[i] = fifo_dout[i][MCAST_FLAG_BIT];
                if (FLIT_W > (MCAST_MASK_LSB+4)) mcast_mask[i] = fifo_dout[i][MCAST_MASK_LSB +: 5];
                else mcast_mask[i] = 5'b0;
            end else begin
                mcast_flag[i] = 1'b0; mcast_mask[i]=5'b0;
            end
            if (fifo_dv[i]) begin
                if (mcast_flag[i]) begin
                    // Minimal replication: each set bit in mask requests that output (mask bits correspond to [N,E,S,W,L])
                    for (j=0;j<5;j=j+1) if (mcast_mask[i][j]) req_to_out[i][j] = 1'b1;
                    // Safety fallback: if mask empty treat as normal unicast to target
                    if (mcast_mask[i]==5'b0) req_to_out[i][ target_dir[i] ] = 1'b1;
                end else begin
                    req_to_out[i][ target_dir[i] ] = 1'b1;
                end
            end
        end
    end

    // Round-robin pointer per output
    reg [2:0] rr_ptr[0:4];
    always @(posedge clk) begin
        if (!rst_n) begin
            for (j=0;j<5;j=j+1) rr_ptr[j] <= 0;
        end else begin
            for (j=0;j<5;j=j+1) begin
                // Advance pointer if a flit issued on this output
                if (out_valid[j] && out_ready[j]) begin
                    if (rr_ptr[j] == 3'd4) rr_ptr[j] <= 3'd0; else rr_ptr[j] <= rr_ptr[j] + 3'd1; // manual wrap
                end
            end
        end
    end

    // Arbitration: for each output select first requesting input starting at rr_ptr
    reg [2:0] sel_in[0:4];
    reg       sel_valid[0:4];
    reg [2:0] order[0:4];
    always @(*) begin
        for (j=0;j<5;j=j+1) begin
            sel_in[j] = 3'd0; sel_valid[j]=1'b0;
            order[0] = rr_ptr[j];
            order[1] = (order[0]==3'd4)?3'd0:order[0]+3'd1;
            order[2] = (order[1]==3'd4)?3'd0:order[1]+3'd1;
            order[3] = (order[2]==3'd4)?3'd0:order[2]+3'd1;
            order[4] = (order[3]==3'd4)?3'd0:order[3]+3'd1;
            for (k=0;k<5;k=k+1) begin
                if (!sel_valid[j] && req_to_out[ order[k] ][j]) begin
                    sel_in[j] = order[k]; sel_valid[j]=1'b1; end
            end
        end
    end

    // Drive outputs (supports multicast: multiple outputs may source same input flit on same cycle)
    // Refactored to avoid per-output always blocks inside generate (Yosys/formal friendliness)
    // Compute for each output whether its selected input is also selected by another output (multicast replication)
    reg multi_for_input    [0:4];
    reg all_ready_for_input[0:4];
    integer og, og2; // reuse loop vars
    always @(*) begin
        for (og=0; og<5; og=og+1) begin
            multi_for_input[og]     = 1'b0;
            all_ready_for_input[og] = 1'b1; // AND reduction over all replicated outputs' readiness
        end
        for (og=0; og<5; og=og+1) begin
            if (sel_valid[og]) begin
                // Detect any other output selecting same input
                for (og2=0; og2<5; og2=og2+1) begin
                    if (og2!=og && sel_valid[og2] && sel_in[og2]==sel_in[og]) begin
                        multi_for_input[og] = 1'b1;
                    end
                end
                // If replicated, ensure all participating outputs ready before any fire (atomic gating)
                if (multi_for_input[og]) begin
                    for (og2=0; og2<5; og2=og2+1) begin
                        if (sel_valid[og2] && sel_in[og2]==sel_in[og] && !out_ready[og2]) begin
                            all_ready_for_input[og] = 1'b0;
                        end
                    end
                end
            end
        end
    end

    // Output valids and flits
    generate
        genvar gvo;
        for (gvo=0; gvo<5; gvo=gvo+1) begin : OUTS
            wire sel = sel_valid[gvo];
            wire [2:0] si = sel_in[gvo];
            wire fire = sel && (!multi_for_input[gvo] || (multi_for_input[gvo] && all_ready_for_input[gvo]));
            assign out_valid[gvo] = fire;
            wire [FLIT_W-1:0] replicated_flit = fire ? fifo_dout[si] : {FLIT_W{1'b0}};
            wire [FLIT_W-1:0] replicated_flit_cleared = (ENABLE_MCAST && MCAST_CLEAR_ON_SEND && mcast_flag[si]) ? (replicated_flit & ~( { { (FLIT_W-1){1'b0} }, 1'b1 } << MCAST_FLAG_BIT)) : replicated_flit;
            assign out_flit[gvo] = replicated_flit_cleared;
        end
    endgenerate

    // Pop logic with multicast: an input may be granted on multiple outputs; only pop after all granted outputs accept.
    // Track for current cycle whether each input was selected by any output and whether all such outputs are ready.
    logic [4:0] input_selected;      // bit i set if any output selects input i
    logic [4:0] input_all_ready;     // all selected outputs for input i are ready this cycle
    integer oi;
    always @(*) begin
        for (i=0;i<5;i=i+1) begin
            input_selected[i] = 1'b0;
            input_all_ready[i]= 1'b1; // AND reduction over selected outputs
        end
        for (oi=0; oi<5; oi=oi+1) begin
            if (sel_valid[oi]) begin
                input_selected[ sel_in[oi] ] = 1'b1;
                if (!out_ready[oi]) input_all_ready[ sel_in[oi] ] = 1'b0;
            end
        end
    end
    genvar pg;
    generate
        for (pg=0; pg<5; pg=pg+1) begin : POPS
            assign fifo_pop[pg] = input_selected[pg] && input_all_ready[pg];
        end
    endgenerate

    // Optional debug (synth-off) to trace first flit route decisions
`ifdef ROUTER_DEBUG
    always @(posedge clk) if (rst_n) begin
        integer d;
        for (d=0; d<5; d=d+1) begin
            if (fifo_dv[d]) $display("[RC DBG] (%0d,%0d) input%0d target_dir=%0d hdr_r=%0d hdr_c=%0d", R,C,d,target_dir[d], fifo_dout[d][15:8], fifo_dout[d][7:0]);
        end
        for (d=0; d<5; d=d+1) begin
            if (out_valid[d]) $display("[RC DBG] (%0d,%0d) send dir %0d flit hdr_r=%0d hdr_c=%0d", R,C,d,out_flit[d][15:8], out_flit[d][7:0]);
        end
    end
`endif

    // Simple simulation assertions (not synthesizable) for multicast correctness
`ifndef SYNTHESIS
    always @(posedge clk) if (rst_n && ENABLE_MCAST) begin
        // Check: an input cannot be popped twice in same cycle
    integer pcount; integer id; integer a,b;
        for (id=0; id<5; id=id+1) begin
            pcount = fifo_pop[id]; // boolean only
            // No multi-pop risk since fifo_pop is 1 bit; placeholder for future if widened
        end
        // If multiple outputs valid with same sel_in, they must carry identical flits (implicitly true) – sanity compare pairs
        for (a=0; a<5; a=a+1) begin
            if (out_valid[a]) begin
                for (b=a+1; b<5; b=b+1) begin
                    if (out_valid[b] && sel_in[a]==sel_in[b]) begin
                        if (out_flit[a] !== out_flit[b]) begin
                            $fatal(1,"[MCAST ASSERT] Mismatched replicated flits on outputs %0d and %0d", a,b);
                        end
                    end
                end
            end
        end
    end
`endif

    // Compile / run time guard: if someone tries to enable multicast before implementation is complete.
    // Warning when multicast enabled (can be removed later once stable)
    generate if (ENABLE_MCAST) begin : MCAST_ENABLED_MSG
        initial $display("[INFO] Multicast replication ENABLED (mask-based).");
    end endgenerate

endmodule
