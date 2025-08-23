#!/usr/bin/env python3
import sys,csv,math
# Compare current Pareto frontier vs golden allowing tolerance.
# Usage: python check_pareto_regression.py build/pareto_frontier.csv build/golden_pareto_frontier.csv
# Tolerances: tops_milli >= golden*(1 - TOPS_TOL), power_mW <= golden*(1 + POWER_TOL)
TOPS_TOL=0.05
POWER_TOL=0.05
if len(sys.argv)<3:
    print('Usage: check_pareto_regression.py current.csv golden.csv', file=sys.stderr); sys.exit(2)
cur={}
with open(sys.argv[1]) as f:
    r=csv.DictReader(f)
    for row in r:
        key=(row['pstate'],row['precision_mode'])
        cur.setdefault(key,[]).append(row)
        # Keep best by tops/power ratio for identical key
        cur[key].sort(key=lambda x:(-int(x['tops_milli']), int(x['power_mW'])))
        cur[key]=cur[key][:1]
fail=False
with open(sys.argv[2]) as f:
    r=csv.DictReader(f)
    for grow in r:
        key=(grow['pstate'],grow['precision_mode'])
        if key not in cur:
            print(f'[PARETO][FAIL] Missing key {key} in current frontier'); fail=True; continue
        crow=cur[key][0]
        tops_cur=int(crow['tops_milli']); tops_g=int(grow['tops_milli'])
        pwr_cur=int(crow['power_mW']); pwr_g=int(grow['power_mW'])
        if tops_cur < tops_g*(1-TOPS_TOL):
            print(f'[PARETO][FAIL] TOPS regression key={key} current={tops_cur} golden={tops_g}')
            fail=True
        if pwr_cur > pwr_g*(1+POWER_TOL):
            print(f'[PARETO][FAIL] Power regression key={key} current={pwr_cur} golden={pwr_g}')
            fail=True
        if not fail:
            print(f'[PARETO][OK] key={key} tops={tops_cur}/{tops_g} power={pwr_cur}/{pwr_g}')
if fail:
    print('[PARETO] REGRESSION DETECTED'); sys.exit(1)
print('[PARETO] Frontier within tolerance')
