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
    input  logic             dout_ready,
    output logic [$clog2(DEPTH+1)-1:0] occupancy
);
    logic [WIDTH-1:0] mem [0:DEPTH-1];
    // Pointer width (covers DEPTH entries) and count (PTR_W+1 to represent full)
    localparam PTR_W = (DEPTH<=2)?1:(DEPTH<=4)?2:(DEPTH<=8)?3:$clog2(DEPTH);
    logic [PTR_W-1:0] wr_ptr, rd_ptr;  // exact bits to index
    logic [PTR_W:0]   count;           // one extra bit for full detection

    assign din_ready  = (count < DEPTH);
    assign dout_valid = (count > 0);
    assign dout      = mem[rd_ptr];
    assign occupancy = count[$clog2(DEPTH+1)-1:0];

    always_ff @(posedge clk) begin
        if (!rst_n) begin
            wr_ptr <= 0;
            rd_ptr <= 0;
            count  <= 0;
        end else begin
            // Write
            if (din_valid && din_ready) begin
                mem[wr_ptr] <= din;
                if (wr_ptr == {PTR_W{1'b1}}) wr_ptr <= '0; else wr_ptr <= wr_ptr + 1'b1; // DEPTH assumed power-of-two small
                count <= count + 1'b1;
            end
            if (dout_valid && dout_ready) begin
                if (rd_ptr == {PTR_W{1'b1}}) rd_ptr <= '0; else rd_ptr <= rd_ptr + 1'b1;
                count <= count - 1'b1;
            end
        end
    end
    // (Removed unused debug widx/ridx to clear UNUSED warnings)
endmodule
