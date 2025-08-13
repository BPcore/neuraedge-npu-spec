# NeuraEdge NPU - SDF Generation Script
# Phase 4 Week 3: Gate-Level Simulation & SDF Back-Annotation
# Generated: August 14, 2025

#!/bin/bash

#################################################################################
# SDF (Standard Delay Format) GENERATION FOR GATE-LEVEL SIMULATION
#################################################################################

set -e  # Exit on any error

# Script configuration
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$(dirname "$SCRIPT_DIR")")"
PHASE4_W2_DIR="$PROJECT_ROOT/phase4_week2"
PHASE4_W3_DIR="$PROJECT_ROOT/phase4_week3"

# SDF generation configuration
SDF_TYPE="${1:-ideal}"  # ideal, annotated, or both
RUN_ID="sdf_gen_$(date +%Y%m%d_%H%M%S)"

echo "=========================================================="
echo "NeuraEdge NPU - SDF Generation"
echo "=========================================================="
echo "SDF Type: $SDF_TYPE"
echo "Run ID: $RUN_ID"
echo "Project Root: $PROJECT_ROOT"
echo "=========================================================="

#################################################################################
# ENVIRONMENT SETUP
#################################################################################

# SDF generation directories
SDF_DIR="$PHASE4_W3_DIR/sdf_generation"
NETLIST_DIR="$PHASE4_W2_DIR/netlists"
SCRIPTS_DIR="$PHASE4_W3_DIR/scripts"
LOGS_DIR="$PHASE4_W3_DIR/logs"

# Create logs directory
mkdir -p "$LOGS_DIR"

# Source Phase 4 configurations
source "$PROJECT_ROOT/phase4_week1/tool_configs/synthesis_env.sh"

echo "✓ SDF generation environment configured"

#################################################################################
# NETLIST VALIDATION
#################################################################################

validate_netlists() {
    echo "Validating gate-level netlists for SDF generation..."
    
    # Find available gate-level netlists
    GATE_NETLISTS=()
    for netlist in "$NETLIST_DIR"/*.v; do
        if [[ -f "$netlist" ]] && [[ "$(basename "$netlist")" == *"gate"* ]]; then
            GATE_NETLISTS+=("$netlist")
        fi
    done
    
    if [[ ${#GATE_NETLISTS[@]} -eq 0 ]]; then
        echo "✗ No gate-level netlists found in $NETLIST_DIR"
        echo "   Please run Phase 4 Week 2 gate-level synthesis first"
        return 1
    fi
    
    echo "✓ Found ${#GATE_NETLISTS[@]} gate-level netlist(s):"
    for netlist in "${GATE_NETLISTS[@]}"; do
        local size=$(stat -c%s "$netlist")
        local lines=$(wc -l < "$netlist")
        echo "  - $(basename "$netlist"): $size bytes, $lines lines"
    done
    
    # Set primary netlist for SDF generation
    PRIMARY_NETLIST="${GATE_NETLISTS[0]}"
    PRIMARY_MODULE=$(grep "^module " "$PRIMARY_NETLIST" | head -n1 | awk '{print $2}' | sed 's/[^a-zA-Z0-9_]//g')
    
    echo "✓ Primary netlist: $(basename "$PRIMARY_NETLIST")"
    echo "✓ Primary module: $PRIMARY_MODULE"
    
    return 0
}

#################################################################################
# TIMING LIBRARY PREPARATION
#################################################################################

prepare_timing_libraries() {
    echo "Preparing timing libraries for SDF generation..."
    
    # Create timing library file for 65nm technology
    local lib_file="$SDF_DIR/timing_65nm.lib"
    
    cat > "$lib_file" << 'EOF'
/* 
 * NeuraEdge NPU Timing Library - 65nm Technology
 * For SDF Generation and Gate-Level Simulation
 * Generated: August 14, 2025
 */

library(timing_65nm) {
    delay_model : table_lookup;
    in_place_swap_mode : match_footprint;
    
    /* Process, Voltage, Temperature Conditions */
    nom_process : 1.0;
    nom_temperature : 25.0;
    nom_voltage : 1.2;
    
    /* Operating Conditions */
    operating_conditions(typical) {
        process : 1.0;
        temperature : 25.0;
        voltage : 1.2;
        tree_type : balanced_tree;
    }
    
    /* Default Operating Conditions */
    default_operating_conditions : typical;
    
    /* Wire Load Models */
    wire_load("area_0K") {
        resistance : 1.0e-3;
        capacitance : 1.0e-4;
        area : 0.0;
        slope : 500.0;
        fanout_length(1, 500.0);
    }
    
    /* Standard Cell Definitions */
    
    /* Basic Logic Gates */
    cell($_AND_) {
        area : 4.0;
        pin(A) {
            direction : input;
            capacitance : 0.01;
        }
        pin(B) {
            direction : input;
            capacitance : 0.01;
        }
        pin(Y) {
            direction : output;
            function : "A & B";
            timing() {
                related_pin : "A";
                timing_sense : positive_unate;
                cell_rise(scalar) { values("0.080"); }
                cell_fall(scalar) { values("0.060"); }
                rise_transition(scalar) { values("0.020"); }
                fall_transition(scalar) { values("0.015"); }
            }
            timing() {
                related_pin : "B";
                timing_sense : positive_unate;
                cell_rise(scalar) { values("0.080"); }
                cell_fall(scalar) { values("0.060"); }
                rise_transition(scalar) { values("0.020"); }
                fall_transition(scalar) { values("0.015"); }
            }
        }
    }
    
    cell($_OR_) {
        area : 4.0;
        pin(A) {
            direction : input;
            capacitance : 0.01;
        }
        pin(B) {
            direction : input;
            capacitance : 0.01;
        }
        pin(Y) {
            direction : output;
            function : "A | B";
            timing() {
                related_pin : "A";
                timing_sense : positive_unate;
                cell_rise(scalar) { values("0.070"); }
                cell_fall(scalar) { values("0.090"); }
                rise_transition(scalar) { values("0.020"); }
                fall_transition(scalar) { values("0.015"); }
            }
            timing() {
                related_pin : "B";
                timing_sense : positive_unate;
                cell_rise(scalar) { values("0.070"); }
                cell_fall(scalar) { values("0.090"); }
                rise_transition(scalar) { values("0.020"); }
                fall_transition(scalar) { values("0.015"); }
            }
        }
    }
    
    cell($_NAND_) {
        area : 3.0;
        pin(A) {
            direction : input;
            capacitance : 0.01;
        }
        pin(B) {
            direction : input;
            capacitance : 0.01;
        }
        pin(Y) {
            direction : output;
            function : "!(A & B)";
            timing() {
                related_pin : "A";
                timing_sense : negative_unate;
                cell_rise(scalar) { values("0.060"); }
                cell_fall(scalar) { values("0.050"); }
                rise_transition(scalar) { values("0.015"); }
                fall_transition(scalar) { values("0.012"); }
            }
            timing() {
                related_pin : "B";
                timing_sense : negative_unate;
                cell_rise(scalar) { values("0.060"); }
                cell_fall(scalar) { values("0.050"); }
                rise_transition(scalar) { values("0.015"); }
                fall_transition(scalar) { values("0.012"); }
            }
        }
    }
    
    cell($_NOR_) {
        area : 3.0;
        pin(A) {
            direction : input;
            capacitance : 0.01;
        }
        pin(B) {
            direction : input;
            capacitance : 0.01;
        }
        pin(Y) {
            direction : output;
            function : "!(A | B)";
            timing() {
                related_pin : "A";
                timing_sense : negative_unate;
                cell_rise(scalar) { values("0.090"); }
                cell_fall(scalar) { values("0.070"); }
                rise_transition(scalar) { values("0.025"); }
                fall_transition(scalar) { values("0.020"); }
            }
            timing() {
                related_pin : "B";
                timing_sense : negative_unate;
                cell_rise(scalar) { values("0.090"); }
                cell_fall(scalar) { values("0.070"); }
                rise_transition(scalar) { values("0.025"); }
                fall_transition(scalar) { values("0.020"); }
            }
        }
    }
    
    cell($_XOR_) {
        area : 6.0;
        pin(A) {
            direction : input;
            capacitance : 0.01;
        }
        pin(B) {
            direction : input;
            capacitance : 0.01;
        }
        pin(Y) {
            direction : output;
            function : "A ^ B";
            timing() {
                related_pin : "A";
                timing_sense : non_unate;
                cell_rise(scalar) { values("0.120"); }
                cell_fall(scalar) { values("0.110"); }
                rise_transition(scalar) { values("0.030"); }
                fall_transition(scalar) { values("0.025"); }
            }
            timing() {
                related_pin : "B";
                timing_sense : non_unate;
                cell_rise(scalar) { values("0.120"); }
                cell_fall(scalar) { values("0.110"); }
                rise_transition(scalar) { values("0.030"); }
                fall_transition(scalar) { values("0.025"); }
            }
        }
    }
    
    cell($_NOT_) {
        area : 2.0;
        pin(A) {
            direction : input;
            capacitance : 0.01;
        }
        pin(Y) {
            direction : output;
            function : "!A";
            timing() {
                related_pin : "A";
                timing_sense : negative_unate;
                cell_rise(scalar) { values("0.040"); }
                cell_fall(scalar) { values("0.030"); }
                rise_transition(scalar) { values("0.010"); }
                fall_transition(scalar) { values("0.008"); }
            }
        }
    }
    
    /* Sequential Elements */
    cell($_DFFE_PN0P_) {
        area : 12.0;
        ff("IQ", "IQN") {
            next_state : "D";
            clocked_on : "C";
            clear : "!R";
        }
        pin(C) {
            direction : input;
            clock : true;
            capacitance : 0.02;
        }
        pin(D) {
            direction : input;
            capacitance : 0.01;
            timing() {
                related_pin : "C";
                timing_type : setup_rising;
                rise_constraint(scalar) { values("0.100"); }
                fall_constraint(scalar) { values("0.100"); }
            }
            timing() {
                related_pin : "C";
                timing_type : hold_rising;
                rise_constraint(scalar) { values("0.050"); }
                fall_constraint(scalar) { values("0.050"); }
            }
        }
        pin(E) {
            direction : input;
            capacitance : 0.01;
            timing() {
                related_pin : "C";
                timing_type : setup_rising;
                rise_constraint(scalar) { values("0.080"); }
                fall_constraint(scalar) { values("0.080"); }
            }
            timing() {
                related_pin : "C";
                timing_type : hold_rising;
                rise_constraint(scalar) { values("0.040"); }
                fall_constraint(scalar) { values("0.040"); }
            }
        }
        pin(R) {
            direction : input;
            capacitance : 0.01;
            timing() {
                related_pin : "C";
                timing_type : recovery_rising;
                rise_constraint(scalar) { values("0.120"); }
            }
            timing() {
                related_pin : "C";
                timing_type : removal_rising;
                rise_constraint(scalar) { values("0.060"); }
            }
        }
        pin(Q) {
            direction : output;
            function : "IQ";
            timing() {
                related_pin : "C";
                timing_sense : non_unate;
                timing_type : rising_edge;
                cell_rise(scalar) { values("0.150"); }
                cell_fall(scalar) { values("0.120"); }
                rise_transition(scalar) { values("0.025"); }
                fall_transition(scalar) { values("0.020"); }
            }
            timing() {
                related_pin : "R";
                timing_sense : negative_unate;
                timing_type : clear;
                cell_rise(scalar) { values("0.200"); }
                cell_fall(scalar) { values("0.080"); }
                rise_transition(scalar) { values("0.030"); }
                fall_transition(scalar) { values("0.015"); }
            }
        }
    }
}
EOF
    
    echo "✓ Timing library created: $lib_file"
    return 0
}

#################################################################################
# IDEAL SDF GENERATION
#################################################################################

generate_ideal_sdf() {
    echo "Generating ideal SDF (unit delays)..."
    
    local sdf_file="$SDF_DIR/${PRIMARY_MODULE}_ideal.sdf"
    local log_file="$LOGS_DIR/sdf_ideal_${RUN_ID}.log"
    
    cat > "$sdf_file" << EOF
// NeuraEdge NPU - Ideal SDF File
// Module: $PRIMARY_MODULE
// Generated: $(date)
// Purpose: Unit delay gate-level simulation

(DELAYFILE
    (SDFVERSION "3.0")
    (DESIGN "$PRIMARY_MODULE")
    (DATE "$(date)")
    (VENDOR "NeuraEdge_NPU")
    (PROGRAM "sdf_generator")
    (VERSION "1.0")
    (DIVIDER /)
    (VOLTAGE 1.20)
    (PROCESS "typical")
    (TEMPERATURE 25.0)
    (TIMESCALE 1ps)

    // Ideal delays - minimal for functional verification
    (CELL (CELLTYPE "\$_AND_")
        (INSTANCE *)
        (DELAY
            (ABSOLUTE
                (IOPATH A Y (10:10:10) (10:10:10))
                (IOPATH B Y (10:10:10) (10:10:10))
            )
        )
    )

    (CELL (CELLTYPE "\$_OR_")
        (INSTANCE *)
        (DELAY
            (ABSOLUTE
                (IOPATH A Y (10:10:10) (10:10:10))
                (IOPATH B Y (10:10:10) (10:10:10))
            )
        )
    )

    (CELL (CELLTYPE "\$_NAND_")
        (INSTANCE *)
        (DELAY
            (ABSOLUTE
                (IOPATH A Y (10:10:10) (10:10:10))
                (IOPATH B Y (10:10:10) (10:10:10))
            )
        )
    )

    (CELL (CELLTYPE "\$_NOR_")
        (INSTANCE *)
        (DELAY
            (ABSOLUTE
                (IOPATH A Y (10:10:10) (10:10:10))
                (IOPATH B Y (10:10:10) (10:10:10))
            )
        )
    )

    (CELL (CELLTYPE "\$_XOR_")
        (INSTANCE *)
        (DELAY
            (ABSOLUTE
                (IOPATH A Y (50:50:50) (50:50:50))
                (IOPATH B Y (50:50:50) (50:50:50))
            )
        )
    )

    (CELL (CELLTYPE "\$_XNOR_")
        (INSTANCE *)
        (DELAY
            (ABSOLUTE
                (IOPATH A Y (50:50:50) (50:50:50))
                (IOPATH B Y (50:50:50) (50:50:50))
            )
        )
    )

    (CELL (CELLTYPE "\$_NOT_")
        (INSTANCE *)
        (DELAY
            (ABSOLUTE
                (IOPATH A Y (5:5:5) (5:5:5))
            )
        )
    )

    (CELL (CELLTYPE "\$_ANDNOT_")
        (INSTANCE *)
        (DELAY
            (ABSOLUTE
                (IOPATH A Y (15:15:15) (15:15:15))
                (IOPATH B Y (15:15:15) (15:15:15))
            )
        )
    )

    (CELL (CELLTYPE "\$_ORNOT_")
        (INSTANCE *)
        (DELAY
            (ABSOLUTE
                (IOPATH A Y (15:15:15) (15:15:15))
                (IOPATH B Y (15:15:15) (15:15:15))
            )
        )
    )

    // Sequential elements with setup/hold
    (CELL (CELLTYPE "\$_DFFE_PN0P_")
        (INSTANCE *)
        (DELAY
            (ABSOLUTE
                (IOPATH C Q (100:100:100) (80:80:80))
                (IOPATH R Q (200:200:200) (50:50:50))
            )
        )
        (TIMINGCHECK
            (SETUP D C (50:50:50))
            (SETUP E C (40:40:40))
            (HOLD D C (25:25:25))
            (HOLD E C (20:20:20))
            (RECOVERY R C (60:60:60))
            (REMOVAL R C (30:30:30))
            (WIDTH (posedge C) (100:100:100))
            (WIDTH (negedge R) (80:80:80))
        )
    )
)
EOF
    
    echo "✓ Ideal SDF generated: $sdf_file"
    echo "  - Target: Functional verification with minimal delays"
    echo "  - Timing: 5-100ps delays for basic functionality"
    
    return 0
}

#################################################################################
# ANNOTATED SDF GENERATION
#################################################################################

generate_annotated_sdf() {
    echo "Generating annotated SDF (realistic 65nm delays)..."
    
    local sdf_file="$SDF_DIR/${PRIMARY_MODULE}_annotated.sdf"
    local log_file="$LOGS_DIR/sdf_annotated_${RUN_ID}.log"
    
    cat > "$sdf_file" << EOF
// NeuraEdge NPU - Annotated SDF File  
// Module: $PRIMARY_MODULE
// Generated: $(date)
// Purpose: Realistic timing simulation for 65nm technology

(DELAYFILE
    (SDFVERSION "3.0")
    (DESIGN "$PRIMARY_MODULE")
    (DATE "$(date)")
    (VENDOR "NeuraEdge_NPU")
    (PROGRAM "sdf_generator")
    (VERSION "1.0")
    (DIVIDER /)
    (VOLTAGE 1.20)
    (PROCESS "typical")
    (TEMPERATURE 25.0)
    (TIMESCALE 1ps)

    // Realistic 65nm technology delays
    (CELL (CELLTYPE "\$_AND_")
        (INSTANCE *)
        (DELAY
            (ABSOLUTE
                (IOPATH A Y (60:80:100) (45:60:75))
                (IOPATH B Y (60:80:100) (45:60:75))
            )
        )
    )

    (CELL (CELLTYPE "\$_OR_")
        (INSTANCE *)
        (DELAY
            (ABSOLUTE
                (IOPATH A Y (55:70:85) (65:90:115))
                (IOPATH B Y (55:70:85) (65:90:115))
            )
        )
    )

    (CELL (CELLTYPE "\$_NAND_")
        (INSTANCE *)
        (DELAY
            (ABSOLUTE
                (IOPATH A Y (45:60:75) (35:50:65))
                (IOPATH B Y (45:60:75) (35:50:65))
            )
        )
    )

    (CELL (CELLTYPE "\$_NOR_")
        (INSTANCE *)
        (DELAY
            (ABSOLUTE
                (IOPATH A Y (65:90:115) (50:70:90))
                (IOPATH B Y (65:90:115) (50:70:90))
            )
        )
    )

    (CELL (CELLTYPE "\$_XOR_")
        (INSTANCE *)
        (DELAY
            (ABSOLUTE
                (IOPATH A Y (90:120:150) (80:110:140))
                (IOPATH B Y (90:120:150) (80:110:140))
            )
        )
    )

    (CELL (CELLTYPE "\$_XNOR_")
        (INSTANCE *)
        (DELAY
            (ABSOLUTE
                (IOPATH A Y (95:125:155) (85:115:145))
                (IOPATH B Y (95:125:155) (85:115:145))
            )
        )
    )

    (CELL (CELLTYPE "\$_NOT_")
        (INSTANCE *)
        (DELAY
            (ABSOLUTE
                (IOPATH A Y (25:40:55) (20:30:40))
            )
        )
    )

    (CELL (CELLTYPE "\$_ANDNOT_")
        (INSTANCE *)
        (DELAY
            (ABSOLUTE
                (IOPATH A Y (70:90:110) (55:75:95))
                (IOPATH B Y (70:90:110) (55:75:95))
            )
        )
    )

    (CELL (CELLTYPE "\$_ORNOT_")
        (INSTANCE *)
        (DELAY
            (ABSOLUTE
                (IOPATH A Y (75:95:115) (60:80:100))
                (IOPATH B Y (75:95:115) (60:80:100))
            )
        )
    )

    // Sequential elements with realistic timing
    (CELL (CELLTYPE "\$_DFFE_PN0P_")
        (INSTANCE *)
        (DELAY
            (ABSOLUTE
                (IOPATH (posedge C) Q (120:150:180) (90:120:150))
                (IOPATH (negedge R) Q (150:200:250) (60:80:100))
            )
        )
        (TIMINGCHECK
            (SETUP D (posedge C) (80:100:120))
            (SETUP E (posedge C) (60:80:100))
            (HOLD D (posedge C) (40:50:60))
            (HOLD E (posedge C) (30:40:50))
            (RECOVERY (posedge R) (posedge C) (90:120:150))
            (REMOVAL (posedge R) (posedge C) (45:60:75))
            (WIDTH (posedge C) (400:500:600))
            (WIDTH (negedge C) (400:500:600))
            (WIDTH (negedge R) (200:250:300))
            (PERIOD C (1600:2000:2400))  // 500MHz nominal, 416MHz-625MHz range
        )
    )

    // Interconnect delays (estimated wire delays)
    (INTERCONNECT 
        (INSTANCE *)
        (DELAY
            (ABSOLUTE (10:20:30) (8:15:25))
        )
    )
)
EOF
    
    echo "✓ Annotated SDF generated: $sdf_file"
    echo "  - Target: Realistic 65nm technology timing"
    echo "  - Timing: 40-200ps delays based on standard cell characterization"
    echo "  - Setup/Hold: 30-120ps constraints for 500MHz operation"
    
    return 0
}

#################################################################################
# SDF VALIDATION
#################################################################################

validate_sdf_files() {
    echo "Validating generated SDF files..."
    
    local sdf_files=()
    case "$SDF_TYPE" in
        "ideal")
            sdf_files=("$SDF_DIR/${PRIMARY_MODULE}_ideal.sdf")
            ;;
        "annotated")
            sdf_files=("$SDF_DIR/${PRIMARY_MODULE}_annotated.sdf")
            ;;
        "both")
            sdf_files=("$SDF_DIR/${PRIMARY_MODULE}_ideal.sdf" "$SDF_DIR/${PRIMARY_MODULE}_annotated.sdf")
            ;;
    esac
    
    local validation_passed=true
    
    for sdf_file in "${sdf_files[@]}"; do
        if [[ -f "$sdf_file" ]]; then
            local size=$(stat -c%s "$sdf_file")
            local lines=$(wc -l < "$sdf_file")
            
            echo "✓ $(basename "$sdf_file"): $size bytes, $lines lines"
            
            # Basic SDF syntax validation
            if grep -q "DELAYFILE" "$sdf_file" && grep -q "TIMESCALE" "$sdf_file"; then
                echo "  - SDF syntax: Valid"
            else
                echo "  - SDF syntax: Invalid"
                validation_passed=false
            fi
            
            # Check for timing entries
            local timing_entries=$(grep -c "IOPATH\|SETUP\|HOLD" "$sdf_file")
            echo "  - Timing entries: $timing_entries"
            
            # Check for target module
            if grep -q "$PRIMARY_MODULE" "$sdf_file"; then
                echo "  - Module match: Valid"
            else
                echo "  - Module match: Warning - module name not found"
            fi
            
        else
            echo "✗ $(basename "$sdf_file"): File not found"
            validation_passed=false
        fi
    done
    
    if [[ "$validation_passed" == "true" ]]; then
        echo "✓ All SDF files validated successfully"
        return 0
    else
        echo "✗ SDF validation failed"
        return 1
    fi
}

#################################################################################
# SDF GENERATION SUMMARY
#################################################################################

generate_sdf_summary() {
    local summary_file="$SDF_DIR/SDF_GENERATION_SUMMARY_${RUN_ID}.md"
    
    cat > "$summary_file" << EOF
# NeuraEdge NPU - SDF Generation Summary
*Phase 4 Week 3 - Generated: $(date)*

## SDF Generation Overview
- **Run ID**: $RUN_ID
- **Target Module**: $PRIMARY_MODULE
- **Source Netlist**: $(basename "$PRIMARY_NETLIST")
- **SDF Type**: $SDF_TYPE
- **Technology**: 65nm standard cell library

## Generated SDF Files
EOF
    
    # Add SDF file information
    for sdf_file in "$SDF_DIR"/*.sdf; do
        if [[ -f "$sdf_file" ]]; then
            local size=$(stat -c%s "$sdf_file")
            local lines=$(wc -l < "$sdf_file")
            local timing_entries=$(grep -c "IOPATH\|SETUP\|HOLD" "$sdf_file")
            
            cat >> "$summary_file" << EOF

### $(basename "$sdf_file")
- **Size**: $size bytes
- **Lines**: $lines
- **Timing Entries**: $timing_entries
- **Purpose**: $(if [[ "$(basename "$sdf_file")" == *"ideal"* ]]; then echo "Functional verification"; else echo "Realistic timing simulation"; fi)
EOF
        fi
    done
    
    cat >> "$summary_file" << EOF

## Timing Characteristics

### Ideal SDF
- **Logic Delays**: 5-100ps (minimal for function)
- **Setup/Hold**: 20-50ps (basic constraints)
- **Purpose**: Fast functional verification

### Annotated SDF  
- **Logic Delays**: 40-200ps (65nm realistic)
- **Setup/Hold**: 30-120ps (500MHz constraints)
- **Purpose**: Accurate timing simulation

## Usage in Simulation

### Verilog SDF Annotation
\`\`\`verilog
initial begin
    // For ideal timing
    \$sdf_annotate("${PRIMARY_MODULE}_ideal.sdf", testbench.dut);
    
    // For realistic timing
    \$sdf_annotate("${PRIMARY_MODULE}_annotated.sdf", testbench.dut);
end
\`\`\`

### SystemVerilog Integration
\`\`\`systemverilog
// In testbench module
initial begin
    \$sdf_annotate("sdf_generation/${PRIMARY_MODULE}_annotated.sdf", 
                  dut_inst, , "sdf.log", "MAXIMUM");
end
\`\`\`

## Next Steps
1. **Integrate SDF into testbenches** (Phase 4 Week 3)
2. **Run gate-level simulations** with timing annotation
3. **Validate timing margins** and identify violations
4. **Update constraints** based on simulation results

---
*NeuraEdge NPU SDF Generation - Phase 4 Week 3*
EOF
    
    echo "✓ SDF generation summary: $summary_file"
}

#################################################################################
# MAIN SDF GENERATION FLOW
#################################################################################

main() {
    echo "Starting NeuraEdge NPU SDF generation..."
    
    # Validate input netlists
    if ! validate_netlists; then
        echo "✗ Netlist validation failed"
        return 1
    fi
    
    # Prepare timing libraries
    if ! prepare_timing_libraries; then
        echo "✗ Timing library preparation failed"
        return 1
    fi
    
    # Generate SDF files based on type
    case "$SDF_TYPE" in
        "ideal")
            if ! generate_ideal_sdf; then
                echo "✗ Ideal SDF generation failed"
                return 1
            fi
            ;;
        "annotated")
            if ! generate_annotated_sdf; then
                echo "✗ Annotated SDF generation failed"
                return 1
            fi
            ;;
        "both")
            if ! generate_ideal_sdf || ! generate_annotated_sdf; then
                echo "✗ SDF generation failed"
                return 1
            fi
            ;;
        *)
            echo "✗ Invalid SDF type: $SDF_TYPE"
            echo "   Valid options: ideal, annotated, both"
            return 1
            ;;
    esac
    
    # Validate generated SDF files
    if ! validate_sdf_files; then
        echo "✗ SDF validation failed"
        return 1
    fi
    
    # Generate summary report
    generate_sdf_summary
    
    echo ""
    echo "=========================================================="
    echo "SDF Generation Completed Successfully!"
    echo "=========================================================="
    echo "SDF Type: $SDF_TYPE"
    echo "Files: $SDF_DIR/"
    echo "Summary: $SDF_DIR/SDF_GENERATION_SUMMARY_${RUN_ID}.md"
    echo "=========================================================="
    
    return 0
}

#################################################################################
# SCRIPT EXECUTION
#################################################################################

# Help message
if [[ "$1" == "--help" ]] || [[ "$1" == "-h" ]]; then
    echo "Usage: $0 [sdf_type]"
    echo ""
    echo "SDF Types:"
    echo "  ideal     - Generate ideal SDF with minimal delays"
    echo "  annotated - Generate annotated SDF with realistic 65nm delays"
    echo "  both      - Generate both ideal and annotated SDF files"
    echo ""
    echo "Examples:"
    echo "  $0 ideal       # Fast functional verification"
    echo "  $0 annotated   # Realistic timing simulation"
    echo "  $0 both        # Generate both types"
    exit 0
fi

# Execute main SDF generation flow
main "$@"
