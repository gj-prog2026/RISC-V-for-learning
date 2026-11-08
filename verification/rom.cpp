#include "gtest/gtest.h"
#include "Vrom.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

Vrom *top;
VerilatedVcdC *tfp;
unsigned int ticks = 0;

class RomTest : public ::testing::Test
{
public:
    // The ROM has no clock, so "reading" = set address, eval, check output.
    uint32_t read(uint32_t addr)
    {   top->r_addr = addr;
        top->eval();
        tfp->dump(ticks++);
        return top->instr;
    }
};

TEST_F(RomTest, FirstInstruction)
{
    EXPECT_EQ(read(0), 0x00500513);   // addi a0, zero, 5
}

TEST_F(RomTest, SequentialInstructions)
{
    std::vector<uint32_t> expected = {
        0x00500513,   // addi a0, zero, 5
        0x00100593,   // addi a1, zero, 1
        0x00B50633,   // add  a2, a0, a1
    };

    for (size_t i = 0; i < expected.size(); i++)
        EXPECT_EQ(read(i * 4), expected[i]) << "at byte address " << i * 4;
}

TEST_F(RomTest, ReadIsCombinational)
{
    // Output should change as soon as the address changes, no clock needed
    EXPECT_EQ(read(4), 0x00100593);
    EXPECT_EQ(read(0), 0x00500513);
}

int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);
    top = new Vrom;
    tfp = new VerilatedVcdC;

    Verilated::traceEverOn(true);
    top->trace(tfp, 99);
    tfp->open("waveform.vcd");

    testing::InitGoogleTest(&argc, argv);
    auto res = RUN_ALL_TESTS();

    top->final();
    tfp->close();
    delete top;
    delete tfp;
    return res;
}