`timescale 1ns/1ps
// Wrapper with self-generated clock/reset for mem_latency_tb (allows timing controls)
module mem_latency_tb_top;
    reg clk = 0;
    reg reset = 1;

    // Clock generation (1ns period)
    always #1 clk = ~clk;

    // Reset release
    initial begin
        #10 reset = 0;
    end

    // Instantiate original testbench module
    mem_latency_tb u_tb(.clk(clk), .reset(reset));
endmodule
