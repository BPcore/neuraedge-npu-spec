#!/usr/bin/env python3
import sys,csv
# Extract CSV data from sandboxed run log into a standalone file for Pareto computation.
# Usage: python extract_throughput_power_sweep.py build/ci_optional/throughput_power_sweep_tb_run.log throughput_power_sweep.csv
if len(sys.argv)<3:
    print('Usage: extract_throughput_power_sweep.py <run_log> <out_csv>', file=sys.stderr); sys.exit(1)
run_log=sys.argv[1]; out_csv=sys.argv[2]
header=None; rows=[]
with open(run_log) as f:
    pending_header=None
    for raw in f:
        line=raw.rstrip('\n')
        if not line.strip():
            continue
        # Detect header possibly wrapped (Verilator output width)
        if line.startswith('pstate,precision_mode'):
            if 'power_mW' in line:
                header=line.strip()
            else:
                pending_header=line.strip()
            continue
        if pending_header:
            # Append continuation and fix split token
            combined=(pending_header + line.strip()).replace('power_ mW','power_mW').replace('power_','power_')
            header=combined
            pending_header=None
            continue
        if line[0].isdigit():
            rows.append(line.strip())
if header is None:
    print('ERROR: header not found in log', file=sys.stderr); sys.exit(2)
with open(out_csv,'w', newline='') as f:
    f.write(header+'\n')
    for r in rows:
        f.write(r+'\n')
print(f'Wrote {len(rows)} rows to {out_csv}')
