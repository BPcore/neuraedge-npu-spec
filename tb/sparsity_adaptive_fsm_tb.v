`timescale 1ns/1ps
module sparsity_adaptive_fsm_tb;
    reg clk=0, reset=1;
    reg sample_valid; reg [15:0] nonzero_count, total_count;
    reg manual_override_mode; reg [1:0] manual_mode_select;
    reg [9:0] thresh_2to4=700, thresh_1to4=400, thresh_1to8=150, hyst_milli=50; // example thresholds
    reg [7:0] min_hold_windows=2;
    wire [1:0] current_mode; wire mode_change_pulse; wire [15:0] last_density_milli; wire window_complete; wire [15:0] change_count; wire [15:0] mode_eff_milli;
    wire [15:0] util_milli_pct = 16'd800; // emulate 80% util weighting
    // Expected mode constants
    localparam MODE_DENSE = 2'd0;
    localparam MODE_2TO4  = 2'd1;
    localparam MODE_1TO4  = 2'd2;
    localparam MODE_1TO8  = 2'd3;

    sparsity_adaptive_fsm #(.WINDOW_SIZE(8)) dut(
        .clk(clk), .reset(reset), .sample_valid(sample_valid), .nonzero_count(nonzero_count), .total_count(total_count),
        .manual_override_mode(manual_override_mode), .manual_mode_select(manual_mode_select),
        .thresh_2to4(thresh_2to4), .thresh_1to4(thresh_1to4), .thresh_1to8(thresh_1to8), .hyst_milli(hyst_milli), .min_hold_windows(min_hold_windows),
        .util_milli_pct(util_milli_pct),
        .current_mode(current_mode), .mode_change_pulse(mode_change_pulse), .last_density_milli(last_density_milli), .window_complete(window_complete), .change_count(change_count), .mode_eff_milli(mode_eff_milli)
    );

    always #5 clk = ~clk;

    task send_sample(input int nz, input int tot); begin
        sample_valid=1; nonzero_count=nz; total_count=tot; @(posedge clk); sample_valid=0; @(posedge clk);
    end endtask
    integer watchdog=0;
    reg seen_window_complete;
    always @(posedge clk) begin
        if (reset) begin
            seen_window_complete <= 0;
        end else if (window_complete) begin
            seen_window_complete <= 1;
        end
    end
    task begin_window; begin seen_window_complete=0; end endtask
    task wait_window; begin wait(seen_window_complete); @(posedge clk); end endtask

    initial begin
        $display("[TB] Starting sparsity adaptive FSM test");
        sample_valid=0; nonzero_count=0; total_count=0; manual_override_mode=0; manual_mode_select=0;
        repeat(3) @(posedge clk); reset=0;
    // Dense window (~800/1000 milli)
    begin_window();
        repeat(8) begin send_sample(80,100); `ifdef SPARSITY_FSM_DEBUG $display("[TB_DBG] Dense sample %0d", watchdog+1); `endif watchdog=watchdog+1; if (watchdog>200) $fatal("[TB] Global timeout"); end
    wait_window();
        $display("[TB] Dense window density=%0d mode=%0d", last_density_milli, current_mode);
        if (!(last_density_milli > 750 && current_mode==MODE_DENSE)) begin
            $error("Dense window expectations failed: density=%0d mode=%0d", last_density_milli, current_mode);
            $fatal;
        end
        // Sparser window (~300/1000)
        begin_window();
        repeat(8) begin send_sample(30,100); `ifdef SPARSITY_FSM_DEBUG $display("[TB_DBG] Sparse sample %0d", watchdog+1); `endif watchdog=watchdog+1; if (watchdog>400) $fatal("[TB] Global timeout"); end
    wait_window();
        $display("[TB] Sparse window density=%0d mode=%0d", last_density_milli, current_mode);
        if (!(last_density_milli < 400 && current_mode==MODE_1TO4)) begin
            $error("Sparse window expectations failed: density=%0d mode=%0d", last_density_milli, current_mode);
            $fatal;
        end
        // Override mode to 1:4
        manual_override_mode=1; manual_mode_select=2'd2; @(posedge clk);
        begin_window();
        repeat(8) begin send_sample(50,100); `ifdef SPARSITY_FSM_DEBUG $display("[TB_DBG] Override sample %0d", watchdog+1); `endif watchdog=watchdog+1; if (watchdog>600) $fatal("[TB] Global timeout"); end
    wait_window();
        $display("[TB] Override window density=%0d mode=%0d", last_density_milli, current_mode);
        if (!(current_mode==MODE_1TO4)) begin
            $error("Override expectations failed: mode=%0d", current_mode); $fatal; end
        $display("Changes=%0d", change_count);
        $finish;
    end
endmodule
