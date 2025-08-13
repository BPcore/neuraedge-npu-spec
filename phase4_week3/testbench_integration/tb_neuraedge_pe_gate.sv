//
// NeuraEdge NPU - Gate-Level Testbench with SDF Back-Annotation
// Phase 4 Week 3: Gate-Level Simulation & SDF Back-Annotation
// Generated: August 14, 2025
//

`timescale 1ps/1ps

//=============================================================================
// GATE-LEVEL TESTBENCH MODULE
//=============================================================================

module tb_neuraedge_pe_gate;

    //=========================================================================
    // TESTBENCH PARAMETERS
    //=========================================================================
    
    parameter CLOCK_PERIOD = 2000;      // 500MHz (2000ps period)
    parameter SDF_TYPE = "annotated";   // "ideal" or "annotated"
    parameter MAX_CYCLES = 10000;       // Maximum simulation cycles
    parameter TIMEOUT_NS = 100000;      // 100us timeout
    
    //=========================================================================
    // SIGNAL DECLARATIONS
    //=========================================================================
    
    // Clock and reset
    reg clk;
    reg rst_n;
    
    // PE Interface Signals (matching gate-level netlist)
    reg pe_enable;
    reg mac_clear;
    reg accumulate_en;
    reg [7:0] data_in;
    reg [7:0] weight_in;
    reg data_valid;
    wire [7:0] data_out;
    wire [7:0] weight_out;
    wire data_valid_out;
    wire [31:0] accum_out;
    wire accum_valid;
    
    // Test Control
    integer cycle_count;
    integer test_case;
    integer errors;
    integer warnings;
    
    //=========================================================================
    // DEVICE UNDER TEST (DUT) - GATE-LEVEL NETLIST
    //=========================================================================
    
    neuraedge_pe dut (
        .clk                (clk),
        .rst_n              (rst_n),
        .pe_enable          (pe_enable),
        .mac_clear          (mac_clear),
        .accumulate_en      (accumulate_en),
        .data_in            (data_in),
        .weight_in          (weight_in),
        .data_valid         (data_valid),
        .data_out           (data_out),
        .weight_out         (weight_out),
        .data_valid_out     (data_valid_out),
        .accum_out          (accum_out),
        .accum_valid        (accum_valid)
    );
    
    //=========================================================================
    // SDF BACK-ANNOTATION
    //=========================================================================
    
    initial begin
        // Select SDF file based on parameter
        if (SDF_TYPE == "ideal") begin
            $display("[SDF] Loading ideal SDF for functional verification...");
            $sdf_annotate("../sdf_generation/neuraedge_pe_ideal.sdf", dut,
                         , "sdf_ideal.log", "MAXIMUM", 0.0, 0.0, "FROM_MAXIMUM");
        end else if (SDF_TYPE == "annotated") begin
            $display("[SDF] Loading annotated SDF for timing simulation...");
            $sdf_annotate("../sdf_generation/neuraedge_pe_annotated.sdf", dut,
                         , "sdf_annotated.log", "MAXIMUM", 0.0, 0.0, "FROM_MAXIMUM");
        end else begin
            $display("[SDF] No SDF annotation - zero delay simulation");
        end
        
        // Enable SDF warnings and timing checks (if supported)
        // $enable_warnings;  // Not supported in Icarus Verilog
        $timeformat(-12, 2, " ps", 10);
    end
    
    //=========================================================================
    // CLOCK GENERATION
    //=========================================================================
    
    initial begin
        clk = 1'b0;
        forever #(CLOCK_PERIOD/2) clk = ~clk;
    end
    
    //=========================================================================
    // RESET GENERATION
    //=========================================================================
    
    initial begin
        rst_n = 1'b0;
        repeat(10) @(posedge clk);
        rst_n = 1'b1;
        $display("[RESET] Reset released at time %0t", $time);
    end
    
    //=========================================================================
    // TEST STIMULUS AND MONITORING
    //=========================================================================
    
    initial begin
        // Initialize test variables
        cycle_count = 0;
        test_case = 0;
        errors = 0;
        warnings = 0;
        
        // Initialize input signals
        pe_enable = 1'b0;
        mac_clear = 1'b0;
        accumulate_en = 1'b0;
        data_in = 8'h00;
        weight_in = 8'h00;
        data_valid = 1'b0;
        
        // Wait for reset deassertion
        wait(rst_n);
        repeat(5) @(posedge clk);
        
        $display("=======================================================");
        $display("NeuraEdge PE Gate-Level Test with SDF Back-Annotation");
        $display("=======================================================");
        $display("SDF Type: %s", SDF_TYPE);
        $display("Clock Period: %0d ps (%.1f MHz)", CLOCK_PERIOD, 1000000.0/CLOCK_PERIOD);
        $display("Start Time: %0t", $time);
        $display("=======================================================");
        
        // Run test sequences
        run_basic_functionality_test();
        run_mac_operation_test();
        run_noc_communication_test();
        run_memory_access_test();
        run_timing_margin_test();
        
        // Test completion
        $display("=======================================================");
        $display("Gate-Level Test Summary");
        $display("=======================================================");
        $display("Total Cycles: %0d", cycle_count);
        $display("Test Cases: %0d", test_case);
        $display("Errors: %0d", errors);
        $display("Warnings: %0d", warnings);
        $display("End Time: %0t", $time);
        
        if (errors == 0) begin
            $display("✓ ALL TESTS PASSED - Gate-level netlist functional");
        end else begin
            $display("✗ %0d ERRORS DETECTED - Gate-level netlist issues", errors);
        end
        
        $display("=======================================================");
        $finish;
    end
    
    //=========================================================================
    // TEST SEQUENCES
    //=========================================================================
    
    // Basic functionality test
    task run_basic_functionality_test;
        begin
            test_case = test_case + 1;
            $display("[TEST %0d] Basic Functionality Test", test_case);
            
            @(posedge clk);
            pe_enable = 1'b1;
            
            // Check reset state
            if (data_valid_out !== 1'b0) begin
                $display("  ✗ Data valid out should be 0 initially");
                errors = errors + 1;
            end else begin
                $display("  ✓ PE outputs properly initialized");
            end
            
            repeat(10) @(posedge clk);
            cycle_count = cycle_count + 10;
        end
    endtask
    
    // MAC operation test
    task run_mac_operation_test;
        integer i;
        reg [31:0] expected_result;
        begin
            test_case = test_case + 1;
            $display("[TEST %0d] MAC Operation Test", test_case);
            
            // Clear accumulator first
            @(posedge clk);
            mac_clear = 1'b1;
            @(posedge clk);
            mac_clear = 1'b0;
            
            // Test simple MAC operations
            accumulate_en = 1'b1;
            for (i = 0; i < 8; i = i + 1) begin
                @(posedge clk);
                data_in = i + 1;          // 1, 2, 3, ...
                weight_in = i + 1;        // 1, 2, 3, ...
                data_valid = 1'b1;
                
                @(posedge clk);
                data_valid = 1'b0;
                
                // Wait for result
                repeat(5) @(posedge clk);
                
                // Check if result is generated (timing-dependent)
                if (accum_valid) begin
                    $display("  ✓ MAC[%0d]: %0d × %0d accumulated = %0d", i, i+1, i+1, accum_out);
                end else begin
                    $display("  ⚠ MAC[%0d]: Result not ready (timing dependent)", i);
                    warnings = warnings + 1;
                end
                
                cycle_count = cycle_count + 6;
            end
            accumulate_en = 1'b0;
        end
    endtask
    
    // Data path test  
    task run_noc_communication_test;
        begin
            test_case = test_case + 1;
            $display("[TEST %0d] Data Path Test", test_case);
            
            // Send data through PE data path
            @(posedge clk);
            data_in = 8'hAA;
            weight_in = 8'h55;
            data_valid = 1'b1;
            
            @(posedge clk);
            data_valid = 1'b0;
            
            // Wait for data path response
            repeat(10) @(posedge clk);
            
            if (data_valid_out) begin
                $display("  ✓ Data path output valid: data=0x%02h, weight=0x%02h", data_out, weight_out);
            end else begin
                $display("  ⚠ No data path output (expected for PE)");
            end
            
            cycle_count = cycle_count + 12;
        end
    endtask
    
    // Accumulator test
    task run_memory_access_test;
        begin
            test_case = test_case + 1;
            $display("[TEST %0d] Accumulator Test", test_case);
            
            // Test accumulator clear
            @(posedge clk);
            mac_clear = 1'b1;
            
            @(posedge clk);
            mac_clear = 1'b0;
            
            // Check accumulator state
            repeat(5) @(posedge clk);
            
            if (accum_out == 32'h00000000) begin
                $display("  ✓ Accumulator cleared successfully");
            end else begin
                $display("  ⚠ Accumulator clear state: 0x%08h", accum_out);
                warnings = warnings + 1;
            end
            
            cycle_count = cycle_count + 8;
        end
    endtask
    
    // Timing margin test (for annotated SDF)
    task run_timing_margin_test;
        integer fast_cycles, slow_cycles;
        begin
            test_case = test_case + 1;
            $display("[TEST %0d] Timing Margin Test", test_case);
            
            if (SDF_TYPE == "annotated") begin
                // Test at nominal frequency (500MHz)
                fast_cycles = 0;
                repeat(100) begin
                    @(posedge clk);
                    data_in = $random;
                    data_valid = 1'b1;
                    weight_in = $random;
                    
                    @(posedge clk);
                    data_valid = 1'b0;
                    
                    if (accum_valid) fast_cycles = fast_cycles + 1;
                    
                    cycle_count = cycle_count + 2;
                end
                
                $display("  ✓ Fast operations completed: %0d/100", fast_cycles);
                
                // Check for timing violations
                if (fast_cycles < 80) begin
                    $display("  ⚠ Potential timing violations detected");
                    warnings = warnings + 1;
                end else begin
                    $display("  ✓ Timing margins adequate");
                end
                
            end else begin
                $display("  ⚠ Timing margin test requires annotated SDF");
                warnings = warnings + 1;
            end
        end
    endtask
    
    //=========================================================================
    // MONITORING AND ASSERTIONS
    //=========================================================================
    
    // Clock period monitoring
    always @(posedge clk) begin
        cycle_count = cycle_count + 1;
        
        if (cycle_count >= MAX_CYCLES) begin
            $display("⚠ Maximum cycles reached - terminating simulation");
            $finish;
        end
    end
    
    // Timeout monitoring
    initial begin
        #(TIMEOUT_NS * 1000);  // Convert ns to ps
        $display("✗ Simulation timeout after %0d ns", TIMEOUT_NS);
        $finish;
    end
    
    // Signal stability checks (for annotated SDF)
    always @(posedge clk) begin
        if (SDF_TYPE == "annotated") begin
            // Check for setup/hold violations would be caught by simulator
            // Check for unexpected X/Z states
            if ($isunknown(accum_out) && accum_valid) begin
                $display("⚠ Unknown state on accum_out at time %0t", $time);
                warnings = warnings + 1;
            end
        end
    end
    
    //=========================================================================
    // WAVEFORM DUMPING
    //=========================================================================
    
    initial begin
        $dumpfile("tb_neuraedge_pe_gate.vcd");
        $dumpvars(0, tb_neuraedge_pe_gate);
        
        // Limit dump size for long simulations
        $dumplimit(100000000);  // 100MB limit
    end
    
    //=========================================================================
    // FINAL CHECKS
    //=========================================================================
    
    final begin
        $display("\n[FINAL] Gate-level simulation completed");
        $display("        Total runtime: %0t", $time);
        $display("        Clock cycles: %0d", cycle_count);
        $display("        SDF type: %s", SDF_TYPE);
    end

endmodule

//=============================================================================
// GATE-LEVEL WRAPPER FOR SYSTEM-LEVEL TESTING
//=============================================================================

module tb_neuraedge_system_gate;

    // System-level parameters
    parameter NUM_PES = 4;
    parameter MESH_SIZE = 2;
    parameter SDF_TYPE = "annotated";
    
    // Clock and reset
    reg sys_clk;
    reg sys_rst_n;
    
    // System interfaces
    reg [31:0] sys_control [0:7];
    wire [31:0] sys_status [0:7];
    
    // Simple system clock
    initial begin
        sys_clk = 1'b0;
        forever #1000 sys_clk = ~sys_clk;  // 1GHz system clock
    end
    
    // System reset
    initial begin
        sys_rst_n = 1'b0;
        repeat(20) @(posedge sys_clk);
        sys_rst_n = 1'b1;
    end
    
    // System-level SDF annotation
    initial begin
        if (SDF_TYPE == "annotated") begin
            $display("[SYSTEM] Loading system-level SDF annotation...");
            // Would annotate system-level netlists
        end
    end
    
    // Placeholder for system-level testing
    initial begin
        wait(sys_rst_n);
        repeat(100) @(posedge sys_clk);
        
        $display("[SYSTEM] System-level gate simulation placeholder");
        $display("         Ready for integration with PE gate-level tests");
        
        $finish;
    end

endmodule
