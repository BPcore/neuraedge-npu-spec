#!/bin/bash

# NeuraEdge NPU Package Validation Script
# Validates integrity and completeness of P&R handoff package

echo "NeuraEdge NPU Package Validation"
echo "================================="

# Check core deliverables
files_to_check=(
    "def_files/neuraedge_npu_floorplan_freeze.def"
    "lef_files/neuraedge_npu.lef"
    "upf_files/neuraedge_npu_power.upf"
    "sdc_files/neuraedge_npu_timing.sdc"
    "documentation/week4_final_handoff_presentation.md"
    "README_HANDOFF.md"
    "handoff_manifest.txt"
)

validation_passed=true

for file in "${files_to_check[@]}"; do
    if [[ -f "$file" ]]; then
        echo "✅ Found: $file"
    else
        echo "❌ Missing: $file"
        validation_passed=false
    fi
done

# Validate checksums if available
if [[ -f "package_verification.sha256" ]]; then
    echo ""
    echo "Validating checksums..."
    if sha256sum -c package_verification.sha256 --quiet; then
        echo "✅ Checksum validation passed"
    else
        echo "❌ Checksum validation failed"
        validation_passed=false
    fi
fi

echo ""
if $validation_passed; then
    echo "🎉 Package validation PASSED"
    exit 0
else
    echo "💥 Package validation FAILED"
    exit 1
fi
