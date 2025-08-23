`timescale 1ns/1ps
// Throughput vs Power sweep testbench
// Sweeps precision modes and utilization levels using power manager standalone.
// CSV columns (file + stdout): pstate,precision_mode,lane_mask_pct,sparsity_mode,sparsity_scale_milli,util_pct,freq_MHz,volt_mV,dyn_mW,leak_mW,power_mW,tops_milli,eff_milli
// (Adaptive sparsity integration future: add adapt_mode, adapt_eff_milli once full tile-based sweep harness used)
module throughput_power_sweep_tb;
  reg clk=0, reset=1; always #5 clk=~clk; // 100MHz base reference for DVFS FSM; frequency_setting selects real effective freq
  localparam NUM_PES=128;
  reg [NUM_PES-1:0] pe_active, pe_request;
  reg [15:0] current_ops_count; // approximate scaled ops per cycle
  reg [1:0] precision_mode;
  reg [7:0] temperature=8'd50; reg [15:0] power_budget=16'd8000;
  // DVFS runtime cfg (still active though overrides fix P-state for fairness among modes)
  reg [7:0] util_high=80, util_low=50; reg [15:0] perf_hyst=16'd500; reg [7:0] settle_cycles=8'd20;
  // Overrides (lock to mid performance state for comparison)
  reg freq_ov_en=1'b1, volt_ov_en=1'b1; reg [2:0] freq_ov=3'd3, volt_ov=3'd3; // code 3 -> ~1000MHz nominal
  wire [15:0] current_power_mw, current_tops, eff_milli, dyn_mw, leak_mw, util_ma, freq_mhz, volt_mv;

  advanced_power_manager #(.NUM_PES(NUM_PES)) dut(
    .clk(clk), .reset(reset), .power_mode(8'd0), .utilization_target(16'd0), .performance_target(16'd20000),
    .pe_active(pe_active), .pe_request(pe_request), .current_ops_count(current_ops_count), .precision_mode(precision_mode),
    .temperature(temperature), .power_budget(power_budget),
    .util_high_thresh_pct_cfg(util_high), .util_low_thresh_pct_cfg(util_low), .perf_hyst_margin_milli_cfg(perf_hyst), .dvfs_min_settle_cycles_cfg(settle_cycles),
    .frequency_override_en(freq_ov_en), .frequency_override(freq_ov), .voltage_override_en(volt_ov_en), .voltage_override(volt_ov),
    .domain_power_enable(), .domain_clock_enable(), .pe_power_gate(), .pe_clock_gate(), .voltage_setting(), .frequency_setting(),
    .current_power_mw(current_power_mw), .current_tops(current_tops), .efficiency_tops_w(eff_milli), .power_efficiency_grade(),
    .dynamic_power_mw(dyn_mw), .leakage_power_mw(leak_mw), .utilization_ma_out(util_ma), .current_freq_mhz(freq_mhz), .current_voltage_mv(volt_mv)
  );

  integer util_step; integer mode; integer i; integer popcnt_active; integer active_needed; integer k; integer util_pct_int;
  integer pstate_code; integer lane_mask_sel; integer lane_mask_pct; integer sparsity_mode; integer sparsity_scale_milli;
  integer max_pstate_code=6; // override via +MAX_PSTATE=<n>
  integer fh; integer iteration=0; integer base_active_needed; integer eff_active_est; integer ops_scaled;

  task set_utilization(input integer pct);
    begin
      active_needed = (NUM_PES * pct) / 100;
      pe_active = {NUM_PES{1'b0}};
      for (k=0; k<active_needed; k=k+1) pe_active[k] = 1'b1;
      pe_request = pe_active;
      popcnt_active = active_needed;
      current_ops_count = (active_needed > 65535) ? 16'hFFFF : active_needed[15:0];
    end
  endtask

  initial begin
    if ($value$plusargs("MAX_PSTATE=%d", max_pstate_code)) begin
      if (max_pstate_code > 7) max_pstate_code = 7;
    end
  fh = $fopen("throughput_power_sweep.csv","w");
  // Write sentinel-prefixed header (for post-process robustness)
    if (!fh) $display("[SWEEP] ERROR: could not open output CSV file");
  $fwrite(fh, "@@ROW@@,pstate,precision_mode,lane_mask_pct,sparsity_mode,sparsity_scale_milli,util_pct,freq_MHz,volt_mV,dyn_mW,leak_mW,power_mW,tops_milli,eff_milli\n");
  $display("pstate,precision_mode,lane_mask_pct,sparsity_mode,sparsity_scale_milli,util_pct,freq_MHz,volt_mV,dyn_mW,leak_mW,power_mW,tops_milli,eff_milli");
    pe_active=0; pe_request=0; precision_mode=2'b00; current_ops_count=0;
    repeat(5) @(posedge clk); reset=0; @(posedge clk);
    for (pstate_code=0; pstate_code<=max_pstate_code; pstate_code=pstate_code+1) begin
      freq_ov = pstate_code[2:0]; volt_ov = pstate_code[2:0];
      for (mode=0; mode<4; mode=mode+1) begin
        precision_mode = mode[1:0];
        for (lane_mask_sel=0; lane_mask_sel<3; lane_mask_sel=lane_mask_sel+1) begin
          case(lane_mask_sel)
            0: lane_mask_pct = 100;
            1: lane_mask_pct = 75;
            2: lane_mask_pct = 50;
            default: lane_mask_pct = 100;
          endcase
          for (sparsity_mode=0; sparsity_mode<3; sparsity_mode=sparsity_mode+1) begin
            case(sparsity_mode)
              0: sparsity_scale_milli = 1000; // dense
              1: sparsity_scale_milli = 750;  // moderate sparsity
              2: sparsity_scale_milli = 500;  // high sparsity
              default: sparsity_scale_milli = 1000;
            endcase
            for (util_step=40; util_step<=100; util_step=util_step+20) begin // start at 40% to reduce very low-noise points
              set_utilization(util_step);
              base_active_needed = popcnt_active;
              // Scale ops to emulate lane mask and sparsity effect on effective operations
              eff_active_est = (base_active_needed * lane_mask_pct) / 100;
              ops_scaled = (eff_active_est * sparsity_scale_milli) / 1000;
              if (ops_scaled < 1) ops_scaled = 1;
              current_ops_count = (ops_scaled > 65535) ? 16'hFFFF : ops_scaled[15:0];
              // settle for utilization moving average & power convergence
              for (i=0;i<70;i=i+1) @(posedge clk);
              util_pct_int = util_step; iteration = iteration + 1;
              $display("%0d,%0d,%0d,%0d,%0d,%0d,%0d,%0d,%0d,%0d,%0d,%0d,%0d", pstate_code, mode, lane_mask_pct, sparsity_mode, sparsity_scale_milli, util_pct_int, freq_mhz, volt_mv, dyn_mw, leak_mw, current_power_mw, current_tops, eff_milli);
              if (fh) $fwrite(fh, "@@ROW@@,%0d,%0d,%0d,%0d,%0d,%0d,%0d,%0d,%0d,%0d,%0d,%0d,%0d\n", pstate_code, mode, lane_mask_pct, sparsity_mode, sparsity_scale_milli, util_pct_int, freq_mhz, volt_mv, dyn_mw, leak_mw, current_power_mw, current_tops, eff_milli);
            end
          end
        end
      end
    end
    if (fh) $fclose(fh);
    $display("[SWEEP] Completed throughput vs power sweep (%0d samples)", iteration);
    $finish;
  end
endmodule
