#!/usr/bin/env python3
import sys,csv,math
# Compute Pareto frontier from throughput_power_sweep.csv
# Usage: python compute_pareto_throughput_power.py throughput_power_sweep.csv pareto.csv
# A point A dominates B if A.tops_milli >= B.tops_milli and A.power_mW <= B.power_mW with at least one strict.
# Keep minimal subset sorted by power.
if len(sys.argv)<3:
    print("Usage: compute_pareto_throughput_power.py input.csv output.csv", file=sys.stderr); sys.exit(1)
rows=[]
with open(sys.argv[1]) as f:
    r=csv.DictReader(f)
    for row in r:
        row['tops_milli']=int(row['tops_milli'])
        row['power_mW']=int(row['power_mW'])
        rows.append(row)
# Strategy: build true global frontier first, then reduce to one representative per pstate (lowest power achieving that pstate's max tops_milli among its util points)
rows.sort(key=lambda x:(x['power_mW'], -x['tops_milli']))
global_frontier=[]; max_tops=-1
for row in rows:
    if row['tops_milli']>max_tops:
        global_frontier.append(row); max_tops=row['tops_milli']
# Reduce: group by pstate, precision_mode choose minimal power within each pstate's rows in global frontier
reduced=[]
seen=set()
for r in global_frontier:
    key=(r['pstate'], r['precision_mode'])
    if key in seen: # already kept best repr for this key
        # keep if higher tops and lower power than stored one
        for i,existing in enumerate(reduced):
            if (existing['pstate'],existing['precision_mode'])==key:
                if (r['tops_milli']>existing['tops_milli']) or (r['tops_milli']==existing['tops_milli'] and r['power_mW']<existing['power_mW']):
                    reduced[i]=r
                break
    else:
        reduced.append(r); seen.add(key)
frontier=reduced
# Write output
with open(sys.argv[2],'w', newline='') as f:
    fieldnames=['pstate','precision_mode','lane_mask_pct','sparsity_mode','sparsity_scale_milli','util_pct','freq_MHz','volt_mV','dyn_mW','leak_mW','power_mW','tops_milli','eff_milli']
    w=csv.DictWriter(f, fieldnames=fieldnames)
    w.writeheader()
    for row in frontier:
        w.writerow({k:row[k] for k in fieldnames})
print(f"Wrote {len(frontier)} Pareto points to {sys.argv[2]}")
