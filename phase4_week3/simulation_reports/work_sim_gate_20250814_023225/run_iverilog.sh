#!/bin/bash
set -e

cd "/home/bandhan/Documents/BP core/VS CODE/phase4_week3/simulation_reports/work_sim_gate_20250814_023225"

echo "Compiling gate-level simulation..."

# Compile with SDF support
iverilog -g2012 \
    -DSDF_TYPE="\"annotated\"" \
    -DSIM_TYPE="\"functional\"" \
    -I"/home/bandhan/Documents/BP core/VS CODE/phase4_week2/netlists" \
    -I"/home/bandhan/Documents/BP core/VS CODE/phase4_week3/testbench_integration" \
    -I"/home/bandhan/Documents/BP core/VS CODE/phase4_week3/sdf_generation" \
    -o gate_sim \
    "/home/bandhan/Documents/BP core/VS CODE/phase4_week2/netlists/neuraedge_pe_gate.v" \
    "/home/bandhan/Documents/BP core/VS CODE/phase4_week3/testbench_integration/tb_neuraedge_pe_gate.sv" \
    2>&1 | tee "/home/bandhan/Documents/BP core/VS CODE/phase4_week3/logs/iverilog_compile_sim_gate_20250814_023225.log"

if [[ ${PIPESTATUS[0]} -ne 0 ]]; then
    echo "✗ Compilation failed - check /home/bandhan/Documents/BP core/VS CODE/phase4_week3/logs/iverilog_compile_sim_gate_20250814_023225.log"
    exit 1
fi

echo "✓ Compilation successful"

echo "Running gate-level simulation..."

# Run simulation with timing
vvp gate_sim \
    +sdf_verbose \
    +vcd_file=gate_simulation.vcd \
    2>&1 | tee "/home/bandhan/Documents/BP core/VS CODE/phase4_week3/logs/iverilog_sim_gate_20250814_023225.log"

echo "✓ Simulation completed"
