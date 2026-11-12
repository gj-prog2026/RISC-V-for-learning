module controlpath #(
    parameter D_WIDTH = 32,
              A_WIDTH = 32
)(
    input logic clk,
    input logic [D_WIDTH-1:0] instr,
    input logic [A_WIDTH-1:0] offset,
    output logic [A_WIDTH-1:0] memaddr,
);

logic [A_WIDTH-1:0] pcnext;
logic jal, branch, jalr, auipc; 

always_comb begin
    if(jal | branch | jalr) pcnext = pc + offset;
    else pcnext = pc + 3'd4;
end

pc pcreg(
    .clk(clk),
    .pcnext(pcnext),

)

endmodule
