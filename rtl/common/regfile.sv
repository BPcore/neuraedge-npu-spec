module regfile #(
  parameter DATA_WIDTH = 32,
  parameter NUM_REGS   = 32,
  parameter ADDR_WIDTH = $clog2(NUM_REGS)
)(
  input  logic                  clk,
  input  logic                  rst_n,
  input  logic                  wr_en,
  input  logic [ADDR_WIDTH-1:0] wr_addr,
  input  logic [DATA_WIDTH-1:0] wr_data,
  input  logic [ADDR_WIDTH-1:0] rd_addr1,
  output logic [DATA_WIDTH-1:0] rd_data1,
  input  logic [ADDR_WIDTH-1:0] rd_addr2,
  output logic [DATA_WIDTH-1:0] rd_data2
);
  logic [DATA_WIDTH-1:0] registers [NUM_REGS];

  // Write
  always_ff @(posedge clk or negedge rst_n)
    if (!rst_n) for (int i=0;i<NUM_REGS;i++) registers[i]<=0;
    else if (wr_en) registers[wr_addr] <= wr_data;

  // Read ports
  assign rd_data1 = registers[rd_addr1];
  assign rd_data2 = registers[rd_addr2];
endmodule
