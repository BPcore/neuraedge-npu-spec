`timescale 1ns/1ps
// Multi-temperature power model calibration & leakage scaling verification
// Produces CSV-style log lines for characterization across DVFS codes & temperatures.
module power_model_calibration_multitemp_tb;
  localparam NUM_PES=64; // small array to speed convergence
  reg clk=0, reset=1; always #5 clk=~clk; // 100MHz
  reg [NUM_PES-1:0] pe_active, pe_request;
  reg [15:0] current_ops_count; reg [1:0] precision_mode; reg [7:0] temperature; reg [15:0] power_budget;
  reg [7:0] util_high=75, util_low=55; reg [15:0] perf_hyst=16'd500; reg [7:0] settle_cycles=8'd20;
  reg freq_ov_en, volt_ov_en; reg [2:0] freq_ov, volt_ov;
  // Leakage scaling controls (alpha linear term milli-per-C, beta quadratic term milli)
  reg [7:0] leak_ref_temp_c = 8'd50; reg [15:0] leak_alpha_milli = 16'd20; // default 2%/C
  reg [15:0] leak_beta_milli = 16'd0; // default disabled
  wire [15:0] current_power_mw, current_tops, eff_milli, dyn_mw, leak_mw, util_ma, freq_mhz, volt_mv;

  advanced_power_manager #(.NUM_PES(NUM_PES)) dut(
    .clk(clk), .reset(reset), .power_mode(8'd0), .utilization_target(16'd0), .performance_target(16'd20000),
    .pe_active(pe_active), .pe_request(pe_request), .current_ops_count(current_ops_count), .precision_mode(precision_mode),
    .temperature(temperature), .power_budget(power_budget),
    .util_high_thresh_pct_cfg(util_high), .util_low_thresh_pct_cfg(util_low), .perf_hyst_margin_milli_cfg(perf_hyst), .dvfs_min_settle_cycles_cfg(settle_cycles),
    .frequency_override_en(freq_ov_en), .frequency_override(freq_ov), .voltage_override_en(volt_ov_en), .voltage_override(volt_ov),
    .domain_power_enable(), .domain_clock_enable(), .pe_power_gate(), .pe_clock_gate(), .voltage_setting(), .frequency_setting(),
    .current_power_mw(current_power_mw), .current_tops(current_tops), .efficiency_tops_w(eff_milli), .power_efficiency_grade(),
    .dynamic_power_mw(dyn_mw), .leakage_power_mw(leak_mw), .utilization_ma_out(util_ma), .current_freq_mhz(freq_mhz), .current_voltage_mv(volt_mv),
  .leak_ref_temp_c(leak_ref_temp_c), .leak_alpha_milli(leak_alpha_milli), .leak_beta_milli(leak_beta_milli)
  );

  // Mirror coeff tables (must match DUT initial block)
  reg [15:0] dyn_coeff_mw_per_util [0:7];
  reg [15:0] leak_coeff_mw         [0:7];
  initial begin
    dyn_coeff_mw_per_util[0] = 16'd800;  leak_coeff_mw[0] = 16'd120;
    dyn_coeff_mw_per_util[1] = 16'd1100; leak_coeff_mw[1] = 16'd140;
    dyn_coeff_mw_per_util[2] = 16'd1450; leak_coeff_mw[2] = 16'd165;
    dyn_coeff_mw_per_util[3] = 16'd1850; leak_coeff_mw[3] = 16'd190;
    dyn_coeff_mw_per_util[4] = 16'd2300; leak_coeff_mw[4] = 16'd215;
    dyn_coeff_mw_per_util[5] = 16'd2700; leak_coeff_mw[5] = 16'd240;
    dyn_coeff_mw_per_util[6] = 16'd3150; leak_coeff_mw[6] = 16'd260;
    dyn_coeff_mw_per_util[7] = 16'd3150; leak_coeff_mw[7] = 16'd260;
  end

  integer code, t_idx; integer temps[0:4]; integer util_norm_1000; integer exp_dyn_int; integer exp_leak_base; integer exp_leak_scaled; real dyn_err_pct, leak_err_pct; integer pass=0, fail=0; integer fh;
  // Residual aggregation across all (code,temp) samples
  real leak_err_abs_sum; real leak_err_sq_sum; real leak_err_max; integer sample_count;
  real mean_abs_leak_err_pct; real rms_leak_err_pct;
  // Idle leakage comparison
  integer full_ref_leak_mw; integer idle_leak_mw; real idle_leak_delta_pct;
  initial begin
  // Optional plusargs to override alpha/beta for experimentation: +LEAK_ALPHA=NN +LEAK_BETA=NN +LEAK_REF=TT
  integer tmp_plus;
  if ($value$plusargs("LEAK_ALPHA=%d", tmp_plus)) begin leak_alpha_milli = tmp_plus[15:0]; $display("[PLUSARG] Override leak_alpha_milli=%0d", leak_alpha_milli); end
  if ($value$plusargs("LEAK_BETA=%d", tmp_plus)) begin leak_beta_milli = tmp_plus[15:0]; $display("[PLUSARG] Override leak_beta_milli=%0d", leak_beta_milli); end
  if ($value$plusargs("LEAK_REF=%d", tmp_plus)) begin leak_ref_temp_c = tmp_plus[7:0]; $display("[PLUSARG] Override leak_ref_temp_c=%0d", leak_ref_temp_c); end

  temps[0]=20; temps[1]=30; temps[2]=50; temps[3]=70; temps[4]=90;
    pe_active = {NUM_PES{1'b1}}; pe_request = {NUM_PES{1'b1}}; current_ops_count=16'd4000; precision_mode=2'b00;
    temperature=8'd50; power_budget=16'd6000; freq_ov_en=0; volt_ov_en=0; freq_ov=0; volt_ov=0;
    repeat(5) @(posedge clk); reset=0; @(posedge clk);
  $display("CAL_MULTI_CSV,header,code,tempC,util_norm_1000,dyn_mw,leak_mw,exp_dyn_mw,exp_leak_mw,dyn_err_pct,leak_err_pct");
  fh = $fopen("multi_temp_calibration.csv","w");
  if (fh) $fwrite(fh, "code,tempC,util_norm_1000,dyn_mw,leak_mw,exp_dyn_mw,exp_leak_mw,dyn_err_pct,leak_err_pct\n");
  leak_err_abs_sum = 0.0; leak_err_sq_sum = 0.0; leak_err_max = 0.0; sample_count = 0; full_ref_leak_mw = 0; idle_leak_mw = 0;
    for (code=0; code<7; code=code+1) begin
      freq_ov = code[2:0]; volt_ov = code[2:0]; freq_ov_en=1; volt_ov_en=1; repeat(80) @(posedge clk); // converge util MA
      util_norm_1000 = (util_ma * 1000)/NUM_PES;
      exp_dyn_int = (dyn_coeff_mw_per_util[code] * util_norm_1000)/1000;
      for (t_idx=0; t_idx<5; t_idx=t_idx+1) begin
        temperature = temps[t_idx][7:0]; repeat(60) @(posedge clk);
        exp_leak_base = leak_coeff_mw[code];
        exp_leak_scaled = (exp_leak_base * (1000 + leak_alpha_milli * (temps[t_idx]-leak_ref_temp_c)) ) / 1000;
        // If quadratic term enabled (non-zero beta) approximate expectation with added beta*delta^2/1000
        if (leak_beta_milli != 16'd0) begin
          integer delta_local; integer quad_term_scaled; delta_local = (temps[t_idx]-leak_ref_temp_c); if (delta_local<0) delta_local = -delta_local; // signed magnitude for square
          quad_term_scaled = (exp_leak_base * ( (leak_beta_milli * (delta_local*delta_local)) / 1000 )) / 1000;
          exp_leak_scaled = exp_leak_scaled + quad_term_scaled;
          if (exp_leak_scaled < 1) exp_leak_scaled = 1;
        end
        if (exp_leak_scaled < 1) exp_leak_scaled = 1;
        dyn_err_pct  = ( (dyn_mw  - exp_dyn_int)     * 100.0 ) / (exp_dyn_int  ? exp_dyn_int  : 1);
        leak_err_pct = ( (leak_mw - exp_leak_scaled) * 100.0 ) / (exp_leak_scaled ? exp_leak_scaled : 1);
        $display("CAL_MULTI_CSV,data,%0d,%0d,%0d,%0d,%0d,%0d,%0d,%.2f,%.2f", code, temps[t_idx], util_norm_1000, dyn_mw, leak_mw, exp_dyn_int, exp_leak_scaled, dyn_err_pct, leak_err_pct);
        if (fh) $fwrite(fh, "%0d,%0d,%0d,%0d,%0d,%0d,%0d,%.2f,%.2f\n", code, temps[t_idx], util_norm_1000, dyn_mw, leak_mw, exp_dyn_int, exp_leak_scaled, dyn_err_pct, leak_err_pct);
        // Aggregate leakage residual stats
        if (leak_err_pct < 0) begin
          if (-leak_err_pct > leak_err_max) leak_err_max = -leak_err_pct;
          leak_err_abs_sum = leak_err_abs_sum + (-leak_err_pct);
          leak_err_sq_sum  = leak_err_sq_sum + ((-leak_err_pct) * (-leak_err_pct));
        end else begin
          if (leak_err_pct > leak_err_max) leak_err_max = leak_err_pct;
          leak_err_abs_sum = leak_err_abs_sum + leak_err_pct;
          leak_err_sq_sum  = leak_err_sq_sum + (leak_err_pct * leak_err_pct);
        end
        sample_count = sample_count + 1;
        // Capture full-util reference leakage at ref temp (one mid code) for later idle comparison
        if (temps[t_idx] == leak_ref_temp_c && code == 3) full_ref_leak_mw = leak_mw;
        if ((dyn_err_pct < 3.0 && dyn_err_pct > -3.0) && (leak_err_pct < 5.0 && leak_err_pct > -5.0)) pass++; else fail++;
      end
    end
  // Compute aggregated leakage residual metrics
    if (sample_count > 0) begin
      mean_abs_leak_err_pct = leak_err_abs_sum / sample_count;
      rms_leak_err_pct = (leak_err_sq_sum / sample_count) ** 0.5;
    end else begin
      mean_abs_leak_err_pct = 0; rms_leak_err_pct = 0;
    end
    $display("CAL_MULTI_SUMMARY,pass=%0d,fail=%0d", pass, fail);
    $display("CAL_MULTI_RESIDUAL,max_abs_leak_err_pct=%.2f,mean_abs_leak_err_pct=%.2f,rms_leak_err_pct=%.2f,samples=%0d", leak_err_max, mean_abs_leak_err_pct, rms_leak_err_pct, sample_count);

    // Idle leakage comparison (disable all PEs, hold freq/volt override at mid code=3, ref temp)
    pe_active = {NUM_PES{1'b0}}; pe_request = {NUM_PES{1'b0}}; temperature = leak_ref_temp_c; freq_ov = 3; volt_ov = 3; repeat(120) @(posedge clk);
    idle_leak_mw = leak_mw;
    if (full_ref_leak_mw > 0) idle_leak_delta_pct = ( (idle_leak_mw - full_ref_leak_mw) * 100.0 ) / full_ref_leak_mw; else idle_leak_delta_pct = 0.0;
    $display("CAL_IDLE_LEAK,full_ref_leak_mw=%0d,idle_leak_mw=%0d,idle_delta_pct=%.2f", full_ref_leak_mw, idle_leak_mw, idle_leak_delta_pct);
    // Heuristic: if absolute delta < 2%, consider idle scaling deferrable
    if (idle_leak_delta_pct < 2.0 && idle_leak_delta_pct > -2.0) $display("CAL_IDLE_LEAK_DECISION,deferring_idle_scaling=1 (delta within +/-2%%)");
    else $display("CAL_IDLE_LEAK_DECISION,deferring_idle_scaling=0 (delta exceeds +/-2%% threshold)");
  if (fail!=0) $fatal(1, "Multi-temp calibration failures"); else $display("[CAL_MULTI] PASS");
  if (fh) $fclose(fh);
    $finish;
  end
endmodule
