// File: tb/multicast_coverage_tb.v
// Collect basic multicast coverage stats (packets, fanout>=2) for router_cell with ENABLE_MCAST.
`timescale 1ns/1ps
module multicast_coverage_tb;
  localparam FLIT_W=64; localparam FIFO_DEPTH=4;
  logic clk=0,rst_n=0; always #5 clk=~clk;
  // Single router cell under test
  logic [FLIT_W*5-1:0] flit_in_flat; logic [4:0] valid_in_flat; wire [4:0] ready_out_flat;
  wire [FLIT_W*5-1:0] flit_out_flat; wire [4:0] valid_out_flat; logic [4:0] ready_in_flat;
  logic [FLIT_W-1:0] ext_flit_in; logic ext_valid_in; wire ext_ready_out; wire [FLIT_W-1:0] ext_flit_out; wire ext_valid_out; logic ext_ready_in;

  router_cell #(.FLIT_W(FLIT_W), .FIFO_DEPTH(FIFO_DEPTH), .ENABLE_MCAST(1)) dut (
    .clk, .rst_n,
    .flit_in_flat, .valid_in_flat, .ready_out_flat,
    .flit_out_flat, .valid_out_flat, .ready_in_flat,
    .ext_flit_in, .ext_valid_in, .ext_ready_out,
    .ext_flit_out, .ext_valid_out, .ext_ready_in
  );

  // Counters
  integer mcast_packets; integer mcast_fanout_ge2;
  integer fanout_hist1; integer fanout_hist2; integer fanout_hist3; integer fanout_hist4; integer fanout_hist5;
  integer cycle; integer fanout;
  localparam int MCAST_FLAG_BIT=31; localparam int MCAST_MASK_LSB=26;

  // Track outputs per injected multicast flit (simple: single input stream)
  // When local input accepted (ext_valid & ready) sample flit; later count fanout when outputs fire.
  reg pending_mcast; reg [4:0] pending_mask; reg accounted;

  initial begin
    flit_in_flat='0; valid_in_flat='0; ready_in_flat=5'b11111; ext_ready_in=1'b1; ext_valid_in=0; ext_flit_in='0;
  mcast_packets=0; mcast_fanout_ge2=0; pending_mcast=0; accounted=0; pending_mask=0;
  fanout_hist1=0; fanout_hist2=0; fanout_hist3=0; fanout_hist4=0; fanout_hist5=0;
    repeat(4) @(posedge clk); rst_n=1; @(posedge clk);
    // Generate a sequence of 10 flits: alternate unicast (flag=0) and multicast (flag=1) with varying masks
    integer i; for (i=0;i<10;i=i+1) begin
      @(posedge clk);
      ext_flit_in='0;
      if (i%2==1) begin // multicast
        reg [4:0] mask;
        case (i)
          1: mask=5'b01010; // E+W
          3: mask=5'b00101; // S+N
          5: mask=5'b10010; // N+E
          7: mask=5'b11100; // N+E+S
          9: mask=5'b01001; // E+L
          default: mask=5'b01010;
        endcase
        ext_flit_in = {32'b0,1'b1,mask,26'b0};
      end else begin // unicast: leave flag 0; dest row/col zeros
        ext_flit_in = 64'b0;
      end
      ext_valid_in=1'b1;
      // Wait one cycle injection
      @(posedge clk); ext_valid_in=0;
    end
    // Drain a few cycles
    repeat(20) @(posedge clk);
    integer fd=$fopen("build/multicast_coverage_tb.json","w");
    if (fd) begin
      $fdisplay(fd,"{ \"multicast\": { \"packets\": %0d, \"fanout_ge2\": %0d, \"fanout_hist\": [ %0d, %0d, %0d, %0d, %0d ] } }", mcast_packets, mcast_fanout_ge2, fanout_hist1, fanout_hist2, fanout_hist3, fanout_hist4, fanout_hist5);
      $fclose(fd);
      $display("[MCOV] Wrote build/multicast_coverage_tb.json packets=%0d fanout_ge2=%0d f1=%0d f2=%0d f3=%0d f4=%0d f5=%0d", mcast_packets, mcast_fanout_ge2, fanout_hist1, fanout_hist2, fanout_hist3, fanout_hist4, fanout_hist5);
    end else $display("[MCOV][WARN] Failed to open JSON output");
    if (mcast_packets==0) $fatal(1,"Expected multicast packets>0");
    $finish;
  end

  // Observe outputs to count fanout occurrences; simple heuristic: when both E and W valid in same cycle etc.
  always @(posedge clk) begin
    if (!rst_n) begin
      pending_mcast<=0; accounted<=0; pending_mask<=0;
    end else begin
      // Detect acceptance (ext_valid_in & ready_out_flat local port index 4)
      if (ext_valid_in && ext_ready_out) begin
        pending_mcast <= ext_flit_in[MCAST_FLAG_BIT];
        pending_mask  <= ext_flit_in[MCAST_MASK_LSB +: 5];
        accounted     <= 0;
      end
      if (pending_mcast && !accounted) begin
        // Count fanout once outputs for all asserted mask bits fire in same cycle
        fanout = 0;
        integer p; for (p=0;p<5;p=p+1) if (pending_mask[p] && valid_out_flat[p]) fanout=fanout+1;
        // If all masked outputs fired this cycle -> book it
        integer total_bits; total_bits = 0; integer q; for (q=0;q<5;q=q+1) if (pending_mask[q]) total_bits++;
        if (fanout==total_bits && total_bits>0) begin
          mcast_packets = mcast_packets + 1;
          case (total_bits)
            1: fanout_hist1 = fanout_hist1 + 1;
            2: fanout_hist2 = fanout_hist2 + 1;
            3: fanout_hist3 = fanout_hist3 + 1;
            4: fanout_hist4 = fanout_hist4 + 1;
            5: fanout_hist5 = fanout_hist5 + 1;
          endcase
          if (total_bits>=2) mcast_fanout_ge2 = mcast_fanout_ge2 + 1;
          accounted <= 1; pending_mcast<=0;
        end
      end
    end
  end
endmodule
