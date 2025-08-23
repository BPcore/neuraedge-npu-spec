#!/usr/bin/env python3
"""
Plot mesh experiment KPIs (max_fifo_occupancy, high_depth_utilization_pct) across the three saved runs.
Generates build/ci_optional/mesh_experiment_summary.png and mesh_experiment_summary.csv
"""
import json,os,sys
artdir='build/ci_optional'
base=os.path.abspath(artdir)
files=[('baseline','coverage_baseline_fullsim.json'),('pipelined','coverage_pipelined_fullsim.json'),('pipe_throttle','coverage_pipe_throttle_fullsim.json')]
data=[]
for name,f in files:
    p=os.path.join(base,f)
    if not os.path.isfile(p):
        print('Missing',p,file=sys.stderr); data.append((name,None)); continue
    j=json.load(open(p))
    adv=j.get('advanced_kpis',{})
    max_fifo=adv.get('max_fifo_occupancy',None)
    high_depth=adv.get('high_depth_utilization_pct',None)
    data.append((name,{'max_fifo':max_fifo,'high_depth':high_depth}))
# Write CSV
csvp=os.path.join(base,'mesh_experiment_summary.csv')
with open(csvp,'w') as f:
    f.write('run,max_fifo_occupancy,high_depth_utilization_pct\n')
    for name,d in data:
        if d:
            f.write(f"{name},{d['max_fifo']},{d['high_depth']}\n")
        else:
            f.write(f"{name},,\n")
print('Wrote',csvp)
# Try plotting
try:
    import matplotlib
    matplotlib.use('Agg')
    import matplotlib.pyplot as plt
except Exception as e:
    print('matplotlib not available:',e,file=sys.stderr)
    # create a small markdown note instead
    note=os.path.join(base,'mesh_experiment_plot_note.md')
    with open(note,'w') as f:
        f.write('# Mesh experiment plot\n\n')
        f.write('matplotlib not available in this environment; to generate the plot, install it:\n\n')
        f.write('```bash\npython3 -m pip install matplotlib\n```\n')
        f.write('\nThen run: `python3 scripts/plot_mesh_experiment.py`\n')
    print('Wrote',note)
    sys.exit(0)
# Build arrays
names=[n for n,_ in data]
maxs=[(d['max_fifo'] if d else None) for _,d in data]
highs=[(d['high_depth'] if d else None) for _,d in data]
fig,ax1=plt.subplots()
ax1.set_xlabel('run')
ax1.set_xticks(range(len(names)))
ax1.set_xticklabels(names)
ax1.set_ylabel('max_fifo_occupancy',color='tab:blue')
ax1.plot(range(len(names)),maxs,'-o',color='tab:blue')
ax1.tick_params(axis='y', labelcolor='tab:blue')
ax2=ax1.twinx()
ax2.set_ylabel('high_depth_util_pct',color='tab:orange')
ax2.plot(range(len(names)),highs,'-s',color='tab:orange')
ax2.tick_params(axis='y', labelcolor='tab:orange')
plt.title('Mesh experiment KPIs')
plt.grid(True,axis='y',alpha=0.3)
outp=os.path.join(base,'mesh_experiment_summary.png')
fig.tight_layout()
plt.savefig(outp, dpi=150)
print('Wrote',outp)
