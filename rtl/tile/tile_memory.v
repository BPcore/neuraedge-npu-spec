// File: rtl/tile/tile_memory.v
// NeuraEdge Tile Memory Hierarchy - 32KB SRAM (4 banks × 8KB each)

module tile_memory #(
    parameter BANKS = 4,
    parameter BANK_SIZE = 8192,  // 8KB per bank
    parameter ADDR_WIDTH = 13,   // 8KB addressing
    parameter DATA_WIDTH = 64    // 64-bit data path
)(
    input                               clk,
    input                               rst_n,
    
    // Memory interface from PE array
    input  [BANKS-1:0]                  bank_enable,
    input  [BANKS-1:0]                  bank_write_en,
    input  [BANKS*ADDR_WIDTH-1:0]       bank_addr,
    input  [BANKS*DATA_WIDTH-1:0]       bank_wdata,
    output [BANKS*DATA_WIDTH-1:0]       bank_rdata,
    output [BANKS-1:0]                  bank_ready,
    
    // NoC interface for external memory access
    input  [63:0]                       noc_mem_cmd,
    input                               noc_mem_valid,
    output                              noc_mem_ready,
    output [63:0]                       noc_mem_resp,
    output                              noc_mem_resp_valid
);

    // Individual bank signals
    wire [ADDR_WIDTH-1:0] addr_per_bank [0:BANKS-1];
    wire [DATA_WIDTH-1:0] wdata_per_bank [0:BANKS-1];
    wire [DATA_WIDTH-1:0] rdata_per_bank [0:BANKS-1];
    
    // Unpack flattened bank signals
    genvar b;
    generate
        for (b = 0; b < BANKS; b = b + 1) begin : BANK_UNPACK
            assign addr_per_bank[b] = bank_addr[b*ADDR_WIDTH +: ADDR_WIDTH];
            assign wdata_per_bank[b] = bank_wdata[b*DATA_WIDTH +: DATA_WIDTH];
            assign bank_rdata[b*DATA_WIDTH +: DATA_WIDTH] = rdata_per_bank[b];
            assign bank_ready[b] = 1'b1;  // Simple ready - always ready for access
        end
    endgenerate
    
    // SRAM bank instances
    generate
        for (b = 0; b < BANKS; b = b + 1) begin : SRAM_BANKS
            sram_bank #(
                .DEPTH(BANK_SIZE/8),  // Depth in 64-bit words
                .WIDTH(DATA_WIDTH),
                .ADDR_WIDTH(ADDR_WIDTH-3)  // Word addressing
            ) bank_inst (
                .clk(clk),
                .rst_n(rst_n),
                .enable(bank_enable[b]),
                .write_en(bank_write_en[b]),
                .addr(addr_per_bank[b][ADDR_WIDTH-1:3]),  // Word addressing
                .wdata(wdata_per_bank[b]),
                .rdata(rdata_per_bank[b])
            );
        end
    endgenerate
    
    // Simple NoC memory interface (for external memory access)
    reg [63:0] mem_response;
    reg mem_resp_valid;
    
    always @(posedge clk) begin
        if (!rst_n) begin
            mem_response <= 64'b0;
            mem_resp_valid <= 1'b0;
        end else begin
            if (noc_mem_valid && noc_mem_ready) begin
                // Simple echo response for now
                mem_response <= noc_mem_cmd;
                mem_resp_valid <= 1'b1;
            end else begin
                mem_resp_valid <= 1'b0;
            end
        end
    end
    
    assign noc_mem_ready = 1'b1;  // Always ready to accept commands
    assign noc_mem_resp = mem_response;
    assign noc_mem_resp_valid = mem_resp_valid;

endmodule
