#!/usr/bin/env python3
import re, json, sys, pathlib
# Parse build/tile_energy_absolute_tb_run.log for PASS line and error metrics.
# Outputs JSON to stdout and optionally a file if path given.

PASS_RE = re.compile(r"tile_energy_absolute_tb PASS .*\|err_total\|=(\d+).*")
REF_RE  = re.compile(r"\[ABS_ENERGY\] Final ref_total=(\d+) dyn=(\d+) leak=(\d+)")
TILE_RE = re.compile(r"\[ABS_ENERGY\] Tile  total=(\d+) dyn=(\d+) leak=(\d+)")
FREQ_START_RE = re.compile(r"\[ABS_ENERGY\] Post-settle start: freq=(\d+) MHz dyn=(\d+) mW leak=(\d+) mW")
PHASE1_RE = re.compile(r"\[ABS_ENERGY\] End Phase1 .* ref_total=(\d+) .* tile_total=(\d+)")

def main():
    if len(sys.argv) < 2:
        print("Usage: parse_energy_absolute_log.py <run_log> [out_json]", file=sys.stderr)
        return 2
    log_path = pathlib.Path(sys.argv[1])
    data = log_path.read_text().splitlines()
    result = {}
    for line in data:
        m = FREQ_START_RE.search(line)
        if m:
            result['start_freq_mhz'] = int(m.group(1))
            result['start_dyn_mw'] = int(m.group(2))
            result['start_leak_mw'] = int(m.group(3))
        m = PHASE1_RE.search(line)
        if m:
            result['phase1_ref_total_pj'] = int(m.group(1))
            result['phase1_tile_total_pj'] = int(m.group(2))
        m = REF_RE.search(line)
        if m:
            result['final_ref_total_pj'] = int(m.group(1))
            result['final_ref_dyn_pj'] = int(m.group(2))
            result['final_ref_leak_pj'] = int(m.group(3))
        m = TILE_RE.search(line)
        if m:
            result['final_tile_total_pj'] = int(m.group(1))
            result['final_tile_dyn_pj'] = int(m.group(2))
            result['final_tile_leak_pj'] = int(m.group(3))
        m = PASS_RE.search(line)
        if m:
            result['abs_err_total_pj'] = int(m.group(1))
    # Derive percentage errors when data present
    if 'final_ref_total_pj' in result and 'final_tile_total_pj' in result:
        denom = max(result['final_ref_total_pj'],1)
        result['abs_err_total_pct'] = 100.0 * abs(result['final_tile_total_pj']-result['final_ref_total_pj'])/denom
    if 'final_ref_dyn_pj' in result and 'final_tile_dyn_pj' in result:
        denom = max(result['final_ref_dyn_pj'],1)
        result['abs_err_dyn_pct'] = 100.0 * abs(result['final_tile_dyn_pj']-result['final_ref_dyn_pj'])/denom
    if 'final_ref_leak_pj' in result and 'final_tile_leak_pj' in result:
        denom = max(result['final_ref_leak_pj'],1)
        result['abs_err_leak_pct'] = 100.0 * abs(result['final_tile_leak_pj']-result['final_ref_leak_pj'])/denom
    out_json = json.dumps(result, indent=2, sort_keys=True)
    if len(sys.argv) > 2:
        pathlib.Path(sys.argv[2]).write_text(out_json+'\n')
    print(out_json)
    return 0

if __name__ == '__main__':
    raise SystemExit(main())
