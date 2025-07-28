// File: formal/noc_router_props.sv
module noc_router_props (
  input logic clk,
  input logic rst_n,
  input logic [63:0] flit_in[5],
  input logic       valid_in[5],
  input logic       ready_in[5],
  output logic [63:0] flit_out[5],
  output logic       valid_out[5],
  output logic       ready_out[5]
);
  `ifdef FORMAL
    // Assume reset at start
    initial assume(rst_n == 0);
    // Placeholder assertion
    always @(posedge clk) if (valid_in[0] && ready_in[0]) assert(valid_out[0]);
  `endif
endmodule
