#
# NeuraEdge NPU - Clock Tree Synthesis (CTS) Guide
# Phase 4 Week 4 Day 3: CTS Planning & Constraints
# Generated: August 14, 2025
#

################################################################################
# CTS FLOORPLAN GUIDE (Innovus/ICC2 FORMAT)
################################################################################

# Create floorplan guide for clock tree synthesis
create_floorplan_guide -name cts_guide_q0 -region {650000 650000 1200000 1200000} -type clock_region
create_floorplan_guide -name cts_guide_q1 -region {1300000 650000 1850000 1200000} -type clock_region
create_floorplan_guide -name cts_guide_q2 -region {650000 1300000 1200000 1850000} -type clock_region
create_floorplan_guide -name cts_guide_q3 -region {1300000 1300000 1850000 1850000} -type clock_region

# Define buffer insertion zones
set_cts_buffer_zones \
  -buffer_type {clock_buffer_primary clock_buffer_secondary} \
  -regions {{600000 600000 700000 700000} {1800000 600000 1900000 700000} \
            {600000 1800000 700000 1900000} {1800000 1800000 1900000 1900000}}

# Reserve routing channels for clock distribution
create_routing_guide -name clk_spine_h -layer {M6 M7} \
  -rect {100000 1225000 2400000 1275000} -use CLOCK
create_routing_guide -name clk_spine_v -layer {M7 M8} \
  -rect {1225000 100000 1275000 2400000} -use CLOCK

################################################################################
# CLOCK TREE SPECIFICATION (CTSpec FORMAT)
################################################################################

# Clock tree topology configuration
set cts_topology_config {
  # Primary distribution (Global to Quadrants)
  primary_distribution {
    root_buffer     CLK_ROOT_GLOBAL
    topology        h_tree
    max_fanout      4
    target_skew     25e-12
    max_insertion   300e-12
    buffer_types    {clock_buffer_primary}
    layer_range     {M6 M8}
  }
  
  # Secondary distribution (Quadrants to Sub-regions)
  secondary_distribution {
    topology        buffered_tree
    max_fanout      8
    target_skew     35e-12
    max_insertion   450e-12
    buffer_types    {clock_buffer_secondary}
    layer_range     {M4 M6}
  }
  
  # Local distribution (Sub-regions to Tiles)
  local_distribution {
    topology        fishbone
    max_fanout      16
    target_skew     50e-12
    max_insertion   500e-12
    buffer_types    {clock_buffer_local}
    layer_range     {M2 M4}
  }
}

################################################################################
# CLOCK BUFFER LIBRARY SPECIFICATION
################################################################################

# Primary clock buffers (high drive strength)
set clock_buffer_primary {
  cell_name       CKBUFX16_RVT
  drive_strength  high
  input_cap       0.05e-12
  output_res      50.0
  intrinsic_delay 15e-12
  max_fanout      4
  max_cap_load    1.0e-12
  power_rating    high
}

# Secondary clock buffers (medium drive strength)  
set clock_buffer_secondary {
  cell_name       CKBUFX8_RVT
  drive_strength  medium
  input_cap       0.03e-12
  output_res      100.0
  intrinsic_delay 20e-12
  max_fanout      8
  max_cap_load    0.5e-12
  power_rating    medium
}

# Local clock buffers (standard drive strength)
set clock_buffer_local {
  cell_name       CKBUFX4_RVT
  drive_strength  standard
  input_cap       0.02e-12
  output_res      200.0
  intrinsic_delay 25e-12
  max_fanout      16
  max_cap_load    0.25e-12
  power_rating    low
}

# Clock gating cells (for power management)
set clock_gating_cells {
  integrated_clock_gate   CKGATEX2_RVT
  latch_based_gate       CKLATCH_RVT
  enable_buffer          CKENBUF_RVT
}

################################################################################
# CLOCK ROUTING RULES
################################################################################

# Global clock routing rules (M8/M7)
set clock_routing_global {
  min_width       2.0
  preferred_width 2.5
  max_width       3.0
  min_spacing     3.0
  via_size        large
  shield_required true
  double_spacing  true
  priority        highest
}

# Quadrant clock routing rules (M7/M6)
set clock_routing_quadrant {
  min_width       1.5
  preferred_width 2.0
  max_width       2.5
  min_spacing     2.0
  via_size        medium
  shield_required true
  double_spacing  false
  priority        high
}

# Local clock routing rules (M5-M3)
set clock_routing_local {
  min_width       0.5
  preferred_width 1.0
  max_width       1.5
  min_spacing     1.0
  via_size        standard
  shield_required false
  double_spacing  false
  priority        medium
}

################################################################################
# CLOCK TREE BALANCING STRATEGY
################################################################################

# Skew balancing configuration
set cts_skew_balancing {
  # Global skew targets
  max_global_skew     50e-12     # 50ps maximum between any two tiles
  typical_local_skew  20e-12     # 20ps typical within quadrant
  
  # Insertion delay targets
  max_insertion_delay 500e-12    # 500ps from external clock to tile
  typical_insertion   350e-12    # 350ps typical path delay
  
  # Slew rate targets
  max_transition_time 300e-12    # 300ps maximum rise/fall time
  min_transition_time 100e-12    # 100ps minimum rise/fall time
  
  # Load balancing
  max_capacitive_load 1.0e-12    # 1pF maximum per buffer output
  target_fanout_load  0.5e-12    # 0.5pF target per fanout
  
  # PVT variation margins
  process_variation   0.10       # ±10% process variation
  voltage_variation   0.05       # ±5% voltage variation  
  temperature_range   {-40 125}  # -40°C to 125°C range
}

################################################################################
# CLOCK DOMAIN CROSSING ANALYSIS
################################################################################

# Define clock domains for CDC analysis
set clock_domains {
  # Core processing clock (primary)
  core_clk {
    frequency       500e6      # 500MHz
    duty_cycle      0.50       # 50% duty cycle
    source          external   # External PLL
    distribution    global     # Global distribution
    power_domain    CORE_PD    # Core power domain
  }
  
  # Memory interface clock
  memory_clk {
    frequency       400e6      # 400MHz  
    duty_cycle      0.50       # 50% duty cycle
    source          derived    # Derived from core_clk
    distribution    regional   # Memory regions only
    power_domain    MEMORY_PD  # Memory power domain
  }
  
  # NoC interface clock
  noc_clk {
    frequency       250e6      # 250MHz
    duty_cycle      0.50       # 50% duty cycle
    source          derived    # Derived from core_clk
    distribution    network    # NoC network distribution
    power_domain    CORE_PD    # Core power domain
  }
  
  # I/O interface clock
  io_clk {
    frequency       100e6      # 100MHz
    duty_cycle      0.50       # 50% duty cycle
    source          external   # External source
    distribution    perimeter  # I/O perimeter distribution
    power_domain    IO_PD      # I/O power domain
  }
  
  # Always-on clock (for PMU and debug)
  aon_clk {
    frequency       32.768e3   # 32.768kHz
    duty_cycle      0.50       # 50% duty cycle
    source          crystal    # Crystal oscillator
    distribution    local      # Local to AON domain
    power_domain    AON_PD     # Always-on power domain
  }
}

################################################################################
# CLOCK TREE IMPLEMENTATION PHASES
################################################################################

# Phase 1: Global Clock Tree Construction
set cts_phase1 {
  description     "Build primary clock spine and quadrant distribution"
  target_layers   {M6 M7 M8}
  buffer_types    {clock_buffer_primary}
  
  steps {
    1. "Create global H-tree from center to quadrants"
    2. "Insert primary buffers at quadrant centers"  
    3. "Route global clock spine with shielding"
    4. "Verify skew and insertion delay targets"
    5. "Optimize buffer sizing for drive strength"
  }
  
  success_criteria {
    max_skew_q0_q1  30e-12     # 30ps max skew between Q0-Q1
    max_skew_q2_q3  30e-12     # 30ps max skew between Q2-Q3
    insertion_delay 300e-12    # 300ps max insertion to quadrants
  }
}

# Phase 2: Quadrant Clock Tree Expansion
set cts_phase2 {
  description     "Expand clock distribution within each quadrant"
  target_layers   {M4 M5 M6}
  buffer_types    {clock_buffer_secondary}
  
  steps {
    1. "Create sub-region distribution trees"
    2. "Insert secondary buffers for load balancing"
    3. "Route quadrant clock networks"
    4. "Balance loads across sub-regions"
    5. "Minimize intra-quadrant skew"
  }
  
  success_criteria {
    max_intra_skew  25e-12     # 25ps max skew within quadrant
    fanout_balance  ±2         # ±2 fanout variation max
    load_balance    ±20%       # ±20% load variation max
  }
}

# Phase 3: Local Clock Distribution
set cts_phase3 {
  description     "Connect clock to individual tiles and IP blocks"
  target_layers   {M2 M3 M4}
  buffer_types    {clock_buffer_local}
  
  steps {
    1. "Route clock to individual tile clock ports"
    2. "Insert local buffers for final drive"
    3. "Connect memory block clock pins"
    4. "Balance final leaf loads"
    5. "Verify global skew targets"
  }
  
  success_criteria {
    global_max_skew 50e-12     # 50ps max skew tile-to-tile
    insertion_delay 500e-12    # 500ps max total insertion
    transition_time 300e-12    # 300ps max transition time
  }
}

################################################################################
# CLOCK TREE VERIFICATION CHECKLIST
################################################################################

# Design Rule Checking (DRC)
set cts_drc_checks {
  1. "Clock routing width and spacing compliance"
  2. "Via sizes and enclosure rules"
  3. "Metal layer usage restrictions"
  4. "Clock shielding requirements"
  5. "Buffer placement in legal sites"
}

# Timing Analysis
set cts_timing_checks {
  1. "Clock skew analysis (setup/hold)"
  2. "Clock insertion delay verification"  
  3. "Clock transition time validation"
  4. "Clock-to-Q delay analysis"
  5. "Setup/hold timing margin verification"
}

# Power Analysis
set cts_power_checks {
  1. "Clock tree power consumption"
  2. "Buffer power distribution"
  3. "Clock gating effectiveness"
  4. "Power domain crossing integrity"
  5. "Dynamic power vs. frequency scaling"
}

# Signal Integrity
set cts_si_checks {
  1. "Clock noise analysis (crosstalk)"
  2. "Power supply noise impact"
  3. "Clock jitter accumulation"
  4. "EMI/EMC compliance"
  5. "Process variation sensitivity"
}

################################################################################
# CTS OPTIMIZATION GUIDELINES
################################################################################

# Buffer insertion optimization
set buffer_optimization {
  objective       "Minimize skew while managing power"
  strategy        "Bottom-up insertion with load balancing"
  constraints     "Maximum 50ps skew, 500ps insertion delay"
  
  techniques {
    1. "Van Ginneken algorithm for buffer insertion"
    2. "Dynamic programming for optimal sizing"
    3. "Load-based fanout management"
    4. "Useful skew optimization for setup/hold"
    5. "Clock gating integration for power"
  }
}

# Routing optimization
set routing_optimization {
  objective       "Minimize delay variation and noise"
  strategy        "Preferred direction routing with shielding"
  constraints     "Layer-specific width and spacing rules"
  
  techniques {
    1. "H-tree topology for balanced delays"
    2. "Symmetric routing for matched paths"
    3. "Via minimization for reliability"
    4. "Shield insertion for noise immunity"
    5. "Redundant via insertion for yield"
  }
}

################################################################################
# POST-CTS ANALYSIS REQUIREMENTS
################################################################################

# Required reports after CTS completion:
set post_cts_reports {
  1. "Clock tree summary report (skew, insertion delay)"
  2. "Clock buffer usage and power analysis"
  3. "Clock routing congestion analysis"
  4. "Clock domain crossing verification"
  5. "Clock gating coverage and savings"
  6. "PVT corner analysis results"
  7. "Clock tree netlist and constraints"
  8. "Physical implementation DEF file"
}

# Handoff deliverables for routing:
set cts_handoff_files {
  1. "neuraedge_npu_clock_regions.def"
  2. "neuraedge_npu_cts_guide.tcl"
  3. "clock_tree_constraints.sdc"
  4. "cts_buffer_placement.def"
  5. "clock_routing_guides.def"
  6. "cts_verification_report.rpt"
}

################################################################################
# END OF CTS GUIDE
################################################################################
