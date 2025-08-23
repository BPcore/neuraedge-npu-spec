`timescale 1ns/1ps

module tile_metrics_tb;
  reg clk=0, reset=1;
  // Control inputs
  reg [7:0] power_mode=0;
  reg [15:0] power_budget_mw=16'd5000; // arbitrary
  reg [7:0] temperature=8'd50;
  reg [15:0] performance_target=16'd40000; // matches internal efficiency scale
  reg sparsity_enable=0;
  reg [1:0] sparsity_mode=2'b00;
  reg [1:0] precision_mode=2'b00; // INT8
  reg [3:0] lane_active_mask = 4'hF; // all lanes active initially
  // CSR tie-offs (not driving in this simple TB)
  reg csr_valid=0, csr_write=0; reg [7:0] csr_addr=0; reg [31:0] csr_wdata=0;
  wire [31:0] csr_rdata; wire csr_ready;
  reg [127:0] data_in=0; // DATA_WIDTH*16 (8*16)
  reg data_valid=0;
  reg [15:0] data_pattern=0;

  // NoC inputs (tie off)
  reg [63:0] noc_flit_in_n=0, noc_flit_in_s=0, noc_flit_in_e=0, noc_flit_in_w=0, noc_flit_in_local=0;
  reg noc_valid_in_n=0, noc_valid_in_s=0, noc_valid_in_e=0, noc_valid_in_w=0, noc_valid_in_local=0;

  wire [63:0] noc_flit_out_n, noc_flit_out_s, noc_flit_out_e, noc_flit_out_w, noc_flit_out_local;
  wire noc_valid_out_n, noc_valid_out_s, noc_valid_out_e, noc_valid_out_w, noc_valid_out_local;

  wire [31:0] ops_per_second;
  wire [31:0] phys_ops_per_second;
  wire [31:0] eff_ops_per_second;
  wire [31:0] skipped_phys_ops_per_second;
  wire [3:0] efficiency_grade; // match power manager width
  wire [15:0] power_consumption_mw;
  wire [15:0] efficiency_tops_w;
  wire [15:0] active_pe_count;
  wire [15:0] sparsity_ratio;
  wire tile_ready;
  wire [31:0] debug_status;

  // DUT
  // Instantiate with 4 MAC lanes per PE
  neuraedge_tile_50tops #(.MAC_LANES(4)) dut(
    .clk(clk), .reset(reset),
    .power_mode(power_mode), .power_budget_mw(power_budget_mw), .temperature(temperature), .performance_target(performance_target),
  .sparsity_enable(sparsity_enable), .sparsity_mode(sparsity_mode), .precision_mode(precision_mode), .lane_active_mask(lane_active_mask),
  .csr_valid(csr_valid), .csr_write(csr_write), .csr_addr(csr_addr), .csr_wdata(csr_wdata), .csr_rdata(csr_rdata), .csr_ready(csr_ready),
    .data_in(data_in), .data_valid(data_valid), .data_pattern(data_pattern),
    .noc_flit_in_n(noc_flit_in_n), .noc_flit_in_s(noc_flit_in_s), .noc_flit_in_e(noc_flit_in_e), .noc_flit_in_w(noc_flit_in_w), .noc_flit_in_local(noc_flit_in_local),
    .noc_valid_in_n(noc_valid_in_n), .noc_valid_in_s(noc_valid_in_s), .noc_valid_in_e(noc_valid_in_e), .noc_valid_in_w(noc_valid_in_w), .noc_valid_in_local(noc_valid_in_local),
    .noc_flit_out_n(noc_flit_out_n), .noc_flit_out_s(noc_flit_out_s), .noc_flit_out_e(noc_flit_out_e), .noc_flit_out_w(noc_flit_out_w), .noc_flit_out_local(noc_flit_out_local),
    .noc_valid_out_n(noc_valid_out_n), .noc_valid_out_s(noc_valid_out_s), .noc_valid_out_e(noc_valid_out_e), .noc_valid_out_w(noc_valid_out_w), .noc_valid_out_local(noc_valid_out_local),
  .ops_per_second(ops_per_second), .phys_ops_per_second(phys_ops_per_second), .eff_ops_per_second(eff_ops_per_second), .skipped_phys_ops_per_second(skipped_phys_ops_per_second), .power_consumption_mw(power_consumption_mw), .efficiency_tops_w(efficiency_tops_w), .efficiency_grade(efficiency_grade), .active_pe_count(active_pe_count), .sparsity_ratio(sparsity_ratio),
    .tile_ready(tile_ready), .debug_status(debug_status)
  );

  // Clock
  always #5 clk = ~clk; // 100MHz sim clock (arbitrary)

  integer cycle;
  initial begin
    $dumpfile("build/reports/tile_metrics_tb.vcd");
    $dumpvars(0, tile_metrics_tb);
    #50; reset = 0; // release reset

    // Precision sweep: 0=INT8 (1x), 1=INT4 (2x packed), 2=INT2 (4x), 3=INT1 (8x)
    for (cycle = 0; cycle < 512; cycle = cycle + 1) begin
      data_valid = 1;
      data_in = {16{8'h3F}}; // non-zero
      // Toggle sparsity every 32 cycles to create idle PEs
      sparsity_enable = (cycle[5:0] < 6'd16) ? 1'b1 : 1'b0;
      // Change precision every 128 cycles
      case (cycle[8:7])
        2'b00: precision_mode = 2'b00; // INT8
        2'b01: precision_mode = 2'b01; // INT4
        2'b10: precision_mode = 2'b10; // INT2
        2'b11: precision_mode = 2'b11; // INT1
      endcase
      // Dynamically gate half the lanes every other 64-cycle window
      if (cycle[6]) lane_active_mask = 4'b0011; else lane_active_mask = 4'b1111;
      #10;
    end

    data_valid = 0;
    #500;

  $display("Final Metrics: active_pe_count=%0d power_mw=%0d milli_tops=%0d milli_tops_per_w=%0d grade=%0d phys_ops=%0d eff_ops=%0d skipped_phys_ops=%0d lane_mask=%b", active_pe_count, power_consumption_mw, dut.power_mgr.current_tops, efficiency_tops_w, efficiency_grade, phys_ops_per_second, eff_ops_per_second, skipped_phys_ops_per_second, lane_active_mask);
    $finish;
  end
endmodule
