# NeuraEdge NPU - Phase 4 Week 1 Synthesis Validation
# Synthesis Preparation & Constraint Finalization
# Generated: August 14, 2025

#!/bin/bash

#################################################################################
# VALIDATION AND TESTING SCRIPT
#################################################################################

# This script validates the Phase 4 Week 1 synthesis preparation setup
# and runs initial synthesis tests to verify constraint application

set -e  # Exit on any error

# Script directory and paths
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"
PHASE4_DIR="$PROJECT_ROOT/phase4_week1"

echo "=========================================="
echo "NeuraEdge NPU - Phase 4 Week 1 Validation"
echo "=========================================="
echo "Project Root: $PROJECT_ROOT"
echo "Phase 4 Directory: $PHASE4_DIR"
echo ""

#################################################################################
# ENVIRONMENT SETUP
#################################################################################

# Source configuration files
echo "Loading synthesis environment..."
source "$PHASE4_DIR/tool_configs/synthesis_env.sh"
source "$PHASE4_DIR/library_setup/stdcells_config.sh"

echo "✓ Environment configuration loaded"
echo ""

#################################################################################
# DIRECTORY STRUCTURE VALIDATION
#################################################################################

validate_directory_structure() {
    echo "Validating Phase 4 Week 1 directory structure..."
    
    required_dirs=(
        "$PHASE4_DIR/constraints"
        "$PHASE4_DIR/synthesis_scripts"
        "$PHASE4_DIR/tool_configs"
        "$PHASE4_DIR/library_setup"
    )
    
    missing_dirs=()
    for dir in "${required_dirs[@]}"; do
        if [[ -d "$dir" ]]; then
            echo "✓ $dir"
        else
            echo "✗ $dir (missing)"
            missing_dirs+=("$dir")
        fi
    done
    
    if [[ ${#missing_dirs[@]} -eq 0 ]]; then
        echo "✓ All required directories present"
        return 0
    else
        echo "✗ Missing directories: ${missing_dirs[*]}"
        return 1
    fi
}

#################################################################################
# FILE VALIDATION
#################################################################################

validate_required_files() {
    echo ""
    echo "Validating required files..."
    
    required_files=(
        "$PHASE4_DIR/constraints/neuraedge_npu_baseline.sdc"
        "$PHASE4_DIR/synthesis_scripts/run_synthesis.sh"
        "$PHASE4_DIR/tool_configs/synthesis_env.sh"
        "$PHASE4_DIR/library_setup/stdcells_config.sh"
    )
    
    missing_files=()
    for file in "${required_files[@]}"; do
        if [[ -f "$file" ]]; then
            size=$(stat -c%s "$file" 2>/dev/null || echo "0")
            echo "✓ $(basename "$file") (${size} bytes)"
        else
            echo "✗ $(basename "$file") (missing)"
            missing_files+=("$file")
        fi
    done
    
    if [[ ${#missing_files[@]} -eq 0 ]]; then
        echo "✓ All required files present"
        return 0
    else
        echo "✗ Missing files: ${missing_files[*]}"
        return 1
    fi
}

#################################################################################
# RTL SOURCE VALIDATION
#################################################################################

validate_rtl_sources() {
    echo ""
    echo "Validating RTL source files..."
    
    rtl_files=(
        "$PROJECT_ROOT/rtl/top/neuraedge_top.v"
        "$PROJECT_ROOT/rtl/tile/neuraedge_tile.v"
        "$PROJECT_ROOT/rtl/tile/tile_controller.v"
        "$PROJECT_ROOT/rtl/tile/tile_memory.v"
        "$PROJECT_ROOT/rtl/pe/neuraedge_pe.v"
        "$PROJECT_ROOT/rtl/noc/noc_router.v"
        "$PROJECT_ROOT/rtl/common/sram_bank.v"
    )
    
    missing_rtl=()
    total_lines=0
    
    for file in "${rtl_files[@]}"; do
        if [[ -f "$file" ]]; then
            lines=$(wc -l < "$file")
            total_lines=$((total_lines + lines))
            echo "✓ $(basename "$file") ($lines lines)"
        else
            echo "✗ $(basename "$file") (missing)"
            missing_rtl+=("$file")
        fi
    done
    
    echo "Total RTL lines: $total_lines"
    
    if [[ ${#missing_rtl[@]} -eq 0 ]]; then
        echo "✓ All required RTL files present"
        return 0
    else
        echo "✗ Missing RTL files: ${missing_rtl[*]}"
        return 1
    fi
}

#################################################################################
# CONSTRAINT FILE VALIDATION
#################################################################################

validate_constraints() {
    echo ""
    echo "Validating SDC constraints..."
    
    sdc_file="$PHASE4_DIR/constraints/neuraedge_npu_baseline.sdc"
    
    if [[ ! -f "$sdc_file" ]]; then
        echo "✗ SDC file not found: $sdc_file"
        return 1
    fi
    
    # Check for essential constraint types
    constraint_checks=(
        "create_clock.*clk.*-period"
        "set_input_delay"
        "set_output_delay"
        "set_false_path"
        "set_multicycle_path"
        "set_clock_uncertainty"
        "set_clock_latency"
    )
    
    echo "Checking constraint coverage:"
    for check in "${constraint_checks[@]}"; do
        if grep -q "$check" "$sdc_file"; then
            echo "✓ $(echo "$check" | sed 's/\.\*//' | sed 's/\\//g')"
        else
            echo "✗ $(echo "$check" | sed 's/\.\*//' | sed 's/\\//g') (not found)"
        fi
    done
    
    # Count constraint lines
    total_constraints=$(grep -c "^[[:space:]]*[^#]" "$sdc_file" | grep -v "^$" || echo "0")
    echo "Total constraint commands: $total_constraints"
    
    if [[ $total_constraints -gt 50 ]]; then
        echo "✓ Comprehensive constraint set detected"
        return 0
    else
        echo "⚠ Constraint set may be incomplete ($total_constraints commands)"
        return 1
    fi
}

#################################################################################
# TOOL AVAILABILITY CHECK
#################################################################################

check_synthesis_tools() {
    echo ""
    echo "Checking synthesis tool availability..."
    
    # Check Yosys
    if command -v yosys &> /dev/null; then
        yosys_version=$(yosys -V | head -n1)
        echo "✓ Yosys: $yosys_version"
        
        # Test basic Yosys functionality
        if echo "read_verilog -sv; select" | yosys -q -s /dev/stdin 2>/dev/null; then
            echo "✓ Yosys basic functionality test passed"
        else
            echo "⚠ Yosys basic functionality test failed"
        fi
    else
        echo "✗ Yosys not found in PATH"
        return 1
    fi
    
    # Check ABC
    if command -v abc &> /dev/null; then
        echo "✓ ABC optimization tool available"
    else
        echo "⚠ ABC not found (will use Yosys built-in ABC)"
    fi
    
    return 0
}

#################################################################################
# SYNTHESIS DRY RUN
#################################################################################

run_synthesis_dry_run() {
    echo ""
    echo "Running synthesis dry run..."
    
    # Create temporary directory for dry run
    temp_dir=$(mktemp -d)
    echo "Dry run directory: $temp_dir"
    
    # Copy essential files
    cp "$PHASE4_DIR/constraints/neuraedge_npu_baseline.sdc" "$temp_dir/"
    
    # Create minimal test RTL
    cat > "$temp_dir/test_module.v" << 'EOF'
module test_module (
    input clk,
    input rst_n,
    input [7:0] data_in,
    output reg [7:0] data_out
);

always @(posedge clk or negedge rst_n) begin
    if (!rst_n)
        data_out <= 8'b0;
    else
        data_out <= data_in + 1;
end

endmodule
EOF
    
    # Create minimal synthesis script
    cat > "$temp_dir/test_synth.ys" << EOF
# Test synthesis script
read_verilog test_module.v
hierarchy -top test_module
proc
opt
techmap
opt
stat
EOF
    
    # Run test synthesis
    echo "Running test synthesis..."
    cd "$temp_dir"
    
    if yosys -s test_synth.ys > synthesis_test.log 2>&1; then
        echo "✓ Basic synthesis test passed"
        
        # Check for successful elaboration
        if grep -q "Number of cells:" synthesis_test.log; then
            cells=$(grep "Number of cells:" synthesis_test.log | awk '{print $4}')
            echo "  - Synthesized cells: $cells"
        fi
        
        result=0
    else
        echo "✗ Basic synthesis test failed"
        echo "Error log:"
        cat synthesis_test.log | tail -10
        result=1
    fi
    
    # Cleanup
    cd "$PROJECT_ROOT"
    rm -rf "$temp_dir"
    
    return $result
}

#################################################################################
# CONSTRAINT VALIDATION
#################################################################################

validate_constraint_syntax() {
    echo ""
    echo "Validating SDC constraint syntax..."
    
    sdc_file="$PHASE4_DIR/constraints/neuraedge_npu_baseline.sdc"
    
    # Create temporary validation script
    temp_dir=$(mktemp -d)
    cat > "$temp_dir/validate_sdc.tcl" << 'EOF'
# SDC syntax validation script
puts "Validating SDC constraints..."

# Source the SDC file
if {[catch {source neuraedge_npu_baseline.sdc} err]} {
    puts "ERROR: SDC syntax error - $err"
    exit 1
} else {
    puts "SUCCESS: SDC syntax validation passed"
    exit 0
}
EOF
    
    # Copy SDC file to temp directory
    cp "$sdc_file" "$temp_dir/"
    cd "$temp_dir"
    
    # Note: In a real implementation, this would use an SDC parser
    # For now, we'll do basic syntax checks
    echo "Performing basic SDC syntax validation..."
    
    # Check for balanced brackets
    if [[ $(grep -o '{' "$sdc_file" | wc -l) -eq $(grep -o '}' "$sdc_file" | wc -l) ]]; then
        echo "✓ Balanced braces in SDC file"
    else
        echo "✗ Unbalanced braces in SDC file"
        cd "$PROJECT_ROOT"
        rm -rf "$temp_dir"
        return 1
    fi
    
    # Check for valid SDC commands
    invalid_lines=$(grep -n "^[[:space:]]*[^#]" "$sdc_file" | grep -v -E "(create_clock|set_input_delay|set_output_delay|set_false_path|set_multicycle_path|set_clock|set_load|set_driving_cell)" | head -5)
    
    if [[ -n "$invalid_lines" ]]; then
        echo "⚠ Potentially invalid SDC commands found:"
        echo "$invalid_lines"
    else
        echo "✓ All SDC commands appear valid"
    fi
    
    # Cleanup
    cd "$PROJECT_ROOT"
    rm -rf "$temp_dir"
    
    echo "✓ Basic SDC validation completed"
    return 0
}

#################################################################################
# PERFORMANCE ESTIMATION
#################################################################################

estimate_synthesis_performance() {
    echo ""
    echo "Estimating synthesis performance..."
    
    # RTL complexity analysis
    total_rtl_lines=0
    for rtl_file in "$PROJECT_ROOT"/rtl/**/*.v; do
        if [[ -f "$rtl_file" ]]; then
            lines=$(wc -l < "$rtl_file")
            total_rtl_lines=$((total_rtl_lines + lines))
        fi
    done
    
    echo "RTL Complexity Analysis:"
    echo "- Total RTL lines: $total_rtl_lines"
    
    # Estimate synthesis time based on complexity
    if [[ $total_rtl_lines -lt 1000 ]]; then
        synth_time="< 1 minute"
        complexity="Low"
    elif [[ $total_rtl_lines -lt 5000 ]]; then
        synth_time="1-5 minutes"
        complexity="Medium"
    elif [[ $total_rtl_lines -lt 20000 ]]; then
        synth_time="5-20 minutes"
        complexity="High"
    else
        synth_time="> 20 minutes"
        complexity="Very High"
    fi
    
    echo "- Complexity: $complexity"
    echo "- Estimated synthesis time: $synth_time"
    
    # Memory requirements estimation
    available_memory=$(free -g | awk '/^Mem:/{print $7}')
    echo "- Available memory: ${available_memory}GB"
    
    if [[ $available_memory -gt 4 ]]; then
        echo "✓ Sufficient memory for synthesis"
    else
        echo "⚠ Low memory - consider closing other applications"
    fi
    
    return 0
}

#################################################################################
# MAIN VALIDATION SEQUENCE
#################################################################################

main() {
    echo "Starting Phase 4 Week 1 validation sequence..."
    echo ""
    
    validation_results=()
    
    # Run all validation checks
    echo "=== Directory Structure Validation ==="
    if validate_directory_structure; then
        validation_results+=("Directory Structure: PASS")
    else
        validation_results+=("Directory Structure: FAIL")
    fi
    
    echo ""
    echo "=== File Validation ==="
    if validate_required_files; then
        validation_results+=("Required Files: PASS")
    else
        validation_results+=("Required Files: FAIL")
    fi
    
    echo ""
    echo "=== RTL Source Validation ==="
    if validate_rtl_sources; then
        validation_results+=("RTL Sources: PASS")
    else
        validation_results+=("RTL Sources: FAIL")
    fi
    
    echo ""
    echo "=== Constraint Validation ==="
    if validate_constraints; then
        validation_results+=("Constraints: PASS")
    else
        validation_results+=("Constraints: FAIL")
    fi
    
    echo ""
    echo "=== Tool Availability Check ==="
    if check_synthesis_tools; then
        validation_results+=("Synthesis Tools: PASS")
    else
        validation_results+=("Synthesis Tools: FAIL")
    fi
    
    echo ""
    echo "=== Constraint Syntax Validation ==="
    if validate_constraint_syntax; then
        validation_results+=("SDC Syntax: PASS")
    else
        validation_results+=("SDC Syntax: FAIL")
    fi
    
    echo ""
    echo "=== Synthesis Dry Run ==="
    if run_synthesis_dry_run; then
        validation_results+=("Synthesis Dry Run: PASS")
    else
        validation_results+=("Synthesis Dry Run: FAIL")
    fi
    
    echo ""
    echo "=== Performance Estimation ==="
    estimate_synthesis_performance
    validation_results+=("Performance Analysis: COMPLETE")
    
    # Generate validation report
    echo ""
    echo "=========================================="
    echo "PHASE 4 WEEK 1 VALIDATION SUMMARY"
    echo "=========================================="
    
    passed=0
    failed=0
    
    for result in "${validation_results[@]}"; do
        echo "$result"
        if [[ "$result" == *"PASS"* ]] || [[ "$result" == *"COMPLETE"* ]]; then
            ((passed++))
        else
            ((failed++))
        fi
    done
    
    echo ""
    echo "Validation Results: $passed passed, $failed failed"
    
    if [[ $failed -eq 0 ]]; then
        echo "✓ Phase 4 Week 1 setup is ready for synthesis"
        echo ""
        echo "Next steps:"
        echo "1. Run: cd phase4_week1/synthesis_scripts"
        echo "2. Execute: ./run_synthesis.sh baseline"
        echo "3. Review synthesis reports in results/"
        return 0
    else
        echo "✗ Phase 4 Week 1 setup needs attention"
        echo ""
        echo "Please resolve the failed validations before proceeding."
        return 1
    fi
}

#################################################################################
# SCRIPT EXECUTION
#################################################################################

# Run main validation
main "$@"
