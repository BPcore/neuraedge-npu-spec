`timescale 1ns/1ps
/* verilator lint_off TIMESCALEMOD */
// File: formal/noc_router.v
`ifndef NOC_ROUTER_PRIMARY_SV
// Formal version of noc_router (only compiled in formal flows when primary not selected)
module noc_router #(
    parameter FLIT_WIDTH = 64,
    parameter PORTS      = 5
)(
    input  logic clk,
    input  logic rst_n,
    input  logic [FLIT_WIDTH-1:0] flit_in [PORTS],
    input  logic                  valid_in[PORTS],
    output logic                  ready_out[PORTS],
    output logic [FLIT_WIDTH-1:0] flit_out[PORTS],
    output logic                  valid_out[PORTS],
    input  logic                  ready_in[PORTS]
);
  // Simple loopback stub
  always_comb begin
    for (int i = 0; i < PORTS; i++) begin
      flit_out[i]  = flit_in[i];
      valid_out[i] = valid_in[i];
      ready_out[i] = ready_in[i];
    end
  end
endmodule
`endif // NOC_ROUTER_PRIMARY_SV
