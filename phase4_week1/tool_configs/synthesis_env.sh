# NeuraEdge NPU - Tool Configuration
# Phase 4 Week 1: Synthesis Preparation & Constraint Finalization
# Generated: August 14, 2025

#################################################################################
# YOSYS CONFIGURATION
#################################################################################

# Yosys version and configuration
export YOSYS_VERSION="0.55+112"
export YOSYS_ENABLE_PLUGINS=1
export YOSYS_ENABLE_ABC=1
export YOSYS_ENABLE_VERIFIC=0

# Yosys optimization settings
export YOSYS_OPT_LEVEL=2
export YOSYS_ABC_FAST=1
export YOSYS_TECHMAP_VERBOSE=1

# Memory and resource limits
export YOSYS_MAX_MEMORY="8GB"
export YOSYS_MAX_THREADS=8

#################################################################################
# ABC CONFIGURATION
#################################################################################

# ABC optimization settings
export ABC_OPTIMIZATION_LEVEL="fast"
export ABC_DELAY_TARGET=100
export ABC_AREA_EFFORT=2

# ABC command sequence for different optimization modes
ABC_BASELINE_CMD="strash; dretime; map; topo; stime"
ABC_TIMING_CMD="strash; dretime; dch; map; topo; stime"
ABC_AREA_CMD="strash; refactor; balance; rewrite; map; topo; stime"
ABC_POWER_CMD="strash; refactor; balance; rewrite; dretime; map; topo; stime"

#################################################################################
# LIBRARY CONFIGURATION
#################################################################################

# Standard cell library paths
export STDCELL_LIB_PATH="./library_setup/stdcells.lib"
export STDCELL_LEF_PATH="./library_setup/stdcells.lef"
export STDCELL_VERILOG_PATH="./library_setup/stdcells.v"

# Technology parameters
export TECHNOLOGY_NODE="65nm"
export VOLTAGE_NOMINAL="1.2V"
export TEMPERATURE_NOMINAL="25C"

# Process corners
export CORNER_FAST="ff_1p32v_m40c"
export CORNER_SLOW="ss_1p08v_125c"
export CORNER_TYPICAL="tt_1p2v_25c"

#################################################################################
# CONSTRAINT CONFIGURATION
#################################################################################

# Clock specifications
export CLK_PERIOD_TARGET="2.0"     # 500 MHz target
export CLK_PERIOD_RELAXED="4.0"    # 250 MHz fallback
export CLK_UNCERTAINTY="0.1"       # 100ps uncertainty
export CLK_JITTER="0.1"           # 100ps jitter

# Timing margins
export SETUP_MARGIN="0.1"          # 100ps setup margin
export HOLD_MARGIN="0.05"          # 50ps hold margin
export INPUT_DELAY_MAX="0.8"       # 800ps input delay
export OUTPUT_DELAY_MAX="0.8"      # 800ps output delay

#################################################################################
# SYNTHESIS FLOW CONFIGURATION
#################################################################################

# Synthesis modes
SYNTH_MODE_BASELINE="baseline"
SYNTH_MODE_TIMING="timing"
SYNTH_MODE_AREA="area"
SYNTH_MODE_POWER="power"

# Default synthesis settings
export SYNTH_FLATTEN="auto"
export SYNTH_RETIME=1
export SYNTH_ABC=1
export SYNTH_SHARE_ALL=1

# Optimization controls
export OPT_MERGE=1
export OPT_MUXTREE=1
export OPT_REDUCE=1
export OPT_SHARE=1
export OPT_CLEAN=1

#################################################################################
# VERIFICATION CONFIGURATION
#################################################################################

# Formal verification settings
export FORMAL_ENGINE="abc_pdr"
export FORMAL_TIMEOUT=300
export FORMAL_DEPTH=100

# Equivalence checking
export EQV_CHECK_ENABLE=1
export EQV_CHECK_TIMEOUT=600

#################################################################################
# REPORTING CONFIGURATION
#################################################################################

# Report generation settings
export REPORT_TIMING=1
export REPORT_AREA=1
export REPORT_POWER=1
export REPORT_UTILIZATION=1

# Report detail levels
export REPORT_DETAIL_LEVEL="medium"
export REPORT_MAX_PATHS=100
export REPORT_CRITICAL_RANGE="1.0"

#################################################################################
# DEBUG AND LOGGING
#################################################################################

# Debug settings
export DEBUG_LEVEL=2
export VERBOSE_LOGGING=1
export TRACE_SYNTHESIS=0

# Log file settings
export LOG_ROTATION=1
export LOG_MAX_SIZE="100MB"
export LOG_KEEP_DAYS=30

#################################################################################
# PLATFORM SPECIFIC SETTINGS
#################################################################################

# Operating system detection and configuration
case "$(uname -s)" in
    Linux*)
        export PLATFORM="Linux"
        export NUM_CORES=$(nproc)
        export MEMORY_TOTAL=$(free -g | awk '/^Mem:/{print $2}')
        ;;
    Darwin*)
        export PLATFORM="macOS"
        export NUM_CORES=$(sysctl -n hw.ncpu)
        export MEMORY_TOTAL=$(sysctl -n hw.memsize | awk '{print int($1/1024/1024/1024)}')
        ;;
    CYGWIN*|MINGW*|MSYS*)
        export PLATFORM="Windows"
        export NUM_CORES=${NUMBER_OF_PROCESSORS}
        export MEMORY_TOTAL="8"  # Default assumption
        ;;
    *)
        export PLATFORM="Unknown"
        export NUM_CORES=4
        export MEMORY_TOTAL=8
        ;;
esac

# Resource allocation based on available hardware
export SYNTH_THREADS=$(( NUM_CORES > 8 ? 8 : NUM_CORES ))
export SYNTH_MEMORY=$(( MEMORY_TOTAL > 16 ? 16 : MEMORY_TOTAL ))

#################################################################################
# ENVIRONMENT VALIDATION
#################################################################################

validate_environment() {
    echo "Validating synthesis environment..."
    
    # Check required tools
    tools=("yosys" "abc")
    for tool in "${tools[@]}"; do
        if ! command -v "$tool" &> /dev/null; then
            echo "WARNING: $tool not found in PATH"
        else
            echo "✓ $tool available"
        fi
    done
    
    # Check resource availability
    echo "Platform: $PLATFORM"
    echo "CPU Cores: $NUM_CORES (using $SYNTH_THREADS for synthesis)"
    echo "Memory: ${MEMORY_TOTAL}GB (allocating ${SYNTH_MEMORY}GB for synthesis)"
    
    # Check library files
    if [[ -f "$STDCELL_LIB_PATH" ]]; then
        echo "✓ Standard cell library found"
    else
        echo "WARNING: Standard cell library not found at $STDCELL_LIB_PATH"
    fi
    
    echo "Environment validation complete."
}

#################################################################################
# TOOL VERSION MANAGEMENT
#################################################################################

check_tool_versions() {
    echo "Checking tool versions..."
    
    # Yosys version check
    if command -v yosys &> /dev/null; then
        YOSYS_ACTUAL=$(yosys -V | head -n1 | awk '{print $2}')
        echo "Yosys: $YOSYS_ACTUAL (required: $YOSYS_VERSION)"
        
        if [[ "$YOSYS_ACTUAL" != "$YOSYS_VERSION" ]]; then
            echo "WARNING: Yosys version mismatch"
        fi
    fi
    
    # ABC version check
    if command -v abc &> /dev/null; then
        ABC_ACTUAL=$(abc -q 'print_version; quit' 2>/dev/null | head -n1)
        echo "ABC: $ABC_ACTUAL"
    fi
    
    echo "Tool version check complete."
}

#################################################################################
# CONFIGURATION EXPORT
#################################################################################

# Export all configuration for use in synthesis scripts
export_config() {
    cat << EOF
# NeuraEdge NPU Synthesis Configuration Summary
# Platform: $PLATFORM
# Yosys: $YOSYS_VERSION
# Target Clock: ${CLK_PERIOD_TARGET}ns ($(echo "scale=1; 1000/$CLK_PERIOD_TARGET" | bc)MHz)
# Technology: $TECHNOLOGY_NODE @ $VOLTAGE_NOMINAL
# Threads: $SYNTH_THREADS
# Memory: ${SYNTH_MEMORY}GB

# Library Paths:
# - Liberty: $STDCELL_LIB_PATH
# - LEF: $STDCELL_LEF_PATH
# - Verilog: $STDCELL_VERILOG_PATH

# Configuration loaded successfully.
EOF
}

#################################################################################
# INITIALIZATION
#################################################################################

# Run environment validation when sourced
if [[ "${BASH_SOURCE[0]}" == "${0}" ]]; then
    # Script is being executed directly
    validate_environment
    check_tool_versions
    export_config
else
    # Script is being sourced
    echo "NeuraEdge NPU tool configuration loaded."
fi
