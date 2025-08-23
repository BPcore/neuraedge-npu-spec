#!/usr/bin/env bash
# Optimized MAC_LANES sweep script
# Features:
#  - Fast mode (set FAST=1) uses reduced synthesis passes for quick scaling estimates
#  - Timeout per lane (TIMEOUT_SEC env, default 1800s) to avoid runaway jobs
#  - Robust stat parsing with fallback (handles missing 'Number of wires' line)
#  - Graceful continuation on errors; CSV row only when stats parsed
#  - Minimal log retention (keeps full log; trims stat snippet)
set -uo pipefail

# Sweep MAC_LANES values and collect synthesis statistics into CSV.
# Usage: ./scripts/sweep_mac_lanes.sh "1 2 4 8"

LANES_LIST=${1:-"1 2 4 8"}
FAST=${FAST:-0}              # FAST=1 enables reduced pass flow
TIMEOUT_SEC=${TIMEOUT_SEC:-1800}
YOSYS_BIN=${YOSYS_BIN:-yosys}
OUT_DIR="build/reports/mac_lanes_sweep"
mkdir -p "$OUT_DIR"

CSV_HEADER="mac_lanes,total_cells,seq_cells,comb_cells,ff,dff,logic_cells,area_per_lane,delta_total_cells,pct_increase_total,synth_time_s"
CSV_FILE="$OUT_DIR/sweep_results.csv"
echo "$CSV_HEADER" > "$CSV_FILE"

prev_total=""
prev_lane=""
for L in $LANES_LIST; do
  echo "[INFO] MAC_LANES=$L (FAST=$FAST TIMEOUT=${TIMEOUT_SEC}s)" >&2
  START_TIME=$(date +%s)
  FULL_LOG="$OUT_DIR/mac_lanes_${L}.full.log"
  STAT_FILE="$OUT_DIR/mac_lanes_${L}.stat"

  if [[ $FAST -eq 1 ]]; then
    # Fast approximate flow (lighter: hierarchy+proc+opt only) for quicker scaling estimates
    Y_SCRIPT="read_verilog -sv rtl/pe/neuraedge_pe_enhanced.v rtl/sparsity/sparsity_engine.v rtl/power/advanced_power_manager.v rtl/tile/neuraedge_tile_50tops.v; chparam -set MAC_LANES $L neuraedge_tile_50tops; hierarchy -top neuraedge_tile_50tops; proc; opt; stat"
  else
    # Full flow
    Y_SCRIPT="read_verilog -sv rtl/pe/neuraedge_pe_enhanced.v rtl/sparsity/sparsity_engine.v rtl/power/advanced_power_manager.v rtl/tile/neuraedge_tile_50tops.v; chparam -set MAC_LANES $L neuraedge_tile_50tops; synth -top neuraedge_tile_50tops; stat"
  fi

  # Run with timeout; capture combined output
  if ! timeout ${TIMEOUT_SEC}s $YOSYS_BIN -p "$Y_SCRIPT" &> "$FULL_LOG"; then
     EXIT_CODE=$?
     if [[ $EXIT_CODE -eq 124 ]]; then
       echo "[TIMEOUT] MAC_LANES=$L exceeded ${TIMEOUT_SEC}s" >&2
     else
       echo "[ERROR] Yosys failed (code $EXIT_CODE) for MAC_LANES=$L" >&2
     fi
     continue
  fi

  END_TIME=$(date +%s)
  ELAPSED=$((END_TIME-START_TIME))

  # Locate stats: prefer first 'Number of wires', fallback to 'Number of cells'; capture full tail to avoid truncation misses
  STAT_LINE=$(grep -n "^ *Number of wires:" "$FULL_LOG" | head -n1 | cut -d: -f1)
  if [[ -z "$STAT_LINE" ]]; then
    STAT_LINE=$(grep -n "^ *Number of cells:" "$FULL_LOG" | head -n1 | cut -d: -f1)
  fi
  if [[ -z "$STAT_LINE" ]]; then
    echo "[WARN] Stats not found in log for MAC_LANES=$L" >&2
    echo "[DEBUG] First 50 lines:" >&2
    head -n 50 "$FULL_LOG" >&2 || true
    continue
  fi
  # Capture full tail from STAT_LINE for robust parsing
  tail -n +$STAT_LINE "$FULL_LOG" > "$STAT_FILE"

  # Pick max cells count across modules to approximate top-level
  TOTAL_CELLS=$(grep -E "^ +Number of cells:" "$STAT_FILE" | awk '{print $4}' | sort -n | tail -n1)
  # Sequential cells: match common synthesized flop cell names ($dff, $adff, $sdff, $_DFF*, $_SDFF*, $_DFFE*)
  SEQ_CELLS=$(grep -E "\$(adff|dff|sdff|_DFF|_SDFF|_DFFE)" "$STAT_FILE" | awk '{s+=$NF} END{print s+0}')
  if [[ -z "$TOTAL_CELLS" ]]; then
    echo "[WARN] Parse failure MAC_LANES=$L (empty TOTAL_CELLS)" >&2
    echo "[DEBUG] Last 40 lines of STAT_FILE:" >&2
    tail -n 40 "$STAT_FILE" >&2 || true
    continue
  fi
  if [[ -z "$TOTAL_CELLS" || "$TOTAL_CELLS" == "0" ]]; then
    echo "[WARN] Empty TOTAL_CELLS for MAC_LANES=$L" >&2
    continue
  fi
  COMB_CELLS=$(( TOTAL_CELLS - SEQ_CELLS ))
  FF=$SEQ_CELLS; DFF=$SEQ_CELLS; LOGIC_CELLS=$COMB_CELLS
  # Derived metrics
  if [[ -n "$prev_total" && $prev_total -gt 0 ]]; then
    delta=$(( TOTAL_CELLS - prev_total ))
    # scale percent x100 with one decimal using bc if available
    if command -v bc >/dev/null 2>&1 && [[ $prev_total -gt 0 ]]; then
      pct=$(echo "scale=2; 100*($TOTAL_CELLS-$prev_total)/$prev_total" | bc)
    else
      pct=$(( 100 * (TOTAL_CELLS - prev_total) / prev_total ))
    fi
  else
    delta=0
    pct=0
  fi
  if [[ $L -gt 0 ]]; then
    area_per_lane=$(echo "$TOTAL_CELLS $L" | awk '{printf "%d", $1/$2}')
  else
    area_per_lane=0
  fi
  echo "$L,$TOTAL_CELLS,$SEQ_CELLS,$COMB_CELLS,$FF,$DFF,$LOGIC_CELLS,$area_per_lane,$delta,$pct,$ELAPSED" >> "$CSV_FILE"
  prev_total=$TOTAL_CELLS
  prev_lane=$L
done

echo "[INFO] Sweep complete. Results: $CSV_FILE" >&2
