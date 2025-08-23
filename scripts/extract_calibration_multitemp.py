#!/usr/bin/env python3
import sys,re
# Parse Verilator run log from multi-temp calibration TB and emit CSV to stdout.
# Usage: python extract_calibration_multitemp.py build/power_model_calibration_multitemp_tb_run.log > cal_multitemp.csv
pat = re.compile(r'^CAL_MULTI_CSV,(header|data),(.*)')
print('code,tempC,util_norm_1000,dyn_mw,leak_mw,exp_dyn_mw,exp_leak_mw,dyn_err_pct,leak_err_pct')
with open(sys.argv[1]) as f:
    for line in f:
        m = pat.match(line.strip())
        if m and m.group(1)=='data':
            parts = m.group(2).split(',')
            # Already ordered
            print(','.join(parts))
