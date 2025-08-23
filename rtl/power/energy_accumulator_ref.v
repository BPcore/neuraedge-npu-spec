`timescale 1ns/1ps
// energy_accumulator_ref
// Lightweight reference energy accumulation module mirroring tile energy logic:
//   energy_pJ_per_cycle = power_mW * cycle_time_ps / 1000
// where cycle_time_ps = 1e6 / freq_MHz (integer division).
// Provides split dynamic/leakage and combined totals.
module energy_accumulator_ref (
    input  wire        clk,
    input  wire        reset,
    input  wire [15:0] dynamic_power_mw,
    input  wire [15:0] leakage_power_mw,
    input  wire [15:0] current_freq_mhz,
    output reg  [63:0] total_energy_pj,
    output reg  [63:0] dynamic_energy_pj,
    output reg  [63:0] leakage_energy_pj
);
    // cycle time (ps) = 1e6 / MHz (integer)
    wire [31:0] cycle_time_ps = (current_freq_mhz != 0) ? (32'd1000000 / current_freq_mhz) : 32'd0;

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            total_energy_pj   <= 64'd0;
            dynamic_energy_pj <= 64'd0;
            leakage_energy_pj <= 64'd0;
        end else begin
            // Match tile accumulation math exactly (integer truncation prior to add)
            dynamic_energy_pj <= dynamic_energy_pj + ((dynamic_power_mw * cycle_time_ps) / 32'd1000);
            leakage_energy_pj <= leakage_energy_pj + ((leakage_power_mw * cycle_time_ps) / 32'd1000);
            total_energy_pj   <= total_energy_pj   + (((dynamic_power_mw + leakage_power_mw) * cycle_time_ps) / 32'd1000);
        end
    end
endmodule
