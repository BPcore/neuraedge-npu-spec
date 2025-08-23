#!/usr/bin/env python3
import sys,csv
# Compute Pareto frontier from combined baseline + adaptive dataset
# Usage: python compute_pareto_adaptive.py throughput_power_sweep.csv adaptive_sweep.csv pareto_adaptive.csv
# We map adaptive rows onto comparable schema: treat scaled_dyn_mW + leak_mW as power_mW_alt and compute a synthetic tops_milli if available (not in adaptive CSV yet).
# For now we only compute dynamic power reduction statistics per util + freq.
if len(sys.argv)<4:
    print('Usage: compute_pareto_adaptive.py baseline.csv adaptive.csv out.csv', file=sys.stderr); sys.exit(1)
base_rows=[]
with open(sys.argv[1]) as f:
    r=csv.DictReader(f)
    for row in r:
        row['tops_milli']=int(row['tops_milli']); row['power_mW']=int(row['power_mW'])
        base_rows.append(row)
adapt_rows=[]
with open(sys.argv[2]) as f:
    r=csv.DictReader(f)
    for row in r:
        adapt_rows.append(row)
# Index baseline canonical
base_index={}
for r in base_rows:
    if r['precision_mode']=='0' and r['lane_mask_pct']=='100' and r['sparsity_scale_milli']=='1000':
        key=(r['freq_MHz'], r['volt_mV'], r['util_pct'])
        if key not in base_index: base_index[key]=r
out_rows=[]
for ar in adapt_rows:
    key=(ar['freq_MHz'], ar['volt_mV'], ar['util_pct'])
    base=base_index.get(key)
    if not base: continue
    dyn=int(ar['dyn_mW']); scaled=int(ar['scaled_dyn_mW']); leak=int(ar['leak_mW'])
    base_dyn=int(base['dyn_mW']); base_leak=int(base['leak_mW'])
    reduction= (1.0 - scaled/max(dyn,1))*100.0 if dyn>0 else 0.0
    out_rows.append({
        'freq_MHz':ar['freq_MHz'],'volt_mV':ar['volt_mV'],'util_pct':ar['util_pct'],
        'adapt_mode':ar['adapt_mode'],'adapt_mode_eff_milli':ar['adapt_mode_eff_milli'],
        'dyn_mW_adapt':dyn,'scaled_dyn_mW':scaled,'dyn_mW_base':base_dyn,
        'leak_mW_adapt':leak,'leak_mW_base':base_leak,
        'dyn_reduction_pct':f'{reduction:.2f}'
    })
# Write
with open(sys.argv[3],'w',newline='') as f:
    fld=['freq_MHz','volt_mV','util_pct','adapt_mode','adapt_mode_eff_milli','dyn_mW_base','dyn_mW_adapt','scaled_dyn_mW','leak_mW_base','leak_mW_adapt','dyn_reduction_pct']
    w=csv.DictWriter(f, fieldnames=fld); w.writeheader(); [w.writerow(r) for r in out_rows]
print(f'Wrote adaptive comparison rows: {len(out_rows)} to {sys.argv[3]}')
