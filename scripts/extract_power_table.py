#!/usr/bin/env python3
"""Extract power model P-state coefficients from synthesis/power tool CSV reports.

Input CSV columns: pstate,voltage_v,freq_mhz,dyn_mw_at_100pct,leak_mw
Outputs SystemVerilog package: rtl/common/power_pstates_pkg.sv
"""
import csv, sys, pathlib

PKG_PATH = pathlib.Path(__file__).parent.parent / 'rtl' / 'common' / 'power_pstates_pkg.sv'

def main():
    if len(sys.argv) < 2:
        print('Usage: extract_power_table.py power_report.csv', file=sys.stderr)
        return 1
    rows = []
    with open(sys.argv[1]) as f:
        for r in csv.DictReader(f):
            rows.append(r)
    if not rows:
        print('No rows parsed', file=sys.stderr)
        return 2
    with open(PKG_PATH, 'w') as outf:
        outf.write('// Auto-generated: DO NOT EDIT\n')
        outf.write('package power_pstates_pkg;\n')
        outf.write('  typedef struct packed {\n')
        outf.write('    logic [15:0] volt_mV;\n')
        outf.write('    logic [15:0] freq_MHz;\n')
        outf.write('    logic [31:0] dyn_coeff_mw_per_util;\n')
        outf.write('    logic [31:0] leak_coeff_mw;\n')
        outf.write('  } power_pstate_t;\n')
        outf.write(f'  localparam int NUM_PSTATES = {len(rows)};\n')
        outf.write('  localparam power_pstate_t PSTATES [NUM_PSTATES] = \\n')
        outf.write('  '{\n')
        for idx, r in enumerate(rows):
            comma = ',' if idx != len(rows)-1 else ''
            volt_mV = int(float(r['voltage_v'])*1000+0.5)
            freq = int(float(r['freq_mhz'])+0.5)
            dyn = int(float(r['dyn_mw_at_100pct']))
            leak = int(float(r['leak_mw']))
            outf.write(f'    '{{16\'d{volt_mV},16\'d{freq},32\'d{dyn},32\'d{leak}}'}{comma}\n')
        outf.write('  };\n')
        outf.write('endpackage : power_pstates_pkg\n')
    print(f'Wrote {PKG_PATH}')
    return 0

if __name__ == '__main__':
    raise SystemExit(main())
