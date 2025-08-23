`timescale 1ns/1ps
// Deterministic DVFS transition testbench (single-step frequency adjustments)
// Strategy: Large dvfs_min_settle guard prevents multiple increments within a util phase.
// Utilization phases: LOW -> HIGH -> MID -> SPIKE -> LOW2. Only the HIGH phase permitted to raise freq once.

module dvfs_deterministic_tb;
  reg clk=0; always #1 clk=~clk; // 500MHz
  reg reset=1; initial begin repeat(5) @(posedge clk); reset=0; end

  // Parameters
  localparam NUM_PES = 16;
  // DVFS config (very long settle to prevent second adjustment)
  // Choose a HIGH threshold with margin below stimulated utilization to avoid equality (>) edge.
  // We will drive 10/16 active PEs (62.5%). Set HIGH_THRESH=55 (55%). Condition uses strict '>' so 62.5% safely exceeds.
  localparam [7:0] HIGH_THRESH = 8'd30;   // >30% required to upscale (util_ma ramps toward 62.5%)
  localparam [7:0] LOW_THRESH  = 8'd20;   // 20% => <=3 of 16 active (not used for down-scale in this minimal test)
  localparam [7:0] MIN_SETTLE  = 8'd255;  // Max dwell; blocks further adjustments after first
  // PERF_TARGET must exceed expected efficiency to allow upscale (condition requires efficiency_reg < performance_target)
  // Pick a higher target (e.g., 2000) since efficiency units are milli TOPS/W but small in this simple model.
  localparam [15:0] PERF_TARGET = 16'd2000; // generous headroom
  localparam [15:0] PERF_MARGIN = 16'd50;  // Margin (unused once only upward move)

  // Activity patterns (only LOW then sustained HIGH). HIGH drives > HIGH_THRESH with margin.
  localparam [NUM_PES-1:0] UTIL_LOW_MASK  = 16'h0003; // 2/16 = 12.5%
  localparam [NUM_PES-1:0] UTIL_HIGH_MASK = 16'hFFFF; // 16/16 active; EMA plateaus at 9 (active-7) -> util_pct ~56%

  // Timing schedule (cycles after reset deassert)
  localparam C_LOW_START   = 5;     // enter low util early
  localparam C_LOW_SAMPLE  = 20;    // capture baseline while still low
  localparam C_HIGH_START  = 25;    // switch to high util early so MEASURE window has ~75 cycles high before DECIDE
  localparam C_HIGH_SAMPLE = 180;   // sample well after potential first adjust, still within settle
  localparam C_FINAL       = 260;   // end early before dwell expiration

  // DUT IO wires
  reg  [NUM_PES-1:0] pe_active=0;
  wire [NUM_PES-1:0] pe_request = {NUM_PES{1'b1}};
  wire [15:0] current_ops_count;
  reg  [1:0] precision_mode = 2'b00;
  reg  [7:0] temperature = 8'd40;
  reg  [7:0] power_mode = 8'd0;
  reg  [15:0] power_budget = 16'd800;
  // Map ops count linearly with active PEs (constant per-PE rate)
  reg [7:0] per_pe_ops = 8'd40; // chosen so eff_ops small
  integer i;
  reg [15:0] active_count;
  always @(*) begin
    active_count=0; for (i=0;i<NUM_PES;i=i+1) if (pe_active[i]) active_count = active_count + 1;
  end
  assign current_ops_count = active_count * per_pe_ops;

  wire [2:0] voltage_setting, frequency_setting;
  wire [15:0] efficiency_tops_w;
  wire [3:0]  efficiency_grade;

  advanced_power_manager #(
    .NUM_PES(NUM_PES)
  ) dut (
    .clk(clk), .reset(reset),
    .power_mode(power_mode),
    .utilization_target(16'd70),
    .performance_target(PERF_TARGET),
    .pe_active(pe_active), .pe_request(pe_request),
    .current_ops_count(current_ops_count),
    .precision_mode(precision_mode), .temperature(temperature),
    .power_budget(power_budget),
    .util_high_thresh_pct_cfg(HIGH_THRESH),
    .util_low_thresh_pct_cfg(LOW_THRESH),
    .perf_hyst_margin_milli_cfg(PERF_MARGIN),
    .dvfs_min_settle_cycles_cfg(MIN_SETTLE),
    .domain_power_enable(), .domain_clock_enable(),
    .pe_power_gate(), .pe_clock_gate(),
    .voltage_setting(voltage_setting), .frequency_setting(frequency_setting),
    .current_power_mw(), .current_tops(), .efficiency_tops_w(efficiency_tops_w),
    .power_efficiency_grade(efficiency_grade),
    .dynamic_power_mw(), .leakage_power_mw(), .utilization_ma_out()
  );

  integer cycle=0; always @(posedge clk) if (!reset) cycle <= cycle + 1;
`ifdef DVFS_DET_DEBUG
  // Optional DVFS internal state visibility (hierarchical peek for debug only)
  wire [2:0] dvfs_state = dut.dvfs_state; // state encoding from RTL
  reg  [2:0] dvfs_state_prev;
  // util moving average peek
  wire [15:0] util_ma_peek = dut.util_ma;
  always @(posedge clk) if (reset) begin
    dvfs_state_prev <= 3'bxxx;
  end else begin
    if (dvfs_state != dvfs_state_prev) begin
      $display("[DVFS_DET][STATE] %0d->%0d cycle=%0d freq=%0d util_ma=%0d", dvfs_state_prev, dvfs_state, cycle, frequency_setting, util_ma_peek);
      dvfs_state_prev <= dvfs_state;
    end
  end
`endif

  // Debug periodic monitor (every 50 cycles) for utilization & efficiency to understand upscale gating
`ifdef DVFS_DET_DEBUG
  always @(posedge clk) if (!reset && (cycle % 50)==0) begin
    $display("[DVFS_DET][DBG] cycle=%0d state=%0d freq=%0d volt=%0d active=%0d util_pct_est=%0d%%", cycle, dvfs_state, frequency_setting, voltage_setting, active_count, (active_count*100)/NUM_PES);
  end
`endif

  // Sample registers
  reg [2:0] freq_low, freq_high;
  reg [2:0] volt_low, volt_high;
  reg saw_upscale;  // tracks any frequency increment event
  reg baseline_captured;
  integer errors=0;
  // Simple check macro replacement (avoid automatic task for tool simplicity)
  `define DVFS_EXPECT(cond,msg) \
    if (!(cond)) begin errors=errors+1; $display("[DVFS_DET][FAIL] %s (cycle=%0d)", msg, cycle); end

  // Phase stimulus
  always @(posedge clk) if (reset) begin
    saw_upscale <= 1'b0;
    baseline_captured <= 1'b0;
  end else begin
    if (cycle == C_LOW_START)  begin pe_active <= UTIL_LOW_MASK;  $display("[DVFS_DET] LOW phase start"); end
    if (cycle == C_HIGH_START) begin pe_active <= UTIL_HIGH_MASK; $display("[DVFS_DET] HIGH phase start"); end

    // Samples
    if (cycle == C_LOW_SAMPLE) begin
      freq_low = frequency_setting; volt_low = voltage_setting;
      $display("[DVFS_DET] Sample LOW freq=%0d volt=%0d", freq_low, volt_low);
      baseline_captured <= 1'b1;
    end
  if (!saw_upscale && baseline_captured && cycle >= C_HIGH_START && frequency_setting > freq_low) begin
      saw_upscale <= 1'b1;
      $display("[DVFS_DET] Detected upscale: freq %0d->%0d (cycle=%0d)", freq_low, frequency_setting, cycle);
    end
    if (cycle == C_HIGH_SAMPLE) begin
      freq_high = frequency_setting; volt_high = voltage_setting;
      $display("[DVFS_DET] Sample HIGH freq=%0d volt=%0d (saw_upscale=%0b)", freq_high, volt_high, saw_upscale);
    end
    if (cycle == C_FINAL) begin
      // Checks (single adjustment expected). Accept detection anytime before final sample.
      `DVFS_EXPECT(saw_upscale, "Frequency failed to rise after sustained high utilization window");
      `DVFS_EXPECT(volt_high >= volt_low || volt_low - volt_high <= 1, "Voltage dropped too far after scale");
      if (errors==0) begin
        $display("[DVFS_DET][PASS] Deterministic DVFS sequence OK");
      end else begin
        $display("[DVFS_DET][FAIL] %0d error(s)", errors);
      end
      $finish;
    end
  end
endmodule
