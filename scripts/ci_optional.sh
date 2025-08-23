#!/usr/bin/env bash
# Optional CI tier: extended testbenches (contention deterministic + stress, sparsity adaptive FSM, power pstate sweep)
set -euo pipefail
ORIGINAL_ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
ROOT_DIR="$ORIGINAL_ROOT_DIR"

# Parse simple KEY=VALUE arguments (whitelist) to allow invocation like:
#   bash scripts/ci_optional.sh BENCH=router_pred_cong_tb.v FULL_SIM=1
for kv in "$@"; do
  case $kv in
  BENCH=*|BENCH_REGEX=*|FULL_SIM=*|FORCE_REBUILD=*|BUILD_ONLY=*|ALWAYS_LIGHT=*|DISABLE_ADAPT_REGRESS=*|MIN_DELTA_DYN_PCT=*|MIN_DELTA_POWER_PCT=*|TB_TIMEOUT_SEC=*|MIN_COV_DIR_EAST=*|MIN_COV_DIR_WEST=*|MIN_COV_MODE_HIT=*|MIN_COV_DENSITY_NONZERO=*|DISABLE_COVERAGE_GATING=*|MAX_EW_IMBALANCE=*|MIN_STALL_BP=*|MIN_STALL_ARB=*|RUN_FORMAL_MCAST=*|FORMAL_TIMEOUT_SEC=*|RUN_MCAST_TESTS=*|MIN_MCAST_PACKETS=*|MIN_MCAST_FANOUT2=*|MIN_MCAST_ATOMIC_DUAL=*|MIN_MCAST_FLAG_CLEARED=*|MIN_MCAST_FANOUT3=*|MAX_DIRECTION_FAIRNESS=*|REQUIRE_SATURATION=*|MIN_CONTENTION_CYCLES=*|SIM_ARGS=*|MIN_UNIQUE_GRANT_PATTERNS=*|MAX_MODE_DENSITY_UNHIT=*|REQUIRE_FAIR_TARGET=*|MIN_CONTENTION_INTENSITY=*|REQUIRE_NATURAL_SATURATION=*|MIN_HIGH_DEPTH_UTIL_PCT=*|MAX_PER_ROUTER_DEPTH_STDDEV=*|MAX_CYCLES_TO_HALF_DEPTH=*|MAX_CYCLES_TO_FULL_DEPTH=*|MIN_FILL_SLOPE_HALF_MILLI=*|MIN_FILL_SLOPE_FULL_MILLI=*)
      export "$kv";;
  esac
done

# Work around Verilator/GNU make limitation: cannot build when any parent dir has spaces.
STAGED_SANDBOX=0
if [[ "$ROOT_DIR" == *" "* ]]; then
  SANDBOX_BASE="/tmp/ci_opt_sandbox"
  rm -rf "$SANDBOX_BASE"
  mkdir -p "$SANDBOX_BASE"
  echo "[ci_optional] Detected spaces in ROOT_DIR path; staging sources into $SANDBOX_BASE";
  cp -r "$ROOT_DIR/rtl" "$SANDBOX_BASE/" 2>/dev/null || true
  cp -r "$ROOT_DIR/tb" "$SANDBOX_BASE/" 2>/dev/null || true
  cp -r "$ROOT_DIR/scripts" "$SANDBOX_BASE/" 2>/dev/null || true
  # Debug: verify staged testbench matches root (content hash + TB_VERSION presence)
  if [[ -f "$ROOT_DIR/tb/coverage_functional_tb.v" ]]; then
    ROOT_TB_PATH="$ROOT_DIR/tb/coverage_functional_tb.v"
    SB_TB_PATH="$SANDBOX_BASE/tb/coverage_functional_tb.v"
    if [[ -f "$ROOT_TB_PATH" && -f "$SB_TB_PATH" ]]; then
      root_tb_sha=$(sha1sum "$ROOT_TB_PATH" | cut -d' ' -f1)
      sb_tb_sha=$(sha1sum "$SB_TB_PATH" | cut -d' ' -f1)
      echo "[ci_optional][debug] coverage_functional_tb.v root_sha=$root_tb_sha sandbox_sha=$sb_tb_sha"
      if [[ "$root_tb_sha" != "$sb_tb_sha" ]]; then
        echo "[ci_optional][warn] Sandbox testbench hash mismatch (copy issue?)"
      fi
      if ! grep -q 'TB_VERSION' "$SB_TB_PATH"; then
        echo "[ci_optional][debug] TB_VERSION string not found in sandbox copy (may indicate stale source)"
      else
        echo "[ci_optional][debug] TB_VERSION line: $(grep -m1 'TB_VERSION' "$SB_TB_PATH")"
      fi
    fi
  fi
  cd "$SANDBOX_BASE"
  ROOT_DIR="$SANDBOX_BASE"; STAGED_SANDBOX=1
else
  cd "$ROOT_DIR"
fi
VERILATOR_BIN=${VERILATOR:-verilator}
INCLUDES=( -Itb -Irtl/top -Irtl/tile -Irtl/noc -Irtl/router -Irtl/pe -Irtl/common -Irtl/sparsity -Irtl/power -Irtl/control -Irtl/memory )
# Refresh file list after potential sandbox relocation
COMMON_RTL=$(ls rtl/{top,tile,noc,router,pe,common,sparsity,power,control,memory}/*.{v,sv} 2>/dev/null || true)

# Parallel jobs (default all cores) and light simulation parameter overrides to shrink design footprint
JOBS=${VERILATOR_NUM_JOBS:-$(nproc)}
# Light parameter overrides (applied to every build; modules without these params ignore them harmlessly)
LIGHT_PARAMS=( -GPE_ROWS=2 -GPE_COLS=4 -GMAC_LANES=1 -DLIGHT_SIM )

# Allow disabling light params (export FULL_SIM=1)
if [[ "${FULL_SIM:-0}" == "1" ]]; then
  LIGHT_PARAMS=()
  echo "[ci_optional] FULL_SIM=1 -> light parameter reduction disabled"
else
  echo "[ci_optional] Using light parameter overrides for fast compile"
fi

# Use ccache if available to accelerate repeated compiles
if command -v ccache >/dev/null 2>&1; then
  export CC="ccache gcc"
  export CXX="ccache g++"
  echo "[ci_optional] ccache enabled"
fi

# Timeout (seconds) per testbench run to avoid hangs
TB_TIMEOUT=${TB_TIMEOUT_SEC:-120}

run_tb () {
  local tb=$1; shift
  # derive tb base name without extension (handle .v and .sv)
  local tb_base=${tb%.*}
  local objdir=build/obj_${tb_base}
  local start_ts=$(date +%s)
  echo "[ci_optional] Running $tb";
  rm -rf "$objdir" # clean any prior build for this tb
  # Build signature caching (skip rebuild if inputs unchanged and no FORCE_REBUILD)
  local sig_file=build/${tb_base}.sig
  local new_sig
  # Include file content hashes (not just mtimes) plus optional BUST_SIG salt for robustness
  local content_hash
  content_hash=$( (printf '%s\n' $COMMON_RTL tb/$tb | xargs -r sha1sum 2>/dev/null | awk '{print $1}' ) | sha1sum | cut -d' ' -f1 )
  local salt_hash
  if [[ -n "${BUST_SIG:-}" ]]; then salt_hash=$(echo "${BUST_SIG}" | sha1sum | cut -d' ' -f1); else salt_hash="nosalt"; fi
  new_sig=$( (echo "$tb"; printf '%s\n' $COMMON_RTL tb/$tb | xargs stat -c '%n %Y' 2>/dev/null; echo "$content_hash"; echo "$salt_hash" ) | sha1sum | cut -d' ' -f1 )
  if [[ -f "$sig_file" && "${FORCE_REBUILD:-0}" != "1" && $(cat "$sig_file") == "$new_sig" ]]; then
    echo "[ci_optional] Cache hit for $tb (skipping compile)"
  else
    # Only apply light params to heavy benches likely to instantiate full tile/NPU/router unless ALWAYS_LIGHT=1
    local APPLY_PARAMS=()
    if [[ "${FULL_SIM:-0}" != "1" ]]; then
      # Apply only to benches likely to instantiate large parametric hierarchy (tile/npu/top). Others skip to avoid unknown -G errors.
  if [[ "${ALWAYS_LIGHT:-0}" == "1" || ($tb_base == *npu* || $tb_base == *top*) ]]; then
        APPLY_PARAMS=("${LIGHT_PARAMS[@]}")
        echo "[ci_optional] Applying light params to $tb_base -> ${APPLY_PARAMS[*]}"
      else
        echo "[ci_optional] Skipping light params for $tb_base (no large hierarchy)"
      fi
    fi
  $VERILATOR_BIN -sv --timing --binary -j $JOBS -Mdir "$objdir" --top-module ${tb_base} \
      -O0 -CFLAGS "-O0" "${APPLY_PARAMS[@]}" "${INCLUDES[@]}" $COMMON_RTL tb/$tb -Wno-fatal \
      > build/${tb_base}.log 2>&1 || { \
        echo "[ci_optional] Build failed for $tb"; \
        tail -n 120 build/${tb_base}.log; \
        if [[ $STAGED_SANDBOX -eq 1 ]]; then \
          mkdir -p "$ORIGINAL_ROOT_DIR/build/ci_optional" 2>/dev/null || true; \
          cp -f build/${tb_base}.log "$ORIGINAL_ROOT_DIR/build/ci_optional/${tb_base}_build_fail.log" 2>/dev/null || true; \
          echo "[ci_optional] Copied failing build log to original workspace build/ci_optional/${tb_base}_build_fail.log"; \
        fi; \
        exit 1; }
    echo "$new_sig" > "$sig_file"
  fi
  if [[ "${BUILD_ONLY:-0}" == "1" ]]; then
    echo "[ci_optional] BUILD_ONLY=1 -> skipping run for $tb_base"
  else
    local RUNTIME_ARGS=( )
    if [[ -n "${SIM_ARGS:-}" ]]; then
      # Split SIM_ARGS on spaces (user supplies plusargs like +FOO=1 +BAR=2)
      # shellcheck disable=SC2206
      RUNTIME_ARGS=( ${SIM_ARGS} )
      echo "[ci_optional] Passing SIM_ARGS to ${tb_base}: ${SIM_ARGS}"
    fi
      # Inject default sparse preservation gating for coverage_functional_tb if user didn't specify one
      if [[ "$tb_base" == "coverage_functional_tb" ]]; then
        if ! printf '%s\n' "${RUNTIME_ARGS[@]}" | grep -q 'SPARSE_PRESERVE_MIN'; then
          RUNTIME_ARGS+=( +SPARSE_PRESERVE_MIN=10 )
          echo "[ci_optional] Added default +SPARSE_PRESERVE_MIN=10 (override by including your own in SIM_ARGS)"
        fi
      fi
    if ! timeout ${TB_TIMEOUT}s "$objdir"/V${tb_base} "${RUNTIME_ARGS[@]}" > build/${tb_base}_run.log 2>&1; then
      echo "[ci_optional] Run failed or timed out for $tb (>${TB_TIMEOUT}s)"; tail -n 120 build/${tb_base}_run.log; exit 1;
    fi
  fi
  local end_ts=$(date +%s)
  local dur=$((end_ts-start_ts))
  echo "[ci_optional] PASS $tb (${dur}s)";
  echo "TIME,$tb_base,$dur" >> build/bench_times.csv
}

mkdir -p build

# Selected optional benches (approx runtimes @100MHz sim clock, verilator O2):
#  - mem_contention_deterministic_tb.v  ~2s
#  - mem_contention_stress_tb.v         ~3s
#  - sparsity_adaptive_fsm_tb.v         <1s
#  - power_pstate_sweep_tb.v            <1s
#  - dvfs_deterministic_tb.v            ~2s
#  - router_mesh_flow_tb.v              ~2s
#  - router_telemetry_phase1b_tb.v      <1s
#  - router_stall_contention_tb.v       ~2s
#  - router_backpressure_tb.v           <1s
#  - router_pred_cong_tb.v              <1s (predictive congestion EMA accuracy)
BENCHES=( \
  mem_contention_deterministic_tb.v \
  mem_contention_stress_tb.v \
  sparsity_adaptive_fsm_tb.v \
  adaptive_throughput_power_sweep_tb.v \
  power_pstate_sweep_tb.v \
  power_model_calibration_tb.v \
  power_model_calibration_multitemp_tb.v \
  power_model_leak_temp_tb.v \
  throughput_power_sweep_tb.v \
  dvfs_deterministic_tb.v \
  router_mesh_flow_tb.v \
  router_telemetry_phase1b_tb.v \
  router_stall_contention_tb.v \
  router_backpressure_tb.v \
  router_backpressure_stress_tb.v \
  router_phase2_metrics_tb.v \
  router_pred_cong_tb.v \
  router_pred_cong_raw_tb.v \
  router_backpressure_handshake_tb.v \
  router_credit_flow_tb.v \
  router_credit_propagation_tb.v \
  coverage_smoke_tb.v \
  coverage_functional_tb.v \
  energy_accuracy_fast_tb.v \
  energy_accuracy_tb.v \
  tile_energy_absolute_tb.v \
)

# Added scaffold benches for extended verification (opt-in)
BENCHES+=( \
  router_mesh_stress_random_multidest_tb.sv \
  dvfs_energy_convergence_tb.sv \
  mem_contention_multitile_tb.sv \
)

# Optionally append multicast benches if requested (kept out of default list to save time)
if [[ "${RUN_MCAST_TESTS:-0}" == "1" ]]; then
  BENCHES+=( multicast_basic_tb.v multicast_dual_fanout_tb.v multicast_backpressure_tb.v multicast_coverage_tb.v multicast_mesh_smoke_tb.v multicast_mesh_end_to_end_tb.v multicast_flag_clear_tb.v multicast_mesh_remote_delivery_tb.v multicast_router_cell_debug_tb.v )
  echo "[ci_optional] Multicast benches enabled (RUN_MCAST_TESTS=1)"
  # Provide conservative default gating thresholds unless user overrides
  : "${MIN_MCAST_PACKETS:=3}"; export MIN_MCAST_PACKETS
  : "${MIN_MCAST_FANOUT2:=2}"; export MIN_MCAST_FANOUT2
  : "${MIN_MCAST_FANOUT3:=1}"; export MIN_MCAST_FANOUT3
  echo "[ci_optional] Multicast gating defaults MIN_MCAST_PACKETS=$MIN_MCAST_PACKETS MIN_MCAST_FANOUT2=$MIN_MCAST_FANOUT2 MIN_MCAST_FANOUT3=$MIN_MCAST_FANOUT3 (override via env)"
fi

FILTERED=()
if [[ -n "${BENCH:-}" ]]; then
  for b in "${BENCHES[@]}"; do [[ "$b" == "$BENCH" ]] && FILTERED+=("$b"); done
elif [[ -n "${BENCH_REGEX:-}" ]]; then
  for b in "${BENCHES[@]}"; do [[ "$b" =~ $BENCH_REGEX ]] && FILTERED+=("$b"); done
else
  FILTERED=("${BENCHES[@]}")
fi
echo "[ci_optional] Benches: ${FILTERED[*]}"
for b in "${FILTERED[@]}"; do
  if [[ -f tb/$b ]]; then
    run_tb "$b"
  else
    echo "[ci_optional] Skipping $b (not found)"
  fi
done

# Early copy-out of coverage JSON (and other bench logs) before gating so failures still expose latest artifacts.
if [[ $STAGED_SANDBOX -eq 1 ]]; then
  mkdir -p "$ORIGINAL_ROOT_DIR/build/ci_optional" 2>/dev/null || true
  cp -f build/*_run.log "$ORIGINAL_ROOT_DIR/build/ci_optional/" 2>/dev/null || true
  if [[ -f build/coverage_functional_tb.json ]]; then
    cp -f build/coverage_functional_tb.json "$ORIGINAL_ROOT_DIR/build/ci_optional/" 2>/dev/null || true
    cp -f build/coverage_functional_tb.json "$ORIGINAL_ROOT_DIR/build/coverage_functional_tb.json" 2>/dev/null || true
    echo "[ci_optional][early-copy] coverage_functional_tb.json exported prior to gating"
  fi
fi

# Functional coverage gating (optional) if coverage_functional_tb.v was run
if printf '%s\n' "${FILTERED[@]}" | grep -q '^coverage_functional_tb.v$'; then
  if [[ "${DISABLE_COVERAGE_GATING:-0}" == "1" ]]; then
    echo "[ci_optional][coverage] Gating disabled via DISABLE_COVERAGE_GATING=1";
  else
    if [[ -f build/coverage_functional_tb.json ]]; then
      if command -v python3 >/dev/null 2>&1; then
  if ! python3 - <<'EOF'
import json,os,sys
path='build/coverage_functional_tb.json'
try:
    d=json.load(open(path))
except Exception as e:
    print(f"[ci_optional][coverage] FAIL: cannot parse {path}: {e}")
    sys.exit(1)
cfg={
  'min_east': int(os.environ.get('MIN_COV_DIR_EAST','10')),
  'min_west': int(os.environ.get('MIN_COV_DIR_WEST','10')),
  'min_mode': int(os.environ.get('MIN_COV_MODE_HIT','30')),
  'min_density_nonzero': int(os.environ.get('MIN_COV_DENSITY_NONZERO','2')),
  'max_ew_imbalance': float(os.environ.get('MAX_EW_IMBALANCE','8.0')),
  'max_direction_fairness': float(os.environ.get('MAX_DIRECTION_FAIRNESS','2.5')),
  'min_stall_bp': int(os.environ.get('MIN_STALL_BP','0')),
  'min_stall_arb': int(os.environ.get('MIN_STALL_ARB','0')),
  'min_mcast_packets': int(os.environ.get('MIN_MCAST_PACKETS','0')),
  'min_mcast_fanout2': int(os.environ.get('MIN_MCAST_FANOUT2','0')),
  'min_mcast_atomic_dual': int(os.environ.get('MIN_MCAST_ATOMIC_DUAL','0')),
  'min_mcast_flag_cleared': int(os.environ.get('MIN_MCAST_FLAG_CLEARED','0'))
  ,'min_mcast_fanout3': int(os.environ.get('MIN_MCAST_FANOUT3','0'))
  ,'require_saturation': int(os.environ.get('REQUIRE_SATURATION','0'))
  ,'min_contention_cycles': int(os.environ.get('MIN_CONTENTION_CYCLES','0'))
  ,'min_unique_grant_patterns': int(os.environ.get('MIN_UNIQUE_GRANT_PATTERNS','0'))
  ,'max_mode_density_unhit': int(os.environ.get('MAX_MODE_DENSITY_UNHIT','16'))
  ,'require_fair_target': int(os.environ.get('REQUIRE_FAIR_TARGET','0'))
  ,'min_contention_intensity': float(os.environ.get('MIN_CONTENTION_INTENSITY','0'))
  ,'require_natural_saturation': int(os.environ.get('REQUIRE_NATURAL_SATURATION','0'))
  ,'min_high_depth_util_pct': int(os.environ.get('MIN_HIGH_DEPTH_UTIL_PCT','0'))
  ,'max_per_router_depth_stddev': float(os.environ.get('MAX_PER_ROUTER_DEPTH_STDDEV','999.0'))
  ,'max_cycles_to_half_depth': int(os.environ.get('MAX_CYCLES_TO_HALF_DEPTH','999999'))
  ,'max_cycles_to_full_depth': int(os.environ.get('MAX_CYCLES_TO_FULL_DEPTH','999999'))
  ,'min_fill_slope_half_milli': int(os.environ.get('MIN_FILL_SLOPE_HALF_MILLI','0'))
  ,'min_fill_slope_full_milli': int(os.environ.get('MIN_FILL_SLOPE_FULL_MILLI','0'))
}
east=d.get('dir',{}).get('east',0); west=d.get('dir',{}).get('west',0); loop=d.get('dir',{}).get('loop',0)
ew_ratio=d.get('east_west_ratio',0.0)
direction_fairness=d.get('direction_fairness',ew_ratio)
mstall=d.get('stall_counts',{})
mcast=d.get('multicast',{})
stall_arb=mstall.get('arb',0); stall_buf=mstall.get('buf',0); stall_bp=mstall.get('bp',0)
mcast_packets=mcast.get('packets',0); mcast_fanout2=mcast.get('fanout_ge2',0)
atomic_dual=mcast.get('atomic_dual',0); flag_cleared=mcast.get('flag_cleared_obs',0)
fanout3=mcast.get('fanout_ge3',0)
modes=d.get('mode_hits',[0,0,0,0])
density=d.get('density_bins',[0,0,0,0])
nonzero=sum(1 for x in density if x>0)
stim=d.get('stimulus_phases',{})
contention_cycles=stim.get('contention_cycles',0)
adv=d.get('advanced_kpis',{})
saturation_exercised=d.get('saturation_exercised', False) or (stim.get('sat_phase_cycles',0) > 0 and density[3] > 0) or (adv.get('saturation_ratio',0.0) >= 0.5)
natural_saturation_met=adv.get('natural_saturation_met',0)
mode_density_unhit=adv.get('mode_density_unhit',99)
unique_grant_patterns=adv.get('unique_grant_patterns',0)
fairness_target_met=adv.get('fairness_target_met',1) # default assume met if absent
contention_intensity=adv.get('contention_intensity',0.0)
high_depth_util=adv.get('high_depth_utilization_pct',0)
per_router_depth_stddev=adv.get('per_router_depth_stddev',0.0)
cycles_to_half=adv.get('cycles_to_half_depth',-1)
cycles_to_full=adv.get('cycles_to_full_depth',-1)
fill_slope_half=adv.get('fill_slope_half_milli',0)
fill_slope_full=adv.get('fill_slope_full_milli',0)
fail=[]
if east < cfg['min_east']: fail.append(f"east<{cfg['min_east']} ({east})")
if west < cfg['min_west']: fail.append(f"west<{cfg['min_west']} ({west})")
if ew_ratio > cfg['max_ew_imbalance']: fail.append(f"ew_ratio>{cfg['max_ew_imbalance']} ({ew_ratio:.2f})")
if direction_fairness > cfg['max_direction_fairness']: fail.append(f"direction_fairness>{cfg['max_direction_fairness']} ({direction_fairness:.2f})")
if any(m < cfg['min_mode'] for m in modes): fail.append(f"mode_hit<{cfg['min_mode']}")
if nonzero < cfg['min_density_nonzero']: fail.append(f"density_nonzero<{cfg['min_density_nonzero']} ({nonzero})")
if stall_bp < cfg['min_stall_bp']: fail.append(f"stall_bp<{cfg['min_stall_bp']} ({stall_bp})")
if stall_arb < cfg['min_stall_arb']: fail.append(f"stall_arb<{cfg['min_stall_arb']} ({stall_arb})")
if mcast_packets < cfg['min_mcast_packets']: fail.append(f"mcast_packets<{cfg['min_mcast_packets']} ({mcast_packets})")
if mcast_fanout2 < cfg['min_mcast_fanout2']: fail.append(f"mcast_fanout2<{cfg['min_mcast_fanout2']} ({mcast_fanout2})")
if atomic_dual < cfg['min_mcast_atomic_dual']: fail.append(f"mcast_atomic_dual<{cfg['min_mcast_atomic_dual']} ({atomic_dual})")
if flag_cleared < cfg['min_mcast_flag_cleared']: fail.append(f"mcast_flag_cleared<{cfg['min_mcast_flag_cleared']} ({flag_cleared})")
if fanout3 < cfg['min_mcast_fanout3']: fail.append(f"mcast_fanout3<{cfg['min_mcast_fanout3']} ({fanout3})")
if cfg['require_saturation'] and not saturation_exercised: fail.append("saturation_not_exercised")
if contention_cycles < cfg['min_contention_cycles']: fail.append(f"contention_cycles<{cfg['min_contention_cycles']} ({contention_cycles})")
if unique_grant_patterns < cfg['min_unique_grant_patterns']: fail.append(f"unique_grant_patterns<{cfg['min_unique_grant_patterns']} ({unique_grant_patterns})")
if mode_density_unhit > cfg['max_mode_density_unhit']: fail.append(f"mode_density_unhit>{cfg['max_mode_density_unhit']} ({mode_density_unhit})")
if cfg['require_fair_target'] and not fairness_target_met: fail.append("fairness_target_not_met")
if contention_intensity < cfg['min_contention_intensity']: fail.append(f"contention_intensity<{cfg['min_contention_intensity']} ({contention_intensity:.3f})")
if cfg['require_natural_saturation'] and not natural_saturation_met: fail.append("natural_saturation_not_met")
if high_depth_util < cfg['min_high_depth_util_pct']: fail.append(f"high_depth_util<{cfg['min_high_depth_util_pct']} ({high_depth_util})")
if per_router_depth_stddev > cfg['max_per_router_depth_stddev']: fail.append(f"per_router_depth_stddev>{cfg['max_per_router_depth_stddev']} ({per_router_depth_stddev:.3f})")
if cfg['max_cycles_to_half_depth'] < 999999:
  if cycles_to_half == -1 or cycles_to_half > cfg['max_cycles_to_half_depth']:
    fail.append(f"cycles_to_half_depth>{cfg['max_cycles_to_half_depth']} ({cycles_to_half})")
if cfg['max_cycles_to_full_depth'] < 999999:
  if cycles_to_full == -1 or cycles_to_full > cfg['max_cycles_to_full_depth']:
    fail.append(f"cycles_to_full_depth>{cfg['max_cycles_to_full_depth']} ({cycles_to_full})")
if fill_slope_half < cfg['min_fill_slope_half_milli']: fail.append(f"fill_slope_half<{cfg['min_fill_slope_half_milli']} ({fill_slope_half})")
if fill_slope_full < cfg['min_fill_slope_full_milli']: fail.append(f"fill_slope_full<{cfg['min_fill_slope_full_milli']} ({fill_slope_full})")
print(f"[ci_optional][coverage] east={east} west={west} fairness={direction_fairness:.2f} ew_ratio={ew_ratio:.2f} modes={modes} density={density} nonzero_density_bins={nonzero} md_unhit={mode_density_unhit} stim(contention/sat_cycles)={contention_cycles}/{stim.get('sat_phase_cycles',0)} contention_intensity={contention_intensity:.3f} high_depth_util_pct={high_depth_util} depth_stddev={per_router_depth_stddev:.3f} cycles(half/full)={cycles_to_half}/{cycles_to_full} fill_slope(m half/full)={fill_slope_half}/{fill_slope_full} stall(arb/buf/bp)={stall_arb}/{stall_buf}/{stall_bp} mcast(packets/f2/f3/atomic_dual/flagclr)={mcast_packets}/{mcast_fanout2}/{fanout3}/{atomic_dual}/{flag_cleared} grants_unique={unique_grant_patterns} sat_exercised={saturation_exercised} natural_sat={natural_saturation_met}")
if fail:
    print('[ci_optional][coverage] FAIL: ' + '; '.join(fail))
    sys.exit(1)
print('[ci_optional][coverage] PASS thresholds satisfied')
EOF
        then
          echo "[ci_optional] Coverage gating FAILED"; exit 1;
        fi
      else
        echo "[ci_optional][coverage] python3 not found; skipping gating";
      fi
    else
      echo "[ci_optional][coverage] JSON file missing (build/coverage_functional_tb.json); skipping gating";
    fi
  fi
fi

# If multi-temp calibration TB ran, parse leakage residual & optionally gate.
if printf '%s\n' "${FILTERED[@]}" | grep -q '^power_model_calibration_multitemp_tb.v$'; then
  LOG_PATH=build/power_model_calibration_multitemp_tb_run.log
  # Adjust path if sandbox copy location used
  if [[ ! -f "$LOG_PATH" && -f build/ci_optional/power_model_calibration_multitemp_tb_run.log ]]; then
    LOG_PATH=build/ci_optional/power_model_calibration_multitemp_tb_run.log
  fi
  if [[ -f "$LOG_PATH" ]]; then
    if command -v python3 >/dev/null 2>&1; then
      python3 scripts/parse_leakage_residual_log.py "$LOG_PATH" build/power_model_calibration_multitemp_tb.json || true
      if [[ -f build/power_model_calibration_multitemp_tb.json ]]; then
        MAX_LEAK_RESIDUAL_PCT=${MAX_LEAK_RESIDUAL_PCT:-2.0}
        LEAK_R_MAX=$(python3 - <<'EOF'
import json;print(json.load(open('build/power_model_calibration_multitemp_tb.json')).get('max_abs_leak_err_pct',9999))
EOF
)
        echo "[ci_optional] leak_residual max_abs_leak_err_pct=${LEAK_R_MAX} (budget ${MAX_LEAK_RESIDUAL_PCT}%)"
        awk -v r="$LEAK_R_MAX" -v m="$MAX_LEAK_RESIDUAL_PCT" 'BEGIN{ if (r>m+1e-6){exit 1}}' || { echo "[ci_optional] FAIL: leak residual ${LEAK_R_MAX}% > budget ${MAX_LEAK_RESIDUAL_PCT}%"; exit 1; }
        IDLE_DELTA=$(python3 - <<'EOF'
import json;print(json.load(open('build/power_model_calibration_multitemp_tb.json')).get('idle_delta_pct',9999))
EOF
)
        MAX_IDLE_DELTA_PCT=${MAX_IDLE_DELTA_PCT:-2.0}
        echo "[ci_optional] idle_leak_delta_pct=${IDLE_DELTA} (budget ${MAX_IDLE_DELTA_PCT}%)"
        awk -v d="$IDLE_DELTA" -v b="$MAX_IDLE_DELTA_PCT" 'BEGIN{ if (d>b+1e-6 || d<-b-1e-6){exit 1}}' || { echo "[ci_optional] FAIL: idle leakage delta ${IDLE_DELTA}% exceeds +/-${MAX_IDLE_DELTA_PCT}%"; exit 1; }
      fi
    fi
  fi
fi

# If absolute energy TB ran, parse and gate.
if printf '%s\n' "${FILTERED[@]}" | grep -q '^tile_energy_absolute_tb.v$'; then
  if [[ -f build/tile_energy_absolute_tb_run.log ]]; then
      if command -v python3 >/dev/null 2>&1; then
        python3 scripts/parse_energy_absolute_log.py build/tile_energy_absolute_tb_run.log build/tile_energy_absolute_tb.json || true
        if [[ -f build/tile_energy_absolute_tb.json ]]; then
  ABS_ERR_PCT=$(python3 - <<'EOF'
import json; d=json.load(open('build/tile_energy_absolute_tb.json')); print(f"{d.get('abs_err_total_pct',9999):.3f}")
EOF
)
  DYN_ERR_PCT=$(python3 - <<'EOF'
import json; d=json.load(open('build/tile_energy_absolute_tb.json')); print(f"{d.get('abs_err_dyn_pct',9999):.3f}")
EOF
)
  LEAK_ERR_PCT=$(python3 - <<'EOF'
import json; d=json.load(open('build/tile_energy_absolute_tb.json')); print(f"{d.get('abs_err_leak_pct',9999):.3f}")
EOF
)
  echo "[ci_optional] tile_energy_absolute_tb total_err=${ABS_ERR_PCT} dyn_err=${DYN_ERR_PCT} leak_err=${LEAK_ERR_PCT}";
  # Tightened defaults post-stability (can override via env)
  MAX_ABS_ERR_PCT=${MAX_ABS_ERR_PCT:-0.40}
  MAX_ABS_DYN_ERR_PCT=${MAX_ABS_DYN_ERR_PCT:-0.50}
  MAX_ABS_LEAK_ERR_PCT=${MAX_ABS_LEAK_ERR_PCT:-0.70}
        awk -v a="$ABS_ERR_PCT" -v m="$MAX_ABS_ERR_PCT" 'BEGIN{ if (a>m+1e-6) { exit 1 } }' || { echo "[ci_optional] FAIL: total_err ${ABS_ERR_PCT} > ${MAX_ABS_ERR_PCT}"; exit 1; }
        awk -v a="$DYN_ERR_PCT" -v m="$MAX_ABS_DYN_ERR_PCT" 'BEGIN{ if (a>m+1e-6) { exit 1 } }' || { echo "[ci_optional] FAIL: dyn_err ${DYN_ERR_PCT} > ${MAX_ABS_DYN_ERR_PCT}"; exit 1; }
        awk -v a="$LEAK_ERR_PCT" -v m="$MAX_ABS_LEAK_ERR_PCT" 'BEGIN{ if (a>m+1e-6) { exit 1 } }' || { echo "[ci_optional] FAIL: leak_err ${LEAK_ERR_PCT} > ${MAX_ABS_LEAK_ERR_PCT}"; exit 1; }
      fi
    fi
  fi
fi

echo "[ci_optional] All optional benches completed";
# Optional formal multicast run (bounded model check) if enabled
if [[ "${RUN_FORMAL_MCAST:-0}" == "1" ]]; then
  if command -v sby >/dev/null 2>&1; then
    FORMAL_TIMEOUT=${FORMAL_TIMEOUT_SEC:-90}
    echo "[ci_optional][formal] Running multicast formal harness (timeout ${FORMAL_TIMEOUT}s)";
    set +e
    FORMAL_DIR="formal"
    if [[ ! -d "$FORMAL_DIR" && -d "$ORIGINAL_ROOT_DIR/formal" ]]; then
      # If staged sandbox omitted formal dir, copy it in
      cp -r "$ORIGINAL_ROOT_DIR/formal" . 2>/dev/null || true
    fi
    # Ensure rtl subtree available under formal for relative paths inside sby if sandboxing removed hierarchy
    if [[ ! -d "$FORMAL_DIR/rtl" && -d "rtl" ]]; then
      mkdir -p "$FORMAL_DIR/rtl"; cp -r rtl/router "$FORMAL_DIR/rtl/" 2>/dev/null || true
    fi
  # Generate temp sby with absolute RTL paths to survive sandbox path changes
  ABS_RTL_ABST="$(pwd)/rtl/router/router_cell_abst.v"; ABS_RTL2="$(pwd)/rtl/router/fifo.v"; ABS_RTL_CELL="$(pwd)/rtl/router/router_cell.v"
  TMP_SBY="multicast_formal_ci.sby"
  # If sby uses abstraction (router_cell_abst.v present) prefer that; else fall back to concrete router_cell.v
  if grep -q 'router_cell_abst' "$FORMAL_DIR/multicast_formal.sby"; then
    awk -v ra="$ABS_RTL_ABST" -v r2="$ABS_RTL2" 'BEGIN{rewrite=0} {if ($0 ~ /^read -sv/) {print "read -sv " ra " " r2 " multicast_formal_tb.sv"; rewrite=1} else if ($0==ra || $0==r2) {next} else {print}}' "$FORMAL_DIR/multicast_formal.sby" > "$FORMAL_DIR/$TMP_SBY"
  else
    awk -v r1="$ABS_RTL_CELL" -v r2="$ABS_RTL2" 'BEGIN{rewrite=0} {if ($0 ~ /^read -sv/) {print "read -sv " r1 " " r2 " multicast_formal_tb.sv"; rewrite=1} else if ($0==r1 || $0==r2) {next} else {print}}' "$FORMAL_DIR/multicast_formal.sby" > "$FORMAL_DIR/$TMP_SBY"
  fi
  ( cd "$FORMAL_DIR" && timeout ${FORMAL_TIMEOUT}s sby -f "$TMP_SBY" > ../build/formal_multicast.log 2>&1 )
    RC=$?
    set -e
    if [[ $RC -ne 0 ]]; then
      echo "[ci_optional][formal] FAIL: sby exited rc=$RC"; tail -n 120 build/formal_multicast.log || true; exit 1;
    fi
    if ! grep -q -i "Status: passed" build/formal_multicast.log; then
      echo "[ci_optional][formal] FAIL: status not passed"; tail -n 120 build/formal_multicast.log || true; exit 1;
    fi
    echo "[ci_optional][formal] PASS multicast formal harness"; tail -n 40 build/formal_multicast.log || true
  else
    echo "[ci_optional][formal] sby not found; skipping formal multicast run";
  fi
fi
echo "[ci_optional] Summary runtimes (approx):"
echo "  mem_contention_deterministic_tb ~2s"
echo "  mem_contention_stress_tb        ~3s"
echo "  sparsity_adaptive_fsm_tb        <1s"
echo "  power_pstate_sweep_tb           <1s"
echo "  dvfs_deterministic_tb           ~2s"
echo "  router_mesh_flow_tb             ~2s"
if [[ -f build/bench_times.csv ]]; then
  echo "[ci_optional] Timing CSV (TIME,tb,duration_s):"; column -t -s, build/bench_times.csv || cat build/bench_times.csv
fi
# Adaptive vs baseline regression (if both CSVs present and not disabled)
if [[ "${DISABLE_ADAPT_REGRESS:-0}" != "1" ]]; then
  BASE_CSV="throughput_power_sweep.csv"
  ADAPT_CSV="adaptive_sweep.csv"
  if [[ -f "$BASE_CSV" && -f "$ADAPT_CSV" ]]; then
  # Sanitize potential wrapped CSV artifacts
  python3 scripts/sanitize_csv_wraps.py "$BASE_CSV" --in-place || true
  python3 scripts/sanitize_csv_wraps.py "$ADAPT_CSV" --in-place || true
    echo "[ci_optional] Running adaptive vs baseline regression";
    if ! python3 scripts/regress_adaptive_vs_baseline.py "$BASE_CSV" "$ADAPT_CSV" > build/adaptive_regress.log 2>&1; then
      echo "[ci_optional] Adaptive regression FAILED"; tail -n 120 build/adaptive_regress.log; exit 1;
    else
      echo "[ci_optional] Adaptive regression PASS"; tail -n 40 build/adaptive_regress.log;
      # Generate dual Pareto frontier
      if python3 scripts/compute_dual_pareto.py "$BASE_CSV" "$ADAPT_CSV" build/dual_pareto.csv > build/dual_pareto.log 2>&1; then
        python3 scripts/sanitize_csv_wraps.py build/dual_pareto.csv --in-place || true
        echo "[ci_optional] Dual Pareto written to build/dual_pareto.csv"; tail -n 10 build/dual_pareto.log || true
        # Validate CSV consistency (fail CI if invalid unless ALLOW_CSV_INVALID=1)
        set +e
        python3 scripts/validate_csv_consistency.py "$BASE_CSV" > build/validate_base.log 2>&1; VB=$?
        python3 scripts/validate_csv_consistency.py "$ADAPT_CSV" > build/validate_adapt.log 2>&1; VA=$?
        python3 scripts/validate_csv_consistency.py build/dual_pareto.csv > build/validate_dual.log 2>&1; VD=$?
        set -e
  CSV_FAIL=0
  if [[ $VB -ne 0 || $VA -ne 0 || $VD -ne 0 ]]; then CSV_FAIL=1; fi
  if [[ "${ALLOW_CSV_INVALID:-0}" != "1" && $CSV_FAIL -ne 0 ]]; then
          echo "[ci_optional] CSV validation failed (VB=$VB VA=$VA VD=$VD)"; tail -n 40 build/validate_base.log || true; tail -n 40 build/validate_adapt.log || true; tail -n 40 build/validate_dual.log || true; exit 1;
        else
          echo "[ci_optional] CSV validation passed (or allowed)"
        fi
        # Generate Markdown summary of dual frontier deltas
        if python3 scripts/summarize_dual_pareto.py build/dual_pareto.csv > build/dual_pareto_summary.md 2> build/dual_pareto_summary.log; then
          echo "[ci_optional] Dual Pareto summary generated -> build/dual_pareto_summary.md"; tail -n 20 build/dual_pareto_summary.md || true
        else
          echo "[ci_optional] Dual Pareto summary generation failed"; tail -n 120 build/dual_pareto_summary.log || true; [[ "${ALLOW_CSV_INVALID:-0}" == "1" ]] || exit 1
        fi
        # Generate JSON summary (machine readable)
        if python3 scripts/generate_dual_pareto_json.py build/dual_pareto.csv > build/dual_pareto_summary.json 2> build/dual_pareto_json.log; then
          echo "[ci_optional] Dual Pareto JSON summary -> build/dual_pareto_summary.json"
        else
          echo "[ci_optional] Dual Pareto JSON summary generation failed"; tail -n 80 build/dual_pareto_json.log || true; [[ "${ALLOW_CSV_INVALID:-0}" == "1" ]] || exit 1
        fi
        # Enforce minimum average delta_dyn_pct if configured
        if [[ -n "${MIN_DELTA_DYN_PCT:-}" && "${MIN_DELTA_DYN_PCT}" != "" ]]; then
          AVG_DELTA_DYN=$(python3 - <<'EOF'
import csv,sys,math
path='build/dual_pareto.csv'
with open(path) as f:
    r=csv.DictReader(line for line in (l.split('@@ROW@@,',1)[1] if l.startswith('@@ROW@@,') else l for l in f if l.strip()) )
    vals=[float(row['delta_dyn_pct']) for row in r if row.get('type','').startswith('adaptive') and row.get('delta_dyn_pct','').strip()!='']
    print('nan' if not vals else f"{sum(vals)/len(vals):.4f}")
EOF
)
          if [[ "$AVG_DELTA_DYN" == "nan" ]]; then
            echo "[ci_optional] WARNING: No adaptive delta_dyn_pct values found for gating";
          else
            awk -v avg="$AVG_DELTA_DYN" -v thr="${MIN_DELTA_DYN_PCT}" 'BEGIN{ if (avg < thr) { exit 1 } }' || { echo "[ci_optional] FAIL: avg delta_dyn_pct $AVG_DELTA_DYN < threshold ${MIN_DELTA_DYN_PCT}"; exit 1; }
            echo "[ci_optional] avg delta_dyn_pct $AVG_DELTA_DYN >= threshold ${MIN_DELTA_DYN_PCT}";
          fi
        fi
        # Enforce minimum average delta_power_pct (overall power reduction) if configured
        if [[ -n "${MIN_DELTA_POWER_PCT:-}" && "${MIN_DELTA_POWER_PCT}" != "" ]]; then
          AVG_DELTA_POWER=$(python3 - <<'EOF'
import csv,sys,math
path='build/dual_pareto.csv'
with open(path) as f:
    r=csv.DictReader(line for line in (l.split('@@ROW@@,',1)[1] if l.startswith('@@ROW@@,') else l for l in f if l.strip()) )
    vals=[float(row['delta_power_pct']) for row in r if row.get('type','').startswith('adaptive') and row.get('delta_power_pct','').strip()!='']
    print('nan' if not vals else f"{sum(vals)/len(vals):.4f}")
EOF
)
          if [[ "$AVG_DELTA_POWER" == "nan" ]]; then
            echo "[ci_optional] WARNING: No adaptive delta_power_pct values found for gating";
          else
            awk -v avg="$AVG_DELTA_POWER" -v thr="${MIN_DELTA_POWER_PCT}" 'BEGIN{ if (avg < thr) { exit 1 } }' || { echo "[ci_optional] FAIL: avg delta_power_pct $AVG_DELTA_POWER < threshold ${MIN_DELTA_POWER_PCT}"; exit 1; }
            echo "[ci_optional] avg delta_power_pct $AVG_DELTA_POWER >= threshold ${MIN_DELTA_POWER_PCT}";
          fi
        fi
        # Plot dual Pareto if matplotlib available (can disable with DISABLE_PARETO_PLOT=1)
        if [[ "${DISABLE_PARETO_PLOT:-0}" != "1" ]]; then
          if python3 scripts/plot_dual_pareto.py build/dual_pareto.csv build/dual_pareto.png > build/dual_pareto_plot.log 2>&1; then
            echo "[ci_optional] Dual Pareto plot generated -> build/dual_pareto.png"
          else
            echo "[ci_optional] Dual Pareto plot generation skipped/failed (non-fatal)"; tail -n 40 build/dual_pareto_plot.log || true
          fi
        fi
        # Optional gzip compression
        if [[ "${DISABLE_CSV_GZIP:-0}" != "1" ]]; then
          gzip -f throughput_power_sweep.csv adaptive_sweep.csv build/dual_pareto.csv 2>/dev/null || true
          echo "[ci_optional] Compressed CSV artifacts (.gz)"
        fi
      else
        echo "[ci_optional] Dual Pareto generation FAILED"; tail -n 120 build/dual_pareto.log; exit 1;
      fi
    fi
  else
    echo "[ci_optional] Adaptive regression skipped (missing $BASE_CSV or $ADAPT_CSV)";
  fi
else
  echo "[ci_optional] Adaptive regression disabled via DISABLE_ADAPT_REGRESS=1";
fi
if [[ $STAGED_SANDBOX -eq 1 ]]; then
  mkdir -p "$ORIGINAL_ROOT_DIR/build/ci_optional" 2>/dev/null || true
  cp build/*_run.log "$ORIGINAL_ROOT_DIR/build/ci_optional/" 2>/dev/null || true
  # Copy any CSV artifacts out of sandbox root (adaptive & baseline sweeps) for external scripts
  cp *.csv "$ORIGINAL_ROOT_DIR/" 2>/dev/null || true
  cp build/adaptive_regress.log "$ORIGINAL_ROOT_DIR/build/ci_optional/" 2>/dev/null || true
  cp build/bench_times.csv "$ORIGINAL_ROOT_DIR/build/ci_optional/" 2>/dev/null || true
  cp build/coverage_functional_tb.json "$ORIGINAL_ROOT_DIR/build/ci_optional/" 2>/dev/null || true
  # Copy multicast logs if present
  cp build/multicast_*_run.log "$ORIGINAL_ROOT_DIR/build/ci_optional/" 2>/dev/null || true
  cp build/multicast_coverage_tb.json "$ORIGINAL_ROOT_DIR/build/ci_optional/" 2>/dev/null || true
  echo "[ci_optional] Copied run logs to $ORIGINAL_ROOT_DIR/build/ci_optional (sandbox staging due to spaces in path)."
fi
if [[ -f "$ORIGINAL_ROOT_DIR/build/ci_optional/coverage_functional_tb.json" ]]; then
  cp -f "$ORIGINAL_ROOT_DIR/build/ci_optional/coverage_functional_tb.json" "$ORIGINAL_ROOT_DIR/build/coverage_functional_tb.json" 2>/dev/null || true
  echo "[ci_optional] Promoted (refreshed) coverage_functional_tb.json to build/ root for gating & aggregation"
fi
echo "(Light params, caching, parallel build active. Use FULL_SIM=1 to disable reduction, FORCE_REBUILD=1 to rebuild, BENCH=tbname or BENCH_REGEX=regex to filter.)"
