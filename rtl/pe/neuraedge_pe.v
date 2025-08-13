// Processing Element RTL for NeuraEdge NPU
module neuraedge_pe #(
  parameter DATA_WIDTH    = 8,
  parameter WEIGHT_WIDTH  = 8,
  parameter ACCUM_WIDTH   = 32
)(
  input                          clk,
  input                          rst_n,
  input                          pe_enable,
  input                          mac_clear,
  input                          accumulate_en,
  input  [DATA_WIDTH-1:0]        data_in,
  input  [WEIGHT_WIDTH-1:0]      weight_in,
  input                          data_valid,
  output [DATA_WIDTH-1:0]        data_out,
  output [WEIGHT_WIDTH-1:0]      weight_out,
  output                         data_valid_out,
  output [ACCUM_WIDTH-1:0]       accum_out,
  output                         accum_valid
);
  // Internal regs (Verilog-2005 compatible)
  wire [DATA_WIDTH+WEIGHT_WIDTH-1:0] product;
  reg [ACCUM_WIDTH-1:0]              accumulator, mac_result;
  wire signed [ACCUM_WIDTH-1:0]      product_32;

  // Multiply
  assign product = (pe_enable && data_valid) ?
                   $signed(data_in) * $signed(weight_in) : 16'b0;

  // Sign extension and accumulate logic
  assign product_32 = $signed({{16{product[15]}}, product}); // explicit sign extension
  
  always @(*) begin
    if (mac_clear)         mac_result = 32'b0;
    else if (accumulate_en && data_valid)
                           mac_result = accumulator + product_32;
    else                   mac_result = accumulator;
  end

  // Acc register
  always @(posedge clk or negedge rst_n)
    if (!rst_n) accumulator <= 32'b0;
    else        accumulator <= mac_result;

  // Output logic
  assign data_out       = data_in;
  assign weight_out     = weight_in;
  assign data_valid_out = data_valid;
  assign accum_out      = accumulator;
  assign accum_valid    = data_valid;

endmodule
