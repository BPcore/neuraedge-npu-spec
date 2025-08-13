// Properties for router_mesh
module top_router_props(input clk, input rst_n, input [63:0] flit_in, output [63:0] flit_out);
    // Example property: assert that data is not lost
    // This is a stub and needs to be implemented
    property data_not_lost;
        @(posedge clk) (flit_in |-> ##[1:10] flit_out == flit_in);
    endproperty
    
    assert property(data_not_lost);
endmodule
