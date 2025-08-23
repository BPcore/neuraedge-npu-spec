// TSMC 14nm FinFET Technology Library
// Voltage: 0.8V nominal, 0.6V low-power, 0.45V ultra-low-power
// Process: N14 FinFET Compact Technology
// Target: 50 TOPS/W efficiency

module NAND2_X1 (A, B, Y);
    input A, B;
    output Y;
    assign #0.015 Y = ~(A & B);  // 15ps delay @ 14nm (vs 30ps @ 22nm)
endmodule

module NOR2_X1 (A, B, Y);
    input A, B;
    output Y;
    assign #0.020 Y = ~(A | B);  // 20ps delay @ 14nm (vs 40ps @ 22nm)
endmodule

module INV_X1 (A, Y);
    input A;
    output Y;
    assign #0.008 Y = ~A;  // 8ps delay @ 14nm (vs 15ps @ 22nm)
endmodule

module AND2_X1 (A, B, Y);
    input A, B;
    output Y;
    assign #0.018 Y = A & B;  // 18ps delay @ 14nm
endmodule

module OR2_X1 (A, B, Y);
    input A, B;
    output Y;
    assign #0.022 Y = A | B;  // 22ps delay @ 14nm
endmodule

module XOR2_X1 (A, B, Y);
    input A, B;
    output Y;
    assign #0.035 Y = A ^ B;  // 35ps delay @ 14nm
endmodule

module DFF_X1 (CLK, D, Q);
    input CLK, D;
    output reg Q;
    always @(posedge CLK)
        Q <= #0.030 D;  // 30ps setup @ 14nm (vs 60ps @ 22nm)
endmodule

module DFF_X2 (CLK, D, Q);
    input CLK, D;
    output reg Q;
    always @(posedge CLK)
        Q <= #0.025 D;  // 25ps setup @ 14nm (high drive)
endmodule

// Power-gated flip-flop
module DFF_PG (CLK, D, Q, PWR_EN);
    input CLK, D, PWR_EN;
    output reg Q;
    wire gated_clk;
    assign gated_clk = CLK & PWR_EN;
    always @(posedge gated_clk)
        Q <= #0.035 D;  // 35ps with power gating overhead
endmodule

// Clock gated flip-flop
module DFF_CG (CLK, D, Q, CLK_EN);
    input CLK, D, CLK_EN;
    output reg Q;
    wire gated_clk;
    assign gated_clk = CLK & CLK_EN;
    always @(posedge gated_clk)
        Q <= #0.028 D;  // 28ps with clock gating
endmodule

// Low-power multiplier cell
module MULT_LP (A, B, Y);
    input [7:0] A, B;
    output [15:0] Y;
    assign #0.120 Y = A * B;  // 120ps @ 14nm (vs 200ps @ 22nm)
endmodule

// High-efficiency adder
module ADD_HE (A, B, CIN, Y, COUT);
    input [15:0] A, B;
    input CIN;
    output [15:0] Y;
    output COUT;
    assign #0.080 {COUT, Y} = A + B + CIN;  // 80ps @ 14nm
endmodule
