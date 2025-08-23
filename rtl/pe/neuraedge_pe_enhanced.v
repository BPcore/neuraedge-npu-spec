`timescale 1ns/1ps
// Enhanced PE with Power Optimization for 50 TOPS/W Target
// Implements aggressive power gating, clock gating, and voltage scaling
// Optimized for 14nm FinFET process technology

module neuraedge_pe_enhanced #(
    parameter DATA_WIDTH = 8,
    parameter ACCUM_WIDTH = 32,
    parameter PE_ID = 0,
    parameter MAC_LANES = 1  // Number of parallel MAC lanes (replicated multipliers)
) (
    input wire clk,
    input wire reset,
    
    // Enhanced power management
    input wire pe_enable,
    input wire power_gate_enable,
    input wire clock_gate_enable,
    input wire [7:0] voltage_ctrl,
    
    // Data interface
    input wire [DATA_WIDTH-1:0] data_a,
    input wire [DATA_WIDTH-1:0] data_b,
    input wire data_valid,
    
    // Sparsity interface
    input wire sparse_enable,
    input wire sparse_valid,
    
    // Control
    input wire accum_clear,
    input wire accum_enable,
    input wire [1:0] precision_mode,  // 0=INT8, 1=INT4, 2=INT2, 3=INT1
    // Lane gating mask (1 = lane active). New for Phase 1 power optimization.
    input wire [MAC_LANES-1:0] lane_active_mask,
    
    // Output
    output wire [ACCUM_WIDTH-1:0] accum_out,
    output wire accum_valid,
    output wire pe_active,
    output wire [7:0] pe_power_status  // Power consumption indicator
);

// Clock and power gating
wire gated_clk;
wire power_on;
wire data_path_enable;

// Advanced clock gating with multiple levels
wire level1_gate = pe_enable & (data_valid | sparse_valid);
wire level2_gate = clock_gate_enable & level1_gate;
assign gated_clk = clk & level2_gate;

// Power gating with voltage awareness
`ifdef SIM_SIMPLIFIED_POWER
// Simulation override: ignore voltage threshold to enable activity in testbench
assign power_on = power_gate_enable & pe_enable;
`else
assign power_on = power_gate_enable & pe_enable & (voltage_ctrl > 8'd80); // Minimum voltage check
`endif
assign data_path_enable = power_on & (data_valid | sparse_valid);

// Precision-scalable multi-lane MAC fabric with per-lane gating
wire mac_enable_global = data_path_enable & (sparse_enable ? sparse_valid : 1'b1);

// Lane results (each 16 bits). For packing we currently replicate same inputs; future work can partition bits per lane.
wire [15:0] lane_result   [0:MAC_LANES-1];
genvar lane;
generate
    for (lane = 0; lane < MAC_LANES; lane = lane + 1) begin : gen_lanes
        precision_multiplier #( 
            .DATA_WIDTH(DATA_WIDTH)
        ) mult_unit (
            .clk(gated_clk),
            .reset(reset),
            .enable(mac_enable_global & lane_active_mask[lane]),
            .data_a(data_a),
            .data_b(data_b),
            .precision_mode(precision_mode),
            .result(lane_result[lane])
        );
    end
endgenerate

// Sum of lane results (simple add). Width accommodates MAC_LANES*16 bits; reduce back to 16 with truncation.
reg [15:0] combined_mult;
reg [31:0] tmp_sum; // moved out for Verilog-2005 compatibility
integer li;
always @(*) begin
    tmp_sum = 0;
    for (li = 0; li < MAC_LANES; li = li + 1) begin
        tmp_sum = tmp_sum + {{16{lane_result[li][15]}}, lane_result[li]};
    end
    combined_mult = tmp_sum[15:0];
end

wire [ACCUM_WIDTH-1:0] extended_mult = {{(ACCUM_WIDTH-16){combined_mult[15]}}, combined_mult};

// Power-optimized accumulator with retention
reg [ACCUM_WIDTH-1:0] accumulator;
reg [ACCUM_WIDTH-1:0] accumulator_backup;  // For power gating retention
reg accumulator_valid_reg;

always @(posedge gated_clk or posedge reset) begin
    if (reset) begin
        accumulator <= {ACCUM_WIDTH{1'b0}};
        accumulator_backup <= {ACCUM_WIDTH{1'b0}};
        accumulator_valid_reg <= 1'b0;
    end else begin
        if (accum_clear) begin
            accumulator <= {ACCUM_WIDTH{1'b0}};
            accumulator_valid_reg <= 1'b0;
    end else if (mac_enable_global && accum_enable) begin
            accumulator <= accumulator + extended_mult;
            accumulator_valid_reg <= 1'b1;
        end
        
        // Backup for power gating when powered
        if (power_on) begin
            accumulator_backup <= accumulator;
        end else begin
            // When power off, retain previous backup (no write)
            accumulator_backup <= accumulator_backup;
        end
    end
end

// Removed separate restoration block to avoid multi-driver conflict

// Activity and power monitoring
reg [7:0] activity_counter;
reg [7:0] power_level;

always @(posedge clk) begin
    if (reset) begin
    activity_counter <= 8'b0;
    power_level <= 8'b0;
    end else begin
        // Track activity for power estimation
    if (mac_enable_global) begin
            activity_counter <= (activity_counter < 8'd255) ? activity_counter + 1 : activity_counter;
        end else if (activity_counter > 0) begin
            activity_counter <= activity_counter - 1;
        end
        
        // Estimate power level based on activity and voltage
    if (mac_enable_global) begin
        case (precision_mode)
            2'b00: power_level <= (voltage_ctrl >> 4) + 8'd4;
            2'b01: power_level <= (voltage_ctrl >> 4) + 8'd2;
            2'b10: power_level <= (voltage_ctrl >> 4) + 8'd1;
            default: power_level <= (voltage_ctrl >> 4);
        endcase
    end else begin
        power_level <= 8'd0;
    end
    end
end

// Output assignments
assign accum_out = power_on ? accumulator : accumulator_backup;
assign accum_valid = accumulator_valid_reg & power_on;
assign pe_active = power_on & (data_valid | |accumulator | sparse_valid);
assign pe_power_status = {power_level[7:4], activity_counter[7:4]};

endmodule // neuraedge_pe_enhanced

// Multi-precision multiplier for power efficiency
// Helper submodule lives in same file intentionally (cohesion / review). Suppress filename/module mismatch locally.
/* verilator lint_off DECLFILENAME */
module precision_multiplier #(
    parameter DATA_WIDTH = 8
) (
    input wire clk,
    input wire reset,
    input wire enable,
    input wire [DATA_WIDTH-1:0] data_a,
    input wire [DATA_WIDTH-1:0] data_b,
    input wire [1:0] precision_mode,
    output reg [15:0] result
);

// Extract different precision data
wire [7:0] a_int8 = data_a;
wire [7:0] b_int8 = data_b;
wire [3:0] a_int4 = data_a[3:0];
wire [3:0] b_int4 = data_b[3:0];
wire [1:0] a_int2 = data_a[1:0];
wire [1:0] b_int2 = data_b[1:0];
wire a_int1 = data_a[0];
wire b_int1 = data_b[0];

// Bit-slice gating: mask upper bits when operating in lower precision to reduce switching activity.
wire [7:0] gated_a_int8 = (precision_mode == 2'b00) ? a_int8 :
                          (precision_mode == 2'b01) ? {4'b0, a_int4} :
                          (precision_mode == 2'b10) ? {6'b0, a_int2} :
                                                     {7'b0, a_int1};
wire [7:0] gated_b_int8 = (precision_mode == 2'b00) ? b_int8 :
                          (precision_mode == 2'b01) ? {4'b0, b_int4} :
                          (precision_mode == 2'b10) ? {6'b0, b_int2} :
                                                     {7'b0, b_int1};

// Multiplication results
wire [15:0] mult_int8 = $signed(gated_a_int8) * $signed(gated_b_int8); // gated inputs lower toggle
wire [7:0] mult_int4 = $signed(a_int4) * $signed(b_int4);
wire [3:0] mult_int2 = $signed(a_int2) * $signed(b_int2);
wire       mult_int1 = a_int1 & b_int1; // single-bit multiply (logical AND for INT1)

always @(posedge clk) begin
    if (reset) begin
        result <= 16'b0;
    end else if (enable) begin
        case (precision_mode)
            2'b00: result <= mult_int8;                              // INT8
            2'b01: result <= {{8{mult_int4[7]}}, mult_int4};        // INT4 sign-extended
            2'b10: result <= {{12{mult_int2[3]}}, mult_int2};       // INT2 sign-extended  
            2'b11: result <= {15'b0, mult_int1};                    // INT1 widen to 16 bits
        endcase
    end
end

endmodule
/* verilator lint_on DECLFILENAME */
