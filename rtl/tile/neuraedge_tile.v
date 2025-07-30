`include "neuraedge_pe.v"
`include "noc_router.v"

// File: rtl/tile/neuraedge_tile.v
module neuraedge_tile #(
    parameter PE_ROWS      = 32,
    parameter PE_COLS      = 64,
    parameter NOC_FLIT_W   = 64
)(
    input  logic                       clk,
    input  logic                       rst_n,
    // Flattened ports for synthesis compatibility
    input  logic [5*NOC_FLIT_W-1:0]      flat_flit_in,
    input  logic [4:0]                   flat_valid_in,
    output logic [4:0]                   flat_ready_out,
    output logic [5*NOC_FLIT_W-1:0]      flat_flit_out,
    output logic [4:0]                   flat_valid_out,
    input  logic [4:0]                   flat_ready_in
);

    // Internal, unpacked signals for the tile's logic
    logic [NOC_FLIT_W-1:0] flit_in   [0:4];
    logic                  valid_in  [0:4];
    logic                  ready_out [0:4];
    logic [NOC_FLIT_W-1:0] flit_out  [0:4];
    logic                  valid_out [0:4];
    logic                  ready_in  [0:4];

    // Unpack flattened inputs
    genvar i;
    generate
        for (i = 0; i < 5; i = i + 1) begin : UNPACK
            assign flit_in[i]   = flat_flit_in[i*NOC_FLIT_W +: NOC_FLIT_W];
            assign valid_in[i]  = flat_valid_in[i];
            assign ready_in[i]  = flat_ready_in[i];
        end
    endgenerate

    // Pack outputs for flattening
    generate
        for (i = 0; i < 5; i = i + 1) begin : PACK
            assign flat_flit_out[i*NOC_FLIT_W +: NOC_FLIT_W] = flit_out[i];
            assign flat_valid_out[i]  = valid_out[i];
            assign flat_ready_out[i] = ready_out[i];
        end
    endgenerate


    // Nested generate loops for PE array
    genvar row, col;
    generate
        for (row = 0; row < PE_ROWS; row = row + 1) begin : ROW
            for (col = 0; col < PE_COLS; col = col + 1) begin : COL
                neuraedge_pe pe_inst (
                    .clk(clk),
                    .rst_n(rst_n),
                    .pe_enable(1'b0),
                    .mac_clear(1'b0),
                    .accumulate_en(1'b0),
                    .data_in(8'b0),
                    .weight_in(8'b0),
                    .data_valid(1'b0),
                    .data_out(),
                    .weight_out(),
                    .data_valid_out(),
                    .accum_out(),
                    .accum_valid()
                );
            end
        end
    endgenerate

    // NoC router instance
    noc_router #(
        .FLIT_W(NOC_FLIT_W)
    ) router_inst (
        .clk(clk),
        .rst_n(rst_n),
        .flit_in(flat_flit_in),
        .valid_in(flat_valid_in),
        .ready_out(flat_ready_out),
        .flit_out(flat_flit_out),
        .valid_out(flat_valid_out),
        .ready_in(flat_ready_in)
    );

    // TODO: PE-to-NoC interconnect logic

endmodule
