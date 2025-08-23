# Enhanced NeuraEdge NPU Synthesis for 50 TOPS/W Target
# Uses 14nm FinFET technology with advanced power optimization

# Load 14nm FinFET technology library
read_verilog tech/14nm_finfet/tech_lib.v

# Load enhanced RTL modules
read_verilog -D ENHANCED_ARCH=1 -D TARGET_EFFICIENCY=50 \
    rtl/sparsity/sparsity_engine.v \
    rtl/pe/neuraedge_pe_enhanced.v \
    rtl/power/advanced_power_manager.v \
    rtl/tile/neuraedge_tile_50tops.v \
    rtl/top/neuraedge_npu_50tops.v

# Set top-level module
hierarchy -top neuraedge_npu_50tops

# Technology mapping and optimization for 14nm FinFET
proc
opt_expr
opt_merge -share_all
techmap
opt

# Advanced optimizations for power efficiency
opt_share
opt_reduce
opt_merge
clean

# Clock gating optimization
opt_expr -mux_undef
opt_merge
share -aggressive

# Technology-specific optimization
abc -D 1000 -liberty tech/14nm_finfet/tech_lib.v

# Final cleanup and optimization
opt_clean
opt_expr
opt_merge

# Generate statistics and reports
stat -top neuraedge_npu_50tops
stat -width

# Check for any remaining issues
check

# Write output netlist
write_verilog netlists/neuraedge_npu_50tops_enhanced.v

# Display final message
log "Enhanced 50 TOPS/W synthesis completed"
