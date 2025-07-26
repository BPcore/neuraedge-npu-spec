// File: rtl/tile/neuraedge_tile.v
module neuraedge_tile #(
    parameter PE_ROWS      = 32,
    parameter PE_COLS      = 64,
    parameter NOC_FLIT_W   = 64
)(
    input  logic                       clk,
    input  logic                       rst_n,
    input  logic [NOC_FLIT_W-1:0]      flit_in [5],
    input  logic                       valid_in[5],
    output logic                       ready_out[5],
    output logic [NOC_FLIT_W-1:0]      flit_out[5],
    output logic                       valid_out[5],
    input  logic                       ready_in[5]
);
  // Instantiate PE array
  neuraedge_pe pe_array [PE_ROWS-1:0][PE_COLS-1:0] (
    .clk(clk), .rst_n(rst_n)
    // TODO: connect data/weight signals
  );

  // NoC router stub
  noc_router #(.FLIT_WIDTH(NOC_FLIT_W), .PORTS(5)) router (
    .clk(clk), .rst_n(rst_n),
    .flit_in(flit_in), .valid_in(valid_in), .ready_out(ready_out),
    .flit_out(flit_out), .valid_out(valid_out), .ready_in(ready_in)
  );

  // TODO: PE–NoC interconnect logic

endmodule
