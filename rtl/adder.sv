module adder#(
    parameter D_WIDTH = 32
)(
    input logic [D_WIDTH-1:0] a,
    input logic [D_WIDTH-1:0] b,
    output logic [D_WIDTH-1:0] out
);

always_comb begin
    out = a + b;
end

endmodule
