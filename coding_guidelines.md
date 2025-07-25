text  
\# docs/coding\_guidelines.md

\#\# Module Naming

\- Prefix all module names with \`neuraedge\_\`    
  \- e.g., \`neuraedge\_pe\`, \`uraedge\_crossbar\`, \`neuraedge\_dvfs\_ctrl\`

\#\# Signal Naming

\- Clocks: \`clk\`, \`clk\_\<domain\>\`    
\- Resets (active low): \`reset\_n\`    
\- Valid/Ready handshake: \`\<signal\>\_valid\`, \`\<signal\>\_ready\`    
\- Enable signals: \`\<signal\>\_en\`    
\- Addresses: \`\<signal\>\_addr\`    
\- Data ports: \`\<signal\>\_data\`    
\- Configuration registers: \`cfg\_\<parameter\>\`    
\- Status registers: \`sts\_\<parameter\>\`

\#\# File and Directory Structure

spec/  
 rtl/  
 pe/  
 lsu/  
 crossbar/  
 dvfs/  
 noc/  
 common/  
 tb/  
 uvm/  
 envs/  
 agents/  
 tests/  
 scripts/  
 synthesis/  
 pnr/  
 power\_analysis/

text

\- Group related RTL files under \`rtl/\<subsystem\>/\`    
\- Testbenches under \`tb/uvm/\<subsystem\>/\`    
\- Utility scripts under \`scripts/\`

\#\# Coding Style

\- Use 2-space indentation (no tabs)    
\- Lowercase identifiers with underscores    
\- One module per file; file name matches module name    
\- Limit line length to 100 characters  

\#\# Verilog Constructs

\- Use ANSI-style port declarations    
\- Explicitly specify bit widths:

input wire \[31:0\] data\_in,  
 output logic \[15:0\] result\_out

text  
\- Parameterize widths and depths:

parameter DATA\_WIDTH \= 64,  
 ADDR\_WIDTH \= 32

text  
\- Avoid implicit nets; declare all signals:

logic \[7:0\] counter;

text

\#\# Commenting

\- Module header comment:

/\*\*

* Module: neuraedge\_pe

* Description: Processing Element for 32×64 MAC array

* Parameters:

* MAC\_ARRAY\_SIZE \- Number of MAC units

* Ports:

* clk, reset\_n, data\_in, data\_out, valid\_in, valid\_out  
   \*/

text  
\- Inline comments for complex logic blocks:

// Compute systolic MAC accumulation  
 for (i \= 0; i \< MAC\_ARRAY\_SIZE; i \= i \+ 1\) begin  
 ...  
 end

text

\#\# Test Hooks

\- Include \`ifdef SYNTHESIS\` guards for test-only code    
\- Provide controllable debug ports:

input wire dbg\_enable,  
 output wire \[31:0\] dbg\_status

text

\#\# Naming Conventions Summary

| Entity | Naming Pattern |
| :---- | :---- |
| Modules | \`neuraedge\_\<subsystem\>\`  |
| Parameters | \`\<NAME\>\_WIDTH\`, \`\<NAME\>\_SIZE\` |
| Ports | \`clk\`, \`reset\_n\`, \`\<name\>\_in/out\` |
| Internal Signals | \`sig\_\<description\>\` |
| FSM States | \`STATE\_\<name\>\` |
| Tasks/Functions | \`\<subsystem\>\_\<action\>\` |

