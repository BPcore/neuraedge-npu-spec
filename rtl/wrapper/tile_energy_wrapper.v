`timescale 1ns/1ps
// tile_energy_wrapper
// Purpose: Thin wrapper around tile providing focused ports for power/energy accuracy testing.
// Exposes: clock, reset, utilization drive, dynamic/leakage power inputs (optional override),
// frequency MHz, and energy outputs. Designed to simplify absolute energy TB harness.
// Assumptions: Under test we can drive current_freq_mhz via provided input overriding DVFS manager.
// If USE_INTERNAL_DVFS=1, wrapper passes through tile's power manager frequency instead.
module tile_energy_wrapper #(
    parameter MAC_LANES = 4,
    parameter NUM_PES   = 8,
    parameter USE_INTERNAL_DVFS = 0
)(
    input  wire        clk,
    input  wire        reset,
    // Testbench-provided frequency (MHz) if not using internal DVFS
    input  wire [15:0] tb_freq_mhz,
    // Optional external dynamic/leakage power model inputs (mW) for golden comparison
    // If zero, tile's internal power manager values are used.
    input  wire [15:0] ext_dynamic_power_mw,
    input  wire [15:0] ext_leakage_power_mw,
    // Energy outputs (pJ)
    output wire [63:0] total_energy_pj,
    output wire [63:0] dynamic_energy_pj,
    output wire [63:0] leakage_energy_pj,
    // Telemetry mirrors
    output wire [15:0] current_freq_mhz_out,
    output wire [15:0] dynamic_power_mw_out,
    output wire [15:0] leakage_power_mw_out
);

    // Internal wires from tile
    wire [15:0] current_freq_mhz_tile;
    wire [15:0] dynamic_power_mw_tile;
    wire [15:0] leakage_power_mw_tile;
    wire [63:0] total_energy_tile;
    wire [63:0] dynamic_energy_tile;
    wire [63:0] leakage_energy_tile;

    // Instantiate existing tile (minimal parameter subset)
    // NOTE: We rely on tile exposing current power/freq & energy registers already.
    neuraedge_tile_50tops tile_u (
        .clk(clk), .reset(reset),
        // CSR interface tied off (no external CSR driving in this wrapper test mode)
        .csr_valid(1'b0), .csr_write(1'b0), .csr_addr(8'd0), .csr_wdata(32'd0), .csr_rdata(), .csr_ready(),
        // Minimal host/NoC interfaces stubbed
        .host_valid(1'b0), .host_data_in(64'd0), .host_ready(), .host_data_out(), .host_data_out_valid(),
        // memory / DMA stubs
        .mem_req_valid_o(), .mem_req_is_dram_o(), .mem_req_size_bytes_o(), .mem_req_ready_i(1'b1),
        .mem_resp_valid_i(1'b0), .mem_resp_size_bytes_i(16'd0),
        // outputs not used in this wrapper
        .physical_operations(), .effective_operations(), .skipped_operations(),
        .bytes_sram(), .bytes_dram(),
        .dynamic_power_mw(dynamic_power_mw_tile), .leakage_power_mw(leakage_power_mw_tile),
        .current_freq_mhz(current_freq_mhz_tile),
        .energy_pj(total_energy_tile), .dynamic_energy_pj(dynamic_energy_tile), .leakage_energy_pj(leakage_energy_tile)
        // ... the remainder of tile ports (not shown) would be tied off or left for synthesis tools.
    );

    // Select frequency source
    wire [15:0] freq_sel = (USE_INTERNAL_DVFS) ? current_freq_mhz_tile : tb_freq_mhz;
    assign current_freq_mhz_out = freq_sel;

    // Power selection (allow external override for golden comparison)
    assign dynamic_power_mw_out = (ext_dynamic_power_mw != 0) ? ext_dynamic_power_mw : dynamic_power_mw_tile;
    assign leakage_power_mw_out = (ext_leakage_power_mw != 0) ? ext_leakage_power_mw : leakage_power_mw_tile;

    // Forward energy (tile already accumulates internally based on its own freq/power model)
    assign total_energy_pj   = total_energy_tile;
    assign dynamic_energy_pj = dynamic_energy_tile;
    assign leakage_energy_pj = leakage_energy_tile;

endmodule
