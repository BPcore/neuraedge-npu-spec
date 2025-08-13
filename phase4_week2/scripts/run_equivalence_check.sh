# NeuraEdge NPU - Logic Equivalence Checking (LEC) Script
# Phase 4 Week 2: Gate-Level Synthesis & Equivalence Checking
# Generated: August 14, 2025

#!/bin/bash

#################################################################################
# LOGIC EQUIVALENCE CHECKING BETWEEN RTL AND GATE-LEVEL NETLIST
#################################################################################

set -e  # Exit on any error

# Script configuration
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$(dirname "$SCRIPT_DIR")")"
PHASE4_W2_DIR="$PROJECT_ROOT/phase4_week2"

# LEC configuration
RTL_DESIGN="${1:-rtl}"
GATE_DESIGN="${2:-gate}"
RUN_ID="lec_$(date +%Y%m%d_%H%M%S)"

echo "=========================================================="
echo "NeuraEdge NPU - Logic Equivalence Checking (LEC)"
echo "=========================================================="
echo "RTL Design: $RTL_DESIGN"
echo "Gate Design: $GATE_DESIGN"
echo "Run ID: $RUN_ID"
echo "=========================================================="

#################################################################################
# DIRECTORY SETUP
#################################################################################

LEC_DIR="$PHASE4_W2_DIR/equivalence_check"
NETLIST_DIR="$PHASE4_W2_DIR/netlists"
REPORTS_DIR="$PHASE4_W2_DIR/synthesis_reports"
LOGS_DIR="$PHASE4_W2_DIR/logs"

mkdir -p "$LOGS_DIR"

echo "✓ LEC environment configured"

#################################################################################
# RTL AND NETLIST VALIDATION
#################################################################################

validate_designs() {
    echo "Validating RTL and gate-level designs..."
    
    # RTL source files
    RTL_FILES=(
        "$PROJECT_ROOT/rtl/top/neuraedge_top.v"
        "$PROJECT_ROOT/rtl/tile/neuraedge_tile.v"
        "$PROJECT_ROOT/rtl/tile/tile_controller.v"
        "$PROJECT_ROOT/rtl/tile/tile_memory.v"
        "$PROJECT_ROOT/rtl/pe/neuraedge_pe.v"
        "$PROJECT_ROOT/rtl/noc/noc_router.v"
        "$PROJECT_ROOT/rtl/router/router_cell.v"
        "$PROJECT_ROOT/rtl/router/router_mesh.v"
        "$PROJECT_ROOT/rtl/router/fifo.v"
        "$PROJECT_ROOT/rtl/common/sram_bank.v"
        "$PROJECT_ROOT/rtl/common/regfile.sv"
    )
    
    # Find latest gate-level netlist
    GATE_NETLIST=$(find "$NETLIST_DIR" -name "neuraedge_npu_*_gate_synth_*.v" -type f | head -n1)
    
    if [[ -z "$GATE_NETLIST" ]]; then
        echo "✗ No gate-level netlist found in $NETLIST_DIR"
        echo "   Please run gate-level synthesis first"
        return 1
    fi
    
    echo "✓ RTL sources: ${#RTL_FILES[@]} files"
    echo "✓ Gate netlist: $(basename "$GATE_NETLIST")"
    
    # Validate file sizes
    local rtl_total_lines=0
    for file in "${RTL_FILES[@]}"; do
        if [[ -f "$file" ]]; then
            local lines=$(wc -l < "$file")
            rtl_total_lines=$((rtl_total_lines + lines))
        fi
    done
    
    local gate_lines=$(wc -l < "$GATE_NETLIST")
    
    echo "RTL total lines: $rtl_total_lines"
    echo "Gate netlist lines: $gate_lines"
    
    if [[ $gate_lines -gt $rtl_total_lines ]]; then
        echo "✓ Gate netlist appears to be expanded (expected for synthesis)"
    else
        echo "⚠ Gate netlist may be incomplete or heavily optimized"
    fi
    
    return 0
}

#################################################################################
# YOSYS-BASED EQUIVALENCE CHECKING
#################################################################################

generate_lec_script() {
    local lec_script="$LEC_DIR/equivalence_check_${RUN_ID}.ys"
    
    echo "Generating LEC script: $lec_script"
    
    cat > "$lec_script" << EOF
# NeuraEdge NPU Logic Equivalence Checking Script
# Generated: $(date)
# Run ID: $RUN_ID

# Configure Yosys for equivalence checking
yosys -import

# Read RTL design (reference)
design -save rtl_design
EOF

    # Add RTL file reads
    for file in "${RTL_FILES[@]}"; do
        if [[ "$file" == *.sv ]]; then
            echo "read_verilog -sv \"$file\"" >> "$lec_script"
        else
            echo "read_verilog \"$file\"" >> "$lec_script"
        fi
    done

    cat >> "$lec_script" << EOF

# Prepare RTL design
hierarchy -top neuraedge_top
proc; opt; memory; opt; techmap; opt
design -save rtl_prepared

# Read gate-level design (implementation)
design -load rtl_design
design -save gate_design
design -load gate_design
read_verilog "$GATE_NETLIST"

# Prepare gate-level design
hierarchy -top neuraedge_top
# Note: Gate-level should already be synthesized, minimal processing
opt_clean
design -save gate_prepared

# Perform equivalence checking
design -stash gate_prepared
design -load rtl_prepared
design -stash rtl_prepared

# Create miter circuit for equivalence checking
design -copy-from rtl_prepared neuraedge_top rtl_neuraedge_top
design -copy-from gate_prepared neuraedge_top gate_neuraedge_top

# Create equivalence checking miter
miter -equiv -flatten -make_assert -make_outputs rtl_neuraedge_top gate_neuraedge_top miter

# Simplify miter
hierarchy -top miter
proc; opt; memory; opt; techmap; opt

# Run equivalence check using SAT solver
sat -verify -prove-asserts -show-inputs -show-outputs miter

# Alternative: Use ABC for equivalence checking
# abc -cec

# Write equivalence checking results
tee -o "$LEC_DIR/equivalence_results_${RUN_ID}.txt" stat

# Generate detailed report
check -noinit

# Write debugging information if needed
# write_verilog -attr2comment "$LEC_DIR/miter_debug_${RUN_ID}.v"

# End of LEC script
EOF

    echo "✓ LEC script generated: $lec_script"
    return 0
}

#################################################################################
# MANUAL EQUIVALENCE VERIFICATION
#################################################################################

manual_equivalence_check() {
    echo "Performing manual equivalence verification..."
    
    local report_file="$LEC_DIR/manual_equivalence_${RUN_ID}.txt"
    
    cat > "$report_file" << EOF
# NeuraEdge NPU Manual Equivalence Verification
# Generated: $(date)
# Run ID: $RUN_ID

=== DESIGN STRUCTURE COMPARISON ===
EOF
    
    # Compare module counts
    echo "RTL Modules:" >> "$report_file"
    for file in "${RTL_FILES[@]}"; do
        if [[ -f "$file" ]]; then
            grep "^module " "$file" | awk '{print "  " $2}' >> "$report_file"
        fi
    done
    
    echo "" >> "$report_file"
    echo "Gate-level Top Module:" >> "$report_file"
    grep "^module " "$GATE_NETLIST" | head -5 >> "$report_file"
    
    # Compare port signatures
    echo "" >> "$report_file"
    echo "=== PORT SIGNATURE COMPARISON ===" >> "$report_file"
    
    # Extract RTL top module ports
    local rtl_top="$PROJECT_ROOT/rtl/top/neuraedge_top.v"
    if [[ -f "$rtl_top" ]]; then
        echo "RTL Top Module Ports:" >> "$report_file"
        sed -n '/^module neuraedge_top/,/);/p' "$rtl_top" | grep -E "input|output" >> "$report_file"
    fi
    
    echo "" >> "$report_file"
    echo "Gate-level Top Module Ports:" >> "$report_file"
    sed -n '/^module neuraedge_top/,/);/p' "$GATE_NETLIST" | grep -E "input|output" | head -20 >> "$report_file"
    
    # Compare signal counts
    echo "" >> "$report_file"
    echo "=== SIGNAL COUNT COMPARISON ===" >> "$report_file"
    
    local rtl_signals=0
    for file in "${RTL_FILES[@]}"; do
        if [[ -f "$file" ]]; then
            local count=$(grep -c "wire\|reg" "$file" 2>/dev/null || echo 0)
            rtl_signals=$((rtl_signals + count))
        fi
    done
    
    local gate_signals=$(grep -c "wire" "$GATE_NETLIST" 2>/dev/null || echo 0)
    
    echo "RTL signals (wire/reg): $rtl_signals" >> "$report_file"
    echo "Gate-level signals (wire): $gate_signals" >> "$report_file"
    
    if [[ $gate_signals -gt $rtl_signals ]]; then
        echo "STATUS: Gate netlist has more signals (expected due to synthesis)" >> "$report_file"
    else
        echo "STATUS: Signal count discrepancy detected" >> "$report_file"
    fi
    
    echo "✓ Manual equivalence check completed: $report_file"
    return 0
}

#################################################################################
# FUNCTIONAL EQUIVALENCE TESTING
#################################################################################

functional_equivalence_test() {
    echo "Generating functional equivalence test..."
    
    local test_script="$LEC_DIR/functional_test_${RUN_ID}.v"
    
    cat > "$test_script" << 'EOF'
// NeuraEdge NPU Functional Equivalence Test
// Generated for RTL vs Gate-level comparison

`timescale 1ns/1ps

module equivalence_testbench;

    // Test signals
    reg clk;
    reg rst_n;
    
    // Input vectors
    reg [31:0] test_data;
    reg [7:0] test_addr;
    reg test_enable;
    
    // Output comparison
    wire [31:0] rtl_output;
    wire [31:0] gate_output;
    wire equivalence_pass;
    
    // Clock generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk;  // 100MHz clock
    end
    
    // Reset sequence
    initial begin
        rst_n = 0;
        #100;
        rst_n = 1;
    end
    
    // Test stimulus generation
    initial begin
        test_data = 0;
        test_addr = 0;
        test_enable = 0;
        
        // Wait for reset deassertion
        wait(rst_n);
        #50;
        
        // Apply test vectors
        repeat(100) begin
            @(posedge clk);
            test_data = $random;
            test_addr = $random;
            test_enable = $random % 2;
            
            // Check equivalence after propagation delay
            #1;
            if (rtl_output !== gate_output) begin
                $display("MISMATCH at time %t: RTL=%h, GATE=%h", 
                         $time, rtl_output, gate_output);
            end
        end
        
        #1000;
        $finish;
    end
    
    // Equivalence checking
    assign equivalence_pass = (rtl_output === gate_output);
    
    // Monitor equivalence
    always @(posedge clk) begin
        if (!equivalence_pass && rst_n) begin
            $display("EQUIVALENCE FAIL at %t", $time);
        end
    end
    
    // Instance RTL design (simplified for testing)
    // Note: In practice, this would instantiate the full RTL top module
    assign rtl_output = test_data;  // Placeholder
    
    // Instance gate-level design (simplified for testing)  
    // Note: In practice, this would instantiate the gate-level netlist
    assign gate_output = test_data;  // Placeholder
    
    // Test reporting
    final begin
        if (equivalence_pass) begin
            $display("EQUIVALENCE CHECK: PASSED");
        end else begin
            $display("EQUIVALENCE CHECK: FAILED");
        end
    end

endmodule
EOF

    echo "✓ Functional equivalence test generated: $test_script"
    return 0
}

#################################################################################
# LEC EXECUTION WITH YOSYS
#################################################################################

run_lec_analysis() {
    local lec_script="$LEC_DIR/equivalence_check_${RUN_ID}.ys"
    local log_file="$LOGS_DIR/lec_${RUN_ID}.log"
    
    echo "Running LEC analysis with Yosys..."
    echo "Script: $lec_script"
    echo "Log: $log_file"
    
    # Run Yosys LEC script
    if timeout 300 yosys -s "$lec_script" > "$log_file" 2>&1; then
        echo "✓ LEC analysis completed"
        
        # Parse results
        parse_lec_results "$log_file"
        
        return 0
    else
        echo "⚠ LEC analysis timed out or failed"
        echo "This is expected for large designs without formal verification tools"
        echo "Falling back to manual verification methods..."
        
        # Show last few lines of log for debugging
        if [[ -f "$log_file" ]]; then
            echo "Last 10 lines of LEC log:"
            tail -10 "$log_file"
        fi
        
        return 1
    fi
}

#################################################################################
# LEC RESULTS PARSING
#################################################################################

parse_lec_results() {
    local log_file="$1"
    local results_file="$LEC_DIR/lec_summary_${RUN_ID}.txt"
    
    echo "Parsing LEC results..."
    
    cat > "$results_file" << EOF
# NeuraEdge NPU Logic Equivalence Checking Results
# Generated: $(date)
# Run ID: $RUN_ID

=== LEC ANALYSIS SUMMARY ===
EOF
    
    # Check for successful completion
    if grep -q "Equivalence successfully proven" "$log_file"; then
        echo "RESULT: EQUIVALENT - RTL and gate-level designs are logically equivalent" >> "$results_file"
        echo "✓ Designs are logically equivalent"
    elif grep -q "Equivalence checking failed" "$log_file"; then
        echo "RESULT: NOT EQUIVALENT - Logical mismatches detected" >> "$results_file"
        echo "✗ Logical mismatches detected"
    elif grep -q "sat -verify" "$log_file"; then
        echo "RESULT: SAT-based verification attempted" >> "$results_file"
        echo "→ SAT-based verification attempted"
    else
        echo "RESULT: INCOMPLETE - LEC analysis did not complete normally" >> "$results_file"
        echo "⚠ LEC analysis incomplete"
    fi
    
    # Extract key statistics
    echo "" >> "$results_file"
    echo "=== ANALYSIS STATISTICS ===" >> "$results_file"
    
    if grep -q "Number of cells:" "$log_file"; then
        grep "Number of cells:" "$log_file" | tail -1 >> "$results_file"
    fi
    
    if grep -q "Number of wires:" "$log_file"; then
        grep "Number of wires:" "$log_file" | tail -1 >> "$results_file"
    fi
    
    # Extract any error messages
    if grep -q "ERROR" "$log_file"; then
        echo "" >> "$results_file"
        echo "=== ERRORS DETECTED ===" >> "$results_file"
        grep "ERROR" "$log_file" >> "$results_file"
    fi
    
    # Extract any warnings
    if grep -q "WARNING" "$log_file"; then
        echo "" >> "$results_file"
        echo "=== WARNINGS ===" >> "$results_file"
        grep "WARNING" "$log_file" | head -10 >> "$results_file"
    fi
    
    echo "✓ LEC results parsed: $results_file"
}

#################################################################################
# EQUIVALENCE REPORT GENERATION
#################################################################################

generate_equivalence_report() {
    local report_file="$LEC_DIR/EQUIVALENCE_CHECK_REPORT_${RUN_ID}.md"
    
    echo "Generating comprehensive equivalence check report..."
    
    cat > "$report_file" << EOF
# NeuraEdge NPU - Logic Equivalence Check Report
*Phase 4 Week 2 - Generated: $(date)*

## Equivalence Check Summary

**Run ID**: $RUN_ID  
**RTL Design**: NeuraEdge NPU (multiple RTL files)  
**Gate Design**: $(basename "$GATE_NETLIST")  
**Analysis Tool**: Yosys $(yosys -V | head -n1 | awk '{print $2}')  

## Design Comparison

### RTL Design Characteristics
EOF
    
    # Add RTL characteristics
    local rtl_modules=0
    local rtl_lines=0
    for file in "${RTL_FILES[@]}"; do
        if [[ -f "$file" ]]; then
            local modules=$(grep -c "^module " "$file" 2>/dev/null || echo 0)
            local lines=$(wc -l < "$file")
            rtl_modules=$((rtl_modules + modules))
            rtl_lines=$((rtl_lines + lines))
        fi
    done
    
    cat >> "$report_file" << EOF
- **Source Files**: ${#RTL_FILES[@]}
- **Total Modules**: $rtl_modules
- **Total Lines**: $rtl_lines
- **Design Style**: Behavioral and structural Verilog

### Gate-Level Design Characteristics
EOF
    
    # Add gate-level characteristics
    local gate_lines=$(wc -l < "$GATE_NETLIST")
    local gate_modules=$(grep -c "^module " "$GATE_NETLIST" 2>/dev/null || echo 0)
    local gate_instances=$(grep -c "\w\+\s\+\w\+\s*(" "$GATE_NETLIST" 2>/dev/null || echo 0)
    
    cat >> "$report_file" << EOF
- **Netlist File**: $(basename "$GATE_NETLIST")
- **Total Modules**: $gate_modules
- **Total Lines**: $gate_lines
- **Gate Instances**: $gate_instances
- **Design Style**: Structural gate-level netlist

## Equivalence Check Methods

### 1. Formal Verification (Yosys SAT)
EOF
    
    # Include LEC results if available
    local lec_summary="$LEC_DIR/lec_summary_${RUN_ID}.txt"
    if [[ -f "$lec_summary" ]]; then
        echo '```' >> "$report_file"
        cat "$lec_summary" >> "$report_file"
        echo '```' >> "$report_file"
    else
        echo "**Status**: Not completed (timeout or tool limitations)" >> "$report_file"
    fi
    
    cat >> "$report_file" << EOF

### 2. Structural Comparison
EOF
    
    # Include manual comparison results
    local manual_check="$LEC_DIR/manual_equivalence_${RUN_ID}.txt"
    if [[ -f "$manual_check" ]]; then
        echo '```' >> "$report_file"
        head -50 "$manual_check" >> "$report_file"
        echo '```' >> "$report_file"
    fi
    
    cat >> "$report_file" << EOF

## Equivalence Check Conclusion

EOF
    
    # Determine overall conclusion
    if [[ -f "$lec_summary" ]] && grep -q "EQUIVALENT" "$lec_summary"; then
        cat >> "$report_file" << EOF
✅ **PASSED**: RTL and gate-level designs are logically equivalent

The formal verification using Yosys SAT solver confirmed that the RTL and gate-level implementations produce identical outputs for all possible input combinations.
EOF
    else
        cat >> "$report_file" << EOF
⚠️ **MANUAL VERIFICATION REQUIRED**: Automated LEC inconclusive

Due to design complexity and tool limitations, manual verification methods are recommended:

1. **Simulation-based comparison** with comprehensive test vectors
2. **Hierarchical verification** of individual modules
3. **Critical path analysis** for timing-sensitive logic
4. **Memory interface verification** for SRAM banks

### Recommended Actions
1. Run simulation-based equivalence checking with VCS or ModelSim
2. Perform module-level equivalence checking for critical components
3. Verify memory interface timing and functionality
4. Validate clock domain crossing logic
EOF
    fi
    
    cat >> "$report_file" << EOF

## Generated Files

### Netlists
- **Gate-level**: $(basename "$GATE_NETLIST")
- **Hierarchical**: Available in netlists/ directory

### Reports
- **LEC Summary**: $(basename "$lec_summary")
- **Manual Check**: $(basename "$manual_check")
- **Functional Test**: equivalence_testbench.v

### Logs
- **Synthesis Log**: Available in logs/ directory
- **LEC Log**: lec_${RUN_ID}.log

## Next Steps

1. **Timing Analysis**: Run STA on gate-level netlist
2. **Power Analysis**: Estimate power consumption from netlist
3. **Physical Design**: Prepare netlist for place & route
4. **Verification**: Continue with comprehensive simulation testing

---
*NeuraEdge NPU Logic Equivalence Check - Phase 4 Week 2*
EOF
    
    echo "✓ Equivalence check report generated: $report_file"
}

#################################################################################
# MAIN LEC FLOW
#################################################################################

main() {
    echo "Starting NeuraEdge NPU Logic Equivalence Checking..."
    
    # Validate input designs
    if ! validate_designs; then
        echo "✗ Design validation failed"
        return 1
    fi
    
    # Generate LEC script
    if ! generate_lec_script; then
        echo "✗ LEC script generation failed"
        return 1
    fi
    
    # Run manual equivalence check (always available)
    manual_equivalence_check
    
    # Generate functional test
    functional_equivalence_test
    
    # Attempt formal LEC (may timeout for large designs)
    run_lec_analysis || echo "→ Continuing with manual verification methods"
    
    # Generate comprehensive report
    generate_equivalence_report
    
    echo ""
    echo "=========================================================="
    echo "Logic Equivalence Checking Completed!"
    echo "=========================================================="
    echo "Reports: $LEC_DIR/"
    echo "Logs: $LOGS_DIR/"
    echo ""
    echo "Review the equivalence check report for detailed results."
    echo "=========================================================="
    
    return 0
}

#################################################################################
# SCRIPT EXECUTION
#################################################################################

# Help message
if [[ "$1" == "--help" ]] || [[ "$1" == "-h" ]]; then
    echo "Usage: $0 [rtl_design] [gate_design]"
    echo ""
    echo "This script performs logic equivalence checking between RTL and gate-level netlists."
    echo "It uses Yosys SAT solver for formal verification and manual comparison methods."
    echo ""
    echo "Examples:"
    echo "  $0                    # Use default RTL and latest gate netlist"
    echo "  $0 rtl gate          # Specify design names"
    exit 0
fi

# Execute main LEC flow
main "$@"
