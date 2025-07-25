`# docs/uvm_plan.md`

`## UVM Testbench Plan`

`### Testbench Architecture`  
``- **Environment**: Top-level `neuraedge_env` containing agents for PE, LSU, Crossbar, DVFS, and NoC.``  
`- **Agents**:`  
  ``- `pe_agent` handles PE array transactions.``  
  ``- `lsu_agent` handles load/store sequences.``  
  ``- `crossbar_agent` models crossbar traffic patterns.``  
  ``- `dvfs_agent` toggles DVFS levels and monitors responses.``  
  ``- `noc_agent` injects mesh packets and measures latency.``

`### Coverage Goals`  
`- **Functional Coverage**: ≥ 90% for each subsystem.`  
`- **Cross-Coverage**: Key interactions, e.g., DVFS × MAC ops.`  
`- **Assertion Coverage**: All critical checks covered.`

`### Sample covergroup`

covergroup pe\_coverage @(posedge clk);  
 coverpoint data\_in {  
 bins zero \= {0};  
 bins non\_zero \= {\[1:255\]};  
 }  
 coverpoint valid\_out;  
 cross data\_in, valid\_out;  
 endgroup

text

`### Smoke Test Scenarios`  
`1. **Reset & Idle**: Verify proper reset behavior and IDLE state.`  
`2. **Basic MAC Operation**: Send single multiply-accumulate and check result.`  
`3. **SRAM Read/Write**: Simple write then read-back.`  
`4. **NoC Ping-Pong**: Send packet to neighbor tile and verify return.`  
`5. **DVFS Transition**: Change perf level and verify voltage/frequency change.`

`### Regression Test Scenarios`  
`| Scenario                   | Description                                          |`  
`|----------------------------|------------------------------------------------------|`  
``| `resnet50_inference`       | End-to-end ResNet-50 flow with data streaming        |``  
``| `bert_inference`           | BERT encoder pass, measure latency and correctness   |``  
``| `sparse_transformer`       | 2:4 sparsity workload, verify skip logic            |``  
``| `power_throttle`           | Throttle DVFS under load and monitor recovery        |``  
``| `fault_injection`          | Inject random X’s, verify error-handling and locks   |``

`### Formal Assertion Plan`  
`` - **NoC Deadlock**: `assert property (!deadlock)` ``  
`` - **DVFS Safety**: `assert property (voltage_stable_after_change)` ``  
`` - **Memory Safety**: `assert property (no_oob_access)` ``

`### CI Integration`  
``- Add `make run_uvm` target in CI pipeline.``  
`- Coverage report generation and threshold check.`  
`- Save coverage XML and metrics as CI artifacts.`

`### Directory Structure`

tb/  
 uvm/  
 envs/  
 neuraedge\_env.sv  
 agents/  
 pe\_agent.sv  
 lsu\_agent.sv  
 crossbar\_agent.sv  
 dvfs\_agent.sv  
 noc\_agent.sv  
 tests/  
 smoke/  
 reset\_smoke.sv  
 basic\_mac.sv  
 regression/  
 resnet50.sv  
 bert.sv  
 sparse\_transformer.sv  
 assertions/  
 no\_deadlock.sv  
 dvfs\_safety.sv

text  
`undefined`  
