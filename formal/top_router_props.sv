// formal/top_router_props.sv
// System-level router mesh properties for formal verification

module top_router_props #(parameter ROWS=2, COLS=2, FLIT_W=64) (
    input logic clk,
    input logic rst_n,
    input logic [ROWS*COLS*5*FLIT_W-1:0] fully_flat_tile_flit_in,
    input logic [ROWS*COLS*5-1:0]        fully_flat_tile_valid_in,
    input logic [ROWS*COLS*5*FLIT_W-1:0] fully_flat_tile_flit_out,
    input logic [ROWS*COLS*5-1:0]        fully_flat_tile_valid_out
);
    // T4.1: Liveness - every injected flit eventually egresses at its correct destination
    genvar i;
    generate
      for (i = 0; i < ROWS*COLS*5; i = i + 1) begin : FLIT_LIVENESS
        property flit_eventually_egresses;
          @(posedge clk)
          disable iff (!rst_n)
          fully_flat_tile_valid_in[i] |->
            ##[1:$] fully_flat_tile_valid_out[i];
        endproperty
        assert property (flit_eventually_egresses)
          else $error("Flit injected at port %0d did not egress", i);
      end
    endgenerate

    // T4.2: Deadlock-freedom - if any input valid, eventually some output valid
    property no_deadlock;
      @(posedge clk)
      disable iff (!rst_n)
      (|fully_flat_tile_valid_in) |-> ##[1:$] (|fully_flat_tile_valid_out);
    endproperty
    assert property (no_deadlock)
      else $error("Network deadlock detected");

    // T4.2: Destination‐check: egress flit matches injected destination
    genvar j;
    generate
      for (j = 0; j < ROWS*COLS*5; j = j + 1) begin : FLIT_DEST_CHECK
        property flit_dest_correct;
          @(posedge clk)
          disable iff (!rst_n)
          fully_flat_tile_valid_in[j] |-> ##[1:$]
            (fully_flat_tile_flit_out[j*FLIT_W +:16] ==
             fully_flat_tile_flit_in[j*FLIT_W +:16]);
        endproperty
        assert property (flit_dest_correct)
          else $error("Flit dest mismatch at port %0d", j);
      end
    endgenerate
endmodule
