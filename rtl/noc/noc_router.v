// File: rtl/noc/noc_router.v
module noc_router #(
    parameter FLIT_WIDTH = 64,
    parameter PORTS      = 5
)(
    input  logic [FLIT_WIDTH-1:0] flit_in [PORTS],
    input  logic                  valid_in[PORTS],
    output logic                  ready_out[PORTS],
    output logic [FLIT_WIDTH-1:0] flit_out[PORTS],
    output logic                  valid_out[PORTS],
    input  logic                  ready_in[PORTS]
);
  // Simple loopback stub
  always_comb begin
    for (int i = 0; i < PORTS; i++) begin
      flit_out[i]  = flit_in[i];
      valid_out[i] = valid_in[i];
      ready_out[i] = ready_in[i];
    end
  end
endmodule
