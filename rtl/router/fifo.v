// File: rtl/router/fifo.v
// Parameterized ready/valid FIFO for NoC router ports

module fifo #(
    parameter WIDTH = 64,
    parameter DEPTH = 4
)(
    input  logic             clk,
    input  logic             rst_n,
    input  logic [WIDTH-1:0] din,
    input  logic             din_valid,
    output logic             din_ready,
    output logic [WIDTH-1:0] dout,
    output logic             dout_valid,
    input  logic             dout_ready
);
    logic [WIDTH-1:0] mem [0:DEPTH-1];
    logic [$clog2(DEPTH):0] wr_ptr, rd_ptr, count;

    assign din_ready  = (count < DEPTH);
    assign dout_valid = (count > 0);
    assign dout      = mem[rd_ptr];

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            wr_ptr <= 0;
            rd_ptr <= 0;
            count  <= 0;
        end else begin
            // Write
            if (din_valid && din_ready) begin
                mem[wr_ptr] <= din;
                wr_ptr <= (wr_ptr + 1) % DEPTH;
                count  <= count + 1;
            end
            // Read
            if (dout_valid && dout_ready) begin
                rd_ptr <= (rd_ptr + 1) % DEPTH;
                count  <= count - 1;
            end
        end
    end
endmodule
