// Simplified Verilog NoC router for synthesis compatibility
`timescale 1ns/1ps

module noc_router #(
    parameter FLIT_WIDTH = 64,
    parameter PORTS      = 5
)(
    input  wire clk,
    input  wire rst_n,
    
    // Flattened port arrays for Verilog compatibility
    input  wire [PORTS*FLIT_WIDTH-1:0] flit_in,
    input  wire [PORTS-1:0]             valid_in,
    output wire [PORTS-1:0]             ready_out,
    output wire [PORTS*FLIT_WIDTH-1:0] flit_out,
    output wire [PORTS-1:0]             valid_out,
    input  wire [PORTS-1:0]             ready_in
);

// Simple router implementation for synthesis
reg [PORTS*FLIT_WIDTH-1:0] flit_out_reg;
reg [PORTS-1:0]             valid_out_reg;
reg [PORTS-1:0]             ready_out_reg;
integer i;

// Simple passthrough routing for synthesis
always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        flit_out_reg  <= {(PORTS*FLIT_WIDTH){1'b0}};
        valid_out_reg <= {PORTS{1'b0}};
        ready_out_reg <= {PORTS{1'b0}};
    end else begin
        // Simple routing: port i connects to port (i+1) % PORTS
        for (i = 0; i < PORTS; i = i + 1) begin
            if (i == PORTS-1) begin
                flit_out_reg[FLIT_WIDTH-1:0] <= flit_in[(i+1)*FLIT_WIDTH-1:i*FLIT_WIDTH];
                valid_out_reg[0] <= valid_in[i];
            end else begin
                flit_out_reg[(i+2)*FLIT_WIDTH-1:(i+1)*FLIT_WIDTH] <= flit_in[(i+1)*FLIT_WIDTH-1:i*FLIT_WIDTH];
                valid_out_reg[i+1] <= valid_in[i];
            end
        end
        ready_out_reg <= ready_in;
    end
end

assign flit_out  = flit_out_reg;
assign valid_out = valid_out_reg;
assign ready_out = ready_out_reg;

endmodule
