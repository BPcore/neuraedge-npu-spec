#!/usr/bin/env python3
"""generate_dual_pareto_json.py dual_pareto.csv
Parses dual Pareto CSV (with optional @@ROW@@ prefix) and emits JSON summary:
{
  "baseline_points": N,
  "adaptive_points": M,
  "avg_delta_dyn_pct": float | null,
  "avg_delta_power_pct": float | null,
  "median_delta_dyn_pct": float | null,
  "median_delta_power_pct": float | null,
  "points": [ { row... } ]  # adaptive rows only with selected fields
}
"""
import sys,csv,json,math,statistics
from pathlib import Path

def load(path):
    with open(path) as f:
        # Strip sentinel if present
        cleaned=[]
        for line in f:
            line=line.strip()
            if not line: continue
            if line.startswith('@@ROW@@,'): line=line.split('@@ROW@@,',1)[1]
            cleaned.append(line)
    if not cleaned: return []
    import io
    sio=io.StringIO('\n'.join(cleaned))
    r=csv.DictReader(sio)
    return list(r)

def to_float(x):
    try: return float(x)
    except: return math.nan

def main():
    if len(sys.argv)<2:
        print('Usage: generate_dual_pareto_json.py dual_pareto.csv', file=sys.stderr); return 2
    path=Path(sys.argv[1])
    if not path.exists():
        print(json.dumps({"error":"file_not_found","path":str(path)})); return 2
    rows=load(path)
    base=[r for r in rows if r.get('type','').startswith('baseline')]
    adapt=[r for r in rows if r.get('type','').startswith('adaptive')]
    d_dyn=[to_float(r.get('delta_dyn_pct','')) for r in adapt if r.get('delta_dyn_pct','')!='']
    d_dyn=[v for v in d_dyn if not math.isnan(v)]
    d_pwr=[to_float(r.get('delta_power_pct','')) for r in adapt if r.get('delta_power_pct','')!='']
    d_pwr=[v for v in d_pwr if not math.isnan(v)]
    summary={
        'baseline_points': len(base),
        'adaptive_points': len(adapt),
        'avg_delta_dyn_pct': None if not d_dyn else sum(d_dyn)/len(d_dyn),
        'avg_delta_power_pct': None if not d_pwr else sum(d_pwr)/len(d_pwr),
        'median_delta_dyn_pct': None if not d_dyn else statistics.median(d_dyn),
        'median_delta_power_pct': None if not d_pwr else statistics.median(d_pwr),
        'points': [
            {
                'freq_MHz': int(r['freq_MHz']),
                'util_pct': int(r['util_pct']),
                'tops_milli': int(r['tops_milli']),
                'delta_dyn_pct': to_float(r.get('delta_dyn_pct','nan')),
                'delta_power_pct': to_float(r.get('delta_power_pct','nan')),
                'delta_tops_pct': to_float(r.get('delta_tops_pct','nan')),
            } for r in adapt
        ]
    }
    print(json.dumps(summary, indent=2, sort_keys=True))
    return 0

if __name__=='__main__':
    sys.exit(main())
