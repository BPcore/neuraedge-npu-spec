module sram_bank #(
  parameter NUM_BANKS   = 4,
  parameter ADDR_WIDTH  = 10,
  parameter DATA_WIDTH  = 32
)(
  input  logic                    clk,
  input  logic                    rst_n,
  input  logic                    req_valid,
  input  logic                    req_we,
  input  logic [$clog2(NUM_BANKS)-1:0] req_bank,
  input  logic [ADDR_WIDTH-1:0]   req_addr,
  input  logic [DATA_WIDTH-1:0]   req_wdata,
  output logic                    req_ready,
  output logic                    resp_valid,
  output logic [DATA_WIDTH-1:0]   resp_rdata
);
  // Stub: single-cycle pass-through
  assign req_ready   = req_valid;
  assign resp_valid  = req_valid;
  assign resp_rdata  = req_wdata;
endmodule
