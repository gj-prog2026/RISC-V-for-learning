#include "gtest/gtest.h"
#include "Vmux2.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

Vmux2 *top;
VerilatedVcdC *tfp;
unsigned int ticks = 0;

class Mux2Test : public ::testing::Test
{
public:
    
    uint32_t read(uint32_t d0, uint32_t d1, bool sel)
    {   top->sel = sel;
        top->d0 = d0;
        top->d1 = d1;
        top->eval();
        tfp->dump(ticks++);
        return top->dout;
    }
};

TEST_F(Mux2Test, FirstInstruction)
{
    EXPECT_EQ(read(0x00500513, 0x02337001, 1), 0x02337001);
    EXPECT_EQ(read(0x00500513, 0x02337001, 0), 0x00500513);
}


int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);
    top = new Vmux2;
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