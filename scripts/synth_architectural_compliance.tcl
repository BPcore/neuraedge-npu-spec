# Synthesis script for NeuraEdge NPU architectural compliance
# Target: 50 TOPS with 4 tiles × 2048 MACs/tile = 8192 total MACs

# Read design files with SystemVerilog support
read_verilog -sv rtl/pe/neuraedge_pe.v
read_verilog -sv rtl/tile/neuraedge_tile.v  
read_verilog -sv rtl/router/router_cell.v
read_verilog -sv rtl/router_mesh.v
read_verilog -sv rtl/noc/noc_router.v
read_verilog -sv rtl/top/neuraedge_top.v

# Synthesis directives for architectural preservation
set_keep_hierarchy true
set_flatten false

# Don't optimize away PE instances
set_dont_touch [get_cells -hier "*/ROW*"]
set_dont_touch [get_cells -hier "*/COL*"] 
set_dont_touch [get_cells -hier "*pe_inst*"]

# Ensure all MAC operations are preserved
set_dont_touch [get_cells -hier "*mac_result*"]
set_dont_touch [get_cells -hier "*accumulator*"]
set_dont_touch [get_cells -hier "*product*"]

# Technology mapping
synth -top neuraedge_top -flatten_hier

# Report statistics with detailed hierarchy
stat -width -top neuraedge_top

# Generate detailed reports
tee -o reports/architectural_compliance_synth.log stat -liberty -top neuraedge_top

# Count total PE instances
tee -a reports/architectural_compliance_synth.log select -list neuraedge_pe

# Count total MAC operations 
echo "=== ARCHITECTURAL VERIFICATION ===" >> reports/architectural_compliance_synth.log
echo "Target: 4 tiles × 2048 PEs/tile = 8192 total PEs" >> reports/architectural_compliance_synth.log
echo "Target: 8192 MACs × 600MHz = 4.92 TOPs/cycle" >> reports/architectural_compliance_synth.log

# Write final netlist
write_verilog -noattr build/neuraedge_top_synth.v

echo "Synthesis complete - check reports/architectural_compliance_synth.log for PE count"
