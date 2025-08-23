`timescale 1ns/1ps
// Power model calibration testbench
// Exercises DVFS states with override to measure energy accumulation consistency.
module power_model_calibration_tb;
  // Minimal signals
  reg clk=0, reset=1; always #5 clk=~clk; // 100MHz base
  // Instantiate a slimmed tile (parameters assumed default) - reuse top-level single tile module if exists
  // For brevity, directly instantiate advanced_power_manager standalone with overrides.
  localparam NUM_PES=64;
  reg [NUM_PES-1:0] pe_active, pe_request;
  reg [15:0] current_ops_count;
  reg [1:0] precision_mode;
  reg [7:0] temperature;
  reg [15:0] power_budget;
  reg [7:0] util_high=75, util_low=55; reg [15:0] perf_hyst=16'd500; reg [7:0] settle_cycles=8'd20;
  reg freq_ov_en, volt_ov_en; reg [2:0] freq_ov, volt_ov;
  wire [15:0] current_power_mw, current_tops, eff_milli, dyn_mw, leak_mw, util_ma, freq_mhz, volt_mv;
  // Leakage scaling controls (default ref=50C, alpha=20 milli => 2%/C)
  reg [7:0] leak_ref_temp_c = 8'd50; reg [15:0] leak_alpha_milli = 16'd20;

  advanced_power_manager #(.NUM_PES(NUM_PES)) dut(
    .clk(clk), .reset(reset), .power_mode(8'd0), .utilization_target(16'd0), .performance_target(16'd20000),
    .pe_active(pe_active), .pe_request(pe_request), .current_ops_count(current_ops_count), .precision_mode(precision_mode),
    .temperature(temperature), .power_budget(power_budget),
    .leak_ref_temp_c(leak_ref_temp_c), .leak_alpha_milli(leak_alpha_milli),
    .util_high_thresh_pct_cfg(util_high), .util_low_thresh_pct_cfg(util_low), .perf_hyst_margin_milli_cfg(perf_hyst), .dvfs_min_settle_cycles_cfg(settle_cycles),
    .frequency_override_en(freq_ov_en), .frequency_override(freq_ov), .voltage_override_en(volt_ov_en), .voltage_override(volt_ov),
    .domain_power_enable(), .domain_clock_enable(), .pe_power_gate(), .pe_clock_gate(), .voltage_setting(), .frequency_setting(),
    .current_power_mw(current_power_mw), .current_tops(current_tops), .efficiency_tops_w(eff_milli), .power_efficiency_grade(),
    .dynamic_power_mw(dyn_mw), .leakage_power_mw(leak_mw), .utilization_ma_out(util_ma), .current_freq_mhz(freq_mhz), .current_voltage_mv(volt_mv)
  );

  // Local mirror of characterization coefficients (must match advanced_power_manager initial block)
  // dyn_coeff_mw_per_util[code] = mW at 100% util; leak_coeff_mw[code] = leakage mW
  integer i_local;
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

  integer step; real dyn_err_pct; real leak_err_pct; integer pass_cnt=0; integer fail_cnt=0; integer util_norm_1000; integer exp_dyn_int; integer exp_leak_int;
  task check_ratio; input [2:0] code; begin
    freq_ov <= code; volt_ov <= code; freq_ov_en<=1; volt_ov_en<=1; repeat(60) @(posedge clk); // allow util MA to converge
    // At full utilization (all PEs active) util_norm ~ 100%, so expected dynamic ~= coeff.
  // Mirror internal dynamic power model: util_norm_1000 = (util_ma * 1000)/NUM_PES, dyn = coeff * util_norm_1000 / 1000
  util_norm_1000 = (util_ma * 1000) / NUM_PES;
  exp_dyn_int = (dyn_coeff_mw_per_util[code] * util_norm_1000) / 1000;
  dyn_err_pct  = ( (dyn_mw  - exp_dyn_int)  * 100.0 ) / (exp_dyn_int  ? exp_dyn_int  : 1);
    leak_err_pct = ( (leak_mw - leak_coeff_mw[code])         * 100.0 ) / (leak_coeff_mw[code] ? leak_coeff_mw[code] : 1);
  $display("[CAL] code=%0d freq=%0dMHz volt=%0dmV util_norm=%0d/1000 dyn=%0d(exp=%0d,err=%.2f%%) leak=%0d(exp=%0d,err=%.2f%%) TOPS_milli=%0d eff_milli=%0d",
       code,freq_mhz,volt_mv,util_norm_1000,dyn_mw,exp_dyn_int,dyn_err_pct,leak_mw,leak_coeff_mw[code],leak_err_pct,current_tops,eff_milli);
    if ( (dyn_err_pct < 3.0 && dyn_err_pct > -3.0) && (leak_err_pct < 3.0 && leak_err_pct > -3.0) ) pass_cnt++; else fail_cnt++;
  end endtask

  initial begin
    pe_active = {NUM_PES{1'b1}}; pe_request = {NUM_PES{1'b1}}; current_ops_count=16'd4000; precision_mode=2'b00;
    temperature=8'd50; power_budget=16'd5000; freq_ov_en=0; volt_ov_en=0; freq_ov=0; volt_ov=0;
    repeat(5) @(posedge clk); reset=0; @(posedge clk);
  for (step=0; step<6; step=step+1) begin
      check_ratio(step[2:0]);
    end
    $display("[CAL] PASS=%0d FAIL=%0d", pass_cnt, fail_cnt);
    if (fail_cnt!=0) $fatal(1, "Calibration mismatch failures");
    else $display("[CAL] Calibration harness PASS");
    $finish;
  end
endmodule
