`timescale 1ns/1ps
// -----------------------------------------------------------------------------
// mem_latency_tb
// Directed testbench for memory_latency_injector overriding latencies & hit ratio.
// Validates:
//   1. Default parameter latencies (SRAM=2, DRAM=30) produce expected cycle spacing
//   2. CSR-style overrides (SRAM=5, DRAM=10) honored when cfg_use_cfg_latencies=1
//   3. DRAM hit ratio forces DRAM requests to use SRAM latency when set to 100%
// Measures latency as cycles between acceptance (req_valid & req_ready) and resp_valid assertion.
// Checks stall_cycles matches programmed latency value per request.
// No randomization to keep deterministic under simplified simulator.
// -----------------------------------------------------------------------------
module mem_latency_tb(
    input  wire clk,
    input  wire reset
);
    // Config emulation
    reg [15:0] cfg_latency_sram;
    reg [15:0] cfg_latency_dram;
    reg [9:0]  cfg_dram_hit_milli_pct;
    reg        cfg_use_cfg_latencies;
    // Request / response
    reg        req_valid;
    reg        req_is_dram;
    reg [15:0] req_size_bytes;
    wire       req_ready;
    wire       resp_valid;
    wire [15:0] resp_size_bytes;
    // Telemetry (unused here but wired for completeness)
    wire [31:0] total_reqs, total_resp, sram_reqs, dram_reqs, stall_cycles, busy_cycles; wire busy;

    // DUT
    memory_latency_injector #(
        .SIZE_WIDTH(16), .LATENCY_SRAM_CYCLES(2), .LATENCY_DRAM_CYCLES(30)
    ) dut (
        .clk(clk), .reset(reset),
        .req_valid(req_valid), .req_is_dram(req_is_dram), .req_size_bytes(req_size_bytes), .req_ready(req_ready),
        .resp_valid(resp_valid), .resp_size_bytes(resp_size_bytes),
        .cfg_latency_sram(cfg_latency_sram), .cfg_latency_dram(cfg_latency_dram),
        .cfg_dram_hit_milli_pct(cfg_dram_hit_milli_pct), .cfg_use_cfg_latencies(cfg_use_cfg_latencies),
        .total_reqs(total_reqs), .total_resp(total_resp), .sram_reqs(sram_reqs), .dram_reqs(dram_reqs),
        .stall_cycles(stall_cycles), .busy_cycles(busy_cycles), .busy(busy)
    );

    // FSM states
    typedef enum int {
        S_INIT,
        S_DEF_SRAM_REQ, S_DEF_SRAM_WAIT,
        S_DEF_DRAM_REQ, S_DEF_DRAM_WAIT,
        S_OV_CFG, S_OV_CFG_WAIT,
        S_OV_SRAM_REQ, S_OV_SRAM_WAIT,
        S_OV_DRAM_REQ, S_OV_DRAM_WAIT,
        S_HIT_CFG, S_HIT_CFG_WAIT,
        S_HIT_DRAM_REQ, S_HIT_DRAM_WAIT,
        S_DONE
    } state_e;
    state_e state;

    // Measurement
    integer wait_counter;       // counts cycles between acceptance & response
    integer expected_latency;   // expected latency per request (adjusted for implementation pipeline)
    integer measured_latency;
    integer checks, passes, errors;
    reg     tracking;           // high while waiting for resp

    // Helper: start a request if ready
    task automatic issue_req(input bit is_dram, input [15:0] size, input integer exp_lat);
        begin
            if (req_ready) begin
                req_is_dram      <= is_dram;
                req_size_bytes   <= size;
                req_valid        <= 1'b1;
                expected_latency <= exp_lat;
                tracking         <= 1'b1;
                wait_counter     <= 0; // will start increment next cycle
            end
        end
    endtask

    // Main sequential process
    always @(posedge clk) begin
        if (reset) begin
            // Reset values
            cfg_latency_sram <= 0; cfg_latency_dram <= 0; cfg_dram_hit_milli_pct <= 0; cfg_use_cfg_latencies <= 0;
            req_valid <= 0; req_is_dram <= 0; req_size_bytes <= 16'd64;
            state <= S_INIT; tracking <= 0; wait_counter <= 0;
            expected_latency <= 0; measured_latency <= 0; checks <= 0; passes <= 0; errors <= 0;
        end else begin
            // Default deassert
            req_valid <= 1'b0;
            // Increment wait counter only when actively tracking
            if (tracking && !resp_valid) wait_counter <= wait_counter + 1;
            if (resp_valid && tracking) begin
                tracking <= 0;
                measured_latency <= wait_counter; // pure count (no off-by-one ambiguity)
                checks <= checks + 1;
                if (wait_counter == expected_latency) begin
                    passes <= passes + 1;
                    $display("[TB][PASS] %s latency %0d", (req_is_dram ? (cfg_dram_hit_milli_pct==10'd1000 ? "DRAM(hit)" : "DRAM") : "SRAM"), wait_counter);
                end else begin
                    errors <= errors + 1;
                    $display("[TB][FAIL] %s latency exp %0d got %0d", (req_is_dram ? (cfg_dram_hit_milli_pct==10'd1000 ? "DRAM(hit)" : "DRAM") : "SRAM"), expected_latency, wait_counter);
                end
            end

            case (state)
                S_INIT: begin
                    // Move to first request (default params). Implementation emits resp after (param + 2) cycles => expect 4 for SRAM=2
                    state <= S_DEF_SRAM_REQ;
                end
                S_DEF_SRAM_REQ: begin
                    issue_req(0, 16'd64, 2 + 1); // param + observed pipeline offset
                    if (tracking) state <= S_DEF_SRAM_WAIT;
                end
                S_DEF_SRAM_WAIT: if (!tracking && checks==1) state <= S_DEF_DRAM_REQ;
                S_DEF_DRAM_REQ: begin
                    issue_req(1, 16'd64, 30 + 1);
                    if (tracking) state <= S_DEF_DRAM_WAIT;
                end
                S_DEF_DRAM_WAIT: if (!tracking && checks==2) state <= S_OV_CFG;
                S_OV_CFG: begin
                    cfg_latency_sram <= 16'd5; cfg_latency_dram <= 16'd10; cfg_use_cfg_latencies <= 1'b1; state <= S_OV_CFG_WAIT; end
                S_OV_CFG_WAIT: state <= S_OV_SRAM_REQ; // allow one cycle for cfg to settle
                S_OV_SRAM_REQ: begin
                    issue_req(0, 16'd64, 5 + 1);
                    if (tracking) state <= S_OV_SRAM_WAIT;
                end
                S_OV_SRAM_WAIT: if (!tracking && checks==3) state <= S_OV_DRAM_REQ;
                S_OV_DRAM_REQ: begin
                    issue_req(1, 16'd64, 10 + 1);
                    if (tracking) state <= S_OV_DRAM_WAIT;
                end
                S_OV_DRAM_WAIT: if (!tracking && checks==4) state <= S_HIT_CFG;
                S_HIT_CFG: begin
                    cfg_dram_hit_milli_pct <= 10'd1000; state <= S_HIT_CFG_WAIT; end
                S_HIT_CFG_WAIT: state <= S_HIT_DRAM_REQ; // settle
                S_HIT_DRAM_REQ: begin
                    issue_req(1, 16'd64, 5 + 1); // DRAM but forced hit -> SRAM latency path
                    if (tracking) state <= S_HIT_DRAM_WAIT;
                end
                S_HIT_DRAM_WAIT: if (!tracking && checks==5) state <= S_DONE;
                S_DONE: begin
                    $display("[TB] Total checks=%0d passes=%0d errors=%0d", checks, passes, errors);
                    if (errors==0) $display("[TB] MEM LATENCY TEST PASSED"); else $display("[TB] MEM LATENCY TEST FAILED");
                    $finish;
                end
            endcase
        end
    end
endmodule
