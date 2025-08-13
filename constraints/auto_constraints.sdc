# Auto-generated constraints for target frequency: 100 MHz
create_clock -name clk -period [expr 1000.0/100] [get_ports clk]
set_input_delay -clock clk -max 2.0 [all_inputs]
set_output_delay -clock clk -max 2.0 [all_outputs]
