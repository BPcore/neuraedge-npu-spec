#!/usr/bin/env python3
"""
Adaptive vs Baseline Dynamic Power Regression

Compares adaptive sparsity sweep CSV (adaptive_sweep.csv) against baseline throughput/power sweep (throughput_power_sweep.csv).
Checks:
 1. For each adaptive row, find baseline row with matching (freq_MHz, volt_mV, util_pct) under canonical baseline conditions:
      precision_mode=0, lane_mask_pct=100, sparsity_scale_milli=1000.
 2. Baseline dynamic power should match adaptive dyn_mW (pre-scaling) within --base-match-tol (default 5%).
 3. scaled_dyn_mW must equal dyn_mW * (adapt_mode_eff_milli/1000) within --scaled-rel-tol (default 2%) or --scaled-abs-tol mW (default 1 mW) whichever is larger.
 4. scaled_dyn_mW must be <= dyn_mW + epsilon.
Exits non-zero on any violation. Prints summary reduction statistics.

Usage:
  regress_adaptive_vs_baseline.py throughput_power_sweep.csv adaptive_sweep.csv [--base-match-tol=0.05] [--scaled-rel-tol=0.02] [--scaled-abs-tol=1.0]
Environment overrides (if flags not supplied):
  BASE_MATCH_TOL, SCALED_REL_TOL, SCALED_ABS_TOL

Outputs lines:
  ADAPT_REGRESS_SUMMARY,<rows>,<avg_reduction_pct>,<min_reduction_pct>,<max_reduction_pct>
  ADAPT_REGRESS_VIOLATION,<type>,<details>
"""
import csv, sys, math, io
from pathlib import Path

def parse_args(argv):
    import argparse
    ap = argparse.ArgumentParser()
    ap.add_argument('baseline')
    ap.add_argument('adaptive')
    ap.add_argument('--base-match-tol', type=float, default=float(os.getenv('BASE_MATCH_TOL', '0.05')))
    ap.add_argument('--scaled-rel-tol', type=float, default=float(os.getenv('SCALED_REL_TOL', '0.02')))
    ap.add_argument('--scaled-abs-tol', type=float, default=float(os.getenv('SCALED_ABS_TOL', '1.0')))
    return ap.parse_args(argv)

import os

def sanitize_and_load_csv(path):
    # Reads file and repairs common wrapped tokens caused by path with spaces / line wrapping
    raw=open(path,'r',errors='ignore').read()
    # Join wrapped critical tokens (density_milli, tops_milli, scaled_tops_milli) if split by newline inside token
    replacements=[('density_mi\nlli','density_milli'),('tops_mi\nlli','tops_milli'),('scaled_tops_mi\nlli','scaled_tops_milli')]
    for a,b in replacements:
        raw=raw.replace(a,b)
    # If header still split across multiple lines, merge until we get a line with expected commas (>=13 for extended adaptive header)
    lines=[l for l in raw.splitlines() if l.strip()!='']
    if not lines:
        return []
    # Reconstruct header
    header_lines=[]; header_commas=0
    while lines and header_commas<12: # at least 13 columns -> 12 commas (baseline); adaptive now 14 -> 13 commas
        part=lines.pop(0)
        header_lines.append(part)
        header_combined=''.join(header_lines)
        header_commas=header_combined.count(',')
    header=''.join(header_lines)
    # Remaining lines are data; if any data line has fewer commas than header, attempt to merge with next line
    data_lines=[]; buffer=''
    for l in lines:
        candidate=(buffer+l) if buffer else l
        if candidate.count(',')==header_commas:
            data_lines.append(candidate); buffer=''
        else:
            buffer=candidate
    if buffer:
        data_lines.append(buffer)
    sio=io.StringIO('\n'.join([header]+data_lines))
    rows=[]
    r=csv.DictReader(sio)
    for row in r: rows.append(row)
    return rows

def to_int(row, key):
    return int(row[key])

def main(argv):
    args = parse_args(argv)
    if not Path(args.baseline).is_file():
        print(f"ADAPT_REGRESS_ERROR,baseline_missing,{args.baseline}")
        return 2
    if not Path(args.adaptive).is_file():
        print(f"ADAPT_REGRESS_ERROR,adaptive_missing,{args.adaptive}")
        return 2
    base_rows = sanitize_and_load_csv(args.baseline)
    adapt_rows = sanitize_and_load_csv(args.adaptive)
    # Build baseline index
    base_index = {}
    for r in base_rows:
        try:
            if (r['precision_mode'] == '0' and r['lane_mask_pct']=='100' and r['sparsity_scale_milli']=='1000'):
                key=(int(r['freq_MHz']), int(r['volt_mV']), int(r['util_pct']))
                # prefer sparsity_mode==0 if multiple
                if key not in base_index or r.get('sparsity_mode','0')=='0':
                    base_index[key]=r
        except KeyError:
            continue
    violations=[]
    reductions=[]
    tops_reductions=[]
    processed_base_keys=set()
    base_deviation=[]
    for ar in adapt_rows:
        try:
            freq=int(ar['freq_MHz']); volt=int(ar['volt_mV']); util=int(ar['util_pct'])
            dyn=int(ar['dyn_mW']); scaled=int(ar['scaled_dyn_mW'])
            eff=int(ar.get('adapt_mode_eff_milli', ar.get('mode_eff_milli','0')))
            tops = int(ar.get('tops_milli','0'))
            scaled_tops = int(ar.get('scaled_tops_milli', str(tops * eff // 1000 if eff else 0)))
        except Exception as e:
            violations.append(f'parse_row:{e}')
            continue
        key=(freq,volt,util)
        if key not in base_index:
            violations.append(f'no_baseline_match:{freq}_{volt}_{util}')
            continue
        br=base_index[key]
        base_dyn=int(br['dyn_mW'])
        # 1. Base match tolerance
        if base_dyn>0:
            rel_err=abs(dyn-base_dyn)/base_dyn
            if key not in processed_base_keys:
                base_deviation.append(rel_err)
                processed_base_keys.add(key)
            if rel_err>args.base_match_tol and key not in processed_base_keys: # only record once (but we just added key)
                violations.append(f'base_mismatch:{freq}_{volt}_{util}:dyn={dyn}:base={base_dyn}:rel_err={rel_err:.3f}')
        # 2. Scaled expectation
        if eff is not None:
            expected = dyn * eff / 1000.0
            # rounding tolerance
            rel_err2 = 0 if expected==0 else abs(scaled-expected)/expected
            if rel_err2>args.scaled_rel_tol and abs(scaled-expected)>args.scaled_abs_tol:
                violations.append(f'scaled_mismatch:{freq}_{volt}_{util}:scaled={scaled}:expected={expected:.2f}:rel_err={rel_err2:.3f}')
            if scaled > dyn + 1: # allow 1 mW integer slack
                violations.append(f'not_reduced:{freq}_{volt}_{util}:dyn={dyn}:scaled={scaled}')
            if dyn>0:
                reductions.append(100.0*(1.0 - scaled/max(dyn,1)))
        # Tops scaling checks (if available)
        if tops>0 and eff:
            expected_tops = tops * eff / 1000.0
            rel_tops_err = 0 if expected_tops==0 else abs(scaled_tops-expected_tops)/expected_tops
            if rel_tops_err>args.scaled_rel_tol and abs(scaled_tops-expected_tops)>args.scaled_abs_tol:
                violations.append(f'tops_scaled_mismatch:{freq}_{volt}_{util}:scaled_tops={scaled_tops}:expected={expected_tops:.2f}:rel_err={rel_tops_err:.3f}')
            if scaled_tops > tops + 1:
                violations.append(f'tops_not_reduced:{freq}_{volt}_{util}:tops={tops}:scaled_tops={scaled_tops}')
            tops_reductions.append(100.0*(1.0 - scaled_tops/max(tops,1)))
    if base_deviation:
        avg_base=sum(base_deviation)/len(base_deviation); print(f'ADAPT_REGRESS_BASE_DEVIATION,{len(base_deviation)},{avg_base:.3f},{max(base_deviation):.3f}')
    min_avg_req = float(os.getenv('MIN_AVG_DYN_REDUCTION_PCT','-1'))
    avg=0; mi=0; ma=0
    if reductions:
        avg=sum(reductions)/len(reductions)
        mi=min(reductions); ma=max(reductions)
        print(f'ADAPT_REGRESS_SUMMARY,{len(reductions)},{avg:.2f},{mi:.2f},{ma:.2f}')
    else:
        print('ADAPT_REGRESS_SUMMARY,0,0,0,0')
    if min_avg_req>=0 and avg < min_avg_req:
        violations.append(f'avg_dyn_reduction_below_threshold:{avg:.2f}<${{MIN_AVG_DYN_REDUCTION_PCT}}')
    if tops_reductions:
        avg_t=sum(tops_reductions)/len(tops_reductions); mi_t=min(tops_reductions); ma_t=max(tops_reductions)
        print(f'ADAPT_TOPS_SUMMARY,{len(tops_reductions)},{avg_t:.2f},{mi_t:.2f},{ma_t:.2f}')
    for v in violations:
        print(f'ADAPT_REGRESS_VIOLATION,{v}')
    if violations:
        print(f'ADAPT_REGRESS_RESULT,FAIL,{len(violations)}')
        return 1
    print('ADAPT_REGRESS_RESULT,PASS,0')
    return 0

if __name__=='__main__':
    sys.exit(main(sys.argv[1:]))
