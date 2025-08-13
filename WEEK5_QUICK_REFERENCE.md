# Week 5 Quick Reference - Synthesis Optimization Targets

## 🚀 Quick Start
```bash
# Run complete Week 5 flow
make week5_complete

# Or run individual tasks:
make setup_week5           # Setup directories and environment  
make synth_baseline        # Baseline synthesis for comparison
make synth_ppa_sweep      # Multi-mode PPA optimization
make generate_constraints  # Generate timing constraints
make physical_synth_smoke # Physical synthesis validation
make qor_report           # Generate QoR analysis
make week5_signoff        # Create sign-off package
```

## 📁 Output Locations
- **Netlists**: `build/synthesis/*.v`
- **Reports**: `build/qor_reports/*.log`, `build/qor_reports/week5_qor_summary.md`  
- **Constraints**: `constraints/*.sdc`
- **Sign-off Package**: `build/week5_signoff_package/`

## 🎯 Key Targets

### `synth_baseline`
- Baseline synthesis for PPA comparison
- Output: `build/synthesis/neuraedge_top_baseline.v`

### `synth_ppa_sweep`  
- Multi-mode optimization: baseline, optimized, timing_focused, area_focused
- Output: Multiple netlists with different optimization strategies

### `physical_synth_smoke`
- 10K-gate equivalent physical synthesis test
- Logic restructuring and placement-aware optimization
- Output: `build/synthesis/neuraedge_top_physical_smoke.v`

### `week5_signoff`
- Complete sign-off package with all deliverables
- Documentation, netlists, reports, constraints
- Output: `build/week5_signoff_package/`

## ⚙️ Configuration
```makefile
TARGET_FREQ = 100      # Target frequency in MHz
TARGET_AREA = 50000    # Target area in gates  
PPA_MODES = baseline optimized timing_focused area_focused
```

## 📊 QoR Analysis
The `qor_report` target generates comprehensive analysis comparing:
- Gate count across different modes
- Timing performance
- Area utilization  
- Optimization effectiveness

## 🎉 Ready for Week 5 Execution!
All infrastructure is in place for synthesis optimization and sign-off.
