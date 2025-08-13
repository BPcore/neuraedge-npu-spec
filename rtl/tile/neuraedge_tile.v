// File: rtl/tile/neuraedge_tile.v
module neuraedge_tile #(
    parameter PE_ROWS      = 32,
    parameter PE_COLS      = 64,
    parameter NOC_FLIT_W   = 64,
    parameter MEMORY_BANKS = 4,
    parameter BANK_SIZE    = 8192
)(
    input                              clk,
    input                              rst_n,
    // Flattened ports for synthesis compatibility
    input  [5*NOC_FLIT_W-1:0]         flat_flit_in,
    input  [4:0]                      flat_valid_in,
    output [4:0]                      flat_ready_out,
    output [5*NOC_FLIT_W-1:0]         flat_flit_out,
    output [4:0]                      flat_valid_out,
    input  [4:0]                      flat_ready_in
);

    // Internal signals for the tile's logic (Verilog-2005 compatible)
    wire [NOC_FLIT_W-1:0] flit_in_0, flit_in_1, flit_in_2, flit_in_3, flit_in_4;
    wire valid_in_0, valid_in_1, valid_in_2, valid_in_3, valid_in_4;
    reg ready_out_0, ready_out_1, ready_out_2, ready_out_3, ready_out_4;
    reg [NOC_FLIT_W-1:0] flit_out_0, flit_out_1, flit_out_2, flit_out_3, flit_out_4;
    reg valid_out_0, valid_out_1, valid_out_2, valid_out_3, valid_out_4;
    wire ready_in_0, ready_in_1, ready_in_2, ready_in_3, ready_in_4;

    // Unpack flattened inputs
    assign flit_in_0  = flat_flit_in[0*NOC_FLIT_W +: NOC_FLIT_W];
    assign flit_in_1  = flat_flit_in[1*NOC_FLIT_W +: NOC_FLIT_W];
    assign flit_in_2  = flat_flit_in[2*NOC_FLIT_W +: NOC_FLIT_W];
    assign flit_in_3  = flat_flit_in[3*NOC_FLIT_W +: NOC_FLIT_W];
    assign flit_in_4  = flat_flit_in[4*NOC_FLIT_W +: NOC_FLIT_W];
    
    assign valid_in_0 = flat_valid_in[0];
    assign valid_in_1 = flat_valid_in[1];
    assign valid_in_2 = flat_valid_in[2];
    assign valid_in_3 = flat_valid_in[3];
    assign valid_in_4 = flat_valid_in[4];
    
    assign ready_in_0 = flat_ready_in[0];
    assign ready_in_1 = flat_ready_in[1];
    assign ready_in_2 = flat_ready_in[2];
    assign ready_in_3 = flat_ready_in[3];
    assign ready_in_4 = flat_ready_in[4];

    // Pack outputs
    assign flat_flit_out = {flit_out_4, flit_out_3, flit_out_2, flit_out_1, flit_out_0};
    assign flat_valid_out = {valid_out_4, valid_out_3, valid_out_2, valid_out_1, valid_out_0};
    assign flat_ready_out = {ready_out_4, ready_out_3, ready_out_2, ready_out_1, ready_out_0};

    // PE Array data and control signals
    wire [PE_ROWS-1:0] pe_enable_rows;
    wire [PE_ROWS-1:0] mac_clear_rows;
    wire [PE_ROWS-1:0] accumulate_en_rows;
    wire [7:0] ctrl_input_data;
    wire ctrl_input_data_valid;
    wire [7:0] ctrl_weight_data;
    
    // Data mesh for PE interconnect
    wire [7:0] data_mesh [0:PE_ROWS-1] [0:PE_COLS];  // Extra column for output
    wire [7:0] weight_mesh [0:PE_ROWS-1] [0:PE_COLS-1];
    wire data_valid_mesh [0:PE_ROWS-1] [0:PE_COLS];
    wire [31:0] accum_out_mesh [0:PE_ROWS-1] [0:PE_COLS-1];
    wire accum_valid_mesh [0:PE_ROWS-1] [0:PE_COLS-1];
    
    // Memory interface signals
    wire [MEMORY_BANKS-1:0] mem_bank_enable;
    wire [MEMORY_BANKS-1:0] mem_bank_write_en;
    wire [MEMORY_BANKS*13-1:0] mem_bank_addr;
    wire [MEMORY_BANKS*64-1:0] mem_bank_wdata;
    wire [MEMORY_BANKS*64-1:0] mem_bank_rdata;
    wire [MEMORY_BANKS-1:0] mem_bank_ready;
    
    // Input data injection (from controller)
    genvar r;
    generate
        for (r = 0; r < PE_ROWS; r = r + 1) begin : INPUT_ROW
            assign data_mesh[r][0] = ctrl_input_data;
            assign data_valid_mesh[r][0] = ctrl_input_data_valid;
        end
    endgenerate
    
    // Weight loading (from controller)
    genvar wr, wc;
    generate
        for (wr = 0; wr < PE_ROWS; wr = wr + 1) begin : WEIGHT_ROW
            for (wc = 0; wc < PE_COLS; wc = wc + 1) begin : WEIGHT_COL
                assign weight_mesh[wr][wc] = ctrl_weight_data;
            end
        end
    endgenerate

    // Nested generate loops for PE array
    genvar row, col;
    generate
        for (row = 0; row < PE_ROWS; row = row + 1) begin : ROW
            for (col = 0; col < PE_COLS; col = col + 1) begin : COL
                neuraedge_pe pe_inst (
                    .clk(clk),
                    .rst_n(rst_n),
                    .pe_enable(pe_enable_rows[row]),
                    .mac_clear(mac_clear_rows[row]),
                    .accumulate_en(accumulate_en_rows[row]),
                    .data_in(data_mesh[row][col]),
                    .weight_in(weight_mesh[row][col]),
                    .data_valid(data_valid_mesh[row][col]),
                    .data_out(data_mesh[row][col+1]),
                    .weight_out(),  // Weight stays local to PE
                    .data_valid_out(data_valid_mesh[row][col+1]),
                    .accum_out(accum_out_mesh[row][col]),
                    .accum_valid(accum_valid_mesh[row][col])
                );
            end
        end
    endgenerate
    
    // Output accumulator results to NoC
    assign flit_out_0 = {32'h0, accum_out_mesh[0][PE_COLS-1]};  // Row 0 final accumulator
    assign valid_out_0 = accum_valid_mesh[0][PE_COLS-1];
    assign ready_out_0 = 1'b1;  // Always ready to output results

    // Tile Controller for PE management
    tile_controller #(
        .PE_ROWS(PE_ROWS),
        .PE_COLS(PE_COLS),
        .NOC_FLIT_W(NOC_FLIT_W)
    ) controller_inst (
        .clk(clk),
        .rst_n(rst_n),
        .ctrl_flit_in(flit_in_0),        // Control commands via local NoC port
        .ctrl_valid_in(valid_in_0),
        .ctrl_ready_out(ready_out_0),
        .ctrl_flit_out(flit_out_0),      // Control responses via local NoC port  
        .ctrl_valid_out(valid_out_0),
        .ctrl_ready_in(ready_in_0),
        .pe_enable_rows(pe_enable_rows),
        .mac_clear_rows(mac_clear_rows),
        .accumulate_en_rows(accumulate_en_rows),
        .input_data(ctrl_input_data),
        .input_data_valid(ctrl_input_data_valid),
        .weight_data(ctrl_weight_data),
        .mem_bank_enable(mem_bank_enable),
        .mem_bank_write_en(mem_bank_write_en),
        .mem_bank_addr(mem_bank_addr),
        .mem_bank_wdata(mem_bank_wdata),
        .mem_bank_rdata(mem_bank_rdata),
        .mem_bank_ready(mem_bank_ready),
        .execution_status(),  // Could be connected to debug interface
        .tile_busy()          // Could be connected to status reporting
    );
    
    // Tile Memory Hierarchy (32KB total: 4 banks × 8KB each)
    tile_memory #(
        .BANKS(MEMORY_BANKS),
        .BANK_SIZE(BANK_SIZE),
        .ADDR_WIDTH(13),
        .DATA_WIDTH(64)
    ) memory_inst (
        .clk(clk),
        .rst_n(rst_n),
        .bank_enable(mem_bank_enable),
        .bank_write_en(mem_bank_write_en),
        .bank_addr(mem_bank_addr),
        .bank_wdata(mem_bank_wdata),
        .bank_rdata(mem_bank_rdata),
        .bank_ready(mem_bank_ready),
        .noc_mem_cmd(flit_in_1),         // Memory commands via NoC
        .noc_mem_valid(valid_in_1),
        .noc_mem_ready(ready_out_1),
        .noc_mem_resp(flit_out_1),
        .noc_mem_resp_valid(valid_out_1)
    );

    // NoC router instance (simplified - controller and memory handle most routing)
    // Pass-through routing for non-local ports
    assign flit_out_2 = flit_in_2;  // Pass-through for east port  
    assign flit_out_3 = flit_in_3;  // Pass-through for south port
    assign flit_out_4 = flit_in_4;  // Pass-through for west port
    
    assign valid_out_2 = valid_in_2;
    assign valid_out_3 = valid_in_3;
    assign valid_out_4 = valid_in_4;
    
    assign ready_out_2 = ready_in_2;
    assign ready_out_3 = ready_in_3;
    assign ready_out_4 = ready_in_4;

endmodule
