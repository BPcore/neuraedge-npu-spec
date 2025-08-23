`timescale 1ns/1ps
// Sparsity selector for block-based patterns
// Extracted from sparsity_engine.v for module hygiene and reuse
module sparsity_selector #(
    parameter DATA_WIDTH = 8,
    parameter BLOCK_SIZE = 4
) (
    input  wire                        clk,
    input  wire                        reset,
    input  wire [DATA_WIDTH*BLOCK_SIZE-1:0] data_in,
    input  wire [1:0]                  sparsity_mode,
    input  wire                        sparsity_enable,
    output reg  [BLOCK_SIZE-1:0]       mask_out
);

// Extract individual values and absolute magnitudes
wire [DATA_WIDTH-1:0] values     [0:BLOCK_SIZE-1];
wire [DATA_WIDTH-1:0] abs_values [0:BLOCK_SIZE-1];

reg [2:0] nonzero_count; // supports up to BLOCK_SIZE=8 safely

genvar i;
generate
    for (i = 0; i < BLOCK_SIZE; i = i + 1) begin : extract_vals
        assign values[i] = data_in[DATA_WIDTH*(i+1)-1:DATA_WIDTH*i];
        assign abs_values[i] = values[i][DATA_WIDTH-1] ? (~values[i] + 1'b1) : values[i];
    end
endgenerate

// Determine how many values to keep based on sparsity mode (future use / debug)
wire [1:0] keep_count = (sparsity_mode == 2'b00) ? 2'd2 :  // 2:4 sparsity
                        (sparsity_mode == 2'b01) ? 2'd1 :  // 1:4 sparsity
                        (sparsity_mode == 2'b10) ? 2'd1 :  // 1:8 sparsity (maps to 1:4 for 4 elements)
                                                2'd2;     // adaptive default

// Sequential mask selection (simple compare network per mode)
always @(posedge clk) begin
    if (reset) begin
        mask_out <= {BLOCK_SIZE{1'b1}};
    end else if (sparsity_enable) begin
        case (sparsity_mode)
            2'b00: begin // 2:4 keep two largest (explicit compare tree)
                if (abs_values[0] >= abs_values[1] && abs_values[0] >= abs_values[2] && abs_values[0] >= abs_values[3]) begin
                    if (abs_values[1] >= abs_values[2] && abs_values[1] >= abs_values[3])      mask_out <= 4'b0011; // 0,1
                    else if (abs_values[2] >= abs_values[3])                                  mask_out <= 4'b0101; // 0,2
                    else                                                                      mask_out <= 4'b1001; // 0,3
                end else if (abs_values[1] >= abs_values[2] && abs_values[1] >= abs_values[3]) begin
                    if (abs_values[2] >= abs_values[3])                                       mask_out <= 4'b0110; // 1,2
                    else                                                                      mask_out <= 4'b1010; // 1,3
                end else begin
                    mask_out <= 4'b1100; // 2,3
                end
            end
            2'b01: begin // 1:4 keep largest
                if (abs_values[0] >= abs_values[1] && abs_values[0] >= abs_values[2] && abs_values[0] >= abs_values[3])      mask_out <= 4'b0001;
                else if (abs_values[1] >= abs_values[2] && abs_values[1] >= abs_values[3])                                    mask_out <= 4'b0010;
                else if (abs_values[2] >= abs_values[3])                                                                       mask_out <= 4'b0100;
                else                                                                                                           mask_out <= 4'b1000;
            end
            2'b10: begin // 1:8 ultra sparse (treat as optional single keep else drop block)
                if (abs_values[0] >= abs_values[1] && abs_values[0] >= abs_values[2] && abs_values[0] >= abs_values[3])      mask_out <= 4'b0001;
                else                                                                                                         mask_out <= 4'b0000; // drop
            end
            2'b11: begin // Adaptive: if <=2 non-zero keep all non-zero else 2:4
                nonzero_count = 0;
                if (|abs_values[0]) nonzero_count = nonzero_count + 1'b1;
                if (|abs_values[1]) nonzero_count = nonzero_count + 1'b1;
                if (|abs_values[2]) nonzero_count = nonzero_count + 1'b1;
                if (|abs_values[3]) nonzero_count = nonzero_count + 1'b1;
                if (nonzero_count <= 3'd2) begin
                    mask_out[0] <= |abs_values[0];
                    mask_out[1] <= |abs_values[1];
                    mask_out[2] <= |abs_values[2];
                    mask_out[3] <= |abs_values[3];
                end else begin
                    if (abs_values[0] >= abs_values[1] && abs_values[0] >= abs_values[2] && abs_values[0] >= abs_values[3]) begin
                        if (abs_values[1] >= abs_values[2] && abs_values[1] >= abs_values[3])      mask_out <= 4'b0011;
                        else if (abs_values[2] >= abs_values[3])                                  mask_out <= 4'b0101;
                        else                                                                      mask_out <= 4'b1001;
                    end else if (abs_values[1] >= abs_values[2] && abs_values[1] >= abs_values[3]) begin
                        if (abs_values[2] >= abs_values[3])                                       mask_out <= 4'b0110;
                        else                                                                      mask_out <= 4'b1010;
                    end else begin
                        mask_out <= 4'b1100;
                    end
                end
            end
        endcase
    end else begin
        mask_out <= {BLOCK_SIZE{1'b1}}; // No sparsity -> keep all
    end
end

endmodule
