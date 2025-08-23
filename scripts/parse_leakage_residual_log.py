#!/usr/bin/env python3
import re, json, sys, pathlib
"""Parse multi-temperature calibration TB run log for leakage residual metrics.
Extracts lines:
  CAL_MULTI_RESIDUAL,max_abs_leak_err_pct=...,mean_abs_leak_err_pct=...,rms_leak_err_pct=...,samples=N
  CAL_IDLE_LEAK,full_ref_leak_mw=...,idle_leak_mw=...,idle_delta_pct=...
  CAL_IDLE_LEAK_DECISION,deferring_idle_scaling=1/0 (...)
Produces JSON with keys: max_abs_leak_err_pct, mean_abs_leak_err_pct, rms_leak_err_pct, samples,
full_ref_leak_mw, idle_leak_mw, idle_delta_pct, deferring_idle_scaling.
"""
RESID_RE = re.compile(r"CAL_MULTI_RESIDUAL,max_abs_leak_err_pct=([0-9.]+),mean_abs_leak_err_pct=([0-9.]+),rms_leak_err_pct=([0-9.]+),samples=(\d+)")
IDLE_RE = re.compile(r"CAL_IDLE_LEAK,full_ref_leak_mw=(\d+),idle_leak_mw=(\d+),idle_delta_pct=([0-9.]+)")
DEC_RE = re.compile(r"CAL_IDLE_LEAK_DECISION,deferring_idle_scaling=(\d)")
PASS_RE = re.compile(r"\[CAL_MULTI\] PASS")

def main():
    if len(sys.argv) < 2:
        print("Usage: parse_leakage_residual_log.py <run_log> [out_json]", file=sys.stderr)
        return 2
    path = pathlib.Path(sys.argv[1])
    if not path.is_file():
        print(f"Missing log file {path}", file=sys.stderr)
        return 1
    result = {}
    for line in path.read_text().splitlines():
        m = RESID_RE.search(line)
        if m:
            result['max_abs_leak_err_pct'] = float(m.group(1))
            result['mean_abs_leak_err_pct'] = float(m.group(2))
            result['rms_leak_err_pct'] = float(m.group(3))
            result['samples'] = int(m.group(4))
        m = IDLE_RE.search(line)
        if m:
            result['full_ref_leak_mw'] = int(m.group(1))
            result['idle_leak_mw'] = int(m.group(2))
            result['idle_delta_pct'] = float(m.group(3))
        m = DEC_RE.search(line)
        if m:
            result['deferring_idle_scaling'] = bool(int(m.group(1)))
        if PASS_RE.search(line):
            result['tb_pass'] = True
    # Simple derived gating suggestions
    if 'max_abs_leak_err_pct' in result:
        result['within_leak_residual_budget'] = result['max_abs_leak_err_pct'] <= float(os.getenv('MAX_LEAK_RESIDUAL_PCT','2.0'))
    out = json.dumps(result, indent=2, sort_keys=True)
    if len(sys.argv) > 2:
        pathlib.Path(sys.argv[2]).write_text(out+'\n')
    print(out)
    return 0

if __name__ == '__main__':
    import os
    raise SystemExit(main())
