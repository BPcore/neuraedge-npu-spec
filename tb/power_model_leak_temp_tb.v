`timescale 1ns/1ps
// Temperature leakage scaling validation testbench
module power_model_leak_temp_tb;
  reg clk=0, reset=1; always #5 clk=~clk; // 100MHz
  localparam NUM_PES=64;
  reg [NUM_PES-1:0] pe_active, pe_request;
  reg [15:0] current_ops_count; reg [1:0] precision_mode; reg [7:0] temperature; reg [15:0] power_budget;
  reg [7:0] util_high=75, util_low=55; reg [15:0] perf_hyst=16'd500; reg [7:0] settle_cycles=8'd10;
  reg freq_ov_en, volt_ov_en; reg [2:0] freq_ov, volt_ov;
  // New leakage scaling controls
  reg [7:0] leak_ref_temp_c = 8'd50; // char point
  reg [15:0] leak_alpha_milli = 16'd20; // 2% per C
  wire [15:0] dyn_mw, leak_mw; wire [15:0] util_ma; wire [15:0] freq_mhz, volt_mv; wire [15:0] current_power_mw, current_tops, eff_milli;

  advanced_power_manager #(.NUM_PES(NUM_PES)) dut(
    .clk(clk), .reset(reset), .power_mode(8'd0), .utilization_target(16'd0), .performance_target(16'd20000),
    .pe_active(pe_active), .pe_request(pe_request), .current_ops_count(current_ops_count), .precision_mode(precision_mode),
    .temperature(temperature), .power_budget(power_budget),
    .util_high_thresh_pct_cfg(util_high), .util_low_thresh_pct_cfg(util_low), .perf_hyst_margin_milli_cfg(perf_hyst), .dvfs_min_settle_cycles_cfg(settle_cycles),
    .frequency_override_en(freq_ov_en), .frequency_override(freq_ov), .voltage_override_en(volt_ov_en), .voltage_override(volt_ov),
    .domain_power_enable(), .domain_clock_enable(), .pe_power_gate(), .pe_clock_gate(), .voltage_setting(), .frequency_setting(),
    .current_power_mw(current_power_mw), .current_tops(current_tops), .efficiency_tops_w(eff_milli), .power_efficiency_grade(),
    .dynamic_power_mw(dyn_mw), .leakage_power_mw(leak_mw), .utilization_ma_out(util_ma), .current_freq_mhz(freq_mhz), .current_voltage_mv(volt_mv),
    .leak_ref_temp_c(leak_ref_temp_c), .leak_alpha_milli(leak_alpha_milli)
  );

  integer code; integer temp_step; integer util_norm_1000; integer leak_exp; real err_pct; integer pass=0, fail=0;
  initial begin
    pe_active = {NUM_PES{1'b1}}; pe_request = {NUM_PES{1'b1}}; current_ops_count=16'd4000; precision_mode=2'b00;
    temperature=8'd50; power_budget=16'd5000; freq_ov_en=0; volt_ov_en=0; freq_ov=0; volt_ov=0;
    repeat(5) @(posedge clk); reset=0; @(posedge clk);
    // Force specific pstate
    freq_ov_en=1; volt_ov_en=1; freq_ov=3'd3; volt_ov=3'd3; repeat(50) @(posedge clk);
    // Sweep temperatures 30C..70C step 10
    for (temp_step=30; temp_step<=70; temp_step+=10) begin
      temperature = temp_step[7:0]; repeat(40) @(posedge clk);
      // Expected leak scaling: leak_coeff_mw[code=3] = 190mW base at ref 50C
      // scale = 1000 + alpha*(T - ref)
      leak_exp = 190 * (1000 + (leak_alpha_milli * (temp_step-50))) / 1000;
      if (leak_exp < 1) leak_exp = 1;
      err_pct = ( (leak_mw - leak_exp) * 100.0 ) / (leak_exp ? leak_exp : 1);
      $display("[LEAK_TMP] T=%0dC leak=%0d(exp=%0d err=%.2f%%)", temp_step, leak_mw, leak_exp, err_pct);
      if (err_pct < 5.0 && err_pct > -5.0) pass++; else fail++;
    end
    $display("[LEAK_TMP] PASS=%0d FAIL=%0d", pass, fail);
    if (fail!=0) $fatal(1, "Leak temp scaling failures"); else $display("[LEAK_TMP] Scaling PASS");
    $finish;
  end
endmodule
