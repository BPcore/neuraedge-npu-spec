// LEGACY BROKEN ADVANCED POWER MANAGER - EXCLUDED
// This file is retained only for historical reference and is syntactically invalid.
// It is wrapped in `ifdef NEVER_INCLUDE_THIS to prevent accidental inclusion.
`ifdef NEVER_INCLUDE_THIS
module advanced_power_manager #(
    parameter NUM_POWER_DOMAINS = 4,
    parameter NUM_PES = 2048,
    parameter VOLTAGE_LEVELS = 8,
    parameter FREQUENCY_LEVELS = 8
) (
    input wire clk,
    input wire reset,
    
    // Performance monitoring inputs  
    input wire [15:0] performance_data_0,
    input wire [15:0] performance_data_1,
    input wire [15:0] performance_data_2,
    input wire [15:0] performance_data_3,
    input wire [15:0] utilization_data_0,
    input wire [15:0] utilization_data_1,
    input wire [15:0] utilization_data_2,
    input wire [15:0] utilization_data_3,
    input wire [31:0] power_consumption,
    input wire [7:0] temperature,
    
    // Power control outputs
    output reg [2:0] voltage_level,
    output reg [2:0] frequency_level,
    output reg [NUM_POWER_DOMAINS-1:0] power_gate_enable,
    output reg [NUM_POWER_DOMAINS-1:0] clock_gate_enable,
    
    // Status outputs
    output wire [15:0] efficiency_metric,
    output wire [15:0] power_budget_usage,
    output wire thermal_warning
);

// Power state tracking
reg [15:0] performance_history [0:NUM_POWER_DOMAINS-1];
reg [15:0] utilization [0:NUM_POWER_DOMAINS-1];
reg [31:0] power_history [0:7];  // 8-cycle power history
reg [7:0] power_history_idx;

// Input signal mapping to arrays
always @(*) begin
    utilization[0] = utilization_data_0;
    utilization[1] = utilization_data_1;
    utilization[2] = utilization_data_2;
    utilization[3] = utilization_data_3;
    performance_history[0] = performance_data_0;
    performance_history[1] = performance_data_1;
    performance_history[2] = performance_data_2;
    performance_history[3] = performance_data_3;
end

// DVFS state machine - Verilog compatible
parameter DVFS_IDLE = 3'b000;
parameter DVFS_MEASURE = 3'b001;
parameter DVFS_DECIDE = 3'b010;
parameter DVFS_ADJUST = 3'b011;
parameter DVFS_SETTLE = 3'b100;

reg [2:0] dvfs_state, dvfs_next_state;ments dynamic voltage/frequency scaling, power gating, and clock gating
// Targets aggressive power optimization for efficiency

module advanced_power_manager #(
    parameter NUM_PES = 2048,
    parameter NUM_POWER_DOMAINS = 16,
    parameter NUM_VOLTAGE_LEVELS = 8,
    parameter NUM_FREQ_LEVELS = 8
) (
    input wire clk,
    input wire reset,
    
    // System control
    input wire [7:0] power_mode,        // 0=max_power, 255=min_power
    input wire [15:0] utilization_target, // Target PE utilization %
    input wire [15:0] performance_target, // Target TOPS
    
    // PE activity monitoring
    input wire [NUM_PES-1:0] pe_active,
    input wire [NUM_PES-1:0] pe_request,
    input wire [15:0] current_ops_count,
    
    // Environmental inputs
    input wire [7:0] temperature,       // Chip temperature
    input wire [15:0] power_budget,     // Available power budget (mW)
    
    // Power domain control
    output reg [NUM_POWER_DOMAINS-1:0] domain_power_enable,
    output reg [NUM_POWER_DOMAINS-1:0] domain_clock_enable,
    output reg [NUM_PES-1:0] pe_power_gate,
    output reg [NUM_PES-1:0] pe_clock_gate,
    
    // Voltage/Frequency control (DVFS)
    output reg [7:0] voltage_setting,    // 0.45V to 0.8V (45-80 in steps of 5mV)
    output reg [7:0] frequency_setting,  // 200MHz to 1.2GHz (20-120 in steps of 100MHz)
    
    // Power efficiency metrics
    output wire [15:0] current_power_mw,
    output wire [15:0] current_tops,
    output wire [15:0] efficiency_tops_w,
    output wire [7:0] power_efficiency_grade  // 0-255, 255=best efficiency
);

// Power domain assignment
localparam PES_PER_DOMAIN = NUM_PES / NUM_POWER_DOMAINS;

// Activity monitoring arrays
reg [15:0] activity_counter [0:NUM_POWER_DOMAINS-1];
reg [15:0] utilization [0:NUM_POWER_DOMAINS-1];
reg [31:0] power_history [0:7];  // 8-cycle power history
reg [7:0] power_history_idx;

reg [2:0] dvfs_state, dvfs_next_state;

// DVFS state machine - Verilog compatible  
parameter DVFS_IDLE = 3'b000;
parameter DVFS_MEASURE = 3'b001;
parameter DVFS_DECIDE = 3'b010;
parameter DVFS_ADJUST = 3'b011;
parameter DVFS_SETTLE = 3'b100;

reg [7:0] dvfs_counter;
reg [7:0] target_voltage;
reg [7:0] target_frequency;

// Power estimation (simplified model)
wire [31:0] estimated_power_uw;  // Estimated power in microWatts
wire [15:0] active_pe_count;
wire [7:0] voltage_squared;

// Count active PEs
integer pe_idx;
reg [15:0] active_count;
always @(*) begin
    active_count = 0;
    for (pe_idx = 0; pe_idx < NUM_PES; pe_idx = pe_idx + 1) begin
        active_count = active_count + pe_active[pe_idx];
    end
end
assign active_pe_count = active_count;

// Power model: P = C * V^2 * f * α (where α is activity factor)
assign voltage_squared = (voltage_setting * voltage_setting) >> 6;  // Approximate V^2
assign estimated_power_uw = (active_pe_count * voltage_squared * frequency_setting) >> 8;
assign current_power_mw = estimated_power_uw[31:16];  // Convert to mW

// Performance calculation
assign current_tops = (current_ops_count * frequency_setting) >> 10;  // Approximate TOPS

// Efficiency calculation
assign efficiency_tops_w = (current_power_mw > 0) ? 
                          (current_tops * 1000) / current_power_mw : 16'hFFFF;

// Power efficiency grading
assign power_efficiency_grade = (efficiency_tops_w > 50) ? 8'd255 :  // Excellent
                               (efficiency_tops_w > 30) ? 8'd200 :  // Good
                               (efficiency_tops_w > 20) ? 8'd150 :  // Fair
                               (efficiency_tops_w > 10) ? 8'd100 :  // Poor
                                                          8'd50;   // Very poor

// DVFS Control Logic
always @(posedge clk) begin
    if (reset) begin
        voltage_setting <= 8'd120;      // 0.6V nominal
        frequency_setting <= 8'd60;     // 600MHz nominal
        target_voltage <= 8'd120;
        target_frequency <= 8'd60;
        dvfs_state <= DVFS_IDLE;
        dvfs_counter <= 8'b0;
        power_history_idx <= 8'b0;
    end else begin
        // Update power history
        power_history[power_history_idx] <= estimated_power_uw;
        power_history_idx <= power_history_idx + 1;
        
        case (dvfs_state)
            DVFS_IDLE: begin
                dvfs_counter <= dvfs_counter + 1;
                if (dvfs_counter == 8'd255) begin  // Every 256 cycles
                    dvfs_state <= DVFS_MEASURE;
                    dvfs_counter <= 8'b0;
                end
            end
            
            DVFS_MEASURE: begin
                // Measure current efficiency and decide on adjustments
                dvfs_state <= DVFS_DECIDE;
            end
            
            DVFS_DECIDE: begin
                // Decide voltage and frequency based on power mode and efficiency
                case (power_mode)
                    8'd0: begin  // Maximum performance mode
                        if (current_power_mw < power_budget && temperature < 8'd75) begin
                            target_voltage <= 8'd160;      // 0.8V
                            target_frequency <= 8'd120;    // 1.2GHz
                        end else begin
                            target_voltage <= 8'd140;      // 0.7V
                            target_frequency <= 8'd100;    // 1.0GHz
                        end
                    end
                    
                    8'd64: begin  // High performance mode
                        target_voltage <= 8'd130;      // 0.65V
                        target_frequency <= 8'd80;     // 800MHz
                    end
                    
                    8'd128: begin  // Balanced mode
                        if (efficiency_tops_w < 30) begin
                            // Reduce power if efficiency is poor
                            target_voltage <= voltage_setting - 8'd10;  // Reduce voltage
                            target_frequency <= frequency_setting - 8'd10; // Reduce frequency
                        end else if (efficiency_tops_w > 50 && current_power_mw < power_budget) begin
                            // Increase performance if efficiency is good and power budget allows
                            target_voltage <= voltage_setting + 8'd5;
                            target_frequency <= frequency_setting + 8'd5;
                        end
                    end
                    
                    8'd192: begin  // Power-efficient mode
                        target_voltage <= 8'd100;      // 0.5V
                        target_frequency <= 8'd50;     // 500MHz
                    end
                    
                    8'd255: begin  // Ultra-low power mode
                        target_voltage <= 8'd90;       // 0.45V
                        target_frequency <= 8'd30;     // 300MHz
                    end
                    
                    default: begin  // Adaptive mode
                        // Optimize for 50 TOPS/W target
                        if (efficiency_tops_w < 45) begin
                            // Prioritize power reduction
                            target_voltage <= (voltage_setting > 8'd90) ? voltage_setting - 8'd5 : voltage_setting;
                            target_frequency <= (frequency_setting > 8'd30) ? frequency_setting - 8'd5 : frequency_setting;
                        end else if (efficiency_tops_w > 55 && current_ops_count < performance_target) begin
                            // Increase performance while maintaining efficiency
                            target_voltage <= (voltage_setting < 8'd140) ? voltage_setting + 8'd5 : voltage_setting;
                            target_frequency <= (frequency_setting < 8'd100) ? frequency_setting + 8'd5 : frequency_setting;
                        end
                    end
                endcase
                
                // Clamp voltage and frequency to safe ranges
                if (target_voltage < 8'd90) target_voltage <= 8'd90;    // Min 0.45V
                if (target_voltage > 8'd160) target_voltage <= 8'd160;  // Max 0.8V
                if (target_frequency < 8'd20) target_frequency <= 8'd20; // Min 200MHz
                if (target_frequency > 8'd120) target_frequency <= 8'd120; // Max 1.2GHz
                
                dvfs_state <= DVFS_ADJUST;
            end
            
            DVFS_ADJUST: begin
                // Gradually adjust to target values to avoid stability issues
                if (voltage_setting != target_voltage) begin
                    if (voltage_setting < target_voltage) begin
                        voltage_setting <= voltage_setting + 1;
                    end else begin
                        voltage_setting <= voltage_setting - 1;
                    end
                end
                
                if (frequency_setting != target_frequency) begin
                    if (frequency_setting < target_frequency) begin
                        frequency_setting <= frequency_setting + 1;
                    end else begin
                        frequency_setting <= frequency_setting - 1;
                    end
                end
                
                if (voltage_setting == target_voltage && frequency_setting == target_frequency) begin
                    dvfs_state <= DVFS_SETTLE;
                    dvfs_counter <= 8'b0;
                end
            end
            
            DVFS_SETTLE: begin
                // Allow voltage/frequency to settle
                dvfs_counter <= dvfs_counter + 1;
                if (dvfs_counter >= 8'd10) begin  // 10 cycle settling time
                    dvfs_state <= DVFS_IDLE;
                    dvfs_counter <= 8'b0;
                end
            end
        endcase
    end
end

// Per-domain power management
genvar i, j;
generate
    for (i = 0; i < NUM_POWER_DOMAINS; i = i + 1) begin : power_domain
        
        // Calculate domain utilization
        wire [7:0] domain_active_count;
        reg [7:0] active_count_domain;
        
        always @(*) begin
            active_count_domain = 0;
            for (j = 0; j < PES_PER_DOMAIN; j = j + 1) begin
                active_count_domain = active_count_domain + pe_active[i*PES_PER_DOMAIN + j];
            end
        end
        
        assign domain_active_count = active_count_domain;
        
        // Domain power control with hysteresis
        reg [7:0] domain_idle_counter;
        reg [7:0] domain_request_counter;
        
        always @(posedge clk) begin
            if (reset) begin
                domain_power_enable[i] <= 1'b1;
                domain_clock_enable[i] <= 1'b1;
                utilization[i] <= 16'b0;
                domain_idle_counter <= 8'b0;
                domain_request_counter <= 8'b0;
            end else begin
                // Update utilization
                utilization[i] <= (domain_active_count * 100) / PES_PER_DOMAIN;
                
                // Power gating with hysteresis (aggressive for 50 TOPS/W)
                if (domain_active_count == 0) begin
                    domain_idle_counter <= domain_idle_counter + 1;
                    domain_request_counter <= 8'b0;
                end else begin
                    domain_idle_counter <= 8'b0;
                    domain_request_counter <= domain_request_counter + 1;
                end
                
                // Power domain control
                if (domain_idle_counter >= 8'd10) begin  // 10 cycles idle
                    domain_power_enable[i] <= 1'b0;  // Power gate domain
                end else if (domain_request_counter >= 8'd2) begin  // 2 cycles active
                    domain_power_enable[i] <= 1'b1;  // Power on domain
                end
                
                // Clock gating (more aggressive)
                if (domain_idle_counter >= 8'd2) begin  // 2 cycles idle
                    domain_clock_enable[i] <= 1'b0;  // Clock gate domain
                end else if (domain_request_counter >= 8'd1) begin  // 1 cycle active
                    domain_clock_enable[i] <= 1'b1;  // Enable clocks
                end
            end
        end
        
        // Per-PE fine-grained control within domain
        for (j = 0; j < PES_PER_DOMAIN; j = j + 1) begin : pe_control
            localparam pe_idx = i * PES_PER_DOMAIN + j;
            
            reg [3:0] pe_idle_counter;
            
            always @(posedge clk) begin
                if (reset) begin
                    pe_power_gate[pe_idx] <= 1'b1;
                    pe_clock_gate[pe_idx] <= 1'b1;
                    pe_idle_counter <= 4'b0;
                end else begin
                    // Track PE idle time
                    if (pe_active[pe_idx] || pe_request[pe_idx]) begin
                        pe_idle_counter <= 4'b0;
                    end else begin
                        pe_idle_counter <= pe_idle_counter + 1;
                    end
                    
                    // Fine-grained PE power control
                    pe_power_gate[pe_idx] <= domain_power_enable[i] & 
                                           (pe_active[pe_idx] | pe_request[pe_idx] | (pe_idle_counter < 4'd5));
                    
                    pe_clock_gate[pe_idx] <= domain_clock_enable[i] &
                                           (pe_active[pe_idx] | pe_request[pe_idx] | (pe_idle_counter < 4'd2));
                end
                        end
                    endcase
                end
            end
            // Truncated legacy logic omitted
        endcase
    end
end

// Efficiency metric exposed (legacy placeholders)
assign efficiency_metric = efficiency_tops_w;
assign power_budget_usage = current_power_mw; // Simplified
assign thermal_warning = (temperature > 8'd85);

`endif // NEVER_INCLUDE_THIS
