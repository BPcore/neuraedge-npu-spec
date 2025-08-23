`timescale 1ns/1ps
// Enhanced NeuraEdge NPU Top Level for 50 TOPS/W
// Integrates 4 enhanced tiles with advanced power management and sparsity
// Targets 50 TOPS/W efficiency with 14nm FinFET technology

module neuraedge_npu_50tops #(
    parameter NUM_TILES = 4,
    parameter DATA_WIDTH = 8
) (
    input wire clk,
    input wire reset,
    
    // System control
    input wire [7:0] power_mode,
    input wire [15:0] system_power_budget_mw,
    input wire [7:0] chip_temperature,
    input wire [15:0] performance_target_tops,
    
    // Global sparsity and precision control
    input wire global_sparsity_enable,
    input wire [1:0] global_sparsity_mode,
    input wire [1:0] global_precision_mode,
    
    // Data interfaces
    input wire [DATA_WIDTH*64-1:0] data_in,  // 64-wide input
    input wire data_valid,
    
    // System outputs
    output wire [31:0] system_ops_per_second,
    output wire [15:0] system_power_consumption_mw,
    output wire [15:0] system_efficiency_tops_w,
    output wire [7:0] system_efficiency_grade,
    output wire [15:0] total_active_pes,
    output wire system_ready,
    
    // Debug and monitoring
    output wire [(NUM_TILES*32)-1:0] tile_status_flat,
    output wire [(NUM_TILES*16)-1:0] tile_power_flat,
    output wire [(NUM_TILES*16)-1:0] tile_efficiency_flat,
    // Expose aggregated CSR bus (broadcast writes, tile-select reads)
    input  wire csr_valid,
    input  wire csr_write,
    input  wire [7:0] csr_addr,
    input  wire [31:0] csr_wdata,
    output wire [31:0] csr_rdata,
    output wire csr_ready
);

// Per-tile signals
wire [31:0] tile_ops [0:NUM_TILES-1];
wire [31:0] tile_phys_ops [0:NUM_TILES-1];
wire [31:0] tile_eff_ops [0:NUM_TILES-1];
wire [31:0] tile_skipped_ops [0:NUM_TILES-1];
wire [15:0] tile_power_consumption [0:NUM_TILES-1];
wire [15:0] tile_efficiency_tops_w [0:NUM_TILES-1];
wire [7:0] tile_efficiency_grade [0:NUM_TILES-1];
wire [15:0] tile_active_pes [0:NUM_TILES-1];
wire [15:0] tile_sparsity_ratio [0:NUM_TILES-1];
wire [NUM_TILES-1:0] tile_ready;
wire [31:0] tile_status [0:NUM_TILES-1];
// CSR per-tile read/ready (simple broadcast write model)
wire [31:0] tile_csr_rdata [0:NUM_TILES-1];
wire [NUM_TILES-1:0] tile_csr_ready;
// Telemetry arrays
wire [63:0] tile_energy_pj [0:NUM_TILES-1];
wire [63:0] tile_dyn_energy_pj [0:NUM_TILES-1];
wire [63:0] tile_leak_energy_pj [0:NUM_TILES-1];
wire [31:0] tile_bytes_sram [0:NUM_TILES-1];
wire [31:0] tile_bytes_dram [0:NUM_TILES-1];
wire [31:0] tile_cycles_stalled_dma [0:NUM_TILES-1];
wire [31:0] tile_cycles_stalled_mask [0:NUM_TILES-1];
wire [63:0] tile_noc_flit_local_unused [0:NUM_TILES-1];
wire tile_noc_valid_local_unused [0:NUM_TILES-1];
// Aggregated registers
reg [63:0] total_energy_pj;
reg [63:0] total_dyn_energy_pj;
reg [63:0] total_leak_energy_pj;
reg [31:0] total_bytes_sram;
reg [31:0] total_bytes_dram;

// Loop variable for generate blocks
genvar i, tile_idx;

// NoC interconnect (mesh topology)
wire [63:0] noc_flit_h [0:NUM_TILES-1][0:1];  // Horizontal flits [tile][direction]
wire [63:0] noc_flit_v [0:NUM_TILES-1][0:1];  // Vertical flits [tile][direction]
wire noc_valid_h [0:NUM_TILES-1][0:1];        // Horizontal valid
wire noc_valid_v [0:NUM_TILES-1][0:1];        // Vertical valid

// Global power management
reg [15:0] power_budget_per_tile;
reg [7:0] adaptive_power_mode [0:NUM_TILES-1];
integer j;  // For always block loops

always @(posedge clk) begin
    if (reset) begin
        power_budget_per_tile <= 16'd250;  // 250mW per tile initially
    end else begin
        // Distribute power budget among tiles
        power_budget_per_tile <= system_power_budget_mw >> 2;  // Divide by 4 tiles
        
        // Adaptive power mode per tile based on performance
        for (j = 0; j < NUM_TILES; j = j + 1) begin
            if (tile_efficiency_tops_w[j] < 16'd30) begin
                adaptive_power_mode[j] <= 8'd200;  // More aggressive power saving
            end else if (tile_efficiency_tops_w[j] > 16'd60) begin
                adaptive_power_mode[j] <= 8'd64;   // Allow higher performance
            end else begin
                adaptive_power_mode[j] <= power_mode;  // Use global setting
            end
        end
    end
end

// Instantiate enhanced tiles
generate
    for (tile_idx = 0; tile_idx < NUM_TILES; tile_idx = tile_idx + 1) begin : tiles
        
        // Tile data distribution (16 lanes per tile from 64-lane input)
        wire [DATA_WIDTH*16-1:0] tile_data_in;
        assign tile_data_in = data_in[DATA_WIDTH*(tile_idx*16+16)-1:DATA_WIDTH*tile_idx*16];
        
    neuraedge_tile_50tops #(
            .PE_ROWS(32),
            .PE_COLS(64),  // 2048 PEs per tile
            .DATA_WIDTH(DATA_WIDTH),
            .TILE_ID(tile_idx)
        ) tile_inst (
            .clk(clk),
            .reset(reset),
            
            // Power management
            .power_mode(adaptive_power_mode[tile_idx]),
            .power_budget_mw(power_budget_per_tile),
            .temperature(chip_temperature),
            .performance_target(performance_target_tops >> 2),  // Target per tile
            
            // Sparsity and precision
            .sparsity_enable(global_sparsity_enable),
            .sparsity_mode(global_sparsity_mode),
            .precision_mode(global_precision_mode),
            
            // Data interface
            .data_in(tile_data_in),
            .data_valid(data_valid),
            .data_pattern(16'hFFFF),  // Broadcast pattern
            
            // NoC connections (mesh topology)
            .noc_flit_in_n(tile_idx >= 2 ? noc_flit_v[tile_idx-2][1] : 64'b0),
            .noc_flit_in_s(tile_idx < 2 ? noc_flit_v[tile_idx+2][0] : 64'b0),
            .noc_flit_in_e(tile_idx % 2 == 0 ? noc_flit_h[tile_idx+1][0] : 64'b0),
            .noc_flit_in_w(tile_idx % 2 == 1 ? noc_flit_h[tile_idx-1][1] : 64'b0),
            .noc_flit_in_local(64'b0),
            
            .noc_valid_in_n(tile_idx >= 2 ? noc_valid_v[tile_idx-2][1] : 1'b0),
            .noc_valid_in_s(tile_idx < 2 ? noc_valid_v[tile_idx+2][0] : 1'b0),
            .noc_valid_in_e(tile_idx % 2 == 0 ? noc_valid_h[tile_idx+1][0] : 1'b0),
            .noc_valid_in_w(tile_idx % 2 == 1 ? noc_valid_h[tile_idx-1][1] : 1'b0),
            .noc_valid_in_local(1'b0),
            
            .noc_flit_out_n(noc_flit_v[tile_idx][0]),
            .noc_flit_out_s(noc_flit_v[tile_idx][1]),
            .noc_flit_out_e(noc_flit_h[tile_idx][1]),
            .noc_flit_out_w(noc_flit_h[tile_idx][0]),
            .noc_flit_out_local(tile_noc_flit_local_unused[tile_idx]),
            
            .noc_valid_out_n(noc_valid_v[tile_idx][0]),
            .noc_valid_out_s(noc_valid_v[tile_idx][1]),
            .noc_valid_out_e(noc_valid_h[tile_idx][1]),
            .noc_valid_out_w(noc_valid_h[tile_idx][0]),
            .noc_valid_out_local(tile_noc_valid_local_unused[tile_idx]),
            
            // Performance outputs
            .ops_per_second(tile_ops[tile_idx]),
            .phys_ops_per_second(tile_phys_ops[tile_idx]),
            .eff_ops_per_second(tile_eff_ops[tile_idx]),
            .skipped_phys_ops_per_second(tile_skipped_ops[tile_idx]),
            .power_consumption_mw(tile_power_consumption[tile_idx]),
            .efficiency_tops_w(tile_efficiency_tops_w[tile_idx]),
            .efficiency_grade(tile_efficiency_grade[tile_idx]),
            .active_pe_count(tile_active_pes[tile_idx]),
            .sparsity_ratio(tile_sparsity_ratio[tile_idx]),
            
                // Instrumentation / CSR ports captured for aggregation
                .energy_estimate_pj(tile_energy_pj[tile_idx]),
                .bytes_read_sram(tile_bytes_sram[tile_idx]),
                .bytes_read_dram(tile_bytes_dram[tile_idx]),
                .cycles_stalled_dma(tile_cycles_stalled_dma[tile_idx]),
                .cycles_stalled_mask(tile_cycles_stalled_mask[tile_idx]),
                .dynamic_energy_estimate_pj(tile_dyn_energy_pj[tile_idx]),
                .leakage_energy_estimate_pj(tile_leak_energy_pj[tile_idx]),
                // CSR interface (shared broadcast: writes go to all tiles, read mux returns tile0)
                .lane_active_mask({1{1'b1}}),
                .csr_valid(csr_valid),
                .csr_write(csr_write),
                .csr_addr(csr_addr),
                .csr_wdata(csr_wdata),
                .csr_rdata(tile_csr_rdata[tile_idx]),
                .csr_ready(tile_csr_ready[tile_idx]),
                .tile_ready(tile_ready[tile_idx]),
                .debug_status(tile_status[tile_idx])
        );
// CSR readback mux with tile select (csr_addr[7:6])
wire [1:0] csr_tile_sel = csr_addr[7:6];
assign csr_rdata = tile_csr_rdata[csr_tile_sel];
assign csr_ready = &tile_csr_ready; // all tiles responded
    end
endgenerate

// Convert to flat outputs
generate
    for (i = 0; i < NUM_TILES; i = i + 1) begin : flatten_outputs
        assign tile_status_flat[(i+1)*32-1:i*32] = tile_status[i];
        assign tile_power_flat[(i+1)*16-1:i*16] = tile_power_consumption[i];
        assign tile_efficiency_flat[(i+1)*16-1:i*16] = tile_efficiency_tops_w[i];
    end
endgenerate

// System-level aggregation
reg [31:0] total_ops;
reg [15:0] total_power;
reg [15:0] total_active_pe_count;
reg [7:0] avg_efficiency_grade;

always @(posedge clk) begin
    if (reset) begin
        total_ops <= 32'b0;
        total_power <= 16'b0;
        total_active_pe_count <= 16'b0;
        avg_efficiency_grade <= 8'b0;
    total_energy_pj <= 64'b0;
    total_dyn_energy_pj <= 64'b0;
    total_leak_energy_pj <= 64'b0;
    total_bytes_sram <= 32'b0;
    total_bytes_dram <= 32'b0;
    end else begin
        // Sum across all tiles
        total_ops <= tile_ops[0] + tile_ops[1] + tile_ops[2] + tile_ops[3];
        total_power <= tile_power_consumption[0] + tile_power_consumption[1] + 
                      tile_power_consumption[2] + tile_power_consumption[3];
        total_active_pe_count <= tile_active_pes[0] + tile_active_pes[1] + 
                                tile_active_pes[2] + tile_active_pes[3];
    total_energy_pj <= tile_energy_pj[0] + tile_energy_pj[1] + tile_energy_pj[2] + tile_energy_pj[3];
    total_dyn_energy_pj <= tile_dyn_energy_pj[0] + tile_dyn_energy_pj[1] + tile_dyn_energy_pj[2] + tile_dyn_energy_pj[3];
    total_leak_energy_pj <= tile_leak_energy_pj[0] + tile_leak_energy_pj[1] + tile_leak_energy_pj[2] + tile_leak_energy_pj[3];
    total_bytes_sram <= tile_bytes_sram[0] + tile_bytes_sram[1] + tile_bytes_sram[2] + tile_bytes_sram[3];
    total_bytes_dram <= tile_bytes_dram[0] + tile_bytes_dram[1] + tile_bytes_dram[2] + tile_bytes_dram[3];
        
        // Average efficiency grade
        avg_efficiency_grade <= (tile_efficiency_grade[0] + tile_efficiency_grade[1] + 
                                tile_efficiency_grade[2] + tile_efficiency_grade[3]) >> 2;
    end
end

// System outputs
assign system_ops_per_second = total_ops;
assign system_power_consumption_mw = total_power;
// Compute overall efficiency (milli TOPS/W). Use 32-bit intermediate then truncate.
wire [31:0] system_efficiency_milli = (total_power != 0) ? (((total_ops >> 10) * 32'd1000) / total_power) : 32'h0000_FFFF;
assign system_efficiency_tops_w = system_efficiency_milli[15:0];
assign system_efficiency_grade = avg_efficiency_grade;
assign total_active_pes = total_active_pe_count;
assign system_ready = &tile_ready;  // All tiles ready

endmodule
