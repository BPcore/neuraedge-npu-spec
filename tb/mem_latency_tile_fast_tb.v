`timescale 1ns/1ps
// mem_latency_tile_fast_tb
// Minimal fast test focusing only on memory latency injector + CSR config simulation.
// Avoids instantiating full tile to cut Verilator compile/elaboration time.
module mem_latency_tile_fast_tb;
  // Internal clock & reset (timing enabled in build)
  reg clk=0; always #1 clk=~clk;
  reg reset=1; initial begin #4 reset=0; end

  // Simplified config registers (stand-in for CSR block)
  reg [15:0] cfg_latency_sram=5;
  reg [15:0] cfg_latency_dram=10;
  reg [9:0]  cfg_dram_hit_milli_pct=0;
  reg        cfg_use_cfg_latencies=1'b1;

  // Simple traffic generator: alternate SRAM/DRAM requests until N responses
  localparam N_RESP = 8;
  reg req_valid=0; reg req_is_dram=0; reg [15:0] req_size_bytes=64; wire req_ready;
  reg pending_is_dram; // track type of currently outstanding request for logging
  wire resp_valid; wire [15:0] resp_size_bytes;
  wire [31:0] total_reqs,total_resp,sram_reqs,dram_reqs,stall_cycles,busy_cycles; wire busy;

  memory_latency_injector #(.SIZE_WIDTH(16), .LATENCY_SRAM_CYCLES(2), .LATENCY_DRAM_CYCLES(30)) dut (
    .clk(clk), .reset(reset),
    .req_valid(req_valid), .req_is_dram(req_is_dram), .req_size_bytes(req_size_bytes), .req_ready(req_ready),
    .resp_valid(resp_valid), .resp_size_bytes(resp_size_bytes),
    .cfg_latency_sram(cfg_latency_sram), .cfg_latency_dram(cfg_latency_dram),
    .cfg_dram_hit_milli_pct(cfg_dram_hit_milli_pct), .cfg_use_cfg_latencies(cfg_use_cfg_latencies),
    .total_reqs(total_reqs), .total_resp(total_resp), .sram_reqs(sram_reqs), .dram_reqs(dram_reqs),
    .stall_cycles(stall_cycles), .busy_cycles(busy_cycles), .busy(busy)
  );

  integer phase; integer outstanding; integer responses; integer wait_ctr;
  integer sram_wait_accum; integer dram_wait_accum;
  always @(posedge clk) begin
  if (reset) begin
      phase<=0; req_valid<=0; req_is_dram<=0; outstanding<=0; responses<=0; wait_ctr<=0; sram_wait_accum<=0; dram_wait_accum<=0; pending_is_dram<=0;
    end else begin
      // measure simple latency for last transaction
      if (busy && !resp_valid) wait_ctr <= wait_ctr + 1; else if (resp_valid) wait_ctr <= 0;

      // Issue request when injector free and we still need more
      if (!busy && responses < N_RESP) begin
        req_is_dram <= (responses[0]); // alternate pattern based on current response count LSB
        req_size_bytes <= (responses[0]) ? 16'd128 : 16'd64; // DRAM larger
        pending_is_dram <= (responses[0]);
        req_valid <= 1'b1;
      end else begin
        req_valid <= 1'b0;
      end
      if (resp_valid) begin
        responses <= responses + 1;
        if (pending_is_dram) dram_wait_accum <= dram_wait_accum + wait_ctr; else sram_wait_accum <= sram_wait_accum + wait_ctr;
        $display("[FAST][RESP] idx=%0d type=%s size=%0d wait_cycles=%0d stall_total=%0d", responses,
          pending_is_dram?"DRAM":"SRAM", resp_size_bytes, wait_ctr, stall_cycles);
      end
      if (responses == N_RESP) begin
        integer expected_stall = sram_reqs*cfg_latency_sram + dram_reqs*cfg_latency_dram;
        $display("[FAST][SUMMARY] total_reqs=%0d sram=%0d dram=%0d stall_cycles=%0d expected_stall=%0d", total_reqs, sram_reqs, dram_reqs, stall_cycles, expected_stall);
        if (stall_cycles==expected_stall) $display("[FAST][PASS] stall matches expected"); else $display("[FAST][FAIL] stall=%0d expected=%0d", stall_cycles, expected_stall);
  $display("[FAST][INFO] avg_wait_sram=%.2f avg_wait_dram=%.2f (cycles incl +1)", (sram_reqs!=0)? (1.0*sram_wait_accum/sram_reqs):0.0, (dram_reqs!=0)? (1.0*dram_wait_accum/dram_reqs):0.0);
        $finish;
      end
    end
  end
endmodule
