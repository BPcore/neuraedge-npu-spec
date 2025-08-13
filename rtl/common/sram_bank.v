// File: rtl/common/sram_bank.v
// Simple SRAM bank implementation for NeuraEdge NPU
// 8KB bank with 64-bit data width

module sram_bank #(
    parameter DEPTH = 1024,      // 1K × 64-bit = 8KB
    parameter WIDTH = 64,        // 64-bit data width
    parameter ADDR_WIDTH = 10    // log2(1024) = 10 bits
)(
    input                          clk,
    input                          rst_n,
    input                          enable,
    input                          write_en,
    input  [ADDR_WIDTH-1:0]        addr,
    input  [WIDTH-1:0]             wdata,
    output reg [WIDTH-1:0]         rdata
);

    // SRAM array
    reg [WIDTH-1:0] memory [0:DEPTH-1];
    
    // Initialize memory to zero (for simulation)
    integer i;
    initial begin
        for (i = 0; i < DEPTH; i = i + 1) begin
            memory[i] = {WIDTH{1'b0}};
        end
    end
    
    // SRAM access logic
    always @(posedge clk) begin
        if (enable) begin
            if (write_en) begin
                memory[addr] <= wdata;
                rdata <= wdata;  // Write-through for immediate read
            end else begin
                rdata <= memory[addr];
            end
        end
    end

endmodule
