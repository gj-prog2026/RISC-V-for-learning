module rom #(
    parameter BYTE_WIDTH = 8,
    D_WIDTH = 32,
    A_WIDTH = 12
)(
    input logic [A_WIDTH-1:0] r_addr,
    output logic [D_WIDTH-1:0] instr
);

logic [BYTE_WIDTH-1:0] rom_array [2**A_WIDTH-1: 0];

initial begin
    $display("loading rom");
    $readmemh("verification/instructions.mem", rom_array);
end


assign instr = {rom_array[r_addr + 3], rom_array[r_addr + 2], 
                rom_array[r_addr + 1], rom_array[r_addr]};


endmodule

