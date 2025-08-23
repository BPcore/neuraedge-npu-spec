#!/usr/bin/env bash
# Nightly automation pipeline: regenerate sweeps, run regression & dual frontier, produce summaries & optional auto-commit.
set -euo pipefail
ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
cd "$ROOT_DIR"
LOG=build/nightly_pipeline.log
mkdir -p build
{
  echo "[nightly] START $(date -u)"
  # Run lightweight unit tests first (fast fail)
  if [[ -x scripts/run_unit_tests.sh ]]; then
    echo "[nightly] Running unit tests";
    scripts/run_unit_tests.sh || { echo "[nightly] Unit tests failed"; exit 1; }
  else
    echo "[nightly] No unit tests script found";
  fi
  # Run optional CI benches to produce sweep CSVs (reuse existing script)
  DISABLE_PARETO_PLOT=${DISABLE_PARETO_PLOT:-0} \
  ./scripts/ci_optional.sh || { echo "[nightly] ci_optional failed"; exit 1; }
  # Summaries already produced by ci_optional; ensure JSON & PNG present
  if [[ -f build/dual_pareto_summary.json ]]; then
    echo "[nightly] JSON summary present";
  else
    if [[ -f build/dual_pareto.csv ]]; then
      python3 scripts/generate_dual_pareto_json.py build/dual_pareto.csv > build/dual_pareto_summary.json || true
    fi
  fi
  # Auto-commit if enabled and changes exist
  if [[ "${NIGHTLY_AUTOCOMMIT:-0}" == "1" ]]; then
    git add build/dual_pareto*.* build/*pareto*.png throughput_power_sweep.csv* adaptive_sweep.csv* || true
    if ! git diff --cached --quiet; then
      git commit -m "nightly: update sweeps & pareto artifacts $(date -u +%Y-%m-%dT%H:%MZ)" || true
      if [[ "${NIGHTLY_AUTOPUSH:-0}" == "1" ]]; then
        git push || true
      fi
    else
      echo "[nightly] No artifact changes to commit"
    fi
  fi
  echo "[nightly] DONE $(date -u)"
} | tee "$LOG"
