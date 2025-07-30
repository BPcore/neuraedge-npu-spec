// File: rtl/tile/noc_router.v
// A simple 5-port router stub for synthesis.
// N, E, S, W, Local ports (0, 1, 2, 3, 4)

module noc_router #(
    parameter FLIT_W = 64
)(
    input  logic                   clk,
    input  logic                   rst_n,
    // Flattened ports from neuraedge_tile
    input  logic [5*FLIT_W-1:0]      flit_in,
    input  logic [4:0]               valid_in,
    output logic [4:0]               ready_out,
    output logic [5*FLIT_W-1:0]      flit_out,
    output logic [4:0]               valid_out,
    input  logic [4:0]               ready_in
);

    // Internal unpacked signals for routing logic
    logic [FLIT_W-1:0] flit_in_unpacked   [0:4];
    logic              valid_in_unpacked  [0:4];
    logic              ready_out_unpacked [0:4];
    logic [FLIT_W-1:0] flit_out_unpacked  [0:4];
    logic              valid_out_unpacked [0:4];
    logic              ready_in_unpacked  [0:4];

    // Unpack flattened inputs
    genvar i;
    generate
        for (i = 0; i < 5; i = i + 1) begin : UNPACK
            assign flit_in_unpacked[i]   = flit_in[i*FLIT_W +: FLIT_W];
            assign valid_in_unpacked[i]  = valid_in[i];
            assign ready_in_unpacked[i]  = ready_in[i];
        end
    endgenerate

    // Pack outputs for flattening
    generate
        for (i = 0; i < 5; i = i + 1) begin : PACK
            assign flit_out[i*FLIT_W +: FLIT_W] = flit_out_unpacked[i];
            assign valid_out[i]                = valid_out_unpacked[i];
            assign ready_out[i]                = ready_out_unpacked[i];
        end
    endgenerate

    // --- Simple Router Logic Stub ---
    // For now, just loop back from input to output for each port.
    // A real implementation would have routing logic here.
    generate
        for (i = 0; i < 5; i = i + 1) begin : LOOPBACK
            assign flit_out_unpacked[i]  = flit_in_unpacked[i];
            assign valid_out_unpacked[i] = valid_in_unpacked[i];
            assign ready_out_unpacked[i] = ready_in_unpacked[i];
        end
    endgenerate

endmodule
