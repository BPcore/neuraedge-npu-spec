`timescale 1ns/1ps
module mem_contention_stress_tb;
    reg clk=0, reset=1; always #5 clk=~clk;

    // Two-source arb (simple round-robin mux) feeding single injector to emulate multi-source contention
    reg src0_valid, src1_valid; reg [15:0] src0_size, src1_size; reg src0_is_dram, src1_is_dram;
    wire sel_src0 = (cycle_cnt[0]==1'b0); // alternate
    wire mux_valid = sel_src0 ? src0_valid : src1_valid;
    wire mux_is_dram = sel_src0 ? src0_is_dram : src1_is_dram;
    wire [15:0] mux_size = sel_src0 ? src0_size : src1_size;
    wire mux_ready;

    // Device under test
    wire resp_valid; wire [15:0] resp_size_bytes;
    reg [15:0] cfg_latency_sram=2, cfg_latency_dram=20; reg [9:0] cfg_dram_hit_milli_pct=0; reg cfg_use_cfg_latencies=1;
    reg cfg_enable_contention=1; reg [7:0] cfg_tokens_per_cycle=8; reg [15:0] cfg_token_capacity=64;
    wire [31:0] total_reqs,total_resp,sram_reqs,dram_reqs,stall_cycles,busy_cycles; wire busy;
    wire [15:0] dram_tokens_level; wire [31:0] dram_token_stall_cycles, dram_contention_events;

    memory_latency_injector_contention #(.QUEUE_DEPTH(8), .EXTRA_LATENCY_MAX(4), .LATENCY_DIST_MODE(1)) dut(
        .clk(clk), .reset(reset),
        .req_valid(mux_valid), .req_is_dram(mux_is_dram), .req_size_bytes(mux_size), .req_ready(mux_ready),
        .resp_valid(resp_valid), .resp_size_bytes(resp_size_bytes),
        .cfg_latency_sram(cfg_latency_sram), .cfg_latency_dram(cfg_latency_dram), .cfg_dram_hit_milli_pct(cfg_dram_hit_milli_pct), .cfg_use_cfg_latencies(cfg_use_cfg_latencies),
        .cfg_enable_contention(cfg_enable_contention), .cfg_tokens_per_cycle(cfg_tokens_per_cycle), .cfg_token_capacity(cfg_token_capacity),
        .total_reqs(total_reqs), .total_resp(total_resp), .sram_reqs(sram_reqs), .dram_reqs(dram_reqs), .stall_cycles(stall_cycles), .busy_cycles(busy_cycles), .busy(busy),
        .dram_tokens_level(dram_tokens_level), .dram_token_stall_cycles(dram_token_stall_cycles), .dram_contention_events(dram_contention_events)
    );

    // Simple autonomous generators
    integer seed=32'h1234ABCD; function [15:0] rand_size; input dummy; begin
        seed = seed ^ (seed<<13); seed = seed ^ (seed>>17); seed = seed ^ (seed<<5); // xorshift
        case (seed[2:0])
            3'd0: rand_size = 16; 3'd1: rand_size = 32; 3'd2: rand_size = 64; 3'd3: rand_size = 96; 3'd4: rand_size = 128; default: rand_size = 48;
        endcase
    end endfunction

    reg [31:0] cycle_cnt; always @(posedge clk) if (reset) cycle_cnt<=0; else cycle_cnt<=cycle_cnt+1;
    always @(posedge clk) begin
        if (reset) begin
            src0_valid<=0; src1_valid<=0; src0_is_dram<=0; src1_is_dram<=0; src0_size<=0; src1_size<=0;
        end else begin
            // probabilistic issue if ready and tokens likely available
            if (!src0_valid && mux_ready && (seed[3:0] < 10)) begin
                src0_valid <= 1; src0_is_dram <= 1; src0_size <= rand_size(0);
            end else if (src0_valid && mux_ready && sel_src0) src0_valid <= 0;
            if (!src1_valid && mux_ready && (seed[7:4] < 10)) begin
                src1_valid <= 1; src1_is_dram <= 1; src1_size <= rand_size(0);
            end else if (src1_valid && mux_ready && !sel_src0) src1_valid <= 0;
        end
    end

    // Self-check & scoring
    integer last_resp; integer start_cycle; integer stall_snapshot;
    initial begin
        repeat(5) @(posedge clk); reset=0; start_cycle = cycle_cnt;
        repeat(2000) @(posedge clk);
        // Basic sanity: total_resp <= total_reqs, tokens_level <= capacity
        if (total_resp > total_reqs) $error("Responses exceed requests");
        if (dram_tokens_level > cfg_token_capacity) $error("Token level overflow");
        if (dram_token_stall_cycles == 0) $warning("No token stall cycles observed - increase load?\n");
        $display("[CONTENTION] REQS=%0d RESP=%0d STALL=%0d EVENTS=%0d TOKENS_LVL=%0d", total_reqs,total_resp,dram_token_stall_cycles,dram_contention_events,dram_tokens_level);
        $finish;
    end
endmodule
