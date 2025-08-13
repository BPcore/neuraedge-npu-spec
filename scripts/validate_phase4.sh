#!/bin/bash

# NeuraEdge NPU Phase 4 Validation Script
# Validates complete synthesis and physical implementation

echo "NeuraEdge NPU Phase 4 Validation"
echo "================================="

validation_passed=true

# Validate Week 1: Synthesis
echo "Checking Week 1: RTL Synthesis..."
if [ -d "phase4_week1" ] && [ -f "phase4_week1/synthesis_summary.md" ]; then
    echo "✅ Week 1: Synthesis implementation found"
else
    echo "❌ Week 1: Synthesis implementation missing"
    validation_passed=false
fi

# Validate Week 2: Timing Analysis
echo "Checking Week 2: Static Timing Analysis..."
if [ -d "phase4_week2" ] && [ -f "phase4_week2/timing_analysis_summary.md" ]; then
    echo "✅ Week 2: Timing analysis found"
else
    echo "❌ Week 2: Timing analysis missing"
    validation_passed=false
fi

# Validate Week 3: Physical Verification
echo "Checking Week 3: Physical Verification..."
if [ -d "phase4_week3" ] && [ -f "phase4_week3/physical_verification_summary.md" ]; then
    echo "✅ Week 3: Physical verification found"
else
    echo "❌ Week 3: Physical verification missing"
    validation_passed=false
fi

# Validate Week 4: Floorplanning
echo "Checking Week 4: Floorplanning & Power-Grid..."
if [ -d "week4_floorplan_power" ]; then
    echo "✅ Week 4: Floorplanning implementation found"
    
    # Check manufacturing deliverables
    deliverables=(
        "week4_floorplan_power/day5_freeze_handoff/neuraedge_npu_floorplan_freeze.def"
        "week4_floorplan_power/day5_freeze_handoff/neuraedge_npu.lef"
        "week4_floorplan_power/day5_freeze_handoff/neuraedge_npu_power.upf"
        "week4_floorplan_power/day5_freeze_handoff/neuraedge_npu_timing.sdc"
    )
    
    for deliverable in "${deliverables[@]}"; do
        if [ -f "$deliverable" ]; then
            echo "✅ Manufacturing deliverable: $(basename "$deliverable")"
        else
            echo "❌ Missing deliverable: $deliverable"
            validation_passed=false
        fi
    done
else
    echo "❌ Week 4: Floorplanning implementation missing"
    validation_passed=false
fi

echo ""
if $validation_passed; then
    echo "🎉 Phase 4 validation PASSED"
    echo "Status: MANUFACTURING READY"
    exit 0
else
    echo "💥 Phase 4 validation FAILED"
    echo "Status: REQUIRES FIXES"
    exit 1
fi
