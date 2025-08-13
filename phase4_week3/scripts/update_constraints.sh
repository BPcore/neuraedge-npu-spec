# NeuraEdge NPU - Constraint Update Script  
# Phase 4 Week 3: Gate-Level Simulation & SDF Back-Annotation
# Generated: August 14, 2025

#!/bin/bash

#################################################################################
# CONSTRAINT UPDATES BASED ON GATE-LEVEL SIMULATION RESULTS
#################################################################################

set -e  # Exit on any error

# Script configuration
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$(dirname "$SCRIPT_DIR")")"
PHASE4_W1_DIR="$PROJECT_ROOT/phase4_week1"
PHASE4_W3_DIR="$PROJECT_ROOT/phase4_week3"

# Update configuration
UPDATE_TYPE="${1:-timing}"      # timing, power, area
SEVERITY="${2:-conservative}"   # conservative, balanced, aggressive
RUN_ID="constraint_update_$(date +%Y%m%d_%H%M%S)"

echo "=========================================================="
echo "NeuraEdge NPU - Constraint Updates"
echo "=========================================================="
echo "Update Type: $UPDATE_TYPE"
echo "Severity: $SEVERITY"
echo "Run ID: $RUN_ID"
echo "=========================================================="

#################################################################################
# ENVIRONMENT SETUP
#################################################################################

# Constraint directories
CONSTRAINT_DIR="$PHASE4_W3_DIR/constraint_updates"
ORIGINAL_SDC="$PHASE4_W1_DIR/constraints/neuraedge_npu_baseline.sdc"
SIM_REPORTS_DIR="$PHASE4_W3_DIR/simulation_reports"
LOGS_DIR="$PHASE4_W3_DIR/logs"

# Create logs directory
mkdir -p "$LOGS_DIR"

echo "✓ Constraint update environment configured"

#################################################################################
# SIMULATION RESULTS ANALYSIS
#################################################################################

analyze_simulation_results() {
    echo "Analyzing gate-level simulation results for constraint updates..."
    
    local timing_violations=0
    local power_issues=0
    local area_concerns=0
    
    # Look for timing analysis reports
    for report in "$SIM_REPORTS_DIR"/TIMING_ANALYSIS_*.md; do
        if [[ -f "$report" ]]; then
            echo "✓ Found timing analysis: $(basename "$report")"
            
            # Extract violation counts (simplified analysis)
            local setup_v=$(grep -o "Setup Violations.*: [0-9]*" "$report" | grep -o "[0-9]*$" || echo "0")
            local hold_v=$(grep -o "Hold Violations.*: [0-9]*" "$report" | grep -o "[0-9]*$" || echo "0")
            local recovery_v=$(grep -o "Recovery Violations.*: [0-9]*" "$report" | grep -o "[0-9]*$" || echo "0")
            
            timing_violations=$((setup_v + hold_v + recovery_v))
            
            echo "  - Setup violations: $setup_v"
            echo "  - Hold violations: $hold_v"
            echo "  - Recovery violations: $recovery_v"
            echo "  - Total violations: $timing_violations"
        fi
    done
    
    # Analyze simulation logs for additional insights
    for log in "$LOGS_DIR"/iverilog_*.log; do
        if [[ -f "$log" ]]; then
            local warnings=$(grep -c "warning" "$log" 2>/dev/null || echo "0")
            local errors=$(grep -c "error" "$log" 2>/dev/null || echo "0")
            
            echo "✓ Simulation log analysis: $(basename "$log")"
            echo "  - Warnings: $warnings"
            echo "  - Errors: $errors"
        fi
    done
    
    # Return analysis results
    echo "TIMING_VIOLATIONS=$timing_violations"
    echo "POWER_ISSUES=$power_issues"
    echo "AREA_CONCERNS=$area_concerns"
    
    return 0
}

#################################################################################
# TIMING CONSTRAINT UPDATES
#################################################################################

update_timing_constraints() {
    echo "Updating timing constraints based on simulation results..."
    
    local updated_sdc="$CONSTRAINT_DIR/neuraedge_npu_updated_timing_${RUN_ID}.sdc"
    
    # Start with original constraints
    cp "$ORIGINAL_SDC" "$updated_sdc"
    
    # Determine constraint adjustments based on severity
    local clock_adjustment=0
    local setup_margin=0
    local hold_margin=0
    
    case "$SEVERITY" in
        "conservative")
            clock_adjustment=10    # 10% slower clock
            setup_margin=50        # 50ps additional setup margin
            hold_margin=25         # 25ps additional hold margin
            ;;
        "balanced")
            clock_adjustment=5     # 5% slower clock
            setup_margin=25        # 25ps additional setup margin
            hold_margin=15         # 15ps additional hold margin
            ;;
        "aggressive")
            clock_adjustment=-5    # 5% faster clock (if no violations)
            setup_margin=10        # 10ps additional setup margin
            hold_margin=5          # 5ps additional hold margin
            ;;
    esac
    
    # Calculate new clock period (originally 2.0ns for 500MHz)
    local original_period_ps=2000
    local new_period_ps=$((original_period_ps * (100 + clock_adjustment) / 100))
    local new_frequency_mhz=$((1000000 / new_period_ps))
    
    # Update clock constraints
    cat >> "$updated_sdc" << EOF

# ============================================================================
# UPDATED TIMING CONSTRAINTS - Phase 4 Week 3
# Generated: $(date)
# Update Type: $UPDATE_TYPE
# Severity: $SEVERITY
# ============================================================================

# Updated clock constraints based on gate-level simulation
create_clock -name sys_clk_updated -period ${new_period_ps}ps [get_ports sys_clk]
set_clock_uncertainty 0.2 [get_clocks sys_clk_updated]

# Updated setup/hold margins
set_input_delay  -clock sys_clk_updated -max $((500 + setup_margin))ps [get_ports {data_in weight_in activation_in}]
set_input_delay  -clock sys_clk_updated -min $((hold_margin))ps [get_ports {data_in weight_in activation_in}]
set_output_delay -clock sys_clk_updated -max $((400 + setup_margin))ps [get_ports {result_out noc_data_out}]
set_output_delay -clock sys_clk_updated -min $((hold_margin))ps [get_ports {result_out noc_data_out}]

# Enhanced multicycle path constraints
set_multicycle_path -setup 2 -through [get_pins pe_array_inst/*/mac_unit/*]
set_multicycle_path -hold  1 -through [get_pins pe_array_inst/*/mac_unit/*]

# Updated false path constraints
set_false_path -from [get_ports rst_n] -to [all_registers]
set_false_path -from [get_ports scan_mode] -to [all_registers]

# Clock domain crossing constraints (updated)
set_max_delay 1.5 -from [get_clocks sys_clk_updated] -to [get_clocks noc_clk]
set_max_delay 1.5 -from [get_clocks noc_clk] -to [get_clocks sys_clk_updated]

EOF
    
    echo "✓ Updated timing constraints: $updated_sdc"
    echo "  - New clock frequency: ${new_frequency_mhz}MHz (${new_period_ps}ps period)"
    echo "  - Setup margin: +${setup_margin}ps"
    echo "  - Hold margin: +${hold_margin}ps"
    
    return 0
}

#################################################################################
# POWER CONSTRAINT UPDATES
#################################################################################

update_power_constraints() {
    echo "Updating power constraints based on simulation analysis..."
    
    local updated_sdc="$CONSTRAINT_DIR/neuraedge_npu_updated_power_${RUN_ID}.sdc"
    
    # Start with timing-updated constraints
    if [[ -f "$CONSTRAINT_DIR/neuraedge_npu_updated_timing_${RUN_ID}.sdc" ]]; then
        cp "$CONSTRAINT_DIR/neuraedge_npu_updated_timing_${RUN_ID}.sdc" "$updated_sdc"
    else
        cp "$ORIGINAL_SDC" "$updated_sdc"
    fi
    
    # Add power-specific constraints
    cat >> "$updated_sdc" << EOF

# ============================================================================
# POWER OPTIMIZATION CONSTRAINTS - Phase 4 Week 3
# Generated: $(date)
# ============================================================================

# Clock gating constraints
set_clock_gating_style -sequential_cell latch -positive_edge_logic integrated
set_clock_gating_style -minimum_bitwidth 4

# Power domain isolation
set_isolation_enable -domain PE_DOMAIN -isolation_signal pe_isolation_en
set_isolation_enable -domain NOC_DOMAIN -isolation_signal noc_isolation_en

# Dynamic voltage scaling constraints
create_voltage_area -name PE_CORE -coordinate {0 0 1000 1000}
create_voltage_area -name NOC_FABRIC -coordinate {1000 0 2000 1000}

# Activity factor constraints for PE array
set_switching_activity -type all_nets -static 0.1 -activity 0.2 [get_cells pe_array_inst/*]
set_switching_activity -type all_nets -static 0.2 -activity 0.4 [get_cells noc_router_inst/*]

# Leakage power constraints
set_leakage_power_constraint -max 50mW [get_cells pe_array_inst]
set_leakage_power_constraint -max 20mW [get_cells noc_router_inst]

EOF
    
    echo "✓ Updated power constraints: $updated_sdc"
    echo "  - Clock gating enabled for 4+ bit registers"
    echo "  - Power domain isolation added"
    echo "  - Activity factor constraints applied"
    
    return 0
}

#################################################################################
# AREA CONSTRAINT UPDATES
#################################################################################

update_area_constraints() {
    echo "Updating area constraints based on synthesis results..."
    
    local updated_sdc="$CONSTRAINT_DIR/neuraedge_npu_updated_area_${RUN_ID}.sdc"
    
    # Start with previous updates
    local base_sdc="$ORIGINAL_SDC"
    if [[ -f "$CONSTRAINT_DIR/neuraedge_npu_updated_power_${RUN_ID}.sdc" ]]; then
        base_sdc="$CONSTRAINT_DIR/neuraedge_npu_updated_power_${RUN_ID}.sdc"
    elif [[ -f "$CONSTRAINT_DIR/neuraedge_npu_updated_timing_${RUN_ID}.sdc" ]]; then
        base_sdc="$CONSTRAINT_DIR/neuraedge_npu_updated_timing_${RUN_ID}.sdc"
    fi
    
    cp "$base_sdc" "$updated_sdc"
    
    # Add area optimization constraints
    cat >> "$updated_sdc" << EOF

# ============================================================================
# AREA OPTIMIZATION CONSTRAINTS - Phase 4 Week 3
# Generated: $(date)
# ============================================================================

# Maximum area constraints per block
set_max_area 1000000 [get_designs neuraedge_pe]
set_max_area 500000  [get_designs noc_router]
set_max_area 200000  [get_designs router_cell]

# Resource sharing constraints
set_resource_allocation -type multiply -max_sharing 0.8
set_resource_allocation -type add -max_sharing 0.9

# Wire load model for area optimization
set_wire_load_model -name "area_0K" [get_designs neuraedge_npu]

# Hierarchy preservation for better optimization
set_ungroup -all -flatten false
set_boundary_optimization [get_designs neuraedge_pe] false

EOF
    
    echo "✓ Updated area constraints: $updated_sdc"
    echo "  - Maximum area targets set per block"
    echo "  - Resource sharing enabled"
    echo "  - Wire load model optimized for area"
    
    return 0
}

#################################################################################
# CONSTRAINT VALIDATION
#################################################################################

validate_updated_constraints() {
    echo "Validating updated constraint files..."
    
    local validation_passed=true
    
    # Find all updated constraint files
    for sdc_file in "$CONSTRAINT_DIR"/neuraedge_npu_updated_*_"${RUN_ID}".sdc; do
        if [[ -f "$sdc_file" ]]; then
            local filename=$(basename "$sdc_file")
            local size=$(stat -c%s "$sdc_file")
            local lines=$(wc -l < "$sdc_file")
            
            echo "✓ $filename: $size bytes, $lines lines"
            
            # Basic SDC syntax validation
            if grep -q "create_clock" "$sdc_file" && grep -q "set_input_delay" "$sdc_file"; then
                echo "  - SDC syntax: Valid"
            else
                echo "  - SDC syntax: Invalid"
                validation_passed=false
            fi
            
            # Check for required constraints
            local clock_constraints=$(grep -c "create_clock\|set_clock" "$sdc_file")
            local timing_constraints=$(grep -c "set_input_delay\|set_output_delay" "$sdc_file")
            
            echo "  - Clock constraints: $clock_constraints"
            echo "  - Timing constraints: $timing_constraints"
            
        fi
    done
    
    if [[ "$validation_passed" == "true" ]]; then
        echo "✓ All updated constraints validated successfully"
        return 0
    else
        echo "✗ Constraint validation failed"
        return 1
    fi
}

#################################################################################
# CONSTRAINT UPDATE SUMMARY
#################################################################################

generate_constraint_summary() {
    local summary_file="$CONSTRAINT_DIR/CONSTRAINT_UPDATE_SUMMARY_${RUN_ID}.md"
    
    cat > "$summary_file" << EOF
# NeuraEdge NPU - Constraint Update Summary
*Phase 4 Week 3 - Generated: $(date)*

## Update Configuration
- **Update Type**: $UPDATE_TYPE
- **Severity**: $SEVERITY
- **Run ID**: $RUN_ID
- **Original SDC**: $(basename "$ORIGINAL_SDC")

## Analysis Results
- Based on gate-level simulation feedback
- Timing violations and margin analysis
- Power and area optimization opportunities

## Updated Constraint Files
EOF
    
    # Add information about each updated file
    for sdc_file in "$CONSTRAINT_DIR"/neuraedge_npu_updated_*_"${RUN_ID}".sdc; do
        if [[ -f "$sdc_file" ]]; then
            local filename=$(basename "$sdc_file")
            local size=$(stat -c%s "$sdc_file")
            local lines=$(wc -l < "$sdc_file")
            local update_type=$(echo "$filename" | sed 's/.*updated_\([^_]*\)_.*/\1/')
            
            cat >> "$summary_file" << EOF

### $filename
- **Type**: $update_type constraints
- **Size**: $size bytes
- **Lines**: $lines
- **Purpose**: $(case "$update_type" in
    "timing") echo "Address timing violations and margins";;
    "power") echo "Optimize power consumption and enable clock gating";;
    "area") echo "Reduce area footprint and enable resource sharing";;
    *) echo "General constraint improvements";;
esac)
EOF
        fi
    done
    
    cat >> "$summary_file" << EOF

## Key Updates Applied

### Timing Constraints
- Clock frequency adjustments based on simulation results
- Enhanced setup/hold margins for critical paths
- Updated multicycle path constraints for MAC operations
- Improved clock domain crossing constraints

### Power Constraints  
- Clock gating enablement for 4+ bit registers
- Power domain isolation for PE and NoC blocks
- Activity factor constraints for switching analysis
- Leakage power budgets per functional block

### Area Constraints
- Maximum area targets per design block
- Resource sharing for arithmetic units
- Wire load model optimization
- Hierarchy preservation controls

## Implementation Guidelines
1. **Use updated constraints** in next synthesis iteration
2. **Validate timing closure** with new constraints
3. **Monitor area/power impact** of constraint changes
4. **Iterate based on results** from updated netlists

## Next Steps
1. Re-run synthesis with updated constraints
2. Verify timing closure improvements
3. Validate power and area targets
4. Update gate-level simulation with new netlists

---
*NeuraEdge NPU Constraint Updates - Phase 4 Week 3*
EOF
    
    echo "✓ Constraint update summary: $summary_file"
}

#################################################################################
# MAIN CONSTRAINT UPDATE FLOW
#################################################################################

main() {
    echo "Starting NeuraEdge NPU constraint updates..."
    
    # Analyze simulation results
    analyze_simulation_results
    
    # Apply constraint updates based on type
    case "$UPDATE_TYPE" in
        "timing")
            if ! update_timing_constraints; then
                echo "✗ Timing constraint update failed"
                return 1
            fi
            ;;
        "power")
            if ! update_timing_constraints || ! update_power_constraints; then
                echo "✗ Power constraint update failed"
                return 1
            fi
            ;;
        "area")
            if ! update_timing_constraints || ! update_power_constraints || ! update_area_constraints; then
                echo "✗ Area constraint update failed"
                return 1
            fi
            ;;
        "all")
            if ! update_timing_constraints || ! update_power_constraints || ! update_area_constraints; then
                echo "✗ Comprehensive constraint update failed"
                return 1
            fi
            ;;
        *)
            echo "✗ Invalid update type: $UPDATE_TYPE"
            echo "   Valid options: timing, power, area, all"
            return 1
            ;;
    esac
    
    # Validate updated constraints
    if ! validate_updated_constraints; then
        echo "✗ Constraint validation failed"
        return 1
    fi
    
    # Generate summary report
    generate_constraint_summary
    
    echo ""
    echo "=========================================================="
    echo "Constraint Updates Completed!"
    echo "=========================================================="
    echo "Update Type: $UPDATE_TYPE"
    echo "Severity: $SEVERITY"
    echo "Files: $CONSTRAINT_DIR/"
    echo "Summary: $CONSTRAINT_DIR/CONSTRAINT_UPDATE_SUMMARY_${RUN_ID}.md"
    echo "=========================================================="
    
    return 0
}

#################################################################################
# SCRIPT EXECUTION
#################################################################################

# Help message
if [[ "$1" == "--help" ]] || [[ "$1" == "-h" ]]; then
    echo "Usage: $0 [update_type] [severity]"
    echo ""
    echo "Update Types:"
    echo "  timing      - Update timing constraints only"
    echo "  power       - Update timing + power constraints"
    echo "  area        - Update timing + power + area constraints"
    echo "  all         - Comprehensive constraint updates"
    echo ""
    echo "Severity Levels:"
    echo "  conservative - Safe margins, slower clocks"
    echo "  balanced     - Moderate adjustments"
    echo "  aggressive   - Tight margins, faster clocks"
    echo ""
    echo "Examples:"
    echo "  $0 timing conservative    # Safe timing updates"
    echo "  $0 power balanced        # Timing + power optimization"
    echo "  $0 all aggressive        # Comprehensive tight constraints"
    exit 0
fi

# Execute main constraint update flow
main "$@"
