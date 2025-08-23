#!/usr/bin/env python3
"""plot_dual_pareto.py dual_pareto.csv out.png
Creates a PNG scatter/line plot of power_mW vs tops (TOPS) for baseline and adaptive frontiers.
Adaptive points annotated with delta_dyn_pct if available.
Silently exits 0 if matplotlib not installed (prints note to stderr).
"""
import sys,csv,math
from pathlib import Path

def load_rows(path):
    with open(path) as f:
        lines=[]
        for line in f:
            if line.strip():
                if line.startswith('@@ROW@@,'): line=line.split('@@ROW@@,',1)[1]
                lines.append(line)
    if not lines: return []
    import io
    sio=io.StringIO('\n'.join(lines))
    r=csv.DictReader(sio)
    return list(r)

def main():
    if len(sys.argv)<3:
        print('Usage: plot_dual_pareto.py dual_pareto.csv out.png', file=sys.stderr); return 2
    csv_path=Path(sys.argv[1]); out=Path(sys.argv[2])
    try:
        import matplotlib
        matplotlib.use('Agg')
        import matplotlib.pyplot as plt
    except Exception:
        print('[plot_dual_pareto] matplotlib not available, skipping plot', file=sys.stderr)
        return 0
    rows=load_rows(csv_path)
    base=[r for r in rows if r.get('type','').startswith('baseline')]
    adapt=[r for r in rows if r.get('type','').startswith('adaptive')]
    def to_f(r,k):
        try: return float(r[k])
        except: return math.nan
    # Convert mW and milli tops
    base_pts=sorted([(to_f(r,'tops_milli')/1000.0, to_f(r,'power_mW')) for r in base], key=lambda x:x[0])
    adapt_pts=sorted([(to_f(r,'tops_milli')/1000.0, to_f(r,'power_mW'), r) for r in adapt], key=lambda x:x[0])
    plt.figure(figsize=(6,4))
    if base_pts:
        plt.plot([x for x,_ in base_pts],[y for _,y in base_pts], '-o', label='Baseline', markersize=4)
    if adapt_pts:
        plt.plot([x for x,_,_ in adapt_pts],[y for _,y,_ in adapt_pts], '-o', label='Adaptive', markersize=4)
    # Annotate selected adaptive deltas (every other point to reduce clutter)
    for idx,(tops,pwr,r) in enumerate(adapt_pts):
        if idx % 2 == 0:
            dd=r.get('delta_dyn_pct','')
            try:
                if dd!='':
                    plt.annotate(f"-{float(dd):.1f}%", (tops,pwr), textcoords="offset points", xytext=(0,5), ha='center', fontsize=7)
            except: pass
    plt.xlabel('Effective TOPS')
    plt.ylabel('Power (mW)')
    plt.title('Dual Pareto Frontier')
    plt.grid(alpha=0.3)
    plt.legend()
    plt.tight_layout()
    plt.savefig(out)
    print(f"[plot_dual_pareto] Wrote {out}")
    return 0

if __name__=='__main__':
    sys.exit(main())
