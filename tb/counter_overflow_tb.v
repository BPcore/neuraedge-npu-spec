`timescale 1ns/1ps
// counter_overflow_tb: forces saturation of counters to verify ALL overflow_flags[5:0]
// Bits: 0=phys_ops 1=eff_ops 2=bytes_sram 3=bytes_dram 4=dma_stall 5=mask_stall.
module counter_overflow_tb;
  reg clk=0; always #1 clk=~clk; reg reset=1; initial begin #5 reset=0; end

  // Minimal tile with CSR control enabled and small PE grid to speed.
  wire [31:0] csr_rdata; reg csr_valid=0, csr_write=0; reg [7:0] csr_addr=0; reg [31:0] csr_wdata=0; wire csr_ready;
  wire [31:0] bytes_read_sram, bytes_read_dram, cycles_stalled_dma, cycles_stalled_mask;
  wire [7:0] overflow_flags;
  wire [31:0] debug_status; wire tile_ready;

  // Tie-offs
  wire [15:0] power_budget_mw = 16'd500; wire [7:0] power_mode=0; wire [7:0] temperature=8'd50; wire [15:0] performance_target=0;
  // Enable sparsity to exercise mask stall overflow bit (bit5) when sparse_valid stays low
  wire sparsity_enable=1'b1; wire [1:0] sparsity_mode=2'b00; wire [1:0] precision_mode=2'b00; wire lane_mask=1'b1;
  wire [127:0] data_in=128'b0; reg data_valid=1'b0; wire [15:0] data_pattern=0;
  // NoC tie-offs
  wire [63:0] z64=64'b0; wire z=1'b0;

  neuraedge_tile_50tops #(.PE_ROWS(1), .PE_COLS(1), .USE_CSR_CONTROL(1)) dut (
    .clk(clk), .reset(reset), .power_mode(power_mode), .power_budget_mw(power_budget_mw), .temperature(temperature), .performance_target(performance_target),
    .sparsity_enable(sparsity_enable), .sparsity_mode(sparsity_mode), .precision_mode(precision_mode), .lane_active_mask(lane_mask),
    .csr_valid(csr_valid), .csr_write(csr_write), .csr_addr(csr_addr), .csr_wdata(csr_wdata), .csr_rdata(csr_rdata), .csr_ready(csr_ready),
    .data_in(data_in), .data_valid(data_valid), .data_pattern(data_pattern),
    .noc_flit_in_n(z64), .noc_flit_in_s(z64), .noc_flit_in_e(z64), .noc_flit_in_w(z64), .noc_flit_in_local(z64),
    .noc_valid_in_n(z), .noc_valid_in_s(z), .noc_valid_in_e(z), .noc_valid_in_w(z), .noc_valid_in_local(z),
    .noc_flit_out_n(), .noc_flit_out_s(), .noc_flit_out_e(), .noc_flit_out_w(), .noc_flit_out_local(),
    .noc_valid_out_n(), .noc_valid_out_s(), .noc_valid_out_e(), .noc_valid_out_w(), .noc_valid_out_local(),
    .ops_per_second(), .phys_ops_per_second(), .eff_ops_per_second(), .skipped_phys_ops_per_second(),
    .power_consumption_mw(), .efficiency_tops_w(), .efficiency_grade(), .active_pe_count(), .sparsity_ratio(),
    .energy_estimate_pj(), .bytes_read_sram(bytes_read_sram), .bytes_read_dram(bytes_read_dram), .cycles_stalled_dma(cycles_stalled_dma), .cycles_stalled_mask(cycles_stalled_mask),
    .dynamic_energy_estimate_pj(), .leakage_energy_estimate_pj(), .tile_ready(tile_ready), .debug_status(debug_status)
  );

  // Access overflow flags via CSR map (0x09C). Strategy: pre-saturate each counter then
  // trigger exactly one increment event so the corresponding overflow flag sets (sticky).

  integer i;
  initial begin
    @(negedge reset);
  // Pre-saturate all counters so next increment fires each flag once.
  dut.physical_operation_counter = 32'hFFFF_FFFF;      // flag[0]
  dut.operation_counter          = 32'hFFFF_FFFF;      // flag[1]
  dut.bytes_read_sram_reg        = 32'hFFFF_FFFF;      // flag[2]
  dut.bytes_read_dram_reg        = 32'hFFFF_FFFF;      // flag[3]
  dut.cycles_stalled_dma_reg     = 32'hFFFF_FFFF;      // flag[4]
  dut.cycles_stalled_mask_reg    = 32'hFFFF_FFFF;      // flag[5]

  // Cycle 1: drive input valid (generates phys/eff op) and force DMA stall in same window.
  data_valid = 1'b1; dut.mem_busy = 1'b1; #2; data_valid = 1'b0; dut.mem_busy = 1'b0;

    // Cycle 2: SRAM response to trigger bytes_read_sram overflow flag[2]
    dut.mem_pending_is_dram = 1'b0; dut.mem_resp_size_bytes = 16'd8; dut.mem_resp_valid = 1'b1; #2; dut.mem_resp_valid = 1'b0;

    // Cycle 3: DRAM response to trigger bytes_read_dram overflow flag[3]
    dut.mem_pending_is_dram = 1'b1; dut.mem_resp_size_bytes = 16'd8; dut.mem_resp_valid = 1'b1; #2; dut.mem_resp_valid = 1'b0;

    #6; // allow a few cycles for flags to latch
    // Read overflow flags CSR (0x09C -> address 0x9C byte addressing, matches CSR map comment)
  csr_addr = 8'h9C; csr_valid = 1'b1; csr_write = 1'b0; #2; csr_valid = 1'b0; #2;
  $display("[OVERFLOW][FLAGS]=%02h bytes_sram=%08h bytes_dram=%08h dma=%08h mask=%08h", dut.overflow_flags, bytes_read_sram, bytes_read_dram, cycles_stalled_dma, cycles_stalled_mask);
  if (&dut.overflow_flags[5:0]) begin
    $display("[OVERFLOW][PASS] All expected flags (5:0) asserted");
  end else begin
    $display("[OVERFLOW][FAIL] Missing one or more expected flags (5:0)");
  end
  $finish;
  end
endmodule
