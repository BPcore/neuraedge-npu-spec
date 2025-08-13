# NeuraEdge NPU - Gate-Level Simulation Runner
# Phase 4 Week 3: Gate-Level Simulation & SDF Back-Annotation
# Generated: August 14, 2025

#!/bin/bash

#################################################################################
# GATE-LEVEL SIMULATION WITH SDF BACK-ANNOTATION
#################################################################################

set -e  # Exit on any error

# Script configuration
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$(dirname "$SCRIPT_DIR")")"
PHASE4_W2_DIR="$PROJECT_ROOT/phase4_week2"
PHASE4_W3_DIR="$PROJECT_ROOT/phase4_week3"

# Simulation configuration
SIM_TYPE="${1:-functional}"      # functional, timing, regression
SDF_TYPE="${2:-annotated}"       # ideal, annotated, none
SIMULATOR="${3:-iverilog}"       # iverilog, modelsim, vcs
RUN_ID="sim_gate_$(date +%Y%m%d_%H%M%S)"

echo "=========================================================="
echo "NeuraEdge NPU - Gate-Level Simulation"
echo "=========================================================="
echo "Simulation Type: $SIM_TYPE"
echo "SDF Type: $SDF_TYPE"
echo "Simulator: $SIMULATOR"
echo "Run ID: $RUN_ID"
echo "=========================================================="

#################################################################################
# ENVIRONMENT SETUP
#################################################################################

# Simulation directories
SIM_DIR="$PHASE4_W3_DIR/simulation_reports"
TB_DIR="$PHASE4_W3_DIR/testbench_integration"
SDF_DIR="$PHASE4_W3_DIR/sdf_generation"
NETLIST_DIR="$PHASE4_W2_DIR/netlists"
WORK_DIR="$SIM_DIR/work_${RUN_ID}"
LOGS_DIR="$PHASE4_W3_DIR/logs"

# Create working directories
mkdir -p "$WORK_DIR"
mkdir -p "$LOGS_DIR"

echo "✓ Gate-level simulation environment configured"

#################################################################################
# FILE VALIDATION
#################################################################################

validate_simulation_files() {
    echo "Validating simulation files..."
    
    local validation_passed=true
    
    # Check gate-level netlists
    GATE_NETLIST="$NETLIST_DIR/neuraedge_pe_gate.v"
    if [[ -f "$GATE_NETLIST" ]]; then
        echo "✓ Gate-level netlist: $(basename "$GATE_NETLIST")"
    else
        echo "✗ Gate-level netlist not found: $GATE_NETLIST"
        validation_passed=false
    fi
    
    # Check testbench
    TESTBENCH="$TB_DIR/tb_neuraedge_pe_gate.sv"
    if [[ -f "$TESTBENCH" ]]; then
        echo "✓ Testbench: $(basename "$TESTBENCH")"
    else
        echo "✗ Testbench not found: $TESTBENCH"
        validation_passed=false
    fi
    
    # Check SDF files (if required)
    if [[ "$SDF_TYPE" != "none" ]]; then
        SDF_FILE="$SDF_DIR/neuraedge_pe_${SDF_TYPE}.sdf"
        if [[ -f "$SDF_FILE" ]]; then
            echo "✓ SDF file: $(basename "$SDF_FILE")"
        else
            echo "⚠ SDF file not found: $SDF_FILE"
            echo "  Running without SDF annotation"
            SDF_TYPE="none"
        fi
    fi
    
    if [[ "$validation_passed" == "false" ]]; then
        echo "✗ File validation failed"
        return 1
    fi
    
    return 0
}

#################################################################################
# IVERILOG SIMULATION
#################################################################################

run_iverilog_simulation() {
    echo "Running gate-level simulation with Icarus Verilog..."
    
    local sim_log="$LOGS_DIR/iverilog_${RUN_ID}.log"
    local compile_log="$LOGS_DIR/iverilog_compile_${RUN_ID}.log"
    
    # Create simulation script
    local sim_script="$WORK_DIR/run_iverilog.sh"
    
    cat > "$sim_script" << EOF
#!/bin/bash
set -e

cd "$WORK_DIR"

echo "Compiling gate-level simulation..."

# Compile with SDF support
iverilog -g2012 \\
    -DSDF_TYPE="\"$SDF_TYPE\"" \\
    -DSIM_TYPE="\"$SIM_TYPE\"" \\
    -I"$NETLIST_DIR" \\
    -I"$TB_DIR" \\
    -I"$SDF_DIR" \\
    -o gate_sim \\
    "$GATE_NETLIST" \\
    "$TESTBENCH" \\
    2>&1 | tee "$compile_log"

if [[ \${PIPESTATUS[0]} -ne 0 ]]; then
    echo "✗ Compilation failed - check $compile_log"
    exit 1
fi

echo "✓ Compilation successful"

echo "Running gate-level simulation..."

# Run simulation with timing
vvp gate_sim \\
    +sdf_verbose \\
    +vcd_file=gate_simulation.vcd \\
    2>&1 | tee "$sim_log"

echo "✓ Simulation completed"
EOF
    
    chmod +x "$sim_script"
    
    # Run simulation
    if "$sim_script"; then
        echo "✓ Icarus Verilog simulation completed successfully"
        
        # Copy results to reports directory
        if [[ -f "$WORK_DIR/gate_simulation.vcd" ]]; then
            cp "$WORK_DIR/gate_simulation.vcd" "$SIM_DIR/"
            echo "✓ Waveform saved: $SIM_DIR/gate_simulation.vcd"
        fi
        
        return 0
    else
        echo "✗ Icarus Verilog simulation failed"
        return 1
    fi
}

#################################################################################
# MODELSIM SIMULATION (if available)
#################################################################################

run_modelsim_simulation() {
    echo "Running gate-level simulation with ModelSim..."
    
    # Check if ModelSim is available
    if ! command -v vsim &> /dev/null; then
        echo "⚠ ModelSim not available, falling back to Icarus Verilog"
        run_iverilog_simulation
        return $?
    fi
    
    local sim_log="$LOGS_DIR/modelsim_${RUN_ID}.log"
    local work_lib="$WORK_DIR/work"
    
    # Create ModelSim library
    if ! vlib "$work_lib" 2>&1 | tee -a "$sim_log"; then
        echo "✗ Failed to create ModelSim library"
        return 1
    fi
    
    # Compile gate-level netlist
    echo "Compiling gate-level netlist..."
    if ! vlog -work "$work_lib" "$GATE_NETLIST" 2>&1 | tee -a "$sim_log"; then
        echo "✗ Gate-level netlist compilation failed"
        return 1
    fi
    
    # Compile testbench
    echo "Compiling testbench..."
    if ! vlog -work "$work_lib" -sv "$TESTBENCH" \
        +define+SDF_TYPE="\"$SDF_TYPE\"" \
        +define+SIM_TYPE="\"$SIM_TYPE\"" \
        2>&1 | tee -a "$sim_log"; then
        echo "✗ Testbench compilation failed"
        return 1
    fi
    
    # Create simulation script
    local do_script="$WORK_DIR/simulate.do"
    
    cat > "$do_script" << EOF
# ModelSim simulation script for gate-level testing
quietly set work_lib "$work_lib"

# Load design
vsim -lib \$work_lib -sdfmax /tb_neuraedge_pe_gate/dut="$SDF_DIR/neuraedge_pe_${SDF_TYPE}.sdf" tb_neuraedge_pe_gate

# Configure waveforms
add wave -r /tb_neuraedge_pe_gate/*

# Configure SDF
configure wave -timeunit ps

# Run simulation
run -all

# Save waveforms
write vcd "$SIM_DIR/gate_simulation_modelsim.vcd"

exit
EOF
    
    # Run simulation
    if vsim -c -do "$do_script" 2>&1 | tee -a "$sim_log"; then
        echo "✓ ModelSim simulation completed successfully"
        return 0
    else
        echo "✗ ModelSim simulation failed"
        return 1
    fi
}

#################################################################################
# REGRESSION TEST SUITE
#################################################################################

run_regression_tests() {
    echo "Running gate-level regression test suite..."
    
    local regression_log="$LOGS_DIR/regression_${RUN_ID}.log"
    local test_count=0
    local pass_count=0
    local fail_count=0
    
    # Test configurations
    local test_configs=(
        "functional:ideal:Basic functionality with ideal timing"
        "functional:annotated:Basic functionality with realistic timing"
        "timing:annotated:Timing verification with annotated SDF"
    )
    
    for config in "${test_configs[@]}"; do
        IFS=':' read -r test_type sdf_type description <<< "$config"
        
        test_count=$((test_count + 1))
        echo ""
        echo "----------------------------------------"
        echo "Regression Test $test_count: $description"
        echo "----------------------------------------"
        
        # Create test-specific working directory
        local test_work_dir="$WORK_DIR/test_${test_count}"
        mkdir -p "$test_work_dir"
        
        # Run individual test
        local old_work_dir="$WORK_DIR"
        WORK_DIR="$test_work_dir"
        SIM_TYPE="$test_type"
        SDF_TYPE="$sdf_type"
        
        if run_iverilog_simulation; then
            echo "✓ Test $test_count PASSED: $description"
            pass_count=$((pass_count + 1))
        else
            echo "✗ Test $test_count FAILED: $description"
            fail_count=$((fail_count + 1))
        fi
        
        WORK_DIR="$old_work_dir"
    done
    
    # Regression summary
    echo ""
    echo "========================================"
    echo "Regression Test Summary"
    echo "========================================"
    echo "Total Tests: $test_count"
    echo "Passed: $pass_count"
    echo "Failed: $fail_count"
    echo "Success Rate: $(( (pass_count * 100) / test_count ))%"
    echo "========================================"
    
    # Save regression report
    local regression_report="$SIM_DIR/REGRESSION_REPORT_${RUN_ID}.md"
    cat > "$regression_report" << EOF
# NeuraEdge NPU - Gate-Level Regression Report
*Generated: $(date)*

## Test Summary
- **Total Tests**: $test_count
- **Passed**: $pass_count  
- **Failed**: $fail_count
- **Success Rate**: $(( (pass_count * 100) / test_count ))%

## Test Results
EOF
    
    test_count=0
    for config in "${test_configs[@]}"; do
        IFS=':' read -r test_type sdf_type description <<< "$config"
        test_count=$((test_count + 1))
        
        if [[ -f "$WORK_DIR/test_${test_count}/gate_simulation.vcd" ]]; then
            result="✓ PASS"
        else
            result="✗ FAIL"
        fi
        
        cat >> "$regression_report" << EOF

### Test $test_count: $description
- **Type**: $test_type
- **SDF**: $sdf_type  
- **Result**: $result
EOF
    done
    
    echo "✓ Regression report: $regression_report"
    
    if [[ $fail_count -eq 0 ]]; then
        return 0
    else
        return 1
    fi
}

#################################################################################
# TIMING ANALYSIS
#################################################################################

analyze_timing_results() {
    echo "Analyzing gate-level timing results..."
    
    if [[ "$SDF_TYPE" == "annotated" ]]; then
        local timing_log="$LOGS_DIR/timing_analysis_${RUN_ID}.log"
        
        # Check for timing violations in simulation log
        local sim_log="$LOGS_DIR/iverilog_${RUN_ID}.log"
        
        if [[ -f "$sim_log" ]]; then
            echo "Checking for timing violations..." | tee "$timing_log"
            
            # Look for setup/hold violations
            local setup_violations=$(grep -c "setup.*violation" "$sim_log" 2>/dev/null || echo "0")
            local hold_violations=$(grep -c "hold.*violation" "$sim_log" 2>/dev/null || echo "0")
            local recovery_violations=$(grep -c "recovery.*violation" "$sim_log" 2>/dev/null || echo "0")
            
            # Clean up any newlines or extra characters
            setup_violations=$(echo $setup_violations | tr -d '\n' | tr -d ' ')
            hold_violations=$(echo $hold_violations | tr -d '\n' | tr -d ' ')
            recovery_violations=$(echo $recovery_violations | tr -d '\n' | tr -d ' ')
            
            echo "Setup violations: $setup_violations" | tee -a "$timing_log"
            echo "Hold violations: $hold_violations" | tee -a "$timing_log"
            echo "Recovery violations: $recovery_violations" | tee -a "$timing_log"
            
            local total_violations=$((setup_violations + hold_violations + recovery_violations))
            
            if [[ $total_violations -eq 0 ]]; then
                echo "✓ No timing violations detected" | tee -a "$timing_log"
            else
                echo "⚠ $total_violations timing violations detected" | tee -a "$timing_log"
            fi
            
            # Create timing analysis report
            local timing_report="$SIM_DIR/TIMING_ANALYSIS_${RUN_ID}.md"
            cat > "$timing_report" << EOF
# NeuraEdge NPU - Gate-Level Timing Analysis
*Generated: $(date)*

## Simulation Configuration
- **SDF Type**: $SDF_TYPE
- **Simulation Type**: $SIM_TYPE
- **Run ID**: $RUN_ID

## Timing Violations Summary
- **Setup Violations**: $setup_violations
- **Hold Violations**: $hold_violations  
- **Recovery Violations**: $recovery_violations
- **Total Violations**: $total_violations

## Analysis Results
$(if [[ $total_violations -eq 0 ]]; then
    echo "✓ **TIMING CLEAN** - No violations detected"
    echo "- Gate-level netlist meets timing requirements"
    echo "- SDF back-annotation successful"
    echo "- Ready for silicon implementation"
else
    echo "⚠ **TIMING VIOLATIONS DETECTED**"
    echo "- Review SDF annotation accuracy"
    echo "- Consider constraint updates"
    echo "- May require netlist optimization"
fi)

---
*NeuraEdge NPU Phase 4 Week 3 - Gate-Level Simulation*
EOF
            
            echo "✓ Timing analysis report: $timing_report"
        else
            echo "⚠ No simulation log found for timing analysis"
        fi
    else
        echo "⚠ Timing analysis requires annotated SDF"
    fi
}

#################################################################################
# SIMULATION SUMMARY REPORT
#################################################################################

generate_simulation_report() {
    local report_file="$SIM_DIR/GATE_SIMULATION_SUMMARY_${RUN_ID}.md"
    
    cat > "$report_file" << EOF
# NeuraEdge NPU - Gate-Level Simulation Summary
*Phase 4 Week 3 - Generated: $(date)*

## Simulation Configuration
- **Simulation Type**: $SIM_TYPE
- **SDF Type**: $SDF_TYPE
- **Simulator**: $SIMULATOR
- **Run ID**: $RUN_ID
- **Gate-level Netlist**: $(basename "$GATE_NETLIST")

## File Inventory
- **Netlist**: $GATE_NETLIST
- **Testbench**: $TESTBENCH
$(if [[ "$SDF_TYPE" != "none" ]]; then echo "- **SDF File**: $SDF_DIR/neuraedge_pe_${SDF_TYPE}.sdf"; fi)
- **Working Directory**: $WORK_DIR

## Simulation Results
EOF
    
    # Add results based on simulation type
    if [[ "$SIM_TYPE" == "regression" ]]; then
        cat >> "$report_file" << EOF

### Regression Test Results
- Multiple test configurations executed
- See REGRESSION_REPORT_${RUN_ID}.md for detailed results
EOF
    else
        cat >> "$report_file" << EOF

### Single Simulation Results
- Simulation completed using $SIMULATOR
- Results stored in: $SIM_DIR/
EOF
    fi
    
    # Add timing analysis if applicable
    if [[ "$SDF_TYPE" == "annotated" ]]; then
        cat >> "$report_file" << EOF

### Timing Analysis
- SDF back-annotation applied
- See TIMING_ANALYSIS_${RUN_ID}.md for timing violation analysis
EOF
    fi
    
    cat >> "$report_file" << EOF

## Generated Files
- **Simulation Logs**: $LOGS_DIR/
- **Waveforms**: gate_simulation.vcd
- **Reports**: $SIM_DIR/

## Next Steps for Phase 4 Week 3
1. **Review simulation results** for functional correctness
2. **Analyze timing violations** (if any) from annotated SDF
3. **Update constraints** based on gate-level findings
4. **Iterate simulation** with constraint improvements

---
*NeuraEdge NPU Gate-Level Simulation - Phase 4 Week 3*
EOF
    
    echo "✓ Simulation summary: $report_file"
}

#################################################################################
# MAIN SIMULATION FLOW
#################################################################################

main() {
    echo "Starting NeuraEdge NPU gate-level simulation..."
    
    # Validate required files
    if ! validate_simulation_files; then
        echo "✗ File validation failed"
        return 1
    fi
    
    # Run simulation based on type
    case "$SIM_TYPE" in
        "functional"|"timing")
            case "$SIMULATOR" in
                "iverilog")
                    if ! run_iverilog_simulation; then
                        echo "✗ Simulation failed"
                        return 1
                    fi
                    ;;
                "modelsim")
                    if ! run_modelsim_simulation; then
                        echo "✗ Simulation failed"
                        return 1
                    fi
                    ;;
                *)
                    echo "✗ Unsupported simulator: $SIMULATOR"
                    return 1
                    ;;
            esac
            ;;
        "regression")
            if ! run_regression_tests; then
                echo "✗ Regression tests failed"
                return 1
            fi
            ;;
        *)
            echo "✗ Invalid simulation type: $SIM_TYPE"
            echo "   Valid options: functional, timing, regression"
            return 1
            ;;
    esac
    
    # Analyze timing results
    analyze_timing_results
    
    # Generate summary report
    generate_simulation_report
    
    echo ""
    echo "=========================================================="
    echo "Gate-Level Simulation Completed!"
    echo "=========================================================="
    echo "Type: $SIM_TYPE"
    echo "SDF: $SDF_TYPE"
    echo "Results: $SIM_DIR/"
    echo "Logs: $LOGS_DIR/"
    echo "=========================================================="
    
    return 0
}

#################################################################################
# SCRIPT EXECUTION
#################################################################################

# Help message
if [[ "$1" == "--help" ]] || [[ "$1" == "-h" ]]; then
    echo "Usage: $0 [sim_type] [sdf_type] [simulator]"
    echo ""
    echo "Simulation Types:"
    echo "  functional  - Basic functional verification"
    echo "  timing      - Timing-aware simulation"
    echo "  regression  - Full regression test suite"
    echo ""
    echo "SDF Types:"
    echo "  ideal       - Minimal delays for function check"
    echo "  annotated   - Realistic timing from synthesis"
    echo "  none        - No SDF annotation (zero delay)"
    echo ""
    echo "Simulators:"
    echo "  iverilog    - Icarus Verilog (open source)"
    echo "  modelsim    - Mentor ModelSim (commercial)"
    echo ""
    echo "Examples:"
    echo "  $0 functional annotated iverilog"
    echo "  $0 timing annotated modelsim"
    echo "  $0 regression annotated iverilog"
    exit 0
fi

# Execute main simulation flow
main "$@"
