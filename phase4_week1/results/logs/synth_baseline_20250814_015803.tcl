# NeuraEdge NPU Synthesis Script - Mode: baseline
# Generated: Thu 14 Aug 2025 01:58:03 AM IST

# Read RTL sources with include paths
read_verilog -sv \
    -Irtl/top -Irtl/router -Irtl/tile -Irtl/noc -Irtl/pe -Irtl/common \
    /home/bandhan/Documents/BP core/VS CODE/rtl/top/neuraedge_top_simple.v /home/bandhan/Documents/BP core/VS CODE/rtl/tile/neuraedge_tile.v /home/bandhan/Documents/BP core/VS CODE/rtl/tile/tile_controller.v /home/bandhan/Documents/BP core/VS CODE/rtl/tile/tile_memory.v /home/bandhan/Documents/BP core/VS CODE/rtl/tile/noc_router.v /home/bandhan/Documents/BP core/VS CODE/rtl/pe/neuraedge_pe.v /home/bandhan/Documents/BP core/VS CODE/rtl/common/sram_bank.v /home/bandhan/Documents/BP core/VS CODE/rtl/router_mesh.v

# Read timing constraints
read_sdc /home/bandhan/Documents/BP core/VS CODE/phase4_week1/constraints/neuraedge_npu_baseline.sdc

# Setup hierarchy
hierarchy -top neuraedge_top
check

# Synthesis optimization based on mode
# Baseline synthesis - balanced optimization
proc
opt
memory
opt
techmap
opt

# Final synthesis
synth -top neuraedge_top

# Generate reports
stat -top neuraedge_top
check

# Write outputs
write_verilog /home/bandhan/Documents/BP core/VS CODE/phase4_week1/results/netlists/neuraedge_top_baseline_20250814_015803.v
write_json /home/bandhan/Documents/BP core/VS CODE/phase4_week1/results/netlists/neuraedge_top_baseline_20250814_015803.json

# Generate detailed reports
tee -o /home/bandhan/Documents/BP core/VS CODE/phase4_week1/results/reports/baseline_area_report_20250814_015803.txt stat -top neuraedge_top
tee -o /home/bandhan/Documents/BP core/VS CODE/phase4_week1/results/reports/baseline_timing_report_20250814_015803.txt check -assert

# Memory usage and optimization report
memory
tee -o /home/bandhan/Documents/BP core/VS CODE/phase4_week1/results/reports/baseline_memory_report_20250814_015803.txt memory

# Technology mapping report
tee -o /home/bandhan/Documents/BP core/VS CODE/phase4_week1/results/reports/baseline_techmap_report_20250814_015803.txt techmap -map +/techmap.v

quit
