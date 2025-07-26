// Test change: trigger CI pipeline
module neuraedge_pe #(
  parameter DATA_WIDTH    = 8,
  parameter WEIGHT_WIDTH  = 8,
  parameter ACCUM_WIDTH   = 32
)(
  input  logic                    clk,
  input  logic                    rst_n,
  input  logic                    pe_enable,
  input  logic                    mac_clear,
  input  logic                    accumulate_en,
  input  logic [DATA_WIDTH-1:0]   data_in,
  input  logic [WEIGHT_WIDTH-1:0] weight_in,
  input  logic                    data_valid,
  output logic [DATA_WIDTH-1:0]   data_out,
  output logic [WEIGHT_WIDTH-1:0] weight_out,
  output logic                    data_valid_out,
  output logic [ACCUM_WIDTH-1:0]  accum_out,
  output logic                    accum_valid
);
  // Internal regs
  logic [DATA_WIDTH+WEIGHT_WIDTH-1:0] product;
  logic [ACCUM_WIDTH-1:0]             accumulator, mac_result;

  // Multiply
  always_comb
    product = (pe_enable && data_valid) ?
              $signed(data_in) * $signed(weight_in) : '0;

  // Accumulate
  always_comb begin
    if (mac_clear)         mac_result = '0;
    else if (accumulate_en && data_valid)
                           mac_result = accumulator + $signed(product);
    else                   mac_result = accumulator;
  end

  // Acc register
  always_ff @(posedge clk or negedge rst_n)
    if (!rst_n) accumulator <= '0;
    else         accumulator <= mac_result;

  // Pass-through pipeline
  always_ff @(posedge clk or negedge rst_n)
    if (!rst_n) begin
      data_out       <= '0;
      weight_out     <= '0;
      data_valid_out <= 1'b0;
    end else begin
      data_out       <= data_in;
      weight_out     <= weight_in;
      data_valid_out <= data_valid;
    end

  assign accum_out   = accumulator;
  assign accum_valid = data_valid;
endmodule
