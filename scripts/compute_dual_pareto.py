#!/usr/bin/env python3
"""
Compute dual Pareto frontiers: baseline (throughput_power_sweep.csv) and adaptive (adaptive_sweep.csv) using scaled dynamic power.
Baseline power uses power_mW. Adaptive synthetic power = scaled_dyn_mW + leak_mW (same leak proxy) and scaled_tops_milli.
Output: dual_pareto.csv with columns:
    type (baseline|adaptive), freq_MHz, util_pct, dyn_mW, leak_mW, power_mW, tops_milli, (adaptive rows add delta_dyn_pct, delta_power_pct, delta_tops_pct vs nearest baseline match)
Filtering baseline to canonical precision=0, lane_mask=100, sparsity_scale=1000 for fair compare.
"""
import sys,csv
if len(sys.argv)<4:
    print('Usage: compute_dual_pareto.py baseline.csv adaptive.csv out.csv', file=sys.stderr); sys.exit(1)
base=[]
with open(sys.argv[1]) as f:
    r=csv.DictReader(f)
    for row in r:
        if row['precision_mode']=='0' and row['lane_mask_pct']=='100' and row['sparsity_scale_milli']=='1000':
            row['tops_milli']=int(row['tops_milli']); row['power_mW']=int(row['power_mW']); row['dyn_mW']=int(row['dyn_mW']); row['leak_mW']=int(row['leak_mW'])
            base.append(row)
adapt=[]
with open(sys.argv[2]) as f:
    r=csv.DictReader(f)
    for row in r:
        try:
            row['scaled_dyn_mW']=int(row['scaled_dyn_mW']); row['leak_mW']=int(row['leak_mW']); row['scaled_tops_milli']=int(row.get('scaled_tops_milli',row.get('tops_milli','0')))
            adapt.append(row)
        except: pass

def pareto(points, tops_key, power_key):
    pts=sorted(points, key=lambda x:(x[power_key], -x[tops_key]))
    out=[]; best=-1
    for p in pts:
        if p[tops_key]>best:
            out.append(p); best=p[tops_key]
    return out

base_pts=[{'type':'baseline','freq_MHz':b['freq_MHz'],'util_pct':b['util_pct'],'dyn_mW':b['dyn_mW'],'leak_mW':b['leak_mW'],'power_mW':b['power_mW'],'tops_milli':b['tops_milli']} for b in base]
adapt_pts=[{'type':'adaptive','freq_MHz':a['freq_MHz'],'util_pct':a['util_pct'],'dyn_mW':a['scaled_dyn_mW'],'leak_mW':a['leak_mW'],'power_mW':a['scaled_dyn_mW']+a['leak_mW'],'tops_milli':a['scaled_tops_milli']} for a in adapt]
base_front=pareto(base_pts,'tops_milli','power_mW')
adapt_front_raw=pareto(adapt_pts,'tops_milli','power_mW')
# Build mapping baseline by (freq,util) choose closest tops for reference
from math import inf
baseline_groups={}
for b in base_front:
    key=(b['freq_MHz'], b['util_pct'])
    baseline_groups.setdefault(key, []).append(b)
def nearest_baseline(a):
    key=(a['freq_MHz'], a['util_pct'])
    cands=baseline_groups.get(key, [])
    if not cands:
        # fallback all baseline
        cands=base_front
    best=None; bd=inf
    for c in cands:
        d=abs(c['tops_milli']-a['tops_milli'])
        if d<bd:
            bd=d; best=c
    return best
adapt_front=[]
for a in adapt_front_raw:
    b=nearest_baseline(a)
    if b:
        def pct(delta, base):
            return 0 if base==0 else 100.0*delta/base
        a['delta_dyn_pct']=pct(b['dyn_mW']-a['dyn_mW'], b['dyn_mW'])
        a['delta_power_pct']=pct(b['power_mW']-a['power_mW'], b['power_mW'])
        a['delta_tops_pct']=pct(a['tops_milli']-b['tops_milli'], b['tops_milli'])
    else:
        a['delta_dyn_pct']=''
        a['delta_power_pct']=''
        a['delta_tops_pct']=''
    adapt_front.append(a)
with open(sys.argv[3],'w',newline='') as f:
    fn=['type','freq_MHz','util_pct','dyn_mW','leak_mW','power_mW','tops_milli','delta_dyn_pct','delta_power_pct','delta_tops_pct']
    f.write('@@ROW@@,'+','.join(fn)+'\n')
    for r in base_front:
        # baseline rows: leave delta columns blank
        line=[str(r.get(k,'')) for k in fn]
        f.write('@@ROW@@,'+','.join(line)+'\n')
    for r in adapt_front:
        line=[str(r.get(k,'')) for k in fn]
        f.write('@@ROW@@,'+','.join(line)+'\n')
print(f'Wrote dual frontier: baseline {len(base_front)} pts, adaptive {len(adapt_front)} pts to {sys.argv[3]} (with deltas)')
