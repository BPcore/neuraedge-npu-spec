// Formal abstraction of router_cell focusing on multicast atomic replication semantics.
// Simplifies arbitration: single source input (local port index 4) drives mask-selected outputs atomically.
module router_cell_abst #(
    parameter FLIT_W = 64,
    parameter int MCAST_FLAG_BIT = 31,
    parameter int MCAST_MASK_LSB = 26
)(
    input  logic clk,
    input  logic rst_n,
    input  logic [FLIT_W*5-1:0] flit_in_flat,
    input  logic [4:0]          valid_in_flat,
    output logic [4:0]          ready_out_flat,
    output logic [FLIT_W*5-1:0] flit_out_flat,
    output logic [4:0]          valid_out_flat,
    input  logic [4:0]          ready_in_flat,
    input  logic [FLIT_W-1:0]   ext_flit_in,
    input  logic                ext_valid_in,
    output logic                ext_ready_out,
    output logic [FLIT_W-1:0]   ext_flit_out,
    output logic                ext_valid_out,
    input  logic                ext_ready_in
);
    // Only model local input injection path for multicast properties.
    // Assume immediate acceptance (no FIFO modeling) while respecting back-pressure for atomic replication.
    assign ext_ready_out = 1'b1; // always accept (could gate if needed)
    assign ready_out_flat = '0; // other inputs ignored
    assign ext_flit_out = '0; assign ext_valid_out = 1'b0; // not modeling return path

    // Decode mask + flag
    wire mflag = ext_flit_in[MCAST_FLAG_BIT];
    wire [4:0] mask = ext_flit_in[MCAST_MASK_LSB +: 5];

    // Determine which outputs will fire this cycle: if multicast, all masked outputs fire only if all ready (atomic);
    // if unicast or mask empty, treat as local output only (index 4).
    wire is_mcast = mflag && (mask!=0);
    wire [4:0] eff_mask = is_mcast ? mask : 5'b10000; // default to local port
    wire fire = ext_valid_in && (!is_mcast || (is_mcast && (&(ready_in_flat | ~eff_mask))));

    integer o;
    always @(*) begin
        valid_out_flat = 5'b0; flit_out_flat = '0;
        if (fire) begin
            for (o=0;o<5;o++) begin
                if (eff_mask[o]) begin
                    valid_out_flat[o] = 1'b1;
                    // Clear flag bit for one-hop semantic
                    flit_out_flat[o*FLIT_W +: FLIT_W] = ext_flit_in & ~( {{(FLIT_W-1){1'b0}},1'b1} << MCAST_FLAG_BIT );
                end
            end
        end
    end
endmodule
