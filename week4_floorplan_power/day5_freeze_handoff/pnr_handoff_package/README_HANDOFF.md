# NeuraEdge NPU - P&R Handoff Package v1.0

## Package Overview
This package contains the complete set of deliverables for the NeuraEdge NPU 
Place & Route implementation. All files have been frozen for manufacturing 
and validated for design rule compliance.

## Package Contents

### Core Deliverables
- **def_files/**: Frozen floorplan with fixed component placement
- **lef_files/**: Complete LEF abstract library for all macros
- **upf_files/**: UPF 3.0 power intent specification
- **sdc_files/**: Complete SDC timing constraints

### Documentation
- **documentation/**: Design documentation and handoff presentation
- **verification/**: Validation reports and checksums
- **scripts/**: Utility scripts for package validation

### Reports
- **reports/**: Analysis reports from floorplanning phase

## Design Specifications
- **Technology**: TSMC 65nm GP
- **Die Size**: 2.6mm × 2.6mm
- **Architecture**: 4×4 tile array with distributed processing
- **Performance**: 500MHz core, 400MHz memory, 250MHz NoC
- **Power Domains**: 4 domains with UPF power management

## Usage Instructions

### Quick Start
1. Validate package integrity: `./scripts/validate_package.sh`
2. Review handoff presentation: `documentation/week4_final_handoff_presentation.md`
3. Import frozen floorplan: `def_files/neuraedge_npu_floorplan_freeze.def`
4. Load technology files: `lef_files/neuraedge_npu.lef`
5. Apply power intent: `upf_files/neuraedge_npu_power.upf`
6. Load timing constraints: `sdc_files/neuraedge_npu_timing.sdc`

### P&R Tool Flow
```bash
# Example Innovus flow
innovus -init scripts/innovus_init.tcl
read_physical -lefs lef_files/neuraedge_npu.lef
read_def def_files/neuraedge_npu_floorplan_freeze.def
load_upf upf_files/neuraedge_npu_power.upf
read_sdc sdc_files/neuraedge_npu_timing.sdc
```

## Validation Status
- **DRC Clean**: ✅ All design rules verified
- **LVS Clean**: ✅ Layout vs schematic verified  
- **UPF Valid**: ✅ Power intent syntax verified
- **SDC Valid**: ✅ Timing constraints validated
- **Package Integrity**: ✅ Checksums verified

## Change Control
This package contains FROZEN deliverables with change control restrictions.
Refer to individual file headers for modification policies.

## Contact Information
- **Technical Lead**: Sarah Chen (sarah.chen@neurochip.com)
- **P&R Engineer**: Michael Rodriguez (michael.rodriguez@neurochip.com)
- **Support**: pnr-support@neurochip.com

## Package Generation
- **Generated**: August 14, 2025
- **Version**: 1.0
- **Status**: APPROVED FOR P&R
