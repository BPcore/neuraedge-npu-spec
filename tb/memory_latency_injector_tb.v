`timescale 1ns/1ps
module memory_latency_injector_tb;
  reg clk=0, reset=1;
  // Manual clock toggle loop for --no-timing mode driven from initial
  always #5 clk = ~clk; // (Kept for readability; Verilator will ignore due to --no-timing, replaced by manual loop if needed)

  reg req_valid; reg req_is_dram; reg [15:0] req_size_bytes; wire req_ready;
  wire resp_valid; wire [15:0] resp_size_bytes;
  reg [15:0] cfg_latency_sram=2; reg [15:0] cfg_latency_dram=10; reg [9:0] cfg_dram_hit_milli_pct=0; reg cfg_use_cfg_latencies=1;
  wire [31:0] total_reqs, total_resp, sram_reqs, dram_reqs, stall_cycles, busy_cycles; wire busy;

  memory_latency_injector #(.LATENCY_SRAM_CYCLES(2), .LATENCY_DRAM_CYCLES(12)) dut(
    .clk(clk), .reset(reset),
    .req_valid(req_valid), .req_is_dram(req_is_dram), .req_size_bytes(req_size_bytes), .req_ready(req_ready),
    .resp_valid(resp_valid), .resp_size_bytes(resp_size_bytes),
    .cfg_latency_sram(cfg_latency_sram), .cfg_latency_dram(cfg_latency_dram), .cfg_dram_hit_milli_pct(cfg_dram_hit_milli_pct), .cfg_use_cfg_latencies(cfg_use_cfg_latencies),
    .total_reqs(total_reqs), .total_resp(total_resp), .sram_reqs(sram_reqs), .dram_reqs(dram_reqs), .stall_cycles(stall_cycles), .busy_cycles(busy_cycles), .busy(busy)
  );

  integer cycle;
  initial begin
    integer target_cycle;
    $display("[TB] Starting memory latency injector test (--no-timing mode)");
    req_valid=0; req_is_dram=0; req_size_bytes=16; cycle=0; reset=1;
    // Manual clock stepping for first 10 cycles
    for (target_cycle=0; target_cycle<10; target_cycle=target_cycle+1) begin
      clk=0; #1; clk=1; #1;
    end
    reset=0;
    // SRAM request issue on next cycle boundary
    if (req_ready) begin req_valid=1; req_is_dram=0; req_size_bytes=32; end
    clk=0; #1; clk=1; #1; // advance one cycle
    req_valid=0;
    // Poll for response
    while (!resp_valid) begin clk=0; #1; clk=1; #1; end
    $display("[TB] SRAM resp after cycles=%0d stall=%0d", cycle, stall_cycles);
    // DRAM request
    if (req_ready) begin req_valid=1; req_is_dram=1; req_size_bytes=64; end
    clk=0; #1; clk=1; #1; req_valid=0;
    while (!resp_valid) begin clk=0; #1; clk=1; #1; end
    $display("[TB] DRAM resp after cycles=%0d stall=%0d", cycle, stall_cycles);
    if (total_reqs!=2) $display("[ERR] total_reqs mismatch %0d", total_reqs);
    if (total_resp!=2) $display("[ERR] total_resp mismatch %0d", total_resp);
    $display("[TB] Done");
    $finish;
  end

  always @(posedge clk) if(!reset) cycle<=cycle+1;
endmodule
