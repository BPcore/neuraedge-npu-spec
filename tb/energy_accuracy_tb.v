`timescale 1ns/1ps
// energy_accuracy_tb
// Goal: validate proportionality of dynamic & leakage energy accumulation vs configured power and cycle time.
// Method: instantiate a simplified tile wrapper or directly drive power model signals if available.
// For now we instantiate neuraedge_tile_50tops (single tile) and run with fixed power settings
// by holding utilization constant and reading energy counters after N cycles.
// Expected: energy_pj ≈ (dynamic_power_mw+leakage_power_mw) * cycle_time_ps/1000 * cycles within small tolerance.
// NOTE: Current accumulation uses heuristic divisor (cycle_time_ps/1000) already, so we just sanity-check scaling across two durations.

module energy_accuracy_tb;
  reg clk=0, reset=1; always #1 clk=~clk; // 500 MHz => 2ns period => 2000 ps

  // Minimal CSR interface stubs (tie-offs where unused)
  reg csr_valid=0, csr_write=0; reg [7:0] csr_addr=0; reg [31:0] csr_wdata=0; wire [31:0] csr_rdata; wire csr_ready;

  // Instantiate tile (parameters default inside)
  // Provide minimal required wires (some may be unconnected for this focused test)
  wire [63:0] energy_pj, dyn_energy_pj, leak_energy_pj; // capture later via hierarchical reference if needed
  // We'll just use CSR reads if mapping exists; else hierarchical net names in tile.

  // Use a greatly reduced configuration (1x1 PE, sparsity engine disabled) to minimize compile time while
  // preserving energy accumulation logic under test. Original defaults (32x64) add large synthesis burden.
  neuraedge_tile_50tops #(
    .TILE_ID(0),
    .PE_ROWS(1),
    .PE_COLS(1),
    .DISABLE_SPARSITY_ENGINE(1)
  ) tile (
    .clk(clk), .reset(reset),
    // CSR bus
    .csr_valid(csr_valid), .csr_write(csr_write), .csr_addr(csr_addr), .csr_wdata(csr_wdata), .csr_rdata(csr_rdata), .csr_ready(csr_ready)
    // ...existing unused ports left to implicit default if present...
  );

  integer i;
  reg [63:0] energy_t0, energy_t1, energy_t2;
  reg [63:0] seg1_energy, seg2_energy; // simple linearity segments
  initial begin
    repeat(5) @(posedge clk); reset=0; @(posedge clk);
    // Wait some cycles for any internal startup
  // Shorten warmup (was 20 cycles) to reduce sim time; only need a few to clear reset effects
  repeat(5) @(posedge clk);
  energy_t0 = tile.energy_estimate_pj_reg;
  // Use smaller segments (was 120/240) keeping 2:1 ratio to validate linearity
  repeat(40) @(posedge clk); energy_t1 = tile.energy_estimate_pj_reg; seg1_energy = energy_t1 - energy_t0;
  repeat(80) @(posedge clk); energy_t2 = tile.energy_estimate_pj_reg; seg2_energy = energy_t2 - energy_t1;
  $display("Energy linearity segments: seg1=%0d seg2=%0d", seg1_energy, seg2_energy);
  if (seg1_energy==0) $fatal(1, "Energy not accumulating");
  if ( (seg2_energy*100) < (seg1_energy*2*88) || (seg2_energy*100) > (seg1_energy*2*112) ) begin
    $fatal(1, "Linearity check failed seg1=%0d seg2=%0d", seg1_energy, seg2_energy);
  end
  $display("Energy accuracy TB PASS (linearity)");
    $finish;
  end
endmodule
