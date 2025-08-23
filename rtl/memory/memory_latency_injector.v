`timescale 1ns/1ps
// -----------------------------------------------------------------------------
// memory_latency_injector
// Configurable latency & stall injection model for SRAM / DRAM like accesses.
// Purpose:
//   * Provide deterministic cycle delays for read requests (separate SRAM/DRAM)
//   * Generate stall indicators to drive tile stall counters (dma + mask style)
//   * Support simple reuse (cache) hit ratio modeling via programmable hit rate.
// Interface (minimal, ready/valid):
//   request_valid + request_type (0=SRAM,1=DRAM) + size_bytes
//   response_valid after latency cycles
// Latency parameters are cycle counts; can be overridden at runtime via config bus.
// NOTE: This is a lightweight behavioral model meant for performance estimation, not cycle-accurate DRAM protocol.
// -----------------------------------------------------------------------------
module memory_latency_injector #(
    parameter SIZE_WIDTH = 16,
    parameter LATENCY_SRAM_CYCLES = 2,
    parameter LATENCY_DRAM_CYCLES = 30,
    parameter PIPELINE_RESP = 1,
    // New refinement: allow simple multi-outstanding requests (queue) & latency variability
    parameter QUEUE_DEPTH = 1,                 // >1 enables simple FIFO of pending requests
    parameter EXTRA_LATENCY_MAX = 0,           // Max additional latency cycles (0 = fixed)
    parameter LATENCY_DIST_MODE = 0            // 0=fixed,1=uniform[0..EXTRA],2=triangle average
) (
    input  wire clk,
    input  wire reset,

    // Request channel
    input  wire        req_valid,
    input  wire        req_is_dram, // 0=SRAM, 1=DRAM
    input  wire [SIZE_WIDTH-1:0] req_size_bytes,
    output wire        req_ready,

    // Response channel
    output reg         resp_valid,
    output reg  [SIZE_WIDTH-1:0] resp_size_bytes,

    // Config (runtime adjustable latencies & hit rate)
    input  wire [15:0] cfg_latency_sram,
    input  wire [15:0] cfg_latency_dram,
    input  wire [9:0]  cfg_dram_hit_milli_pct, // 0-1000 => probability DRAM request is actually SRAM (cache) hit
    input  wire        cfg_use_cfg_latencies,

    // Telemetry outputs
    output reg  [31:0] total_reqs,
    output reg  [31:0] total_resp,
    output reg  [31:0] sram_reqs,
    output reg  [31:0] dram_reqs,
    output reg  [31:0] stall_cycles, // cycles where a request was pending
    output reg  [31:0] busy_cycles,

    // Status
    output wire        busy
);

// Internal request storage (single or multi outstanding depending on QUEUE_DEPTH)
localparam QDEP = (QUEUE_DEPTH < 1) ? 1 : QUEUE_DEPTH;
localparam QIDX_BITS = (QDEP <= 1) ? 1 : $clog2(QDEP);

reg [QIDX_BITS-1:0] q_head;
reg [QIDX_BITS-1:0] q_tail;
reg [QIDX_BITS:0]   q_count; // one extra bit
reg                 q_is_dram   [0:QDEP-1];
reg [SIZE_WIDTH-1:0]q_size      [0:QDEP-1];
reg [15:0]          q_latency   [0:QDEP-1]; // remaining cycles

wire [15:0] active_lat_sram = cfg_use_cfg_latencies ? cfg_latency_sram : LATENCY_SRAM_CYCLES[15:0];
wire [15:0] active_lat_dram = cfg_use_cfg_latencies ? cfg_latency_dram : LATENCY_DRAM_CYCLES[15:0];

assign req_ready = (q_count < QDEP); // can accept while space available
assign busy = (q_count != 0);

// Random-like hit decision (LFSR) -------------------------------------------------------
// Widened LFSR to 16 bits to avoid width expansion warnings on arithmetic (mod/shifts)
reg [15:0] lfsr;
always @(posedge clk or posedge reset) begin
    if (reset) lfsr <= 16'h5A5A; else lfsr <= {lfsr[14:0], lfsr[15]^lfsr[13]^lfsr[12]^lfsr[10]}; // taps 16,14,13,11
end
wire cache_hit = (lfsr % 16'd1000) < {6'b0, cfg_dram_hit_milli_pct};

// Main state machine --------------------------------------------------------------------
integer qi;
// Temp variables for latency computation
reg [15:0] base_lat;
reg [15:0] extra_lat;
reg [15:0] final_lat;
always @(posedge clk or posedge reset) begin
    if (reset) begin
        q_head <= 0; q_tail <= 0; q_count <= 0;
        resp_valid <= 0; resp_size_bytes <= 0;
        total_reqs <= 0; total_resp <= 0; sram_reqs <= 0; dram_reqs <= 0;
        stall_cycles <= 0; busy_cycles <= 0;
        for (qi=0; qi<QDEP; qi=qi+1) begin
            q_is_dram[qi] <= 0; q_size[qi] <= 0; q_latency[qi] <= 0;
        end
    end else begin
        resp_valid <= 0; // default
        if (busy) begin
            busy_cycles <= busy_cycles + 1;
            // Only count stall while latency > 0 (preserves original single-request semantics)
            if (q_latency[q_head] != 0) begin
                stall_cycles <= stall_cycles + 1;
                q_latency[q_head] <= q_latency[q_head] - 1;
            end else begin
                // Completion when latency already zero
                resp_valid <= 1;
                resp_size_bytes <= q_size[q_head];
                total_resp <= total_resp + 1;
                // Pop head
                q_head <= (q_head + 1'b1) % QDEP;
                if (q_count != 0) q_count <= q_count - 1'b1; // guard
            end
        end
        // Accept new request if provided
        if (req_valid && req_ready) begin
            total_reqs <= total_reqs + 1;
            // Compute base latency
            if (req_is_dram) begin
                dram_reqs <= dram_reqs + 1;
                base_lat = cache_hit ? active_lat_sram : active_lat_dram;
            end else begin
                sram_reqs <= sram_reqs + 1;
                base_lat = active_lat_sram;
            end
            // Latency variability
            if (EXTRA_LATENCY_MAX == 0) begin
                extra_lat = 0;
            end else begin
                case (LATENCY_DIST_MODE)
                    2: begin // triangle (average of two uniforms)
                        extra_lat = (((lfsr % (EXTRA_LATENCY_MAX+1)) + ((lfsr>>4) % (EXTRA_LATENCY_MAX+1))) >> 1);
                    end
                    1: begin // uniform
                        extra_lat = (lfsr % (EXTRA_LATENCY_MAX+1));
                    end
                    default: extra_lat = 0; // fixed (ignore EXTRA)
                endcase
            end
            final_lat = base_lat + extra_lat;
            // Enqueue
            q_is_dram[q_tail] <= req_is_dram;
            q_size[q_tail] <= req_size_bytes;
            q_latency[q_tail] <= final_lat;
            q_tail <= (q_tail + 1'b1) % QDEP;
            q_count <= q_count + 1'b1;
        end
    end
end

// Assertions placeholder (could add latency distribution checks)
// synopsys translate_off
always @(posedge clk) if (!reset && resp_valid) begin end
// synopsys translate_on

endmodule
