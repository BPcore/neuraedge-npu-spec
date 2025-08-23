#!/usr/bin/env python3
"""summarize_dual_pareto.py

Reads dual Pareto CSV (baseline vs adaptive) produced by compute_dual_pareto.py
and emits a markdown summary to stdout containing:
- Basic counts
- Average and median adaptive dynamic reduction for matched TOPS bins
- Average delta_dyn_pct / delta_power_pct (if present in CSV)
- Table of representative points (power vs TOPS)

Assumptions:
- CSV already sanitized (no @@ROW@@ tokens)
- Columns include: mode (baseline|adaptive), tops_milli, power_milliw, dyn_milliw, leak_milliw
- File may have header prefixed by @@ROW@@ earlier; sanitization removed it.
"""
from __future__ import annotations
import csv, sys, statistics, math
from pathlib import Path

REPR_POINTS = 8  # max rows to show for each mode


def load_rows(path: Path):
    with path.open() as f:
        reader = csv.DictReader(f)
        rows = [r for r in reader if r]
    return rows


def group_by_mode(rows):
    modes = {"baseline": [], "adaptive": []}
    for r in rows:
        m = r.get("mode", "").strip().lower()
        if m in modes:
            modes[m].append(r)
    return modes


def to_float(r, k):
    try:
        return float(r[k])
    except Exception:
        return math.nan


def compute_stats(b_rows, a_rows):
    # match on closest tops_milli (exact first) to compare dynamic
    b_rows_sorted = sorted(b_rows, key=lambda r: to_float(r, "tops_milli"))
    a_rows_sorted = sorted(a_rows, key=lambda r: to_float(r, "tops_milli"))
    reductions = []
    bi = 0
    for ar in a_rows_sorted:
        atops = to_float(ar, "tops_milli")
        # advance bi to closest <= atops
        while bi + 1 < len(b_rows_sorted) and abs(to_float(b_rows_sorted[bi+1], "tops_milli") - atops) < abs(to_float(b_rows_sorted[bi], "tops_milli") - atops):
            bi += 1
        b = b_rows_sorted[bi]
        b_dyn = to_float(b, "dyn_milliw")
        a_dyn = to_float(ar, "dyn_milliw")
        if b_dyn > 0 and not math.isnan(a_dyn):
            reductions.append(100.0 * (b_dyn - a_dyn) / b_dyn)
    stats = {}
    if reductions:
        stats["avg_reduction_pct"] = sum(reductions) / len(reductions)
        stats["median_reduction_pct"] = statistics.median(reductions)
    else:
        stats["avg_reduction_pct"] = math.nan
        stats["median_reduction_pct"] = math.nan
    return stats, reductions


def format_table(rows, mode):
    rows_sorted = sorted(rows, key=lambda r: to_float(r, "tops_milli"))
    trimmed = rows_sorted[:REPR_POINTS]
    header = "| mode | tops(G) | power(mW) | dyn(mW) | leak(mW) | dDyn% | dPwr% | dTOPS% |"\
             "\n|------|---------|-----------|---------|---------|-------|-------|--------|"
    lines = [header]
    for r in trimmed:
        tops_g = to_float(r, "tops_milli") / 1000.0
        dd = r.get('delta_dyn_pct','')
        dp = r.get('delta_power_pct','')
        dt = r.get('delta_tops_pct','')
        def fmt_delta(x):
            try:
                xf=float(x); return f"{xf:.2f}"
            except: return ''
        line = f"| {mode} | {tops_g:.3f} | {to_float(r,'power_milliw'):.1f} | {to_float(r,'dyn_milliw'):.1f} | {to_float(r,'leak_milliw'):.1f} | {fmt_delta(dd)} | {fmt_delta(dp)} | {fmt_delta(dt)} |"
        lines.append(line)
    return "\n".join(lines)


def main():
    if len(sys.argv) < 2:
        print("Usage: summarize_dual_pareto.py dual_pareto.csv", file=sys.stderr)
        return 2
    path = Path(sys.argv[1])
    if not path.exists():
        print(f"File not found: {path}", file=sys.stderr)
        return 2
    rows = load_rows(path)
    modes = group_by_mode(rows)
    b_rows = modes.get("baseline", [])
    a_rows = modes.get("adaptive", [])
    stats, reductions = compute_stats(b_rows, a_rows)

    print(f"# Dual Pareto Summary\n")
    print(f"Source file: `{path.name}`\n")
    print(f"Baseline points: {len(b_rows)}  Adaptive points: {len(a_rows)}\n")
    # Aggregate delta cols (adaptive rows only)
    delta_dyn=[to_float(r,'delta_dyn_pct') for r in rows if r.get('type','').startswith('adaptive') and r.get('delta_dyn_pct') not in ('',None)]
    delta_power=[to_float(r,'delta_power_pct') for r in rows if r.get('type','').startswith('adaptive') and r.get('delta_power_pct') not in ('',None)]
    if delta_dyn and delta_power:
        print(f"Average delta_dyn_pct: {sum(delta_dyn)/len(delta_dyn):.2f}%  Average delta_power_pct: {sum(delta_power)/len(delta_power):.2f}%\n")
    print("## Dynamic Power Reduction (matched tops)\n")
    if reductions:
        print(f"Average reduction: {stats['avg_reduction_pct']:.2f}%  ")
        print(f"Median reduction: {stats['median_reduction_pct']:.2f}%  ")
        print(f"Samples compared: {len(reductions)}\n")
    else:
        print("No comparable points found.\n")

    if b_rows:
        print("## Representative Baseline Points\n")
        print(format_table(b_rows, "baseline"))
        print()
    if a_rows:
        print("## Representative Adaptive Points\n")
        print(format_table(a_rows, "adaptive"))
        print()

if __name__ == "__main__":
    sys.exit(main())
