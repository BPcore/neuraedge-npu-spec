  
`# docs/demo_kernels.md`

`## Demo Kernel Proposals`

| `Workload` | `Latency Target` | `Throughput (fps)` | `TOPS/W` | `Power Budget` |
| :---- | :---- | :---- | :---- | :---- |
| `ResNet-50` | `≤ 8.5 ms` | `≥ 117` | `52.1` | `≤ 1.0 W` |
| `BERT (Base)` | `≤ 45 ms` | `≥ 22` | `50.2` | `≤ 1.0 W`  |
| `Sparse Transformer` | `≤ 31 ms` | `≥ 32` | `51.0` | `≤ 1.0 W` |

`### Descriptions`

`- **ResNet-50**`    
  `- Standard image classification model`    
  `- Batch size = 1, 224×224 RGB inputs`    
  `- Use INT8 quantized weights`    
  `- Target sustained FPS ≥ 117 at ≤ 1.0 W`  

`- **BERT (Base)**`    
  `- Text encoding with 12 layers, hidden size 768`    
  `- Sequence length = 128`    
  `- INT8 quantized for sparse inference`    
  `- Target end-to-end latency ≤ 45 ms, ≥ 22 fps`  

`- **Sparse Transformer**`    
  `- 12-layer transformer with 2:4 structured sparsity`    
  `- Sequence length = 64 for attention benchmark`    
  `- Skip zero-weight MACs to boost TOPS/W`    
  `- Target latency ≤ 31 ms, ≥ 32 fps`  

`### Testing Procedure`

`1. **Model Loading**`    
   `- Load ONNX or TensorFlow Lite format via SDK`    
`2. **Warm-Up Runs**`    
   `- 5 iterations to populate caches and power-steady state`    
`3. **Measurement Runs**`    
   `- 20 iterations per workload`    
   `- Record per-iteration latency, throughput, and power`    
`4. **Reporting**`    
   `` - Generate CSV: `workload, iteration, latency_ms, fps, power_mW` ``    
   `- Compare against targets in summary table`  

`### Usage Example (Python)`

from neuraedge\_api import NeuraEdgeContext  
 import time, csv

ctx \= NeuraEdgeContext("/dev/neuraedge0")  
 workloads \= \["resnet50.onnx", "bert\_base.onnx", "sparse\_transformer.onnx"\]

with open("demo\_results.csv","w",newline="") as f:  
 writer \= csv.writer(f)  
 writer.writerow(\["workload","iteration","latency\_ms","fps","power\_mW"\])  
 for w in workloads:  
 model \= ctx.load\_model(w)  
 for i in range(20):  
 t0 \= time.time()  
 ctx.run\_inference(model)  
 t1 \= time.time()  
 lat \= (t1 \- t0)\*1000  
 fps \= 1000.0/lat  
 pwr \= ctx.get\_system\_power()  
 writer.writerow(\[w, i, round(lat,2), round(fps,2), pwr\])

text  
`undefined`  
