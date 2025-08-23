#!/usr/bin/env python3
"""generate_kpi_trend.py
Scans build/nightly_* directories, parses metrics.json, and emits consolidated KPI trend files:
 - build/kpi_trend.json : list of records
 - build/kpi_trend.csv  : tabular summary
Environment:
  KPI_DAYS (default 14) : how many most recent nightly directories to include.
Metrics extracted (if present): timestamp, east, west, direction_fairness|east_west_ratio, fairness_class,
  saturation_exercised, stall_arb, stall_buf, stall_bp, multicast stats (packets, fanout_ge2, fanout_ge3, atomic_dual, flag_cleared_obs).
Safe to run repeatedly; overwrites outputs.
"""
import json, os, re, glob, sys, datetime

root = os.getcwd()
nightlies = sorted(glob.glob('build/nightly_*'))
if not nightlies:
    print("[kpi_trend] No nightly directories found", file=sys.stderr)
    sys.exit(0)
# Extract timestamp part using regex
pat = re.compile(r'build/nightly_(\d{8}_\d{6})$')
records = []
for d in nightlies:
    m = pat.match(d)
    if not m:
        continue
    ts = m.group(1)
    metrics_path = os.path.join(d, 'metrics.json')
    if not os.path.isfile(metrics_path):
        continue
    try:
        data = json.load(open(metrics_path))
    except Exception as e:
        print(f"[kpi_trend] WARN parse {metrics_path}: {e}")
        continue
    cov = data.get('coverage_summary') or data.get('coverage_functional_tb.json') or {}
    dir_fair = cov.get('direction_fairness') or cov.get('east_west_ratio') or 0
    stall = cov.get('stall_counts', {})
    mcov = cov.get('multicast', {})
    adv = cov  # coverage_summary already promotes advanced_kpis fields
    rec = {
        'timestamp': ts,
        'east': cov.get('east', 0),
        'west': cov.get('west', 0),
        'direction_fairness': dir_fair,
        'fairness_class': cov.get('fairness_class', ''),
        'saturation_exercised': cov.get('saturation_exercised', False),
        'saturation_ratio': cov.get('saturation_ratio', 0.0),
        'contention_intensity': cov.get('contention_intensity', 0.0),
        'mode_density_unhit': cov.get('mode_density_unhit', -1),
        'fairness_target_met': cov.get('fairness_target_met', 0),
        'unique_grant_patterns': cov.get('unique_grant_patterns', 0),
    'max_fifo_occupancy': cov.get('max_fifo_occupancy', 0),
    'cycles_full': cov.get('cycles_full', 0),
    'high_depth_util_pct': cov.get('high_depth_utilization_pct', 0),
    'per_router_depth_stddev': cov.get('per_router_depth_stddev', 0),
    'cycles_to_half_depth': cov.get('cycles_to_half_depth', -1),
    'cycles_to_full_depth': cov.get('cycles_to_full_depth', -1),
    'fill_slope_half_milli': cov.get('fill_slope_half_milli', 0),
    'fill_slope_full_milli': cov.get('fill_slope_full_milli', 0),
    'pressure_efficiency_pct': cov.get('pressure_efficiency_pct', 0),
        'stall_arb': stall.get('arb', 0),
        'stall_buf': stall.get('buf', 0),
        'stall_bp': stall.get('bp', 0),
        'mcast_packets': mcov.get('packets', 0),
        'mcast_fanout_ge2': mcov.get('fanout_ge2', 0),
        'mcast_fanout_ge3': mcov.get('fanout_ge3', 0),
        'mcast_atomic_dual': mcov.get('atomic_dual', 0),
        'mcast_flag_cleared_obs': mcov.get('flag_cleared_obs', 0),
    }
    records.append(rec)
# Keep only last KPI_DAYS or last N entries if more frequent per day
limit = int(os.environ.get('KPI_DAYS', '14'))
# Assume multiple per day; just take last `limit` records
records = records[-limit:]
# Optional filtering: drop leading records that are entirely empty (no traffic)
while len(records)>1 and records[0]['east']==0 and records[0]['west']==0:
    records.pop(0)
# Write JSON
os.makedirs('build', exist_ok=True)
json_path = 'build/kpi_trend.json'
csv_path = 'build/kpi_trend.csv'
# Stability flags (added to last record only)
if len(records) >= 3:
    last3 = records[-3:]
    def all_true(pred):
        return all(pred(r) for r in last3)
    fairness_stable = all_true(lambda r: r.get('direction_fairness',9) <= 2.0)
    saturation_stable = all_true(lambda r: r.get('saturation_ratio',0) >= 0.9 or r.get('saturation_exercised',False))
    md_complete_stable = all_true(lambda r: r.get('mode_density_unhit',1)==0)
    records[-1]['fairness_stable_3']=1 if fairness_stable else 0
    records[-1]['saturation_stable_3']=1 if saturation_stable else 0
    records[-1]['md_complete_3']=1 if md_complete_stable else 0
with open(json_path, 'w') as f:
    json.dump(records, f, indent=2)
# Write CSV
if records:
    headers = list(records[0].keys())
    with open(csv_path, 'w') as f:
        f.write(','.join(headers) + '\n')
        for r in records:
            def fmt(v):
                if isinstance(v, bool):
                    return '1' if v else '0'
                return str(v)
            f.write(','.join(fmt(r[h]) for h in headers) + '\n')
print(f"[kpi_trend] Wrote {json_path} ({len(records)} rows) and {csv_path}")
