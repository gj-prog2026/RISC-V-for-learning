module controldecode #(
    parameter D_WIDTH = 32
)(
    input logic [D_WIDTH-1:0] instr,
    output logic auipc,
    output logic jal,
    output logic jalr,
    output logic branch
);

always_comb begin
    auipc  = (opcode == 7'b001_0111);
    jal    = (opcode == 7'b110_1111);
    jalr   = (opcode == 7'b110_0111);
    branch = (opcode == 7'b110_0011);
end

endmodule

