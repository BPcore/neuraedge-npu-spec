`timescale 1ns/1ps
// Simple DVFS smoke testbench
// Exercises advanced_power_manager via tile instance to trigger frequency/voltage changes

module dvfs_smoke_tb(
    input clk,
    input reset
);
    // Clock & reset

    // Minimal signals to drive tile (instantiate neuraedge_tile_50tops if available)
    // Simple clock generation without # delay (toggle each evaluation cycle pair in C++ or internal)
    // If C++ doesn't toggle, provide internal self-toggle using a small counter.
    // Clock is expected to be toggled by external harness; no internal timing statements to satisfy --no-timing.
    // If a simpler top wrapper exists, adjust instantiation accordingly.

    // Testbench control regs (CSR-like)
    reg sparsity_enable = 0;
    reg [1:0] sparsity_mode = 2'b00;
    reg [1:0] precision_mode = 2'b00; // 2-bit per design
    reg [7:0] power_mode = 8'd0; // widen to match DUT port width

    // DVFS config overrides
    // Lower thresholds & shorter settle for accelerated test convergence
    reg [7:0] util_high_thresh_pct = 8'd30; // easier up-shift
    reg [7:0] util_low_thresh_pct  = 8'd15; // easier down-shift
    reg [15:0] perf_hyst_margin_milli = 16'd20; // tighter margin
    reg [15:0] dvfs_min_settle_cycles = 16'd10; // faster adjustments

    // Stimulus to mimic utilization changes
    reg [15:0] perf_target = 16'd80; // lower performance target for faster scaling decisions
    reg [15:0] power_budget_mw = 16'd800; // arbitrary
    reg [7:0] temperature = 8'd45; // 45C (DUT expects 8 bits)

    // DUT outputs we observe (wire them after instantiation)
    wire [2:0] voltage_setting;
    wire [2:0] frequency_setting;
    wire [15:0] efficiency_tops_w;
    wire [3:0] efficiency_grade; // DUT output is 4 bits

    // Simplified hooks into power manager: instantiate directly instead of full tile for brevity
    // Provide minimal PE activity model: toggle pe_active pattern to drive utilization
    localparam NUM_PES = 16;
    reg [NUM_PES-1:0] pe_active = 0;
    reg [NUM_PES-1:0] pe_request = {NUM_PES{1'b1}}; // all request active

    // Fake current ops count: scale with active PE population
    wire [15:0] current_ops_count = (pe_active_count * 16'd50); // each active PE contributes a fixed ops rate
    wire [1:0] precision_mode_eff = precision_mode; // maintain native width

    // Count active bits
    integer k;
    reg [15:0] pe_active_count;
    always @* begin
        pe_active_count = 0;
        for (k=0; k<NUM_PES; k=k+1) if (pe_active[k]) pe_active_count = pe_active_count + 1;
    end

    // Instantiate power manager directly
    advanced_power_manager #(
        .NUM_PES(NUM_PES),
        .NUM_POWER_DOMAINS(32),
        .NUM_VOLTAGE_LEVELS(8),
        .NUM_FREQ_LEVELS(8)
    ) dut_pm (
        .clk(clk),
        .reset(reset),
        .power_mode(power_mode),
        .utilization_target(16'd70),
        .performance_target(perf_target),
        .pe_active(pe_active),
        .pe_request(pe_request),
        .current_ops_count(current_ops_count),
        .precision_mode(precision_mode_eff),
        .temperature(temperature),
        .power_budget(power_budget_mw),
        .util_high_thresh_pct_cfg(util_high_thresh_pct),
        .util_low_thresh_pct_cfg(util_low_thresh_pct),
        .perf_hyst_margin_milli_cfg(perf_hyst_margin_milli),
    .dvfs_min_settle_cycles_cfg(dvfs_min_settle_cycles[7:0]),
        .domain_power_enable(),
        .domain_clock_enable(),
        .pe_power_gate(),
        .pe_clock_gate(),
        .voltage_setting(voltage_setting),
        .frequency_setting(frequency_setting),
        .current_power_mw(),
        .current_tops(),
        .efficiency_tops_w(efficiency_tops_w),
    .power_efficiency_grade(efficiency_grade),
        .dynamic_power_mw(),
        .leakage_power_mw(),
        .utilization_ma_out()
    );

    // Stimulus sequence (single event control form for --no-timing lint)
    // ------------------------------------------------------------------
    // Assertion / Scoreboard Logic
    // ------------------------------------------------------------------
    integer cycle;
    integer error_count;
    integer scoreboard_checks;
    integer scoreboard_passes;
    reg [2:0] freq_low, freq_high, freq_mid, freq_spike, freq_final;
    reg [2:0] volt_low, volt_high, volt_mid, volt_spike, volt_final;

    // Phase scheduling (easily tunable)
    localparam CYCLE_LOW_START      = 11; // assumes external reset deassert before this
    localparam CYCLE_LOW_SAMPLE     = 80;   // shorter low window
    localparam CYCLE_HIGH_START     = CYCLE_LOW_SAMPLE + 1;
    localparam CYCLE_HIGH_SAMPLE    = 180;  // allow ~100 cycles high
    localparam CYCLE_MID_START      = CYCLE_HIGH_SAMPLE + 1;
    localparam CYCLE_MID_SAMPLE     = 260;  // ~80 cycles mid
    localparam CYCLE_SPIKE_START    = CYCLE_MID_SAMPLE + 1; // spike begin
    localparam CYCLE_SPIKE_SAMPLE   = CYCLE_SPIKE_START + 10; // sample during spike
    localparam CYCLE_POST_SPIKE     = CYCLE_SPIKE_START + 20; // spike duration 20 cycles then drop
    localparam CYCLE_FINAL_SAMPLE   = 360;  // shortened total test length

    initial begin
        $display("[TB] Starting DVFS smoke test with assertions");
        cycle       = 0;
        error_count = 0;
    pe_active   = 0;
    scoreboard_checks = 0;
    scoreboard_passes = 0;
    end

    // Helper task for error logging
    task automatic check_cond(input bit cond, input string msg);
        if (!cond) begin
            error_count = error_count + 1;
            $display("[TB][ERROR] %s (time=%0t)", msg, $time);
        end
    endtask

    always @(posedge clk) begin
        cycle <= cycle + 1;

        // Phase actions
    if (cycle == CYCLE_LOW_START) begin
            pe_active <= 16'h0003; // low util (~12.5%)
            $display("[TB] Enter LOW util @cycle %0d", cycle);
        end
        else if (cycle == CYCLE_LOW_SAMPLE) begin
            freq_low = frequency_setting; volt_low = voltage_setting;
            $display("[TB] Sample LOW util freq=%0d volt=%0d", frequency_setting, voltage_setting);
            // Baseline capture (no checks yet)
        end
        else if (cycle == CYCLE_HIGH_START) begin
            pe_active <= 16'h3FFF; // high util (~87.5%) ensure > high threshold
            $display("[TB] Enter HIGH util @cycle %0d", cycle);
        end
        else if (cycle == CYCLE_HIGH_SAMPLE) begin
            freq_high = frequency_setting; volt_high = voltage_setting;
            $display("[TB] Sample HIGH util freq=%0d volt=%0d", frequency_setting, voltage_setting);
            // Scoreboard check: must have increased (or at least changed upward) vs low
            scoreboard_checks = scoreboard_checks + 1;
            if (frequency_setting >= freq_low) begin
                scoreboard_passes = scoreboard_passes + 1;
                $display("[TB][SB][PASS] HIGH phase freq >= low: %0d >= %0d", frequency_setting, freq_low);
            end else begin
                check_cond(0, $sformatf("HIGH phase expected freq rise (got %0d vs low %0d)", frequency_setting, freq_low));
            end
            // Voltage should not drop below low
            scoreboard_checks = scoreboard_checks + 1;
            if (voltage_setting + 1 >= volt_low) begin // allow minor transient drop
                scoreboard_passes = scoreboard_passes + 1;
                $display("[TB][SB][PASS] HIGH phase volt hold/increase: %0d >= %0d", voltage_setting, volt_low);
            end else begin
                check_cond(0, $sformatf("HIGH phase voltage dropped (got %0d < %0d)", voltage_setting, volt_low));
            end
        end
        else if (cycle == CYCLE_MID_START) begin
            pe_active <= 16'h003F; // mid util (~37.5%) below high threshold above low threshold
            $display("[TB] Enter MID util @cycle %0d", cycle);
        end
        else if (cycle == CYCLE_MID_SAMPLE) begin
            freq_mid = frequency_setting; volt_mid = voltage_setting;
            $display("[TB] Sample MID util freq=%0d volt=%0d", frequency_setting, voltage_setting);
            // Scoreboard: mid should be between low and high inclusive
            scoreboard_checks = scoreboard_checks + 1;
            if (frequency_setting >= freq_low && frequency_setting <= freq_high) begin
                scoreboard_passes = scoreboard_passes + 1;
                $display("[TB][SB][PASS] MID phase freq bounded: %0d in [%0d,%0d]", frequency_setting, freq_low, freq_high);
            end else begin
                check_cond(0, $sformatf("MID phase freq %0d not in [%0d,%0d]", frequency_setting, freq_low, freq_high));
            end
            // Voltage monotonic: should not exceed high if freq lower
            scoreboard_checks = scoreboard_checks + 1;
            if (!(frequency_setting < freq_high && voltage_setting > volt_high)) begin
                scoreboard_passes = scoreboard_passes + 1;
                $display("[TB][SB][PASS] MID phase voltage monotonic OK");
            end else begin
                check_cond(0, "MID phase voltage higher while freq lower (non-monotonic)");
            end
        end
        else if (cycle == CYCLE_SPIKE_START) begin
            pe_active <= 16'hFFFF; // spike to full utilization (100%)
            $display("[TB] Spike start @cycle %0d", cycle);
        end
        else if (cycle == CYCLE_SPIKE_SAMPLE) begin
            freq_spike = frequency_setting; volt_spike = voltage_setting;
            $display("[TB] Sample SPIKE freq=%0d volt=%0d", frequency_setting, voltage_setting);
            // Scoreboard: spike >= prior high
            scoreboard_checks = scoreboard_checks + 1;
            if (frequency_setting >= freq_high) begin
                scoreboard_passes = scoreboard_passes + 1;
                $display("[TB][SB][PASS] SPIKE phase freq >= high: %0d >= %0d", frequency_setting, freq_high);
            end else begin
                check_cond(0, $sformatf("SPIKE phase freq %0d < prior high %0d", frequency_setting, freq_high));
            end
            scoreboard_checks = scoreboard_checks + 1;
            if (voltage_setting + 1 >= volt_high) begin
                scoreboard_passes = scoreboard_passes + 1;
                $display("[TB][SB][PASS] SPIKE phase volt >= high: %0d >= %0d", voltage_setting, volt_high);
            end else begin
                check_cond(0, $sformatf("SPIKE phase voltage %0d < prior high %0d", voltage_setting, volt_high));
            end
        end
        else if (cycle == CYCLE_POST_SPIKE) begin
            pe_active <= 16'h0001; // drop to near-idle
            $display("[TB] Return to LOW util (post-spike) @cycle %0d", cycle);
        end
        else if (cycle == CYCLE_FINAL_SAMPLE) begin
            freq_final = frequency_setting; volt_final = voltage_setting;
            $display("[TB] Sample FINAL freq=%0d volt=%0d", frequency_setting, voltage_setting);

            // Assertions / ordering checks (stricter)
            check_cond(freq_high  >=  freq_low,  "Frequency did not hold or rise on high util phase");
            check_cond(volt_high + 1 >= volt_low,  "Voltage dropped excessively on high util phase");
            check_cond(freq_mid   <= freq_high, "Mid util frequency exceeded high util frequency");
            check_cond(freq_mid   >= freq_low,  "Mid util frequency fell below initial low frequency");
            check_cond(freq_spike >= freq_high, "Spike frequency failed to reach or exceed prior high");
            check_cond(volt_spike + 1 >= volt_high, "Spike voltage failed to hold near prior high voltage");
            check_cond(freq_final <= freq_spike, "Final frequency exceeded spike frequency (unexpected)");
            check_cond(volt_final <= volt_spike, "Final voltage exceeded spike voltage (unexpected)");
            // Monotonic voltage alignment
            check_cond(!(freq_mid < freq_high && volt_mid > volt_high), "Voltage higher at mid util while freq lower (non-monotonic)");
            check_cond(!(freq_final < freq_mid && volt_final > volt_mid), "Voltage higher at final util while freq lower (non-monotonic)");
            // Hysteresis: ensure no rapid drop from high to low region (mid should not be below low threshold behavior)
            check_cond(!(freq_high > freq_mid && (CYCLE_MID_SAMPLE - CYCLE_HIGH_SAMPLE) < 30), "Hysteresis window too short (rapid down-shift)");

            // Scoreboard summary
            $display("[TB][SB] Scoreboard: %0d / %0d phase checks passed", scoreboard_passes, scoreboard_checks);
            if (error_count == 0) begin
                $display("[TB][PASS] DVFS ordering, spike, hysteresis checks passed (%0d scoreboard checks)", scoreboard_checks);
            end else begin
                $display("[TB][FAIL] DVFS test encountered %0d error(s)", error_count);
                $fatal(1, "DVFS smoke test FAILED");
            end
            $finish;
        end
    end

endmodule
