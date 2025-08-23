// File: test/test_router_mesh.sv
// Self-checking testbench for router_mesh un-flattening logic.

`include "../rtl/router_mesh.v"

module test_router_mesh;

    // Parameters
    localparam ROWS   = 4;
    localparam COLS   = 4;
    localparam FLIT_W = 64;

    // Test signals
    logic clk = 0;
    logic rst_n;

    // DUT Inputs
    logic [FLIT_W-1:0]      ext_flit_in;
    logic                   ext_valid_in;
    logic                   ext_ready_in;
    logic [ROWS*COLS*5*FLIT_W-1:0] fully_flat_tile_flit_in;
    logic [ROWS*COLS*5-1:0]        fully_flat_tile_valid_in;
    logic [ROWS*COLS*5-1:0]        fully_flat_tile_ready_in;

    // DUT Outputs
    logic                   ext_ready_out;
    logic [FLIT_W-1:0]      ext_flit_out;
    logic                   ext_valid_out;
    logic [ROWS*COLS*5*FLIT_W-1:0] fully_flat_tile_flit_out;
    logic [ROWS*COLS*5-1:0]        fully_flat_tile_valid_out;
    logic [ROWS*COLS*5-1:0]        fully_flat_tile_ready_out;

    // Instantiate the DUT
    router_mesh #(
        .ROWS(ROWS),
        .COLS(COLS),
        .FLIT_W(FLIT_W)
    ) dut (
        .clk(clk),
        .rst_n(rst_n),
        .ext_flit_in(ext_flit_in),
        .ext_valid_in(ext_valid_in),
        .ext_ready_in(ext_ready_in),
        .fully_flat_tile_flit_in(fully_flat_tile_flit_in),
        .fully_flat_tile_valid_in(fully_flat_tile_valid_in),
        .fully_flat_tile_ready_in(fully_flat_tile_ready_in),
        .ext_ready_out(ext_ready_out),
        .ext_flit_out(ext_flit_out),
        .ext_valid_out(ext_valid_out),
        .fully_flat_tile_flit_out(fully_flat_tile_flit_out),
        .fully_flat_tile_valid_out(fully_flat_tile_valid_out),
        .fully_flat_tile_ready_out(fully_flat_tile_ready_out)
    );

    // Clock generation
    always #5 clk = ~clk;

    // Test sequence
    initial begin
        $display("Starting test_router_mesh...");
        rst_n = 0;
        #10;
        rst_n = 1;
        #10;

        // --- Test Case 1: Drive a flit into tile (2, 2), port 3 (West) ---
        $display("Test Case 1: Drive tile (2,2), port 3");
        int r = 2, c = 2, port = 3;
        int tile_idx = r * COLS + c;
        int flit_slice_start = tile_idx * 5 * FLIT_W + port * FLIT_W;
        int valid_slice_start = tile_idx * 5 + port;

        // Drive inputs
        // Use a for-loop to assign to the part-select to work around iverilog limitations
        for (int i = 0; i < FLIT_W; i = i + 1) begin
            fully_flat_tile_flit_in[flit_slice_start + i] = 64'hAABBCCDD_EEFF0011[i];
        end
        fully_flat_tile_valid_in[valid_slice_start] = 1'b1;
        fully_flat_tile_ready_in = '1; // Assume all downstream ports are ready

        #10; // Let signals propagate

        // --- Assertions for Test Case 1 ---
        // Use a temporary variable to hold the slice to work around iverilog limitations
        logic [FLIT_W-1:0] temp_flit_out;
        for (int i = 0; i < FLIT_W; i = i + 1)
            temp_flit_out[i] = fully_flat_tile_flit_out[flit_slice_start + i];

        // Check that the corresponding output flit is correct
        assert(temp_flit_out == 64'hAABBCCDD_EEFF0011)
            else $error("FAIL: Flit data mismatch for tile (%0d,%0d) port %0d", r, c, port);

        // Check that the corresponding output valid is correct
        assert(fully_flat_tile_valid_out[valid_slice_start] == 1'b1)
            else $error("FAIL: Valid signal mismatch for tile (%0d,%0d) port %0d", r, c, port);

        // Check that the corresponding ready out is correct
        assert(fully_flat_tile_ready_out[valid_slice_start] == 1'b1)
            else $error("FAIL: Ready signal mismatch for tile (%0d,%0d) port %0d", r, c, port);

        $display("Test Case 1 Passed.");

        // --- Clean up ---
        fully_flat_tile_flit_in = '0;
        fully_flat_tile_valid_in = '0;
        fully_flat_tile_ready_in = '0;
        #10;

        $display("All tests completed.");
        $finish;
    end

endmodule
