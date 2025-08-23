// Legacy simplified power manager (deprecated). Kept temporarily for diff reference.
// Not used in build; consider removal after migration. Lint filename/module mismatch suppressed.
/* verilator lint_off DECLFILENAME */

// Disabled legacy module: wrapped in off-by-default ifdef to prevent
// accidental selection over the enhanced advanced_power_manager.v.
// Define LEGACY_POWER_MANAGER_ENABLE if you explicitly need this older model.
`ifdef LEGACY_POWER_MANAGER_ENABLE
module advanced_power_manager_legacy #(
    parameter NUM_POWER_DOMAINS = 4,
    parameter VOLTAGE_LEVELS = 8,
    parameter FREQUENCY_LEVELS = 8
) (
    input wire clk,
    input wire reset,
    
    // Performance monitoring inputs  
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

// DVFS state machine parameters
parameter DVFS_IDLE = 3'b000;
parameter DVFS_MEASURE = 3'b001;
parameter DVFS_DECIDE = 3'b010;
parameter DVFS_ADJUST = 3'b011;
parameter DVFS_SETTLE = 3'b100;

// Internal registers
reg [2:0] dvfs_state, dvfs_next_state;
reg [15:0] utilization [0:NUM_POWER_DOMAINS-1];
reg [31:0] power_history [0:7];
reg [7:0] power_history_idx;
reg [7:0] dvfs_counter;
reg [7:0] settle_counter;
reg [15:0] efficiency_reg;
reg [15:0] power_budget_reg;
reg thermal_warning_reg;

// Input signal mapping
always @(*) begin
    utilization[0] = utilization_data_0;
    utilization[1] = utilization_data_1;
    utilization[2] = utilization_data_2;
    utilization[3] = utilization_data_3;
end

// DVFS state machine
always @(posedge clk or posedge reset) begin
    if (reset) begin
        dvfs_state <= DVFS_IDLE;
        dvfs_counter <= 0;
        settle_counter <= 0;
        voltage_level <= 3'b011;  // Mid-range voltage
        frequency_level <= 3'b011;  // Mid-range frequency
        power_history_idx <= 0;
    end else begin
        dvfs_state <= dvfs_next_state;
        dvfs_counter <= dvfs_counter + 1;
        
        // Power history tracking
        if (&dvfs_counter) begin  // Every 256 cycles
            power_history[power_history_idx] <= power_consumption;
            power_history_idx <= power_history_idx + 1;
        end
        
        // DVFS adjustment logic
        case (dvfs_state)
            DVFS_MEASURE: begin
                if (dvfs_counter >= 8'd100) begin
                    dvfs_counter <= 0;
                end
            end
            
            DVFS_ADJUST: begin
                if (efficiency_reg < 16'd25000) begin  // Below target efficiency
                    if (voltage_level > 0) voltage_level <= voltage_level - 1;
                    if (frequency_level < 7) frequency_level <= frequency_level + 1;
                end else if (efficiency_reg > 16'd60000) begin  // Above target, save power
                    if (voltage_level < 7) voltage_level <= voltage_level + 1;
                    if (frequency_level > 0) frequency_level <= frequency_level - 1;
                end
                settle_counter <= 0;
            end
            
            DVFS_SETTLE: begin
                settle_counter <= settle_counter + 1;
            end
        endcase
    end
end

// DVFS next state logic
always @(*) begin
    case (dvfs_state)
        DVFS_IDLE: dvfs_next_state = DVFS_MEASURE;
        DVFS_MEASURE: dvfs_next_state = (dvfs_counter >= 8'd100) ? DVFS_DECIDE : DVFS_MEASURE;
        DVFS_DECIDE: dvfs_next_state = DVFS_ADJUST;
        DVFS_ADJUST: dvfs_next_state = DVFS_SETTLE;
        DVFS_SETTLE: dvfs_next_state = (settle_counter >= 8'd50) ? DVFS_MEASURE : DVFS_SETTLE;
        default: dvfs_next_state = DVFS_IDLE;
    endcase
end

// Power gating control
always @(posedge clk or posedge reset) begin
    if (reset) begin
        power_gate_enable <= 4'b1111;  // All domains enabled
        clock_gate_enable <= 4'b1111;  // All clocks enabled
    end else begin
        // Gate power domains with low utilization
        power_gate_enable[0] <= (utilization[0] > 16'd1000);
        power_gate_enable[1] <= (utilization[1] > 16'd1000);
        power_gate_enable[2] <= (utilization[2] > 16'd1000);
        power_gate_enable[3] <= (utilization[3] > 16'd1000);
        
        // Clock gating for inactive domains
        clock_gate_enable[0] <= (utilization[0] > 16'd100);
        clock_gate_enable[1] <= (utilization[1] > 16'd100);
        clock_gate_enable[2] <= (utilization[2] > 16'd100);
        clock_gate_enable[3] <= (utilization[3] > 16'd100);
    end
end

// Efficiency calculation
always @(posedge clk or posedge reset) begin
    if (reset) begin
        efficiency_reg <= 16'd50000;  // Default efficiency
        power_budget_reg <= 16'd50;   // 50% usage
        thermal_warning_reg <= 1'b0;
    end else begin
        // Simple efficiency metric: performance/power ratio
        if (power_consumption > 0) begin
            efficiency_reg <= (utilization[0] + utilization[1] + utilization[2] + utilization[3]) * 16'd1000 / power_consumption[15:0];
        end
        
        // Power budget tracking (assuming 2W budget)
        power_budget_reg <= (power_consumption[15:0] * 16'd100) / 16'd2000;
        
        // Thermal warning
        thermal_warning_reg <= (temperature > 8'd85);  // 85°C threshold
    end
end

// Output assignments
assign efficiency_metric = efficiency_reg;
assign power_budget_usage = power_budget_reg;
assign thermal_warning = thermal_warning_reg;

endmodule
/* verilator lint_on DECLFILENAME */
`endif // LEGACY_POWER_MANAGER_ENABLE
