#!/usr/bin/env python3
import json,sys,os,textwrap

def load(p):
    with open(p) as f: return json.load(f)

def main():
    if len(sys.argv)<3:
        print("Usage: compare_mesh_structural.py <baseline.json> <experiment.json>")
        return 1
    base=load(sys.argv[1]); exp=load(sys.argv[2])
    b=base['advanced_kpis']; e=exp['advanced_kpis']
    fields=[
        ('max_fifo_occupancy','Max FIFO Occ'),
        ('cycles_full','Cycles @Full'),
        ('pressure_efficiency_pct','Pressure Eff %'),
    ('high_depth_utilization_pct','HighDepth Util %'),
    ('per_router_depth_stddev','PerRouterDepthStd'),
    ('cycles_to_half_depth','Cycles->Half'),
    ('cycles_to_full_depth','Cycles->Full'),
    ('fill_slope_half_milli','FillSlopeHalf(m)'),
    ('fill_slope_full_milli','FillSlopeFull(m)'),
        ('per_router_max','Per-Router Max Depth'),
        ('per_router_watermark','Per-Router Watermark'),
        ('fifo_occ_hist','Global Depth Hist'),
        ('time_at_depth','Time@Depth (alias)'),
        ('mesh_int_throttle_enable','Int Throttle'),
        ('mesh_pipeline_output','Pipelined Out')
    ]
    def fmt_list(lst):
        return '['+','.join(str(x) for x in lst)+']'
    print("Mesh Structural Feature Comparison")
    print(f"Baseline: {sys.argv[1]}  Experiment: {sys.argv[2]}")
    for key,label in fields:
        bv=b.get(key); ev=e.get(key)
        if isinstance(bv,list) and isinstance(ev,list):
            same = (bv==ev)
            delta = '' if same else ' DIFF'
            print(f"{label:<24}: base={fmt_list(bv)} exp={fmt_list(ev)}{delta}")
        else:
            if isinstance(bv,(int,float)) and isinstance(ev,(int,float)) and bv not in (None,0):
                pct = ((ev-bv)/bv)*100.0
            else:
                pct = None
            pct_str = (f" {pct:+.1f}%" if pct is not None else "")
            print(f"{label:<24}: base={bv} exp={ev} delta={'' if (bv is None or ev is None) else (ev-bv if isinstance(ev,(int,float)) and isinstance(bv,(int,float)) else '')}{pct_str}")
    # Derived deltas
    if isinstance(b['per_router_max'],list) and isinstance(e['per_router_max'],list):
        import statistics as st
        def stats(arr):
            return min(arr),max(arr),sum(arr)/len(arr)
        bmin,bmax,bavg = stats(b['per_router_max'])
        emin,emax,eavg = stats(e['per_router_max'])
        print(f"Per-Router Max Stats      : base(min/max/avg)={bmin}/{bmax}/{bavg:.2f} exp(min/max/avg)={emin}/{emax}/{eavg:.2f}")
    # Occupancy depth utilization gain (fraction of samples at >= half depth)
    depth=len(b['fifo_occ_hist'])-1
    half=max(1,depth//2)
    def frac_ge(hist,threshold):
        total=sum(hist)
        return sum(hist[threshold:])/total if total else 0.0
    bfrac=frac_ge(b['fifo_occ_hist'],half)
    efrac=frac_ge(e['fifo_occ_hist'],half)
    hd_pct_delta = (efrac-bfrac)*100.0
    color_start = '\x1b[32m' if hd_pct_delta>0 else ('\x1b[31m' if hd_pct_delta<0 else '')
    color_end = '\x1b[0m' if color_start else ''
    print(f"High-Depth Utilization     : base={bfrac:.3f} exp={efrac:.3f} delta={(efrac-bfrac):+.3f} ({color_start}{hd_pct_delta:+.1f}%{color_end})")
    print("Conclusion: internal throttling + pipelined output increased uniform deep occupancy" if e['max_fifo_occupancy']>b['max_fifo_occupancy'] else "Conclusion: no improvement in peak depth")

if __name__=='__main__':
    sys.exit(main() or 0)
