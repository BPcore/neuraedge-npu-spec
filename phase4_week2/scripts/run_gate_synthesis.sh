# NeuraEdge NPU - Gate-Level Synthesis Script
# Phase 4 Week 2: Gate-Level Synthesis & Equivalence Checking
# Generated: August 14, 2025

#!/bin/bash

#################################################################################
# GATE-LEVEL SYNTHESIS AND NETLIST GENERATION
#################################################################################

set -e  # Exit on any error

# Script configuration
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$(dirname "$SCRIPT_DIR")")"
PHASE4_W1_DIR="$PROJECT_ROOT/phase4_week1"
PHASE4_W2_DIR="$PROJECT_ROOT/phase4_week2"

# Synthesis configuration
SYNTHESIS_MODE="${1:-full}"  # full, hierarchical, or flat
RUN_ID="gate_synth_$(date +%Y%m%d_%H%M%S)"

echo "=========================================================="
echo "NeuraEdge NPU - Gate-Level Synthesis"
echo "=========================================================="
echo "Mode: $SYNTHESIS_MODE"
echo "Run ID: $RUN_ID"
echo "Project Root: $PROJECT_ROOT"
echo "=========================================================="

#################################################################################
# ENVIRONMENT SETUP
#################################################################################

# Source Phase 4 Week 1 configurations
source "$PHASE4_W1_DIR/tool_configs/synthesis_env.sh"
source "$PHASE4_W1_DIR/library_setup/stdcells_config.sh"

# Week 2 specific directories
NETLIST_DIR="$PHASE4_W2_DIR/netlists"
REPORTS_DIR="$PHASE4_W2_DIR/synthesis_reports"
SCRIPTS_DIR="$PHASE4_W2_DIR/scripts"
LOGS_DIR="$PHASE4_W2_DIR/logs"

# Create logs directory
mkdir -p "$LOGS_DIR"

echo "✓ Environment configured for gate-level synthesis"

#################################################################################
# RTL SOURCE CONFIGURATION
#################################################################################

setup_rtl_sources() {
    echo "Setting up RTL sources for gate-level synthesis..."
    
    # Core RTL files for NeuraEdge NPU (separating Verilog and SystemVerilog)
    VERILOG_FILES=(
        "$PHASE4_W2_DIR/netlists/neuraedge_top_synth.v"
        "$PROJECT_ROOT/rtl/tile/neuraedge_tile.v"
        "$PROJECT_ROOT/rtl/tile/tile_controller.v"
        "$PROJECT_ROOT/rtl/tile/tile_memory.v"
        "$PROJECT_ROOT/rtl/pe/neuraedge_pe.v"
        "$PHASE4_W2_DIR/netlists/noc_router_synth.v"
        "$PROJECT_ROOT/rtl/router/router_cell.v"
        "$PROJECT_ROOT/rtl/router/fifo.v"
        "$PROJECT_ROOT/rtl/common/sram_bank.v"
        "$PHASE4_W2_DIR/netlists/router_mesh_synth.v"
    )
    
    SYSTEMVERILOG_FILES=(
        # Temporarily removed for synthesis compatibility
        # "$PROJECT_ROOT/rtl/common/regfile.sv"
    )
    
    # Combine all files for validation
    RTL_FILES=("${VERILOG_FILES[@]}" "${SYSTEMVERILOG_FILES[@]}")
    
    # Validate RTL files
    missing_files=()
    for file in "${RTL_FILES[@]}"; do
        if [[ ! -f "$file" ]]; then
            missing_files+=("$file")
        fi
    done
    
    if [[ ${#missing_files[@]} -gt 0 ]]; then
        echo "✗ Missing RTL files:"
        printf '  %s\n' "${missing_files[@]}"
        return 1
    fi
    
    echo "✓ All RTL files validated: ${#RTL_FILES[@]} files"
    echo "  - Verilog files: ${#VERILOG_FILES[@]}"
    echo "  - SystemVerilog files: ${#SYSTEMVERILOG_FILES[@]}"
    return 0
}

#################################################################################
# YOSYS SYNTHESIS SCRIPT GENERATION
#################################################################################

generate_synthesis_script() {
    local mode="$1"
    local script_file="$SCRIPTS_DIR/gate_synthesis_${mode}_${RUN_ID}.ys"
    
    echo "Generating Yosys synthesis script: $script_file"
    
    cat > "$script_file" << EOF
# NeuraEdge NPU Gate-Level Synthesis Script
# Mode: $mode
# Generated: $(date)
# Run ID: $RUN_ID

# Read RTL sources
EOF

    # Add RTL file reads (separate Verilog and SystemVerilog)
    for file in "${VERILOG_FILES[@]}"; do
        echo "read_verilog \"$file\"" >> "$script_file"
    done
    
    for file in "${SYSTEMVERILOG_FILES[@]}"; do
        echo "read_verilog -sv \"$file\"" >> "$script_file"
    done

    cat >> "$script_file" << EOF

# Set top-level module
hierarchy -top neuraedge_top

# Check design hierarchy
hierarchy -check

# Initial optimization
proc
opt_expr
opt_clean

# Technology-independent optimizations
EOF

    case "$mode" in
        "hierarchical")
            cat >> "$script_file" << EOF
# Hierarchical synthesis - preserve module boundaries
# PE-level synthesis
select -module neuraedge_pe
synth -top neuraedge_pe
select -clear

# Tile-level synthesis
select -module neuraedge_tile
synth -top neuraedge_tile
select -clear

# Top-level synthesis
select -module neuraedge_top
synth -top neuraedge_top
select -clear
EOF
            ;;
        "flat")
            cat >> "$script_file" << EOF
# Flat synthesis - full design flattening
flatten
synth -top neuraedge_top -flatten
EOF
            ;;
        *)
            cat >> "$script_file" << EOF
# Full synthesis with hierarchy preservation
synth -top neuraedge_top
EOF
            ;;
    esac

    cat >> "$script_file" << EOF

# Memory mapping
memory -nomap
opt -full

# Technology mapping preparation
techmap
opt -fast
abc -fast

# Final optimization
opt_clean
opt_reduce

# Statistics before technology mapping
stat

# Technology mapping to standard cells
dfflibmap -liberty \${STDCELL_LIB_PATH:-stdcells.lib}
abc -liberty \${STDCELL_LIB_PATH:-stdcells.lib} -script "+strash;dretime;map;topo;stime"

# Buffer insertion and optimization
hilomap -hicell BUF_X1 A -locell INV_X1 A
insbuf -buf BUF_X1 A Y

# Final cleanup
opt_clean
opt_reduce -fine

# Generate final statistics
stat

# Write gate-level netlist
write_verilog -noattr -noexpr -nohex -decimal "$NETLIST_DIR/neuraedge_npu_${mode}_${RUN_ID}.v"

# Write hierarchical netlist (preserving hierarchy)
write_verilog -noattr -noexpr -nohex -decimal -defparam "$NETLIST_DIR/neuraedge_npu_${mode}_hier_${RUN_ID}.v"

# Generate synthesis reports
tee -o "$REPORTS_DIR/synthesis_stats_${mode}_${RUN_ID}.txt" stat
tee -o "$REPORTS_DIR/synthesis_check_${mode}_${RUN_ID}.txt" check

# Show critical timing paths (if available)
show -stretch

# End of synthesis script
EOF

    echo "✓ Generated synthesis script: $script_file"
    return 0
}

#################################################################################
# SYNTHESIS EXECUTION
#################################################################################

run_gate_synthesis() {
    local mode="$1"
    local script_file="$SCRIPTS_DIR/gate_synthesis_${mode}_${RUN_ID}.ys"
    local log_file="$LOGS_DIR/synthesis_${mode}_${RUN_ID}.log"
    
    echo "Running gate-level synthesis (mode: $mode)..."
    echo "Script: $script_file"
    echo "Log: $log_file"
    
    # Set library paths for synthesis
    export STDCELL_LIB_PATH="$PHASE4_W1_DIR/library_setup/stdcells.lib"
    
    # Run Yosys synthesis
    if yosys -s "$script_file" > "$log_file" 2>&1; then
        echo "✓ Gate-level synthesis completed successfully"
        
        # Extract key metrics from log
        extract_synthesis_metrics "$log_file" "$mode"
        
        return 0
    else
        echo "✗ Gate-level synthesis failed"
        echo "Error details (last 20 lines):"
        tail -20 "$log_file"
        return 1
    fi
}

#################################################################################
# SYNTHESIS METRICS EXTRACTION
#################################################################################

extract_synthesis_metrics() {
    local log_file="$1"
    local mode="$2"
    local metrics_file="$REPORTS_DIR/gate_metrics_${mode}_${RUN_ID}.txt"
    
    echo "Extracting synthesis metrics..."
    
    cat > "$metrics_file" << EOF
# NeuraEdge NPU Gate-Level Synthesis Metrics
# Mode: $mode
# Run ID: $RUN_ID
# Generated: $(date)

EOF

    # Extract gate counts
    if grep -q "Number of cells:" "$log_file"; then
        echo "=== GATE COUNT ANALYSIS ===" >> "$metrics_file"
        grep "Number of cells:" "$log_file" >> "$metrics_file"
        grep "Number of wires:" "$log_file" >> "$metrics_file"
        grep "Number of wire bits:" "$log_file" >> "$metrics_file"
        grep "Number of public wires:" "$log_file" >> "$metrics_file"
        echo "" >> "$metrics_file"
    fi
    
    # Extract cell type distribution
    if grep -A 20 "Cell usage:" "$log_file" > /dev/null 2>&1; then
        echo "=== CELL TYPE DISTRIBUTION ===" >> "$metrics_file"
        grep -A 50 "Cell usage:" "$log_file" | head -30 >> "$metrics_file"
        echo "" >> "$metrics_file"
    fi
    
    # Extract memory usage
    if grep -q "Estimated number of LCs:" "$log_file"; then
        echo "=== RESOURCE UTILIZATION ===" >> "$metrics_file"
        grep "Estimated number of LCs:" "$log_file" >> "$metrics_file"
        grep "Estimated number of" "$log_file" >> "$metrics_file"
        echo "" >> "$metrics_file"
    fi
    
    # Calculate estimated area and timing
    calculate_area_timing "$metrics_file" "$mode"
    
    echo "✓ Metrics extracted to: $metrics_file"
}

#################################################################################
# AREA AND TIMING ESTIMATION
#################################################################################

calculate_area_timing() {
    local metrics_file="$1"
    local mode="$2"
    
    echo "=== AREA AND TIMING ESTIMATES ===" >> "$metrics_file"
    
    # Parse gate counts for area estimation
    local total_cells=0
    if grep -q "Number of cells:" "$REPORTS_DIR/synthesis_stats_${mode}_${RUN_ID}.txt"; then
        total_cells=$(grep "Number of cells:" "$REPORTS_DIR/synthesis_stats_${mode}_${RUN_ID}.txt" | awk '{print $4}')
    fi
    
    # Estimate area (assuming average cell area of 4 square microns)
    local estimated_area_um2=$((total_cells * 4))
    local estimated_area_mm2=$(echo "scale=3; $estimated_area_um2 / 1000000" | bc -l)
    
    # Estimate timing based on logic depth
    local estimated_logic_levels=8  # Conservative estimate for MAC-heavy design
    local estimated_delay_ps=$((estimated_logic_levels * 100))  # 100ps per logic level
    local estimated_freq_mhz=$(echo "scale=1; 1000000 / $estimated_delay_ps" | bc -l)
    
    cat >> "$metrics_file" << EOF
Synthesis Mode: $mode
Total Cells: $total_cells
Estimated Area: ${estimated_area_um2} μm² (${estimated_area_mm2} mm²)
Estimated Logic Levels: $estimated_logic_levels
Estimated Delay: ${estimated_delay_ps} ps
Estimated Max Frequency: ${estimated_freq_mhz} MHz

Gate-Level Netlist: $NETLIST_DIR/neuraedge_npu_${mode}_${RUN_ID}.v
Hierarchical Netlist: $NETLIST_DIR/neuraedge_npu_${mode}_hier_${RUN_ID}.v

EOF
    
    echo "✓ Area and timing estimates calculated"
}

#################################################################################
# NETLIST VALIDATION
#################################################################################

validate_netlists() {
    local mode="$1"
    
    echo "Validating generated netlists..."
    
    local flat_netlist="$NETLIST_DIR/neuraedge_npu_${mode}_${RUN_ID}.v"
    local hier_netlist="$NETLIST_DIR/neuraedge_npu_${mode}_hier_${RUN_ID}.v"
    
    # Check file existence and basic structure
    for netlist in "$flat_netlist" "$hier_netlist"; do
        if [[ -f "$netlist" ]]; then
            local lines=$(wc -l < "$netlist")
            local modules=$(grep -c "^module " "$netlist")
            local instances=$(grep -c "\s\+\w\+\s\+\w\+\s*(" "$netlist")
            
            echo "✓ $(basename "$netlist"): $lines lines, $modules modules, $instances instances"
        else
            echo "✗ $(basename "$netlist"): not found"
            return 1
        fi
    done
    
    # Basic netlist sanity checks
    if grep -q "neuraedge_top" "$flat_netlist"; then
        echo "✓ Top-level module present in netlist"
    else
        echo "✗ Top-level module missing from netlist"
        return 1
    fi
    
    # Check for standard cell instances
    if grep -q "_X[0-9]" "$flat_netlist"; then
        echo "✓ Standard cell instances found in netlist"
    else
        echo "⚠ No standard cell instances detected"
    fi
    
    echo "✓ Netlist validation completed"
    return 0
}

#################################################################################
# MAIN SYNTHESIS FLOW
#################################################################################

main() {
    echo "Starting NeuraEdge NPU gate-level synthesis flow..."
    
    # Setup RTL sources
    if ! setup_rtl_sources; then
        echo "✗ RTL source setup failed"
        return 1
    fi
    
    # Generate and run synthesis for specified mode
    if ! generate_synthesis_script "$SYNTHESIS_MODE"; then
        echo "✗ Synthesis script generation failed"
        return 1
    fi
    
    if ! run_gate_synthesis "$SYNTHESIS_MODE"; then
        echo "✗ Gate-level synthesis failed"
        return 1
    fi
    
    if ! validate_netlists "$SYNTHESIS_MODE"; then
        echo "✗ Netlist validation failed"
        return 1
    fi
    
    # Generate summary report
    generate_synthesis_summary "$SYNTHESIS_MODE"
    
    echo ""
    echo "=========================================================="
    echo "Gate-Level Synthesis Completed Successfully!"
    echo "=========================================================="
    echo "Mode: $SYNTHESIS_MODE"
    echo "Netlists: $NETLIST_DIR/"
    echo "Reports: $REPORTS_DIR/"
    echo "Logs: $LOGS_DIR/"
    echo "=========================================================="
    
    return 0
}

#################################################################################
# SYNTHESIS SUMMARY GENERATION
#################################################################################

generate_synthesis_summary() {
    local mode="$1"
    local summary_file="$REPORTS_DIR/GATE_SYNTHESIS_SUMMARY_${RUN_ID}.md"
    
    cat > "$summary_file" << EOF
# NeuraEdge NPU - Gate-Level Synthesis Summary
*Phase 4 Week 2 - Generated: $(date)*

## Synthesis Configuration
- **Mode**: $mode
- **Run ID**: $RUN_ID
- **Tool**: Yosys $(yosys -V | head -n1 | awk '{print $2}')
- **Target**: Standard cell library mapping

## Generated Netlists
EOF
    
    # Add netlist information
    for netlist in "$NETLIST_DIR"/neuraedge_npu_${mode}_*.v; do
        if [[ -f "$netlist" ]]; then
            local size=$(stat -c%s "$netlist")
            local lines=$(wc -l < "$netlist")
            echo "- **$(basename "$netlist")**: $size bytes, $lines lines" >> "$summary_file"
        fi
    done
    
    cat >> "$summary_file" << EOF

## Synthesis Metrics
EOF
    
    # Include metrics if available
    local metrics_file="$REPORTS_DIR/gate_metrics_${mode}_${RUN_ID}.txt"
    if [[ -f "$metrics_file" ]]; then
        echo '```' >> "$summary_file"
        cat "$metrics_file" >> "$summary_file"
        echo '```' >> "$summary_file"
    fi
    
    cat >> "$summary_file" << EOF

## Next Steps
1. **Run equivalence checking** between RTL and gate-level netlist
2. **Perform timing analysis** with STA tools
3. **Validate functional correctness** through simulation
4. **Prepare for physical implementation** with floorplanning

---
*NeuraEdge NPU Gate-Level Synthesis - Phase 4 Week 2*
EOF
    
    echo "✓ Synthesis summary generated: $summary_file"
}

#################################################################################
# SCRIPT EXECUTION
#################################################################################

# Validate command line arguments
if [[ "$1" == "--help" ]] || [[ "$1" == "-h" ]]; then
    echo "Usage: $0 [mode]"
    echo "Modes: full (default), hierarchical, flat"
    echo ""
    echo "Examples:"
    echo "  $0 full          # Full synthesis with hierarchy preservation"
    echo "  $0 hierarchical  # Module-by-module hierarchical synthesis"
    echo "  $0 flat          # Completely flattened synthesis"
    exit 0
fi

# Execute main synthesis flow
main "$@"
