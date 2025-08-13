#!/bin/bash
# NeuraEdge NPU - Synthesis Run Script
# Phase 4 Week 1: Synthesis Preparation & Constraint Finalization
# Generated: August 14, 2025

set -e  # Exit on any error

# Script configuration
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$(dirname "$SCRIPT_DIR")")"
PHASE4_DIR="$PROJECT_ROOT/phase4_week1"

# Tool and environment setup
export YOSYS_VERSION="0.55+112"
export ABC_VERSION="1.01"
export SYNTHESIS_MODE="${1:-baseline}"  # baseline, timing, area, power

# Directories
CONSTRAINTS_DIR="$PHASE4_DIR/constraints"
LIBRARY_DIR="$PHASE4_DIR/library_setup"
RESULTS_DIR="$PHASE4_DIR/results"
LOGS_DIR="$RESULTS_DIR/logs"
NETLISTS_DIR="$RESULTS_DIR/netlists"
REPORTS_DIR="$RESULTS_DIR/reports"

# Create result directories
mkdir -p "$RESULTS_DIR" "$LOGS_DIR" "$NETLISTS_DIR" "$REPORTS_DIR"

# Timestamp for unique run identification
TIMESTAMP=$(date +"%Y%m%d_%H%M%S")
RUN_ID="${SYNTHESIS_MODE}_${TIMESTAMP}"

echo "============================================================"
echo "NeuraEdge NPU Synthesis Flow"
echo "============================================================"
echo "Mode: $SYNTHESIS_MODE"
echo "Run ID: $RUN_ID"
echo "Project Root: $PROJECT_ROOT"
echo "Results: $RESULTS_DIR"
echo "============================================================"

# Tool version validation
validate_tools() {
    echo "Validating synthesis tools..."
    
    # Check Yosys
    if ! command -v yosys &> /dev/null; then
        echo "ERROR: Yosys not found. Please install Yosys $YOSYS_VERSION"
        exit 1
    fi
    
    YOSYS_VER=$(yosys -V | head -n1 | awk '{print $2}')
    echo "Yosys version: $YOSYS_VER"
    
    # Check ABC
    if ! command -v abc &> /dev/null; then
        echo "WARNING: ABC not found. Yosys will use built-in ABC"
    else
        echo "ABC available: $(abc -q 'print_version; quit' 2>/dev/null || echo 'Unknown version')"
    fi
    
    echo "Tool validation complete."
}

# RTL source file configuration
setup_rtl_sources() {
    echo "Setting up RTL source files..."
    
    RTL_SOURCES=(
        "$PROJECT_ROOT/rtl/top/neuraedge_top_simple.v"
        "$PROJECT_ROOT/rtl/tile/neuraedge_tile.v"
        "$PROJECT_ROOT/rtl/tile/tile_controller.v"
        "$PROJECT_ROOT/rtl/tile/tile_memory.v"
        "$PROJECT_ROOT/rtl/tile/noc_router.v"
        "$PROJECT_ROOT/rtl/pe/neuraedge_pe.v"
        "$PROJECT_ROOT/rtl/common/sram_bank.v"
        "$PROJECT_ROOT/rtl/router_mesh.v"
    )
    
    # Verify all source files exist
    for src in "${RTL_SOURCES[@]}"; do
        if [[ ! -f "$src" ]]; then
            echo "ERROR: RTL source file not found: $src"
            exit 1
        fi
    done
    
    echo "RTL sources validated: ${#RTL_SOURCES[@]} files"
}

# Generate synthesis script based on mode
generate_synthesis_script() {
    local mode="$1"
    local script_file="$LOGS_DIR/synth_${mode}_${TIMESTAMP}.tcl"
    
    echo "Generating synthesis script: $script_file"
    
    cat > "$script_file" << EOF
# NeuraEdge NPU Synthesis Script - Mode: $mode
# Generated: $(date)

# Read RTL sources with include paths
read_verilog -sv \\
    -Irtl/top -Irtl/router -Irtl/tile -Irtl/noc -Irtl/pe -Irtl/common \\
    ${RTL_SOURCES[*]}

# Read timing constraints
read_sdc $CONSTRAINTS_DIR/neuraedge_npu_baseline.sdc

# Setup hierarchy
hierarchy -top neuraedge_top
check

# Synthesis optimization based on mode
EOF

    case "$mode" in
        "baseline")
            cat >> "$script_file" << EOF
# Baseline synthesis - balanced optimization
proc
opt
memory
opt
techmap
opt
EOF
            ;;
        "timing")
            cat >> "$script_file" << EOF
# Timing-focused synthesis
proc
opt -full
memory -nomap
opt -full
techmap -map +/techmap.v
opt -full
abc -fast -D 100
opt
EOF
            ;;
        "area")
            cat >> "$script_file" << EOF
# Area-focused synthesis
proc
opt -full
memory
opt -full
techmap
opt -full
abc -liberty $LIBRARY_DIR/stdcells.lib
opt
EOF
            ;;
        "power")
            cat >> "$script_file" << EOF
# Power-focused synthesis
proc
opt
memory
opt
techmap
abc -liberty $LIBRARY_DIR/stdcells.lib -D 200
opt -power
EOF
            ;;
    esac

    cat >> "$script_file" << EOF

# Final synthesis
synth -top neuraedge_top

# Generate reports
stat -top neuraedge_top
check

# Write outputs
write_verilog $NETLISTS_DIR/neuraedge_top_${mode}_${TIMESTAMP}.v
write_json $NETLISTS_DIR/neuraedge_top_${mode}_${TIMESTAMP}.json

# Generate detailed reports
tee -o $REPORTS_DIR/${mode}_area_report_${TIMESTAMP}.txt stat -top neuraedge_top
tee -o $REPORTS_DIR/${mode}_timing_report_${TIMESTAMP}.txt check -assert

# Memory usage and optimization report
memory
tee -o $REPORTS_DIR/${mode}_memory_report_${TIMESTAMP}.txt memory

# Technology mapping report
tee -o $REPORTS_DIR/${mode}_techmap_report_${TIMESTAMP}.txt techmap -map +/techmap.v

quit
EOF

    echo "$script_file"
}

# Run synthesis with comprehensive logging
run_synthesis() {
    local mode="$1"
    local script_file="$2"
    local log_file="$LOGS_DIR/synthesis_${mode}_${TIMESTAMP}.log"
    
    echo "Running synthesis (mode: $mode)..."
    echo "Script: $script_file"
    echo "Log: $log_file"
    
    # Change to project root for relative paths
    cd "$PROJECT_ROOT"
    
    # Run Yosys with comprehensive logging
    if yosys -s "$script_file" 2>&1 | tee "$log_file"; then
        echo "✅ Synthesis completed successfully"
        
        # Extract key metrics
        extract_metrics "$log_file" "$mode"
    else
        echo "❌ Synthesis failed. Check log: $log_file"
        exit 1
    fi
}

# Extract synthesis metrics
extract_metrics() {
    local log_file="$1"
    local mode="$2"
    local metrics_file="$REPORTS_DIR/${mode}_metrics_${TIMESTAMP}.txt"
    
    echo "Extracting synthesis metrics..."
    
    cat > "$metrics_file" << EOF
# NeuraEdge NPU Synthesis Metrics - Mode: $mode
# Generated: $(date)
# Run ID: $RUN_ID

## Cell Count Analysis
EOF
    
    # Extract cell counts
    grep -A 20 "ABC RESULTS:" "$log_file" | tee -a "$metrics_file" || true
    
    echo "" >> "$metrics_file"
    echo "## Area Analysis" >> "$metrics_file"
    grep -E "(gates|wires|cells)" "$log_file" | tail -10 | tee -a "$metrics_file" || true
    
    echo "" >> "$metrics_file"
    echo "## Timing Analysis" >> "$metrics_file"
    grep -E "(critical|delay|slack)" "$log_file" | tee -a "$metrics_file" || true
    
    echo "Metrics saved to: $metrics_file"
}

# Generate synthesis summary report
generate_summary() {
    local summary_file="$REPORTS_DIR/synthesis_summary_${TIMESTAMP}.md"
    
    echo "Generating synthesis summary..."
    
    cat > "$summary_file" << EOF
# NeuraEdge NPU Synthesis Summary
*Generated: $(date)*

## Synthesis Configuration
- **Mode**: $SYNTHESIS_MODE
- **Run ID**: $RUN_ID
- **Yosys Version**: $YOSYS_VER
- **Target Technology**: Standard Cell Library

## File Locations
- **Netlist**: \`$NETLISTS_DIR/neuraedge_top_${SYNTHESIS_MODE}_${TIMESTAMP}.v\`
- **JSON**: \`$NETLISTS_DIR/neuraedge_top_${SYNTHESIS_MODE}_${TIMESTAMP}.json\`
- **Log**: \`$LOGS_DIR/synthesis_${SYNTHESIS_MODE}_${TIMESTAMP}.log\`
- **Reports**: \`$REPORTS_DIR/${SYNTHESIS_MODE}_*_${TIMESTAMP}.txt\`

## Next Steps
1. Review synthesis reports for timing and area
2. Validate netlist functionality
3. Proceed with place & route flow
4. Update constraints based on synthesis results

---
*Phase 4 Week 1: Synthesis Preparation & Constraint Finalization*
EOF

    echo "Summary generated: $summary_file"
}

# Main execution flow
main() {
    validate_tools
    setup_rtl_sources
    
    local script_file
    script_file=$(generate_synthesis_script "$SYNTHESIS_MODE")
    
    run_synthesis "$SYNTHESIS_MODE" "$script_file"
    generate_summary
    
    echo "============================================================"
    echo "Synthesis flow completed successfully!"
    echo "Results available in: $RESULTS_DIR"
    echo "============================================================"
}

# Script execution
if [[ "${BASH_SOURCE[0]}" == "${0}" ]]; then
    main "$@"
fi
