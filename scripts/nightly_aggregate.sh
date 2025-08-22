#!/usr/bin/env bash
# nightly_aggregate.sh
# Aggregates key JSON/log metrics into a timestamped summary directory.
# Intended to be run via cron or CI nightly job.
set -uo pipefail
STAMP=$(date +%Y%m%d_%H%M%S)
OUT=build/nightly_$STAMP
mkdir -p "$OUT"

copy_if() { [[ -f "$1" ]] && cp "$1" "$OUT/"; }
# Core metric JSONs
copy_if build/tile_energy_absolute_tb.json
copy_if build/power_model_calibration_multitemp_tb.json
copy_if build/dual_pareto_summary.json
copy_if build/dual_pareto.csv
copy_if build/dual_pareto_summary.md
copy_if build/bench_times.csv
copy_if build/coverage_functional_tb.json

# Generate consolidated metrics JSON
OUT_JSON="$OUT/metrics.json"
python3 - "$OUT_JSON" <<'EOF' || { echo "[nightly] python aggregation failed"; }
import json,glob,sys,os
out={}
paths = glob.glob('build/*.json') + glob.glob('build/ci_optional/*.json')
for p in paths:
  base=os.path.basename(p)
  try:
    out[base]=json.load(open(p))
  except Exception:
    pass
# Promote key coverage stats if present
cov=out.get('coverage_functional_tb.json')
if cov:
  cov_dir=cov.get('dir',{})
  cov_mcast=cov.get('multicast',{})
  out['coverage_summary']={
    'east': cov_dir.get('east',0),
    'west': cov_dir.get('west',0),
    'east_west_ratio': cov.get('east_west_ratio',0),
    'direction_fairness': cov.get('direction_fairness', cov.get('east_west_ratio',0)),
    'mode_hits': cov.get('mode_hits',[]),
    'mode_hits_pct': cov.get('mode_hits_pct',[]),
    'density_bins_pct': cov.get('density_bins_pct',[]),
    'stall_counts': cov.get('stall_counts',{}),
    'stimulus_phases': cov.get('stimulus_phases',{}),
    'multicast': {
      'packets': cov_mcast.get('packets',0),
      'fanout_ge2': cov_mcast.get('fanout_ge2',0),
      'fanout_ge3': cov_mcast.get('fanout_ge3',0),
      'atomic_dual': cov_mcast.get('atomic_dual',0),
      'flag_cleared_obs': cov_mcast.get('flag_cleared_obs',0)
    }
  }
  adv=cov.get('advanced_kpis',{})
  if adv:
    out['coverage_summary']['saturation_ratio']=adv.get('saturation_ratio',0.0)
    out['coverage_summary']['contention_intensity']=adv.get('contention_intensity',0.0)
    out['coverage_summary']['mode_density_unhit']=adv.get('mode_density_unhit',-1)
    out['coverage_summary']['fairness_target_met']=adv.get('fairness_target_met',0)
    out['coverage_summary']['fairness_target_threshold']=adv.get('fairness_target_threshold',0)
    out['coverage_summary']['auto_rebalance']=adv.get('auto_rebalance',0)
  out['coverage_summary']['max_fifo_occupancy']=adv.get('max_fifo_occupancy',0)
  out['coverage_summary']['cycles_full']=adv.get('cycles_full',0)
  out['coverage_summary']['unique_grant_patterns']=adv.get('unique_grant_patterns',0)
  # Newly added derived & latency metrics
  for k in [
    'high_depth_utilization_pct','per_router_depth_stddev','cycles_to_half_depth','cycles_to_full_depth',
    'fill_slope_half_milli','fill_slope_full_milli','pressure_efficiency_pct']:
    out['coverage_summary'][k]=adv.get(k,0)
  # Derived fairness classification
  df=out['coverage_summary']['direction_fairness'] or 0
  if df>0:
    out['coverage_summary']['fairness_class']='good' if df<=2.0 else ('warn' if df<=2.5 else 'poor')
  # Compute density saturation flag
  dens_pct = out['coverage_summary'].get('density_bins_pct',[])
  if len(dens_pct)==4:
    out['coverage_summary']['saturation_exercised'] = (dens_pct[3] > 0)
    # Fallback: if percentage truncated to 0 but we have bin3 count or high saturation_ratio, mark exercised
    if not out['coverage_summary']['saturation_exercised']:
      dens_counts = cov.get('density_bins',[0,0,0,0])
      if (len(dens_counts)==4 and dens_counts[3] > 0) or (cov.get('advanced_kpis',{}).get('saturation_ratio',0) >= 0.5):
        out['coverage_summary']['saturation_exercised'] = True
mcov=out.get('multicast_coverage_tb.json')
if mcov and 'multicast' in mcov:
  out['multicast_summary']={
    'packets': mcov['multicast'].get('packets',0),
    'fanout_ge2': mcov['multicast'].get('fanout_ge2',0),
    'fanout_ge3': mcov['multicast'].get('fanout_ge3',0),
    'atomic_dual': mcov['multicast'].get('atomic_dual',0),
    'flag_cleared_obs': mcov['multicast'].get('flag_cleared_obs',0),
    'fanout_hist': mcov['multicast'].get('fanout_hist',[])
  }
  hist=out['multicast_summary'].get('fanout_hist',[])
  if isinstance(hist,list) and len(hist)==5:
    total=sum(hist)
    if total>0:
      cum=[]; acc=0
      for h in hist:
        acc+=h; cum.append(acc)
      def pct(p):
        thr=total*p/100.0
        for i,c in enumerate(cum):
          if c>=thr: return i+1
        return 5
      out['multicast_summary']['fanout_p50']=pct(50)
      out['multicast_summary']['fanout_p90']=pct(90)
open(sys.argv[1],'w').write(json.dumps(out,indent=2)+'\n')
EOF

if [[ -f "$OUT_JSON" ]]; then
  echo "[nightly] Wrote aggregate in $OUT (metrics.json size $(wc -c < "$OUT_JSON") bytes)";
else
  echo "[nightly] WARNING: metrics.json not generated";
fi
# Generate KPI trend (non-fatal)
if command -v python3 >/dev/null 2>&1; then
  python3 scripts/generate_kpi_trend.py || echo "[nightly] WARN: KPI trend generation failed"
  if [[ -f build/kpi_trend.json ]]; then cp build/kpi_trend.* "$OUT/" 2>/dev/null || true; fi
fi

# Optional: run mesh experiment matrix and include artifacts when enabled
if [[ "${RUN_MESH_EXPERIMENTS:-0}" == "1" ]]; then
  echo "[nightly] RUN_MESH_EXPERIMENTS=1 -> running mesh experiment matrix"
  scripts/run_mesh_experiments.sh || echo "[nightly] WARN: mesh experiments failed"
  # Copy experiment artifacts into nightly output
  for f in build/ci_optional/coverage_baseline_fullsim.json build/ci_optional/coverage_pipelined_fullsim.json build/ci_optional/coverage_pipe_throttle_fullsim.json build/ci_optional/compare_baseline_vs_pipelined.txt build/ci_optional/compare_baseline_vs_pipe_throttle.txt build/ci_optional/compare_pipelined_vs_pipe_throttle.txt; do
    [[ -f "$f" ]] && cp "$f" "$OUT/" || true
  done
  # Generate a small human-readable summary
  if command -v python3 >/dev/null 2>&1; then
    python3 scripts/generate_mesh_experiment_summary.py build/ci_optional || true
    [[ -f build/ci_optional/mesh_experiment_summary.md ]] && cp build/ci_optional/mesh_experiment_summary.md "$OUT/" || true
  fi
fi
exit 0
