`timescale 1ns/1ps
// Sparsity Adaptive FSM (skeleton)
module sparsity_adaptive_fsm #(
    parameter WINDOW_SIZE = 256
)(
    input  wire clk,
    input  wire reset,
    // Sampling interface
    input  wire sample_valid,
    input  wire [15:0] nonzero_count,
    input  wire [15:0] total_count,
    // Manual override
    input  wire manual_override_mode,
    input  wire [1:0] manual_mode_select,
    // Thresholds / config
    input  wire [9:0] thresh_2to4,
    input  wire [9:0] thresh_1to4,
    input  wire [9:0] thresh_1to8,
    input  wire [9:0] hyst_milli,
    input  wire [7:0] min_hold_windows,
    // Optional utilization weighting (milli-percent 0-1000). If 0, weight=1.
    input  wire [15:0] util_milli_pct,
    // Outputs
    output reg  [1:0] current_mode,
    output reg        mode_change_pulse,
    output reg  [15:0] last_density_milli,
    output reg        window_complete,
    output reg  [15:0] change_count
    , output reg [15:0] mode_eff_milli   // estimated efficiency scaling (1000=dense baseline)
);

// Accumulators
reg [31:0] sum_nonzero, sum_total; // wider to avoid overflow
reg [15:0] sample_counter;
reg [7:0]  hold_counter;

// Compute density at window end
wire window_end = (sample_counter == WINDOW_SIZE-1) && sample_valid;

always @(posedge clk or posedge reset) begin
    if (reset) begin
        sum_nonzero <= 0; sum_total <= 0; sample_counter <= 0;
    last_density_milli <= 0; current_mode <= 2'd0; // start dense
        mode_change_pulse <= 0; window_complete <= 0; change_count <= 0; hold_counter <= 0;
    mode_eff_milli <= 16'd1000;
    end else begin
        mode_change_pulse <= 0; window_complete <= 0;
        if (sample_valid) begin
            `ifdef SPARSITY_FSM_DEBUG
            $display("[FSM DBG] sample sample_counter=%0d nz=%0d tot=%0d", sample_counter, nonzero_count, total_count);
            `endif
            if (total_count != 0) begin
                // Apply optional utilization weighting: weight = util_milli_pct/1000 (if non-zero)
                // Scale by weight using integer math: (value * util_milli_pct) / 1000
                if (util_milli_pct != 16'd0) begin
                    sum_nonzero <= sum_nonzero + ((nonzero_count * util_milli_pct) / 16'd1000);
                    sum_total   <= sum_total   + ((total_count   * util_milli_pct) / 16'd1000);
                end else begin
                    sum_nonzero <= sum_nonzero + nonzero_count;
                    sum_total   <= sum_total   + total_count;
                end
            end
            if (sample_counter == WINDOW_SIZE-1) sample_counter <= 0; else sample_counter <= sample_counter + 1;
        end
        if (window_end) begin
            window_complete <= 1;
            begin : density_block
            reg [31:0] nz_tmp; reg [31:0] tot_tmp; reg [15:0] density_calc;
            nz_tmp = sum_nonzero; tot_tmp = sum_total;
            if (tot_tmp != 0)
                density_calc = (nz_tmp * 1000) / tot_tmp;
            else
                density_calc = 0;
            `ifdef SPARSITY_FSM_DEBUG
            $display("[FSM DBG] window_end sum_nz=%0d sum_tot=%0d density_calc=%0d (prev_last=%0d) mode=%0d hold=%0d", sum_nonzero, sum_total, density_calc, last_density_milli, current_mode, hold_counter);
            `endif
            // Decision
            if (!manual_override_mode) begin
                if (hold_counter != 0) hold_counter <= hold_counter - 1; // cooldown
                else begin
                    // Determine target mode
                    reg [1:0] target_mode; target_mode = current_mode;
                    if (density_calc <= (thresh_1to8 - hyst_milli)) target_mode = 2'd3; else
                    if (density_calc <= (thresh_1to4 - hyst_milli)) target_mode = 2'd2; else
                    if (density_calc <= (thresh_2to4 - hyst_milli)) target_mode = 2'd1; else
                        target_mode = 2'd0; // dense
                    if (target_mode != current_mode) begin
                        current_mode <= target_mode;
                        mode_change_pulse <= 1; change_count <= change_count + 1; hold_counter <= min_hold_windows;
                        // Update efficiency estimate: map modes to nominal savings (example mapping)
                        case (target_mode)
                            2'd0: mode_eff_milli <= 16'd1000; // dense baseline
                            2'd1: mode_eff_milli <= 16'd850;  // 2:4 => 15% less active lanes
                            2'd2: mode_eff_milli <= 16'd700;  // 1:4 => 30% savings
                            2'd3: mode_eff_milli <= 16'd550;  // 1:8 => 45% savings
                            default: mode_eff_milli <= 16'd1000;
                        endcase
                    end
                end
            end else begin
                if (current_mode != manual_mode_select) begin
                    current_mode <= manual_mode_select; mode_change_pulse <= 1; change_count <= change_count + 1;
                    case (manual_mode_select)
                        2'd0: mode_eff_milli <= 16'd1000;
                        2'd1: mode_eff_milli <= 16'd850;
                        2'd2: mode_eff_milli <= 16'd700;
                        2'd3: mode_eff_milli <= 16'd550;
                        default: mode_eff_milli <= 16'd1000;
                    endcase
                end
            end
            // Finally update last_density after decision uses density_calc
            last_density_milli <= density_calc;
            end // density_block
            sum_nonzero <= 0; sum_total <= 0; // reset accumulators for next window
        end
    end
end

endmodule
