// dvfs_energy_convergence_tb.sv
`include "tb/plusargs_dvfs_energy_convergence.svh"
// Purpose: Directed test to validate DVFS/energy convergence behavior when utilization ramps.
// Scaffolded harness - connect to your `advanced_power_manager` or top-level NPU to exercise DVFS.

`timescale 1ns/1ps
module dvfs_energy_convergence_tb;
  integer RUN_STEPS = 6;
  integer RW_CYCLES = 2000; // short smoke
  integer s;

  // Clock / reset (use active-high reset for the neuraedge_npu_50tops top)
  reg clk = 0; always #5 clk = ~clk;
  reg reset = 1;

  // CSR bus signals (top exposes a csr bus)
  reg        tb_csr_valid = 0;
  reg        tb_csr_write = 0;
  reg [7:0]  tb_csr_addr  = 8'd0;
  reg [31:0] tb_csr_wdata = 32'd0;
  wire [31:0] tb_csr_rdata;
  wire        tb_csr_ready;

  // Instantiate an NPU top that exposes a CSR bus so the TB can drive registers
  // Provide safe defaults for other top-level inputs
  reg [7:0] power_mode = 8'd0;
  reg [15:0] system_power_budget_mw = 16'd1000;
  reg [7:0] chip_temperature = 8'd50;
  reg [15:0] performance_target_tops = 16'd100;
  reg global_sparsity_enable = 1'b0;
  reg [1:0] global_sparsity_mode = 2'b00;
  reg [1:0] global_precision_mode = 2'b00;
  reg [8*64-1:0] data_in = {8*64{1'b0}}; // default zero input
  reg data_valid = 1'b0;

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

  task automatic csr_read32(input [7:0] addr, output [31:0] rdata);
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
  task automatic csr_read_energy64(output reg [63:0] energy_out);
    reg [31:0] lo;
    reg [31:0] hi;
  begin
    csr_read32(8'h60, lo);
    csr_read32(8'h64, hi);
    energy_out = {hi, lo};
  end
  endtask

  // Deterministic utilization driver (test-mode override)
  // Assumption: the design exposes a test override CSR for instantaneous utilization
  // We'll assume address 0xB0 is a writable UTIL_OVERRIDE in milli-percent (0..1000).
  // If your CSR map uses a different address, update the constant below.
  localparam [7:0] CSR_UTIL_OVERRIDE_ADDR = 8'hB0; // ASSUMPTION: adjust to match docs/CSR_MAP.md

  task automatic csr_write_util_milli(input int util_milli);
  begin
    // clamp
    int v = util_milli;
    if (v < 0) v = 0;
    if (v > 1000) v = 1000;
    csr_write32(CSR_UTIL_OVERRIDE_ADDR, v);
  end
  endtask

  // Local energy samples
  reg [63:0] energy_prev = 64'd0;
  reg [63:0] energy_now  = 64'd0;

  initial begin
    if (!$value$plusargs("RUN_STEPS=%0d", RUN_STEPS)) ;
    if (!$value$plusargs("RW_CYCLES=%0d", RW_CYCLES)) ;
    $display("[TB] dvfs_energy_convergence_tb starting: steps=%0d cycles_per_step=%0d", RUN_STEPS, RW_CYCLES);

    // release reset after some cycles (active-high reset)
    reset = 1'b1; repeat (10) @(posedge clk); reset = 1'b0;

    // initial sample
    csr_read_energy64(energy_prev);
    $display("[TB] initial energy = %0p", energy_prev);

    for (s=0; s<RUN_STEPS; s=s+1) begin
      // Optionally tune DVFS thresholds here via CSR writes (addresses 0xA0 / 0xA4)
      if (s == 1) begin
        // example: nudge thresholds (broadcast write)
        csr_write32(8'hA0, 32'd80); // UTIL_HIGH_THRESH_PCT = 80
        csr_write32(8'hA4, 32'd50); // UTIL_LOW_THRESH_PCT  = 50
      end

      // Deterministic utilization ramp stimulus (when plusargs provided)
      // plusargs: +FORCE_UTIL_UP=<milli>  and +FORCE_UTIL_DOWN=<milli>
      int force_up;
      int force_down;
      force_up = -1; force_down = -1;
      if ($value$plusargs("FORCE_UTIL_UP=%0d", force_up)) ;
      if ($value$plusargs("FORCE_UTIL_DOWN=%0d", force_down)) ;
      if (s == 2 && force_up >= 0) begin
        $display("[TB] Applying deterministic util up = %0d milli-pct", force_up);
        csr_write_util_milli(force_up);
      end
      if (s == (RUN_STEPS-2) && force_down >= 0) begin
        $display("[TB] Applying deterministic util down = %0d milli-pct", force_down);
        csr_write_util_milli(force_down);
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
