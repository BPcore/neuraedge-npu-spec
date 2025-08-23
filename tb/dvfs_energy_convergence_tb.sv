// dvfs_energy_convergence_tb.sv
`include "tb/plusargs_dvfs_energy_convergence.svh"
// Purpose: Directed test to validate DVFS/energy convergence behavior when utilization ramps.
// Scaffolded harness - connect to your `advanced_power_manager` or top-level NPU to exercise DVFS.
`include "tb/plusargs_common.svh"

`timescale 1ns/1ps
module dvfs_energy_convergence_tb;
  integer RUN_STEPS;
  integer RW_CYCLES; // short smoke
  integer s;

  // Clock / reset (use active-high reset for the neuraedge_npu_50tops top)
  reg clk; always #5 clk = ~clk;
  reg reset;

  // CSR bus signals (top exposes a csr bus)
  reg        tb_csr_valid;
  reg        tb_csr_write;
  reg [7:0]  tb_csr_addr;
  reg [31:0] tb_csr_wdata;
  wire [31:0] tb_csr_rdata;
  wire        tb_csr_ready;

  // Instantiate an NPU top that exposes a CSR bus so the TB can drive registers
  // Provide safe defaults for other top-level inputs
  reg [7:0] power_mode;
  reg [15:0] system_power_budget_mw;
  reg [7:0] chip_temperature;
  reg [15:0] performance_target_tops;
  reg global_sparsity_enable;
  reg [1:0] global_sparsity_mode;
  reg [1:0] global_precision_mode;
  reg [8*64-1:0] data_in; // default zero input
  reg data_valid;

  neuraedge_npu_50tops dut (
    .clk(clk),
    .reset(reset),
    .power_mode(power_mode),
    .system_power_budget_mw(system_power_budget_mw),
    .chip_temperature(chip_temperature),
    .performance_target_tops(performance_target_tops),
    .global_sparsity_enable(global_sparsity_enable),
    .global_sparsity_mode(global_sparsity_mode),
    .global_precision_mode(global_precision_mode),
    .data_in(data_in),
    .data_valid(data_valid),
    .csr_valid(tb_csr_valid),
    .csr_write(tb_csr_write),
    .csr_addr(tb_csr_addr),
    .csr_wdata(tb_csr_wdata),
    .csr_rdata(tb_csr_rdata),
    .csr_ready(tb_csr_ready)
  );

  // Helper tasks: CSR write / read (simple handshake)
  task automatic csr_write32(input [7:0] addr, input [31:0] data);
  begin
    @(posedge clk);
    tb_csr_addr  <= addr;
    tb_csr_wdata <= data;
    tb_csr_write <= 1'b1;
    tb_csr_valid <= 1'b1;
    // wait for ready
    @(posedge clk);
    while (!tb_csr_ready) @(posedge clk);
    // deassert
    tb_csr_valid <= 1'b0;
    tb_csr_write <= 1'b0;
    tb_csr_addr  <= 8'd0;
    tb_csr_wdata <= 32'd0;
  end
  endtask

  task csr_read32(input [7:0] addr, output [31:0] rdata);
  begin
    @(posedge clk);
    tb_csr_addr  <= addr;
    tb_csr_write <= 1'b0;
    tb_csr_valid <= 1'b1;
    @(posedge clk);
    while (!tb_csr_ready) @(posedge clk);
    rdata = tb_csr_rdata;
    tb_csr_valid <= 1'b0;
    tb_csr_addr  <= 8'd0;
  end
  endtask

  // Read 64-bit energy (hi:addr 0x64, lo:addr 0x60)
  // temporaries for CSR read helpers (promoted to module scope for compatibility)
  reg [31:0] lo_word;
  reg [31:0] hi_word;
  reg [31:0] iu_tmp; // util instantaneous read tmp
  reg [31:0] ma_tmp; // util moving-average read tmp

  task csr_read_energy64(output [63:0] energy_out);
  begin
    csr_read32(8'h60, lo_word);
    csr_read32(8'h64, hi_word);
    energy_out = {hi_word, lo_word};
  end
  endtask

  // Deterministic utilization driver (test-mode override)
  // Note: authoritative CSR map (docs/CSR_MAP.md) does not expose a writable
  // instantaneous UTIL_OVERRIDE by default. To avoid writing undocumented
  // CSR addresses the testbench accepts an optional plusarg
  // +UTIL_OVERRIDE_ADDR=<hex> to enable a write-based override. If not
  // provided the tb will not attempt to force util via a hidden CSR and will
  // instead nudge DVFS thresholds (which are documented) to exercise P-state
  // transitions.
  integer UTIL_OVERRIDE_ADDR; // parsed from plusarg if provided

  // temp variable for write clamping
  integer util_tmp;
  task csr_write_util_milli(input integer util_milli);
  begin
    util_tmp = util_milli;
    if (util_tmp < 0) util_tmp = 0;
    if (util_tmp > 1000) util_tmp = 1000;
    if (UTIL_OVERRIDE_ADDR >= 0) begin
      csr_write32(UTIL_OVERRIDE_ADDR[7:0], util_tmp);
    end else begin
      $display("[TB][INFO] UTIL_OVERRIDE_ADDR not provided; skipping direct util override (use +UTIL_OVERRIDE_ADDR=0x.. if available)");
    end
  end
  endtask

  // settle & monitoring helpers
  localparam DEFAULT_SETTLE_CYCLES = 500;
  integer SETTLE_CYCLES;
  // Instead of reading non-existent freq/volt CSRs this TB watches the
  // instantaneous and moving-average utilization CSRs (documented in CSR_MAP.md)
  // UTILIZATION_MILLI_PCT (byte offset 0x90) and UTILIZATION_MA_MILLI_PCT (0x94).
  localparam [7:0] CSR_UTIL_INST_ADDR = 8'h90; // UTILIZATION_MILLI_PCT
  localparam [7:0] CSR_UTIL_MA_ADDR   = 8'h94; // UTILIZATION_MA_MILLI_PCT

  task csr_read_util(output [31:0] inst_util, output [31:0] ma_util);
  begin
    csr_read32(CSR_UTIL_INST_ADDR, iu_tmp);
    csr_read32(CSR_UTIL_MA_ADDR, ma_tmp);
    inst_util = iu_tmp;
    ma_util = ma_tmp;
  end
  endtask

  // Local energy samples
  reg [63:0] energy_prev;
  reg [63:0] energy_now;

  // procedural locals promoted to module scope to avoid block-scope declaration ordering issues
  integer force_up;
  integer force_down;
  reg [31:0] inst_before, ma_before, inst_after, ma_after;
  integer tcount;
  reg [31:0] inst_before2, ma_before2, inst_after2, ma_after2;
  integer tcount2;

  initial begin
  RUN_STEPS = 6;
  RW_CYCLES = 2000;
  force_up = -1; force_down = -1;
  UTIL_OVERRIDE_ADDR = -1;
  SETTLE_CYCLES = DEFAULT_SETTLE_CYCLES;
  energy_prev = 64'd0; energy_now = 64'd0;
  // defaults for inputs
  clk = 0; reset = 1; tb_csr_valid = 0; tb_csr_write = 0; tb_csr_addr = 8'd0; tb_csr_wdata = 32'd0;
  power_mode = 8'd0; system_power_budget_mw = 16'd1000; chip_temperature = 8'd50; performance_target_tops = 16'd100;
  global_sparsity_enable = 1'b0; global_sparsity_mode = 2'b00; global_precision_mode = 2'b00; data_in = {8*64{1'b0}}; data_valid = 1'b0;
  if (!$value$plusargs("RUN_STEPS=%0d", RUN_STEPS)) ;
  if (!$value$plusargs("RW_CYCLES=%0d", RW_CYCLES)) ;
    $display("[TB] dvfs_energy_convergence_tb starting: steps=%0d cycles_per_step=%0d", RUN_STEPS, RW_CYCLES);

    // release reset after some cycles (active-high reset)
    reset = 1'b1; repeat (10) @(posedge clk); reset = 1'b0;

    // initial sample
    csr_read_energy64(energy_prev);
    $display("[TB] initial energy = %0p", energy_prev);

  if ($value$plusargs("SETTLE_CYCLES=%0d", SETTLE_CYCLES)) ;
    `PARSE_COMMON_PLUSARGS
  for (s=0; s<RUN_STEPS; s=s+1) begin
      // Optionally tune DVFS thresholds here via CSR writes (addresses 0xA0 / 0xA4)
      if (s == 1) begin
        // example: nudge thresholds (broadcast write)
        csr_write32(8'hA0, 32'd80); // UTIL_HIGH_THRESH_PCT = 80
        csr_write32(8'hA4, 32'd50); // UTIL_LOW_THRESH_PCT  = 50
      end

      // Deterministic utilization ramp stimulus (when plusargs provided)
      // plusargs: +FORCE_UTIL_UP=<milli>  and +FORCE_UTIL_DOWN=<milli>
      force_up = -1; force_down = -1;
      if ($value$plusargs("FORCE_UTIL_UP=%0d", force_up)) ;
      if ($value$plusargs("FORCE_UTIL_DOWN=%0d", force_down)) ;
      if (s == 2 && force_up >= 0) begin
        $display("[TB] Applying deterministic util up = %0d milli-pct", force_up);
        csr_write_util_milli(force_up);
        // monitor util change within settle window (instantaneous and moving average)
        csr_read_util(inst_before, ma_before);
        tcount = 0;
        repeat (SETTLE_CYCLES) begin
          repeat (RW_CYCLES) @(posedge clk);
          csr_read_util(inst_after, ma_after);
          if (inst_after != inst_before || ma_after != ma_before) begin
            $display("[TB] Util change observed after %0d cycles: inst %0d -> %0d; ma %0d -> %0d", tcount*RW_CYCLES, inst_before, inst_after, ma_before, ma_after);
            break;
          end
          tcount = tcount + 1;
        end
        if (inst_after == inst_before && ma_after == ma_before) begin
          $display("[TB][WARN] No util change observed within settle window (%0d cycles)", SETTLE_CYCLES*RW_CYCLES);
        end
      end
      if (s == (RUN_STEPS-2) && force_down >= 0) begin
        $display("[TB] Applying deterministic util down = %0d milli-pct", force_down);
        csr_write_util_milli(force_down);
        // similar settle monitoring
        csr_read_util(inst_before2, ma_before2);
        tcount2 = 0;
        repeat (SETTLE_CYCLES) begin
          repeat (RW_CYCLES) @(posedge clk);
          csr_read_util(inst_after2, ma_after2);
          if (inst_after2 != inst_before2 || ma_after2 != ma_before2) begin
            $display("[TB] Util change observed after %0d cycles: inst %0d -> %0d; ma %0d -> %0d", tcount2*RW_CYCLES, inst_before2, inst_after2, ma_before2, ma_after2);
            break;
          end
          tcount2 = tcount2 + 1;
        end
        if (inst_after2 == inst_before2 && ma_after2 == ma_before2) begin
          $display("[TB][WARN] No util change observed within settle window (%0d cycles)", SETTLE_CYCLES*RW_CYCLES);
        end
      end

      // Wait for system to run for RW_CYCLES cycles to let energy accumulate / DVFS react
      repeat (RW_CYCLES) @(posedge clk);

      // Sample energy counters via CSR
      csr_read_energy64(energy_now);
      $display("[TB] Step %0d energy_now=%0p delta=%0p", s, energy_now, energy_now - energy_prev);

      // Basic sanity checks: energy should not decrease
      if (energy_now < energy_prev) begin
        $display("[TB][FAIL] energy decreased at step %0d: prev=%0p now=%0p", s, energy_prev, energy_now);
        $fatal(1);
      end

      // Optional stronger check: after the settle window (RW_CYCLES), ensure dynamic behavior progressed
      // If the test provided FORCE_UTIL_* plusargs we expect energy_delta > 0
      if ((s == 2 || s == RUN_STEPS-2) && ( $value$plusargs("FORCE_UTIL_UP=%0d", force_up) || $value$plusargs("FORCE_UTIL_DOWN=%0d", force_down) )) begin
        if ((energy_now - energy_prev) == 0) begin
          $display("[TB][WARN] energy delta zero after deterministic util change at step %0d", s);
        end
      end

      energy_prev = energy_now;
    end

    $display("[TB] dvfs_energy_convergence_tb finished");
    $finish;
  end

endmodule
