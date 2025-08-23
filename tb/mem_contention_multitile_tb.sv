// mem_contention_multitile_tb.sv
`include "tb/plusargs_mem_contention.svh"
`include "tb/plusargs_common.svh"
// Purpose: Multi-tile DRAM contention scenario using memory_latency_injector_contention wrapper.
// Scaffold: Instantiate 2..4 tiles and a shared memory contention wrapper to validate contention behavior.

`timescale 1ns/1ps
module mem_contention_multitile_tb;
  // Short smoke: instantiate neuraedge_top with single tile prototype and toggle contention via plusargs
  reg clk; always #5 clk = ~clk;
  reg rst_n;

  // instantiate NPU top that exposes CSR bus so TB can toggle contention wrapper via CSR
  reg [7:0] tb_csr_addr;
  reg tb_csr_valid;
  reg tb_csr_write;
  reg [31:0] tb_csr_wdata;
  // plusarg-parsed control words promoted to module scope for Verilog compatibility
  integer RUN_MS;
  integer MEM_CONTENTION_CTRL_ADDR;
  integer parsed_addr0;
  integer parsed_addr1;
  integer parsed_addr2;
  integer iter;
  integer cyc;
  reg [31:0] token_level;
  wire [31:0] tb_csr_rdata;
  wire tb_csr_ready;

  neuraedge_npu_50tops dut0 (
    .clk(clk), .reset(rst_n),
    .power_mode(8'd0), .system_power_budget_mw(16'd1000), .chip_temperature(8'd50), .performance_target_tops(16'd100),
    .global_sparsity_enable(1'b0), .global_sparsity_mode(2'd0), .global_precision_mode(2'd0),
    .data_in({8*64{1'b0}}), .data_valid(1'b0),
    .csr_valid(tb_csr_valid), .csr_write(tb_csr_write), .csr_addr(tb_csr_addr), .csr_wdata(tb_csr_wdata), .csr_rdata(tb_csr_rdata), .csr_ready(tb_csr_ready)
  );

  // simple CSR write/read helpers
  task automatic csr_write32(input [7:0] addr, input [31:0] data);
  begin
    @(posedge clk);
    tb_csr_addr  <= addr;
    tb_csr_wdata <= data;
    tb_csr_write <= 1'b1;
    tb_csr_valid <= 1'b1;
    @(posedge clk);
    while (!tb_csr_ready) @(posedge clk);
    tb_csr_valid <= 1'b0; tb_csr_write <= 1'b0; tb_csr_addr <= 8'd0; tb_csr_wdata <= 32'd0;
  end
  endtask

  task automatic csr_read32(input [7:0] addr, output [31:0] rdata);
  begin
    @(posedge clk);
    tb_csr_addr <= addr; tb_csr_write <= 1'b0; tb_csr_valid <= 1'b1;
    @(posedge clk);
    while (!tb_csr_ready) @(posedge clk);
    rdata = tb_csr_rdata;
    tb_csr_valid <= 1'b0; tb_csr_addr <= 8'd0;
  end
  endtask

  initial begin
    RUN_MS = 100;
  `PARSE_COMMON_PLUSARGS
    clk = 0; rst_n = 0; tb_csr_valid = 0; tb_csr_write = 0; tb_csr_wdata = 32'd0; tb_csr_addr = 8'd0;
  if (!$value$plusargs("RUN_MS=%0d", RUN_MS)) ;
    $display("[TB] mem_contention_multitile_tb starting RUN_MS=%0d", RUN_MS);
    rst_n = 0; repeat (10) @(posedge clk); rst_n = 1;
  // In this smoke we toggle the contention enable via CSR if available. The
  // documented CSR map currently does not list a dedicated contention enable
  // CSR; tests that need to toggle RTL-only debug hooks may provide the
  // address with +MEM_CONTENTION_CTRL=<hex>. If not provided the TB performs
  // best-effort runtime stimulus without attempting undocumented writes.
  MEM_CONTENTION_CTRL_ADDR = -1;
  if ($value$plusargs("MEM_CONTENTION_CTRL=%h", MEM_CONTENTION_CTRL_ADDR)) begin
    $display("[TB] Toggling memory contention via CSR 0x%0h", MEM_CONTENTION_CTRL_ADDR);
    csr_write32(MEM_CONTENTION_CTRL_ADDR[7:0], 32'h1);
    repeat (100) @(posedge clk);
    csr_write32(MEM_CONTENTION_CTRL_ADDR[7:0], 32'h0);
  end else begin
    $display("[TB] MEM_CONTENTION_CTRL not provided; running best-effort stimulus without undocumented CSR writes");
  end
    // Sleep for requested duration
    repeat (RUN_MS*100) @(posedge clk);

    // deterministic long-run patterns for contention invariants
    if (MEM_DETER_RUNS > 0) begin
      for (iter = 0; iter < MEM_DETER_RUNS; iter = iter + 1) begin
        $display("[TB] MEM_DETER_RUNS iteration %0d/%0d", iter, MEM_DETER_RUNS);
        // run a longer steady burst from tile 0 while others send intermittent bursts
        for (cyc = 0; cyc < 10000; cyc = cyc + 1) begin
          // steady stream from tile 0. These writes are scaffolding placeholders
          // for a real traffic injector. If a test harness exposes a CSR-based
          // traffic injector provide +MEM_TRAFFIC_TILE0=<addr> etc. Defaults are
          // no-ops to avoid touching undocumented CSRs.
          if ($value$plusargs("MEM_TRAFFIC_TILE0=%h", parsed_addr0)) begin
            csr_write32(parsed_addr0[7:0], 32'h8);
          end
          if ((cyc % 64) == 0) begin
            // intermittent bursts (scaffold-only)
            if ($value$plusargs("MEM_TRAFFIC_TILE1=%h", parsed_addr1)) begin
              csr_write32(parsed_addr1[7:0], 32'h20);
            end
            if ($value$plusargs("MEM_TRAFFIC_TILE2=%h", parsed_addr2)) begin
              csr_write32(parsed_addr2[7:0], 32'h10);
            end
          end
          repeat (10) @(posedge clk);
        end

        // read token level and assert within bounds
        csr_read32(8'hD8, token_level);
        if (token_level > 32'hFFFF) begin
          $fatal("[TB][FAIL] token_level out of range: %0d", token_level);
        end
      end
    end
    $display("[TB] mem_contention_multitile_tb done");
    $finish;
  end

endmodule
