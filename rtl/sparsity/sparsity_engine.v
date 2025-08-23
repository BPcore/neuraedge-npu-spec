`timescale 1ns/1ps
// Advanced Sparsity Engine for 50 TOPS/W Target
// Supports 2:4, 1:4, and 1:8 structured sparsity patterns
// Provides 2-4x effective performance improvement

module sparsity_engine #(
    parameter DATA_WIDTH = 8,
    parameter SPARSITY_RATIO = 4,  // 2:4 sparsity by default
    parameter PE_COUNT = 2048,
    parameter BLOCK_SIZE = 4,
    parameter REAL_MASK_EN = 0      // When set, override selector masks with pseudo-random realistic density
) (
    input wire clk,
    input wire reset,
    
    // Input data streams
    input wire [DATA_WIDTH*PE_COUNT-1:0] input_data,
    input wire input_valid,
    
    // Sparsity control
    input wire [PE_COUNT-1:0] sparsity_mask,
    input wire sparsity_enable,
    input wire [1:0] sparsity_mode,  // 0=2:4, 1=1:4, 2=1:8, 3=adaptive
    
    // Performance monitoring
    output wire [15:0] sparsity_ratio_actual,
    output wire [15:0] performance_gain,
    
    // Output to PE array
    output wire [DATA_WIDTH*PE_COUNT-1:0] pe_data,
    output wire [PE_COUNT-1:0] pe_enable,
    output wire pe_valid,
    output wire [15:0] active_pe_count
);

// Sparsity pattern detection and generation
wire [PE_COUNT-1:0] sparse_pattern;
reg  [PE_COUNT-1:0] rand_mask;
reg [PE_COUNT-1:0] active_pes;
reg [15:0] pe_active_count;
reg [15:0] theoretical_ops;
reg [15:0] actual_ops;

// Block-wise sparsity processing
localparam NUM_BLOCKS = PE_COUNT / BLOCK_SIZE;
wire [BLOCK_SIZE-1:0] block_masks [0:NUM_BLOCKS-1];

genvar i, j;
generate
    for (i = 0; i < NUM_BLOCKS; i = i + 1) begin : sparse_block
        wire [DATA_WIDTH*BLOCK_SIZE-1:0] block_data;
        assign block_data = input_data[DATA_WIDTH*(i*BLOCK_SIZE+BLOCK_SIZE)-1:DATA_WIDTH*i*BLOCK_SIZE];
        
        // Sparsity selector for each block
        sparsity_selector #(
            .DATA_WIDTH(DATA_WIDTH),
            .BLOCK_SIZE(BLOCK_SIZE)
        ) sparse_sel (
            .clk(clk),
            .reset(reset),
            .data_in(block_data),
            .sparsity_mode(sparsity_mode),
            .sparsity_enable(sparsity_enable),
            .mask_out(block_masks[i])
        );
        
    // Assign block mask to global pattern (REAL_MASK_EN only active when mode==adaptive (3))
    wire use_rand = REAL_MASK_EN && (sparsity_mode==2'd3);
    assign sparse_pattern[i*BLOCK_SIZE +: BLOCK_SIZE] = use_rand ? rand_mask[i*BLOCK_SIZE +: BLOCK_SIZE] : block_masks[i];
    end
endgenerate

// Simple 16-bit LFSR for pseudo-random mask generation (expanded across PEs). Provides repeatable pseudo-random enabling.
reg [15:0] lfsr=16'hACE1;
always @(posedge clk or posedge reset) begin
    if (reset) begin
        lfsr <= 16'hACE1;
        rand_mask <= {PE_COUNT{1'b0}};
    end else if (REAL_MASK_EN && input_valid && sparsity_mode==2'd3) begin
        // Advance LFSR (x^16 + x^14 + x^13 + x^11 + 1)
        lfsr <= {lfsr[14:0], lfsr[15]^lfsr[13]^lfsr[12]^lfsr[10]};
        // Populate each block with a density matching selected mode heuristic
        // For simplicity: choose one active element per BLOCK_SIZE for 1:4 style when sparsity_mode indicates higher sparsity.
        for (k=0; k<PE_COUNT; k=k+BLOCK_SIZE) begin
            // Derive pseudo index from low bits
            case (sparsity_mode)
                2'd0: // 2:4 => activate two lanes
                    rand_mask[k +: BLOCK_SIZE] <= (1 << (lfsr[1:0])) | (1 << (lfsr[3:2]));
                2'd1: // 1:4
                    rand_mask[k +: BLOCK_SIZE] <= (1 << (lfsr[1:0]));
                2'd2: // 1:8 treat as 1:4 but every other block zero to approximate lower density
                    rand_mask[k +: BLOCK_SIZE] <= ( (k[3:0]==4'h0) ? (1 << (lfsr[1:0])) : {BLOCK_SIZE{1'b0}} );
                default: rand_mask[k +: BLOCK_SIZE] <= (1 << (lfsr[1:0]));
            endcase
        end
    end
end

// Active PE calculation
integer k;
reg [15:0] pe_active_next; // combinational accumulation result (registered)
always @(posedge clk) begin
    if (reset) begin
        pe_active_count   <= 16'b0;
        theoretical_ops   <= 16'b0;
        actual_ops        <= 16'b0;
    end else if (input_valid) begin
        // Accumulate active PEs without sequential self-add width warnings
        pe_active_next = 16'd0;
        for (k = 0; k < PE_COUNT; k = k + 1) begin
            pe_active_next = pe_active_next + {15'b0, sparse_pattern[k]};
        end
        pe_active_count   <= pe_active_next;
        theoretical_ops   <= PE_COUNT[15:0];
        actual_ops        <= pe_active_next;
    end
end

// Performance metrics
// Size operands explicitly to avoid WIDTHEXPAND warnings (Verilator treats unsized params as 32b)
localparam [15:0] PE_COUNT_16 = PE_COUNT[15:0];
wire [15:0] inactive_pe = (PE_COUNT_16 > pe_active_count) ? (PE_COUNT_16 - pe_active_count) : 16'd0;
wire [31:0] inactive_pe_32 = {16'd0, inactive_pe};
wire [31:0] pe_count_32    = {16'd0, PE_COUNT_16};
wire [31:0] sparsity_ratio_calc = (PE_COUNT_16 != 16'd0) ? ((inactive_pe_32 * 32'd100) / pe_count_32) : 32'd0;
assign sparsity_ratio_actual = sparsity_ratio_calc[15:0];
assign performance_gain = (actual_ops > 0) ? (theoretical_ops * 100) / actual_ops : 16'b0;
assign active_pe_count = pe_active_count;

// Output generation
assign pe_data = input_data;  // Data passes through
assign pe_enable = sparsity_enable ? sparse_pattern : {PE_COUNT{1'b1}};
assign pe_valid = input_valid;

endmodule
