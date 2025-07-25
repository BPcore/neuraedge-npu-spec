  
`# docs/systemc_model.md`

// NeuraEdgeNext SystemC Cycle-Accurate Model  
 \#include \<systemc\>  
 using namespace sc\_core;

// Parameterized for ≥50 TOPS/W target  
 \#define NUM\_TILES 4  
 \#define MAC\_ARRAY\_SIZE 2048  
 \#define SRAM\_SIZE\_KB 32

// ProcessingElement module stub  
 SC\_MODULE(ProcessingElement) {  
 sc\_in\<bool\> clk, reset;  
 sc\_in\<sc\_bv\<512\>\> data\_in;  
 sc\_out\<sc\_bv\<512\>\> data\_out;  
 sc\_signal\<sc\_uint\<32\>\> mac\_ops\_count;

text  
`SC_CTOR(ProcessingElement) {`  
    `SC_CTHREAD(pe_main, clk.pos());`  
    `reset_signal_is(reset, true);`  
`}`

`void pe_main() {`  
    `data_out.write(0);`  
    `mac_ops_count.write(0);`  
    `wait();`  
    `while (true) {`  
        `// Perform MAC ops…`  
        `mac_ops_count.write(mac_ops_count.read() + MAC_ARRAY_SIZE);`  
        `data_out.write(data_in.read());`  
        `wait();`  
    `}`  
`}`

};

// Top-level NeuraEdgeNext module  
 SC\_MODULE(NeuraEdgeNext) {  
 sc\_clock clk{"clk", sc\_time(1, SC\_NS)};  
 sc\_signal\<bool\> reset;

text  
`ProcessingElement* pes[NUM_TILES];`

`SC_CTOR(NeuraEdgeNext) {`  
    `for (int i = 0; i < NUM_TILES; i++) {`  
        `pes[i] = new ProcessingElement(sc_gen_unique_name("pe"));`  
        `pes[i]->clk(clk);`  
        `pes[i]->reset(reset);`  
    `}`  
    `SC_THREAD(reset_gen);`  
`}`

`void reset_gen() {`  
    `reset.write(true);`  
    `wait(5, SC_NS);`  
    `reset.write(false);`  
`}`

};

int sc\_main(int argc, char\* argv\[\]) {  
 NeuraEdgeNext top("top");  
 sc\_start(100, SC\_NS);  
 return 0;  
 }

