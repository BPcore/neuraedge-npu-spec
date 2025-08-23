`timescale 1ns/1ps
// mem_latency_var_tb: exercises memory_latency_injector with latency variability enabled
// Collects latency histogram and reports min/max/avg for sanity. Intended for CI (fast, <1k cycles)
module mem_latency_var_tb;
  // Parameters for this test
  localparam BASE_SRAM_LAT = 5;          // base fixed latency
  localparam BASE_DRAM_LAT = 12;         // unused (we only issue SRAM requests here)
  localparam EXTRA_MAX     = 8;          // additional variable latency range 0..EXTRA_MAX
  localparam N_REQS        = 120;        // number of requests to issue
  localparam HIST_DEPTH    = BASE_SRAM_LAT + EXTRA_MAX + 4; // margin

  reg clk=0; always #1 clk=~clk;  // 500MHz TB clock (arbitrary faster to finish sooner)
  reg reset=1; initial begin #4 reset=0; end

  // DUT interface
  reg  req_valid=0; wire req_ready; wire resp_valid; wire [15:0] resp_size_bytes; reg req_is_dram=0; // always SRAM
  wire busy;

  // Track issue cycle per request (single outstanding so simple register)
  integer issue_cycle;
  integer cycle=0;
  integer resp_count=0;
  integer total_latency=0;
  integer min_lat=9999;
  integer max_lat=-1;
  integer hist [0:HIST_DEPTH-1];
  integer i;

  // Instantiate injector with variability (uniform distribution mode=1)
  memory_latency_injector #(
    .SIZE_WIDTH(16),
    .LATENCY_SRAM_CYCLES(BASE_SRAM_LAT),
    .LATENCY_DRAM_CYCLES(BASE_DRAM_LAT),
    .QUEUE_DEPTH(1),
    .EXTRA_LATENCY_MAX(EXTRA_MAX),
    .LATENCY_DIST_MODE(1)  // 1 = uniform
  ) dut (
    .clk(clk), .reset(reset),
    .req_valid(req_valid), .req_is_dram(req_is_dram), .req_size_bytes(16'd16), .req_ready(req_ready),
    .resp_valid(resp_valid), .resp_size_bytes(resp_size_bytes),
    .cfg_latency_sram(16'd0), .cfg_latency_dram(16'd0), .cfg_dram_hit_milli_pct(10'd0), .cfg_use_cfg_latencies(1'b0),
    .total_reqs(), .total_resp(), .sram_reqs(), .dram_reqs(), .stall_cycles(), .busy_cycles(), .busy(busy)
  );

  // Cycle counter
  always @(posedge clk) begin
    if (reset) cycle <= 0; else cycle <= cycle + 1;
  end

  // Stimulus / measurement
  typedef enum integer {IDLE, WAIT_RESP} state_t; state_t state;
  initial begin
    for (i=0;i<HIST_DEPTH;i=i+1) hist[i]=0;
    state = IDLE;
    @(negedge reset);
    while (resp_count < N_REQS) begin
      @(posedge clk);
      case (state)
        IDLE: begin
          if (req_ready) begin
            req_valid = 1'b1; // blocking in initial block
            issue_cycle = cycle;
            state = WAIT_RESP;
          end else begin
            req_valid = 1'b0;
          end
        end
        WAIT_RESP: begin
          req_valid = 1'b0; // single issue
          if (resp_valid) begin
            integer lat; lat = cycle - issue_cycle; // cycles between issue and resp
            if (lat < min_lat) min_lat = lat;
            if (lat > max_lat) max_lat = lat;
            if (lat < HIST_DEPTH) hist[lat] = hist[lat] + 1;
            total_latency = total_latency + lat;
            resp_count = resp_count + 1;
            state = IDLE; // next request
          end
        end
      endcase
    end
    // Print histogram
    $display("[VARLAT][SUMMARY] N=%0d base=%0d extra_max=%0d min=%0d max=%0d avg=%.2f", resp_count, BASE_SRAM_LAT, EXTRA_MAX, min_lat, max_lat, (1.0*total_latency)/resp_count);
    for (i=0;i<HIST_DEPTH;i=i+1) begin
      if (hist[i]!=0) $display("[VARLAT][HIST] latency=%0d count=%0d", i, hist[i]);
    end
    // Sanity checks
    if (min_lat < BASE_SRAM_LAT) $display("[VARLAT][WARN] min latency below base");
  // Expected observed latency range: base + 1 pipeline (head consumption) .. base + 1 + EXTRA_MAX
  if (max_lat > BASE_SRAM_LAT + EXTRA_MAX + 1 + 1) $display("[VARLAT][WARN] max latency above expected bound");
    $finish;
  end
endmodule
