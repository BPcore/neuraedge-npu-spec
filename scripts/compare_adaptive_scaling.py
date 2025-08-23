#!/usr/bin/env python3
import csv, sys
# Placeholder script: compares dynamic power scaling vs efficiency milli if adaptive sweep data present.
# Usage: python compare_adaptive_scaling.py base_sweep.csv [adaptive_sweep.csv]
# Future: integrate once tile-level adaptive sweep exists.

def load(path):
    rows=[]
    with open(path) as f:
        r=csv.DictReader(f)
        for row in r: rows.append(row)
    return rows

if __name__=='__main__':
    if len(sys.argv)<2:
        print("usage: compare_adaptive_scaling.py base.csv [adaptive.csv]"); sys.exit(1)
    base=load(sys.argv[1])
    if len(sys.argv)>2:
        adap=load(sys.argv[2])
        print(f"Loaded {len(base)} base rows, {len(adap)} adaptive rows")
    else:
        print(f"Loaded {len(base)} base rows (no adaptive provided yet)")
    # Stub: extend with matching by pstate, precision, util, lane mask.
    print("[INFO] Adaptive comparison not yet implemented (awaiting adaptive sweep data)")
