// File: rtl/noc/noc_router.v
// Description: 5-port Network-on-Chip (NoC) router for a single tile.
//              Handles routing between neighboring tiles and the local PE array.

module noc_router #(
    parameter FLIT_WIDTH = 64,
    parameter PORTS = 5
)(
    input  logic clk,
    input  logic rst_n,

    // Input Ports
    input  logic [FLIT_WIDTH-1:0] flit_in[PORTS],
    input  logic                  valid_in[PORTS],
    output logic                  ready_out[PORTS],

    // Output Ports
    output logic [FLIT_WIDTH-1:0] flit_out[PORTS],
    output logic                  valid_out[PORTS],
    input  logic                  ready_in[PORTS]
);

    // --- Router Logic Stub ---
    // For Week 2, this is a simple loopback to ensure connectivity.
    // In later weeks, this will be replaced with routing logic, arbiters,
    // and virtual channel buffers.
    always_comb begin
        for (int i = 0; i < PORTS; i++) begin
            flit_out[i]  = flit_in[i];
            valid_out[i] = valid_in[i];
            ready_out[i] = ready_in[i];
        end
    end

endmodule
