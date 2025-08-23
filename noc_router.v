`timescale 1ns/1ps
/* verilator lint_off TIMESCALEMOD */
// File: rtl/noc/noc_router.v
`ifndef NOC_ROUTER_PRIMARY_SV
module noc_router #(
    parameter FLIT_WIDTH = 64,
    parameter PORTS      = 5
)(
    input  logic clk,
    input  logic rst_n,
    input  logic [PORTS-1:0][FLIT_WIDTH-1:0] flit_in,
    input  logic [PORTS-1:0]                valid_in,
    output logic [PORTS-1:0]                ready_out,
    output logic [PORTS-1:0][FLIT_WIDTH-1:0] flit_out,
    output logic [PORTS-1:0]                valid_out,
    input  logic [PORTS-1:0]                ready_in
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
