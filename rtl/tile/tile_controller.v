// File: rtl/tile/tile_controller.v
// NeuraEdge Tile Controller - Manages PE array execution and memory access

module tile_controller #(
    parameter PE_ROWS = 32,
    parameter PE_COLS = 64,
    parameter NOC_FLIT_W = 64
)(
    input                               clk,
    input                               rst_n,
    
    // NoC interface for control commands
    input  [NOC_FLIT_W-1:0]             ctrl_flit_in,
    input                               ctrl_valid_in,
    output                              ctrl_ready_out,
    output [NOC_FLIT_W-1:0]             ctrl_flit_out,
    output                              ctrl_valid_out,
    input                               ctrl_ready_in,
    
    // PE array control outputs
    output [PE_ROWS-1:0]                pe_enable_rows,
    output [PE_ROWS-1:0]                mac_clear_rows,
    output [PE_ROWS-1:0]                accumulate_en_rows,
    output [7:0]                        input_data,
    output                              input_data_valid,
    output [7:0]                        weight_data,
    
    // Memory interface control
    output [3:0]                        mem_bank_enable,
    output [3:0]                        mem_bank_write_en,
    output [51:0]                       mem_bank_addr,    // 4 banks × 13 bits (packed {bank3,...,bank0})
    output [255:0]                      mem_bank_wdata,   // 4 banks × 64 bits
    input  [255:0]                      mem_bank_rdata,
    input  [3:0]                        mem_bank_ready,
    
    // Status and debug
    output [31:0]                       execution_status,
    output                              tile_busy
);

    // Control registers
    reg [PE_ROWS-1:0] pe_enable_reg;
    reg [PE_ROWS-1:0] mac_clear_reg;
    reg [PE_ROWS-1:0] accumulate_en_reg;
    reg [7:0] input_data_reg;
    reg input_data_valid_reg;
    reg [7:0] weight_data_reg;
    
    // Memory control registers
    reg [3:0] mem_enable_reg;
    reg [3:0] mem_write_en_reg;
    reg [51:0] mem_addr_reg;
    reg [255:0] mem_wdata_reg;
    
    // Status registers
    reg [31:0] status_reg;
    reg busy_reg;
    
    // Command decoder
    wire [7:0] cmd_opcode = ctrl_flit_in[63:56];
    wire [7:0] cmd_row_sel = ctrl_flit_in[55:48]; // full 8-bit row select (upper bits ignored if >PE_ROWS)
    wire [15:0] cmd_data = ctrl_flit_in[47:32];
    wire [31:0] cmd_payload = ctrl_flit_in[31:0];

    // Mask row index to needed width to avoid wide dynamic index warnings
    localparam int ROW_IDX_W = (PE_ROWS <= 2) ? 1 : $clog2(PE_ROWS);
    wire [ROW_IDX_W-1:0] row_idx = cmd_row_sel[ROW_IDX_W-1:0];
    
    // Command opcodes
    localparam CMD_PE_ENABLE    = 8'h01;
    localparam CMD_MAC_CLEAR    = 8'h02;
    localparam CMD_ACCUM_EN     = 8'h03;
    localparam CMD_LOAD_DATA    = 8'h04;
    localparam CMD_LOAD_WEIGHT  = 8'h05;
    localparam CMD_MEM_WRITE    = 8'h10;
    localparam CMD_MEM_READ     = 8'h11;
    localparam CMD_STATUS       = 8'hF0;
    
    // Control logic
    always @(posedge clk) begin
        if (!rst_n) begin
            pe_enable_reg <= {PE_ROWS{1'b0}};
            mac_clear_reg <= {PE_ROWS{1'b0}};
            accumulate_en_reg <= {PE_ROWS{1'b0}};
            input_data_reg <= 8'b0;
            input_data_valid_reg <= 1'b0;
            weight_data_reg <= 8'b0;
            mem_enable_reg <= 4'b0;
            mem_write_en_reg <= 4'b0;
            mem_addr_reg <= 52'b0; // 4*13
            mem_wdata_reg <= 256'b0;
            status_reg <= 32'b0;
            busy_reg <= 1'b0;
        end else begin
            // Default: clear single-cycle commands
            mac_clear_reg <= {PE_ROWS{1'b0}};
            input_data_valid_reg <= 1'b0;
            mem_enable_reg <= 4'b0;
            mem_write_en_reg <= 4'b0;
            
            // Process incoming commands
            if (ctrl_valid_in && ctrl_ready_out) begin
                case (cmd_opcode)
                    CMD_PE_ENABLE: begin
                        if (cmd_row_sel < PE_ROWS) begin
                            pe_enable_reg[row_idx] <= cmd_data[0];
                        end else begin
                            pe_enable_reg <= cmd_payload[PE_ROWS-1:0];
                        end
                        busy_reg <= |cmd_payload[PE_ROWS-1:0];
                    end
                    
                    CMD_MAC_CLEAR: begin
                        if (cmd_row_sel < PE_ROWS) begin
                            mac_clear_reg[row_idx] <= 1'b1;
                        end else begin
                            mac_clear_reg <= {PE_ROWS{1'b1}};
                        end
                    end
                    
                    CMD_ACCUM_EN: begin
                        if (cmd_row_sel < PE_ROWS) begin
                            accumulate_en_reg[row_idx] <= cmd_data[0];
                        end else begin
                            accumulate_en_reg <= cmd_payload[PE_ROWS-1:0];
                        end
                    end
                    
                    CMD_LOAD_DATA: begin
                        input_data_reg <= cmd_data[7:0];
                        input_data_valid_reg <= 1'b1;
                    end
                    
                    CMD_LOAD_WEIGHT: begin
                        weight_data_reg <= cmd_data[7:0];
                    end
                    
                    CMD_MEM_WRITE: begin
                        mem_enable_reg <= cmd_data[3:0];
                        mem_write_en_reg <= cmd_data[3:0];
                        // Expand 12-bit address field (bits 15:4) to 13 bits with zero MSB and replicate per bank
                        mem_addr_reg <= { {1'b0,cmd_data[15:4]}, {1'b0,cmd_data[15:4]}, {1'b0,cmd_data[15:4]}, {1'b0,cmd_data[15:4]} };
                        mem_wdata_reg <= { ctrl_flit_in, ctrl_flit_in, ctrl_flit_in, ctrl_flit_in };   // Replicate data to all banks
                    end
                    
                    CMD_MEM_READ: begin
                        mem_enable_reg <= cmd_data[3:0];
                        mem_addr_reg <= { {1'b0,cmd_data[15:4]}, {1'b0,cmd_data[15:4]}, {1'b0,cmd_data[15:4]}, {1'b0,cmd_data[15:4]} };
                    end
                    
                    default: begin
                        // Unknown command - update status
                        status_reg <= {24'h000000, cmd_opcode};  // Fix: use valid hex literal
                    end
                endcase
            end
            
            // Update status
            status_reg[7:0] <= {4'b0, mem_bank_ready};  // Memory status (ready bits in low nibble)
            status_reg[15:8] <= {7'b0, busy_reg};       // Tile busy status
        end
    end
    
    // Output assignments
    assign pe_enable_rows = pe_enable_reg;
    assign mac_clear_rows = mac_clear_reg;
    assign accumulate_en_rows = accumulate_en_reg;
    assign input_data = input_data_reg;
    assign input_data_valid = input_data_valid_reg;
    assign weight_data = weight_data_reg;
    
    assign mem_bank_enable = mem_enable_reg;
    assign mem_bank_write_en = mem_write_en_reg;
    assign mem_bank_addr = mem_addr_reg;
    assign mem_bank_wdata = mem_wdata_reg;
    
    assign execution_status = status_reg;
    assign tile_busy = busy_reg;
    
    // Control interface responses
    assign ctrl_ready_out = 1'b1;  // Always ready to accept commands
    // Return status (upper 32) + low 32 bits of memory data = 64-bit response flit
    assign ctrl_flit_out = {status_reg, mem_bank_rdata[31:0]};
    // Observe upper memory data bits to avoid UNUSED warnings (functional no-op)
    wire unused_mem_bank_rdata_upper = |mem_bank_rdata[255:32];
    assign ctrl_valid_out = ctrl_valid_in;  // Echo valid for simple response

endmodule
