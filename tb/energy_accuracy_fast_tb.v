`timescale 1ns/1ps
// energy_accuracy_fast_tb
// Fast absolute energy accuracy check using lightweight reference module.
// Drives fixed dynamic/leak power at a chosen frequency; compares accumulated energy after N cycles
// against closed-form expectation: cycles * power * (1e6/freq)/1000 with integer truncation per-cycle mirroring RTL math.
module energy_accuracy_fast_tb;
  reg clk=0, reset=1; always #1 clk=~clk; // 500MHz (2ns period) independent of modeled freq
  // Test parameters
  localparam [15:0] TEST_FREQ_MHZ = 16'd250; // => cycle_time_ps = 4000
  localparam [15:0] DYN_MW = 16'd37;        // 37 mW
  localparam [15:0] LEAK_MW = 16'd13;       // 13 mW
  integer i;
  wire [63:0] tot_ref, dyn_ref, leak_ref;
  integer exp_dyn, exp_leak, exp_tot; // expected totals
  reg [63:0] base_dyn, base_leak, base_tot; // baseline captures

  energy_accumulator_ref ref_u (
    .clk(clk), .reset(reset),
    .dynamic_power_mw(DYN_MW), .leakage_power_mw(LEAK_MW), .current_freq_mhz(TEST_FREQ_MHZ),
    .total_energy_pj(tot_ref), .dynamic_energy_pj(dyn_ref), .leakage_energy_pj(leak_ref)
  );

  // Golden per-cycle increments (following same integer math): inc = (power_mW * cycle_time_ps)/1000
  // cycle_time_ps = 1e6 / 250 = 4000 exactly
  localparam integer CYCLE_PS = 1000000 / TEST_FREQ_MHZ; // 4000
  localparam integer DYN_INC  = (DYN_MW  * CYCLE_PS)/1000; // 37*4000/1000=148
  localparam integer LEAK_INC = (LEAK_MW * CYCLE_PS)/1000; // 13*4000/1000=52
  localparam integer TOT_INC  = ((DYN_MW+LEAK_MW)*CYCLE_PS)/1000; // 50*4000/1000=200

  localparam integer TEST_CYCLES=300;
  initial begin
    repeat(5) @(posedge clk); reset=0; @(posedge clk); // first cycle after reset has accumulation
    // Capture baseline AFTER first post-reset accumulation to avoid off-by-one
    base_dyn  = dyn_ref; base_leak = leak_ref; base_tot = tot_ref;
    for (i=0;i<TEST_CYCLES;i=i+1) @(posedge clk);
  // Expected totals
  exp_dyn  = base_dyn  + DYN_INC  * TEST_CYCLES;
  exp_leak = base_leak + LEAK_INC * TEST_CYCLES;
  exp_tot  = base_tot  + TOT_INC  * TEST_CYCLES;
  $display("Base dyn=%0d leak=%0d tot=%0d", base_dyn, base_leak, base_tot);
  $display("Ref dyn=%0d exp_dyn=%0d leak=%0d exp_leak=%0d tot=%0d exp_tot=%0d", dyn_ref, exp_dyn, leak_ref, exp_leak, tot_ref, exp_tot);
  if (dyn_ref  !== exp_dyn)  $fatal(1, "Dynamic energy mismatch %0d != %0d (base=%0d)", dyn_ref, exp_dyn, base_dyn);
  if (leak_ref !== exp_leak) $fatal(1, "Leakage energy mismatch %0d != %0d (base=%0d)", leak_ref, exp_leak, base_leak);
  if (tot_ref  !== exp_tot)  $fatal(1, "Total energy mismatch %0d != %0d (base=%0d)", tot_ref, exp_tot, base_tot);
    $display("Energy accuracy fast TB PASS");
    $finish;
  end
endmodule
