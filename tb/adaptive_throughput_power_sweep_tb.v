`timescale 1ns/1ps
// Adaptive throughput vs power sweep (integrated adaptive sparsity FSM + power manager)
// Outputs CSV: iter,window_idx,density_milli,adapt_mode,adapt_mode_eff_milli,util_pct,freq_MHz,volt_mV,dyn_mW,scaled_dyn_mW,leak_mW,power_mW,tops_milli,scaled_tops_milli
module adaptive_throughput_power_sweep_tb;
  reg clk=0, reset=1; always #5 clk=~clk; // 100MHz ref
  localparam NUM_PES=64;
  // Power manager interface (simplified) - model PEs as aggregate utilization only
  reg [NUM_PES-1:0] pe_active, pe_request;
  reg [15:0] current_ops_count; reg [1:0] precision_mode=2'b00; reg [7:0] temperature=8'd50; reg [15:0] power_budget=16'd6000;
  reg [7:0] util_high=80, util_low=50; reg [15:0] perf_hyst=16'd500; reg [7:0] settle_cycles=8'd10;
  reg freq_ov_en=1'b1, volt_ov_en=1'b1; reg [2:0] freq_ov=3'd3, volt_ov=3'd3; // mid code
  wire [15:0] current_power_mw, current_tops, eff_milli, dyn_mw, leak_mw, util_ma, freq_mhz, volt_mv;

  // Adaptive sparsity FSM
  localparam WIN=8;
  reg sample_valid; reg [15:0] nz_count, tot_count;
  reg manual_override=0; reg [1:0] manual_mode=0;
  reg [9:0] thresh_2to4=10'd700, thresh_1to4=10'd400, thresh_1to8=10'd150, hyst_milli=10'd50; reg [7:0] min_hold=8'd1;
  wire [1:0] adapt_mode; wire adapt_mode_change; wire [15:0] last_density_milli; wire window_complete; wire [15:0] mode_changes; wire [15:0] mode_eff_milli;
  reg window_seen;
  always @(posedge clk) begin
    if (reset) window_seen <= 0; else if (window_complete) window_seen <= 1;
  end

  sparsity_adaptive_fsm #(.WINDOW_SIZE(WIN)) adapt (
    .clk(clk), .reset(reset), .sample_valid(sample_valid), .nonzero_count(nz_count), .total_count(tot_count),
    .manual_override_mode(manual_override), .manual_mode_select(manual_mode),
    .thresh_2to4(thresh_2to4), .thresh_1to4(thresh_1to4), .thresh_1to8(thresh_1to8), .hyst_milli(hyst_milli), .min_hold_windows(min_hold),
    .util_milli_pct(16'd800), .current_mode(adapt_mode), .mode_change_pulse(adapt_mode_change), .last_density_milli(last_density_milli),
    .window_complete(window_complete), .change_count(mode_changes), .mode_eff_milli(mode_eff_milli)
  );

  advanced_power_manager #(.NUM_PES(NUM_PES)) pwr(
    .clk(clk), .reset(reset), .power_mode(8'd0), .utilization_target(16'd0), .performance_target(16'd20000),
    .pe_active(pe_active), .pe_request(pe_request), .current_ops_count(current_ops_count), .precision_mode(precision_mode),
    .temperature(temperature), .power_budget(power_budget),
    .util_high_thresh_pct_cfg(util_high), .util_low_thresh_pct_cfg(util_low), .perf_hyst_margin_milli_cfg(perf_hyst), .dvfs_min_settle_cycles_cfg(settle_cycles),
    .frequency_override_en(freq_ov_en), .frequency_override(freq_ov), .voltage_override_en(volt_ov_en), .voltage_override(volt_ov),
    .domain_power_enable(), .domain_clock_enable(), .pe_power_gate(), .pe_clock_gate(), .voltage_setting(), .frequency_setting(),
    .current_power_mw(current_power_mw), .current_tops(current_tops), .efficiency_tops_w(eff_milli), .power_efficiency_grade(),
    .dynamic_power_mw(dyn_mw), .leakage_power_mw(leak_mw), .utilization_ma_out(util_ma), .current_freq_mhz(freq_mhz), .current_voltage_mv(volt_mv),
    .leak_ref_temp_c(8'd50), .leak_alpha_milli(16'd20)
  );

  integer fh; integer iter=0; integer util_pct; integer density_seq [0:4]; integer d; integer s; integer scaled_dyn; integer wd; integer scaled_tops;
  initial begin
    density_seq[0]=800; density_seq[1]=500; density_seq[2]=300; density_seq[3]=100; density_seq[4]=850; // exercise mode changes
    pe_active=0; pe_request=0; current_ops_count=0; sample_valid=0; nz_count=0; tot_count=0;
    fh = $fopen("adaptive_sweep.csv","w");
    if (fh) begin
  $fwrite(fh, "@@ROW@@,iter,window_idx,density_milli,adapt_mode,adapt_mode_eff_milli,util_pct,freq_MHz,volt_mV,dyn_mW,scaled_dyn_mW,leak_mW,power_mW,tops_milli,scaled_tops_milli\n");
    end
    repeat(5) @(posedge clk); reset=0; @(posedge clk);
    for (util_pct=40; util_pct<=100; util_pct=util_pct+20) begin
      // approximate active PEs for util
      integer active_needed = (NUM_PES*util_pct)/100;
      pe_active = {NUM_PES{1'b0}}; pe_request = {NUM_PES{1'b0}};
      for (s=0; s<active_needed; s=s+1) begin pe_active[s]=1'b1; pe_request[s]=1'b1; end
      current_ops_count = (active_needed>65535)?16'hFFFF:active_needed[15:0];
      // settle MA
      repeat(40) @(posedge clk);
      for (d=0; d<5; d=d+1) begin
        // drive one window with target density
        integer sample;
        window_seen = 0;
        for (sample=0; sample<WIN; sample=sample+1) begin
          sample_valid=1;
          tot_count = 16'd100; // emulate density via counts
          nz_count  = (density_seq[d] * tot_count)/1000;
          @(posedge clk);
          sample_valid=0; // no idle cycle to keep window compact
        end
        // Wait for latched window completion with watchdog
  wd=0; while (!window_seen) begin @(posedge clk); wd=wd+1; if (wd>200) $fatal(1,"Window timeout util=%0d d=%0d", util_pct, d); end
        @(posedge clk); // allow density register update
        // compute scaled dynamic based on adaptive efficiency mapping (expected)
  scaled_dyn = (dyn_mw * mode_eff_milli)/1000;
        scaled_tops = (current_tops * mode_eff_milli)/1000;
        if (fh) begin
          $fwrite(fh, "@@ROW@@,%0d,%0d,%0d,%0d,%0d,%0d,%0d,%0d,%0d,%0d,%0d,%0d,%0d,%0d\n", iter, d, last_density_milli, adapt_mode, mode_eff_milli, util_pct, freq_mhz, volt_mv, dyn_mw, scaled_dyn, leak_mw, current_power_mw, current_tops, scaled_tops);
        end
        $display("ADAPT_CSV,%0d,%0d,%0d,%0d,%0d,%0d,%0d,%0d,%0d,%0d,%0d,%0d,%0d,%0d", iter, d, last_density_milli, adapt_mode, mode_eff_milli, util_pct, freq_mhz, volt_mv, dyn_mw, scaled_dyn, leak_mw, current_power_mw, current_tops, scaled_tops);
        iter = iter + 1;
      end
    end
    if (fh) $fclose(fh);
    $display("[ADAPT_SWEEP] Completed %0d windows", iter);
    $finish;
  end
endmodule
