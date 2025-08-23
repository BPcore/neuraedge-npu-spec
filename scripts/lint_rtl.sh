#!/usr/bin/env bash
# Standardized RTL lint script
# Usage: scripts/lint_rtl.sh [--strict]
set -euo pipefail
ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
cd "$ROOT_DIR"
VERILATOR_BIN=${VERILATOR:-verilator}

INCLUDES=( -Irtl/top -Irtl/tile -Irtl/noc -Irtl/router -Irtl/pe -Irtl/common -Irtl/sparsity -Irtl/power -Irtl/control )

# Active RTL source glob (exclude formal, legacy duplicates if any)
SRC_LIST=$(ls rtl/top/*.sv 2>/dev/null; ls rtl/tile/*.v 2>/dev/null; ls rtl/noc/*.v 2>/dev/null; ls rtl/router/*.v 2>/dev/null; ls rtl/pe/*.v 2>/dev/null; ls rtl/common/*.{v,sv} 2>/dev/null || true; ls rtl/sparsity/*.v 2>/dev/null; ls rtl/power/*.v 2>/dev/null; ls rtl/control/*.v 2>/dev/null)

WARN_FLAGS=( -Wall -Wno-MODDUP -Wno-TIMESCALEMOD -Wno-PINMISSING )

STRICT=0
if [[ ${1:-} == "--strict" ]]; then
  STRICT=1
  # In strict mode remove some suppressions
  WARN_FLAGS=( -Wall )
fi

set +e
$VERILATOR_BIN --lint-only -sv -Wno-fatal "${INCLUDES[@]}" "${WARN_FLAGS[@]}" $SRC_LIST --top-module neuraedge_top > build/lint_rtl.log 2>&1
STATUS=$?
set -e

if [[ $STRICT -eq 1 ]]; then
  if grep -E "%Warning" build/lint_rtl.log >/dev/null; then
    echo "[lint_rtl] STRICT mode: warnings found" >&2
    grep -E "%Warning" build/lint_rtl.log | head -n 50 >&2
    exit 2
  fi
fi

if [[ $STATUS -ne 0 ]]; then
  echo "[lint_rtl] Lint exited with status $STATUS (errors). See build/lint_rtl.log" >&2
  # If errors appear (not just warnings), surface first few lines
  grep -E "%Error" build/lint_rtl.log | head -n 20 >&2 || true
  exit $STATUS
fi

echo "[lint_rtl] Lint completed. Summary:" 
grep -E "%(Warning|Error)" build/lint_rtl.log || echo "  (no warnings/errors)"
exit 0
