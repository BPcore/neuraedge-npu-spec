// mem_contention_multitile_tb.sv
// Purpose: Multi-tile DRAM contention scenario using memory_latency_injector_contention wrapper.
// Scaffold: Instantiate 2..4 tiles and a shared memory contention wrapper to validate contention behavior.

`timescale 1ns/1ps
module mem_contention_multitile_tb;
  // Short smoke: instantiate neuraedge_top with single tile prototype and toggle contention via plusargs
  reg clk = 0; always #5 clk = ~clk;
  reg rst_n = 0;

  // instantiate NPU top that exposes CSR bus so TB can toggle contention wrapper via CSR
  reg [7:0] tb_csr_addr;
  reg tb_csr_valid = 0;
  reg tb_csr_write = 0;
  reg [31:0] tb_csr_wdata = 32'd0;
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
    integer RUN_MS = 100;
    if (!$value$plusargs("RUN_MS=%0d", RUN_MS)) ;
    $display("[TB] mem_contention_multitile_tb starting RUN_MS=%0d", RUN_MS);
    rst_n = 0; repeat (10) @(posedge clk); rst_n = 1;
  // In this smoke we toggle the contention enable via CSR if available (CSR map: 0xD4 enable/tokens/settings)
  $display("[TB] Attempting to toggle contention via CSR (best-effort)");
  // Example: CSR 0xD4 controls the memory contention wrapper enable/params (scaffold)
  csr_write32(8'hD4, 32'h1); // enable
  repeat (100) @(posedge clk);
  csr_write32(8'hD4, 32'h0); // disable
    // Sleep for requested duration
    repeat (RUN_MS*100) @(posedge clk);
    $display("[TB] mem_contention_multitile_tb done");
    $finish;
  end

endmodule
