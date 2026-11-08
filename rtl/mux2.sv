module mux2#(
    parameter D_WIDTH = 32
)(
    input logic sel,
    input logic [D_WIDTH-1:0]d0,
    input logic [D_WIDTH-1:0] d1,
    output logic [D_WIDTH-1:0] dout
);

always_comb begin
    if(sel) assign dout = d1;
    else assign dout = d0;
end

endmodule
