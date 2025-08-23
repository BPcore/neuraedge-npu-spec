#!/usr/bin/env bash
# Run a small matrix of mesh experiments and save JSON artifacts + diffs
set -euo pipefail
ROOT_DIR="$(cd "$(dirname "$0")/.." && pwd)"
cd "$ROOT_DIR"
mkdir -p build/ci_optional
# Baseline
bash scripts/ci_optional.sh BENCH=coverage_functional_tb.v FULL_SIM=1 SIM_ARGS="+MESH_PIPELINED_OUT=0 +MESH_INT_THROTTLE=0" || true
cp -f build/coverage_functional_tb.json build/ci_optional/coverage_baseline_fullsim.json
# Pipelined only
bash scripts/ci_optional.sh BENCH=coverage_functional_tb.v FULL_SIM=1 SIM_ARGS="+MESH_PIPELINED_OUT=1 +MESH_INT_THROTTLE=0" || true
cp -f build/coverage_functional_tb.json build/ci_optional/coverage_pipelined_fullsim.json
# Pipelined + throttle
bash scripts/ci_optional.sh BENCH=coverage_functional_tb.v FULL_SIM=1 SIM_ARGS="+MESH_PIPELINED_OUT=1 +MESH_INT_THROTTLE=1" || true
cp -f build/coverage_functional_tb.json build/ci_optional/coverage_pipe_throttle_fullsim.json
# Compare
python3 scripts/compare_mesh_structural.py build/ci_optional/coverage_baseline_fullsim.json build/ci_optional/coverage_pipelined_fullsim.json > build/ci_optional/compare_baseline_vs_pipelined.txt || true
python3 scripts/compare_mesh_structural.py build/ci_optional/coverage_baseline_fullsim.json build/ci_optional/coverage_pipe_throttle_fullsim.json > build/ci_optional/compare_baseline_vs_pipe_throttle.txt || true
python3 scripts/compare_mesh_structural.py build/ci_optional/coverage_pipelined_fullsim.json build/ci_optional/coverage_pipe_throttle_fullsim.json > build/ci_optional/compare_pipelined_vs_pipe_throttle.txt || true

echo "Experiments complete. Artifacts in build/ci_optional/"
