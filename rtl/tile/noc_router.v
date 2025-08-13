// File: rtl/tile/noc_router.v
// A simple 5-port router stub for synthesis.
// N, E, S, W, Local ports (0, 1, 2, 3, 4)

module noc_router #(
    parameter FLIT_W = 64
)(
    input                          clk,
    input                          rst_n,
    // Flattened ports from neuraedge_tile
    input  [5*FLIT_W-1:0]         flit_in,
    input  [4:0]                  valid_in,
    output [4:0]                  ready_out,
    output [5*FLIT_W-1:0]         flit_out,
    output [4:0]                  valid_out,
    input  [4:0]                  ready_in
);

    // Internal signals for routing logic (Verilog-2005 compatible)
    wire [FLIT_W-1:0] flit_in_0, flit_in_1, flit_in_2, flit_in_3, flit_in_4;
    wire valid_in_0, valid_in_1, valid_in_2, valid_in_3, valid_in_4;
    reg ready_out_0, ready_out_1, ready_out_2, ready_out_3, ready_out_4;
    reg [FLIT_W-1:0] flit_out_0, flit_out_1, flit_out_2, flit_out_3, flit_out_4;
    reg valid_out_0, valid_out_1, valid_out_2, valid_out_3, valid_out_4;
    wire ready_in_0, ready_in_1, ready_in_2, ready_in_3, ready_in_4;

    // Unpack flattened inputs
    assign flit_in_0  = flit_in[0*FLIT_W +: FLIT_W];
    assign flit_in_1  = flit_in[1*FLIT_W +: FLIT_W];
    assign flit_in_2  = flit_in[2*FLIT_W +: FLIT_W];
    assign flit_in_3  = flit_in[3*FLIT_W +: FLIT_W];
    assign flit_in_4  = flit_in[4*FLIT_W +: FLIT_W];
    
    assign valid_in_0 = valid_in[0];
    assign valid_in_1 = valid_in[1];
    assign valid_in_2 = valid_in[2];
    assign valid_in_3 = valid_in[3];
    assign valid_in_4 = valid_in[4];
    
    assign ready_in_0 = ready_in[0];
    assign ready_in_1 = ready_in[1];
    assign ready_in_2 = ready_in[2];
    assign ready_in_3 = ready_in[3];
    assign ready_in_4 = ready_in[4];

    // Pack outputs
    assign flit_out = {flit_out_4, flit_out_3, flit_out_2, flit_out_1, flit_out_0};
    assign valid_out = {valid_out_4, valid_out_3, valid_out_2, valid_out_1, valid_out_0};
    assign ready_out = {ready_out_4, ready_out_3, ready_out_2, ready_out_1, ready_out_0};

    // --- Simple Router Logic Stub ---
    // For now, just loop back from input to output for each port.
    // A real implementation would have routing logic here.
    always @(*) begin
        flit_out_0  = flit_in_0;
        flit_out_1  = flit_in_1;
        flit_out_2  = flit_in_2;
        flit_out_3  = flit_in_3;
        flit_out_4  = flit_in_4;
        
        valid_out_0 = valid_in_0;
        valid_out_1 = valid_in_1;
        valid_out_2 = valid_in_2;
        valid_out_3 = valid_in_3;
        valid_out_4 = valid_in_4;
        
        ready_out_0 = ready_in_0;
        ready_out_1 = ready_in_1;
        ready_out_2 = ready_in_2;
        ready_out_3 = ready_in_3;
        ready_out_4 = ready_in_4;
    end

endmodule
