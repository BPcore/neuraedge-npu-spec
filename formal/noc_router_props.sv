// File: formal/noc_router_props.sv
// Description: Formal properties for the NoC router.

module noc_router_props (
    input logic                      clk,
    input logic                      rst_n,

    // Router Interface Inputs
    input logic [63:0]               flit_in[5],
    input logic                      valid_in[5],
    input logic                      ready_in[5],

    // Router Interface Outputs
    output logic [63:0]              flit_out[5],
    output logic                     valid_out[5],
    output logic                     ready_out[5]
);

    // --- Assumptions ---
    // Assume reset is held for at least one cycle.
    initial assume(rst_n == 0);

    // --- Assertions ---
    // Basic liveness property: If a flit is valid and the receiver is ready,
    // it should eventually be processed.
    // NOTE: This will fail with the current loopback stub but serves as a placeholder.
    `ifdef FORMAL
    always @(posedge clk) begin
        if (valid_in[0] && ready_in[0]) begin
            assert property (valid_out[0]);
        end
    end
    `endif

endmodule
