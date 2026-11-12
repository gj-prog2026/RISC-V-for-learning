module pc #(
    parameter A_WIDTH = 12
)(
    input logic clk,
    input logic [A_WIDTH-1:0] pcnext,
    output logic [A_WIDTH-1:0] memaddr
);

always_ff @(posedge clk) begin
    memaddr <= pcnext;
end

endmodule
