// File: testbench_router_mesh.sv
`timescale 1ns/1ps

module testbench_router_mesh;
    parameter ROWS = 2;
    parameter COLS = 2;
    parameter FLIT_W = 64;
    parameter FIFO_DEPTH = 4;

    logic clk = 0, rst_n = 0;
    always #5 clk = ~clk;

    // Host interface signals
    logic [FLIT_W-1:0] ext_flit_in;
    logic ext_valid_in, ext_ready_out;
    logic [FLIT_W-1:0] ext_flit_out;
    logic ext_valid_out, ext_ready_in;

    // Flattened mesh/tile buses
    logic [ROWS*COLS*5*FLIT_W-1:0] fully_flat_tile_flit_in = '0;
    logic [ROWS*COLS*5-1:0]        fully_flat_tile_valid_in = '0;
    logic [ROWS*COLS*5-1:0]        fully_flat_tile_ready_out;
    logic [ROWS*COLS*5*FLIT_W-1:0] fully_flat_tile_flit_out;
    logic [ROWS*COLS*5-1:0]        fully_flat_tile_valid_out;
    logic [ROWS*COLS*5-1:0]        fully_flat_tile_ready_in = '1; // Always ready for test

    // Instantiate the mesh
    router_mesh #(
        .ROWS(ROWS), .COLS(COLS), .FLIT_W(FLIT_W), .FIFO_DEPTH(FIFO_DEPTH)
    ) dut (
        .clk(clk), .rst_n(rst_n),
        .fully_flat_tile_flit_in(fully_flat_tile_flit_in),
        .fully_flat_tile_valid_in(fully_flat_tile_valid_in),
        .fully_flat_tile_ready_out(fully_flat_tile_ready_out),
        .fully_flat_tile_flit_out(fully_flat_tile_flit_out),
        .fully_flat_tile_valid_out(fully_flat_tile_valid_out),
        .fully_flat_tile_ready_in(fully_flat_tile_ready_in),
        .ext_flit_in(ext_flit_in),
        .ext_valid_in(ext_valid_in),
        .ext_ready_out(ext_ready_out),
        .ext_flit_out(ext_flit_out),
        .ext_valid_out(ext_valid_out),
        .ext_ready_in(ext_ready_in)
    );

    // Test stimulus
    initial begin
        rst_n = 0;
        #20;
        rst_n = 1;
        // Inject a flit from host to local port (L=4)
        ext_flit_in = 64'hDEADBEEFCAFEBABE;
        ext_valid_in = 1;
        ext_ready_in = 1;
        #10;
        ext_valid_in = 0;
        // Wait and observe
        repeat (20) @(posedge clk);
        $display("ext_ready_out=%b ext_flit_out=%h ext_valid_out=%b", ext_ready_out, ext_flit_out, ext_valid_out);
        $finish;
    end

    // Scoreboard/monitor: check that flits reach their destination
    // (Add logic to check ext_flit_out/ext_valid_out or mesh outputs)



endmodule
