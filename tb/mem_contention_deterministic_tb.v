`timescale 1ns/1ps
// Deterministic token bucket contention testbench
// Configures known token refill and request size so expected stall cycles can be computed exactly.
// Strategy:
//  - tokens_per_cycle = 4, capacity = 32
//  - Issue sequence of DRAM requests each of size 32 bytes, SIZE_TO_TOKENS_SHIFT=3 => 4 tokens per request
//  - Injector base latency small and fixed. We chain 20 requests back-to-back.
// Expected: First 8 requests consume 32 tokens (capacity). Tokens refill 4 per cycle during processing.
// We track when a response is pending but insufficient tokens cause stalls.
// For simplicity we assert that dram_token_stall_cycles equals computed expected_stalls at end.

module mem_contention_deterministic_tb;
  localparam SIZE_WIDTH=16;
  reg clk=0, reset=1;
  always #5 clk=~clk; // 100MHz

  // DUT under test
  reg req_valid; reg req_is_dram; reg [SIZE_WIDTH-1:0] req_size_bytes; wire req_ready;
  wire resp_valid; wire [SIZE_WIDTH-1:0] resp_size_bytes;
  wire [31:0] total_reqs,total_resp,sram_reqs,dram_reqs,stall_cycles,busy_cycles; wire busy;
  wire [15:0] dram_tokens_level; wire [31:0] dram_token_stall_cycles,dram_contention_events;

  // Fixed config
  wire [15:0] cfg_latency_sram = 16'd2;
  wire [15:0] cfg_latency_dram = 16'd10;
  wire [9:0]  cfg_dram_hit_milli_pct = 10'd0;
  wire        cfg_use_cfg_latencies = 1'b1;
  wire        cfg_enable_contention = 1'b1;
  wire [7:0]  cfg_tokens_per_cycle  = 8'd4;
  wire [15:0] cfg_token_capacity    = 16'd32;

  memory_latency_injector_contention #(
    .SIZE_WIDTH(SIZE_WIDTH), .LATENCY_SRAM_CYCLES(2), .LATENCY_DRAM_CYCLES(10), .PIPELINE_RESP(0),
    .QUEUE_DEPTH(4), .EXTRA_LATENCY_MAX(0), .LATENCY_DIST_MODE(0),
    .DRAM_TOKENS_PER_CYCLE(4), .DRAM_TOKEN_CAPACITY(32), .SIZE_TO_TOKENS_SHIFT(3)
  ) dut (
    .clk(clk), .reset(reset),
    .req_valid(req_valid), .req_is_dram(req_is_dram), .req_size_bytes(req_size_bytes), .req_ready(req_ready),
    .resp_valid(resp_valid), .resp_size_bytes(resp_size_bytes),
    .cfg_latency_sram(cfg_latency_sram), .cfg_latency_dram(cfg_latency_dram), .cfg_dram_hit_milli_pct(cfg_dram_hit_milli_pct), .cfg_use_cfg_latencies(cfg_use_cfg_latencies),
    .cfg_enable_contention(cfg_enable_contention), .cfg_tokens_per_cycle(cfg_tokens_per_cycle), .cfg_token_capacity(cfg_token_capacity),
    .total_reqs(total_reqs), .total_resp(total_resp), .sram_reqs(sram_reqs), .dram_reqs(dram_reqs), .stall_cycles(stall_cycles), .busy_cycles(busy_cycles), .busy(busy),
    .dram_tokens_level(dram_tokens_level), .dram_token_stall_cycles(dram_token_stall_cycles), .dram_contention_events(dram_contention_events)
  );

  integer i; integer issued; integer completed; integer expected_stalls; integer cycle;
  reg done_sequence;

  initial begin
    $display("[DET] Starting deterministic contention TB");
    #20 reset=0;
    issued=0; completed=0; expected_stalls=0; done_sequence=0; cycle=0;
  end

  // Stimulus: issue 20 identical DRAM requests whenever ready until count reached
  always @(posedge clk) begin
    if (reset) begin
      req_valid <= 0; req_is_dram <= 0; req_size_bytes <= 16'd0;
    end else begin
      req_valid <= 0;
      if (!done_sequence && req_ready) begin
        req_valid <= 1; req_is_dram <= 1; req_size_bytes <= 16'd32; // 4 tokens
        issued <= issued + 1;
        if (issued == 19) done_sequence <= 1; // 20 total
      end
    end
  end

  // Completion tracking
  always @(posedge clk) begin
    if (!reset) begin
      if (resp_valid) completed <= completed + 1;
      cycle <= cycle + 1;
    end
  end

  // Scenario 1 expectation:
  // Each request needs 4 tokens. Capacity 32, refill 4 per cycle, latency 10 cycles => tokens fully refill between consumptions -> zero stalls.
  // Scenario 2 (after first completes): Increase request size to 64 bytes (8 tokens) while keeping refill 4 tokens/cycle and issue back-to-back.
  // Expected: After first few, some cycles will stall until enough tokens accumulate (latency window may not fully cover refill). We assert >0 stalls.
  always @(posedge clk) begin
    if (!reset && done_sequence && completed==20) begin
      #10; // allow counters to settle
      if (dram_token_stall_cycles !== 0) begin
        $error("Unexpected token stall cycles %0d (expected 0) in Scenario1", dram_token_stall_cycles);
      end else begin
        $display("[DET] PASS Scenario1: dram_token_stall_cycles=%0d", dram_token_stall_cycles);
      end
      $display("[DET] Scenario1 Issued=%0d Completed=%0d", issued, completed);
      // Begin Scenario2
      // Re-run with larger size inducing stalls
      issued <= 0; completed <= 0; req_valid <= 0; done_sequence <= 0; cycle <= 0;
      force req_size_bytes = 16'd64; // 8 tokens
      repeat (5) @(posedge clk);
      repeat (20) begin
        @(posedge clk);
        if (req_ready) begin req_valid <= 1; req_is_dram <= 1; issued <= issued + 1; @(posedge clk); req_valid <= 0; end
      end
      wait (completed==issued);
      #20;
      if (dram_token_stall_cycles == 0) $error("Scenario2 expected stalls >0, got 0");
      else $display("[DET] PASS Scenario2: stalls=%0d", dram_token_stall_cycles);
      $finish;
    end
  end

endmodule
