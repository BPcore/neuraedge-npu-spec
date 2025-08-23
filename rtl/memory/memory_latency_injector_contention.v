`timescale 1ns/1ps
// Wrapper adding optional DRAM contention (token bucket) to memory_latency_injector
module memory_latency_injector_contention #(
    parameter SIZE_WIDTH = 16,
    parameter LATENCY_SRAM_CYCLES = 2,
    parameter LATENCY_DRAM_CYCLES = 30,
    parameter PIPELINE_RESP = 1,
    parameter QUEUE_DEPTH = 4,
    parameter EXTRA_LATENCY_MAX = 0,
    parameter LATENCY_DIST_MODE = 0,
    // Contention params
    parameter DRAM_TOKENS_PER_CYCLE = 8,
    parameter DRAM_TOKEN_CAPACITY   = 256,
    parameter SIZE_TO_TOKENS_SHIFT  = 3
)(
    input  wire clk,
    input  wire reset,
    // Request
    input  wire        req_valid,
    input  wire        req_is_dram,
    input  wire [SIZE_WIDTH-1:0] req_size_bytes,
    output wire        req_ready,
    // Response
    output reg         resp_valid,
    output reg  [SIZE_WIDTH-1:0] resp_size_bytes,
    // Config
    input  wire [15:0] cfg_latency_sram,
    input  wire [15:0] cfg_latency_dram,
    input  wire [9:0]  cfg_dram_hit_milli_pct,
    input  wire        cfg_use_cfg_latencies,
    input  wire        cfg_enable_contention,
    input  wire [7:0]  cfg_tokens_per_cycle,
    input  wire [15:0] cfg_token_capacity,
    // Telemetry (base model)
    output wire [31:0] total_reqs,
    output wire [31:0] total_resp,
    output wire [31:0] sram_reqs,
    output wire [31:0] dram_reqs,
    output wire [31:0] stall_cycles,
    output wire [31:0] busy_cycles,
    output wire        busy,
    // Contention telemetry
    output reg  [15:0] dram_tokens_level,
    output reg  [31:0] dram_token_stall_cycles,
    output reg  [31:0] dram_contention_events
);

// Instantiate base injector (modified to expose internal head completion gating)
// For simplicity we reuse original injector and gate completion externally.
wire base_resp_valid; wire [SIZE_WIDTH-1:0] base_resp_size;
wire base_busy; wire base_req_ready;

memory_latency_injector #(
    .SIZE_WIDTH(SIZE_WIDTH),
    .LATENCY_SRAM_CYCLES(LATENCY_SRAM_CYCLES),
    .LATENCY_DRAM_CYCLES(LATENCY_DRAM_CYCLES),
    .PIPELINE_RESP(PIPELINE_RESP),
    .QUEUE_DEPTH(QUEUE_DEPTH),
    .EXTRA_LATENCY_MAX(EXTRA_LATENCY_MAX),
    .LATENCY_DIST_MODE(LATENCY_DIST_MODE)
) base (
    .clk(clk), .reset(reset),
    .req_valid(req_valid), .req_is_dram(req_is_dram), .req_size_bytes(req_size_bytes), .req_ready(base_req_ready),
    .resp_valid(base_resp_valid), .resp_size_bytes(base_resp_size),
    .cfg_latency_sram(cfg_latency_sram), .cfg_latency_dram(cfg_latency_dram),
    .cfg_dram_hit_milli_pct(cfg_dram_hit_milli_pct), .cfg_use_cfg_latencies(cfg_use_cfg_latencies),
    .total_reqs(total_reqs), .total_resp(total_resp), .sram_reqs(sram_reqs), .dram_reqs(dram_reqs),
    .stall_cycles(stall_cycles), .busy_cycles(busy_cycles), .busy(base_busy)
);
assign req_ready = base_req_ready;
assign busy = base_busy;

wire [SIZE_WIDTH-1:0] size_for_tokens = base_resp_size;
wire need_tokens = cfg_enable_contention & req_is_dram; // approximate: uses last enqueue type
wire [15:0] req_tokens = (size_for_tokens >> SIZE_TO_TOKENS_SHIFT);
wire [15:0] eff_req_tokens = (req_tokens == 0) ? 16'd1 : req_tokens;

always @(posedge clk or posedge reset) begin
    if (reset) begin
        dram_tokens_level <= 0;
        resp_valid <= 0; resp_size_bytes <= 0;
        dram_token_stall_cycles <= 0; dram_contention_events <= 0;
    end else begin
        // Refill tokens
        if (dram_tokens_level < cfg_token_capacity)
            dram_tokens_level <= (dram_tokens_level + cfg_tokens_per_cycle > cfg_token_capacity) ? cfg_token_capacity : dram_tokens_level + cfg_tokens_per_cycle;
        resp_valid <= 0;
        if (base_resp_valid) begin
            if (!need_tokens) begin
                resp_valid <= 1; resp_size_bytes <= base_resp_size;
            end else begin
                if (dram_tokens_level >= eff_req_tokens) begin
                    dram_tokens_level <= dram_tokens_level - eff_req_tokens;
                    resp_valid <= 1; resp_size_bytes <= base_resp_size;
                end else begin
                    dram_token_stall_cycles <= dram_token_stall_cycles + 1;
                    if (dram_token_stall_cycles[0] == 1'b0) dram_contention_events <= dram_contention_events + 1; // coarse event count
                end
            end
        end
    end
end

endmodule
