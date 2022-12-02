#include "VRISC_V_top.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char ** argv, char **env)
{
    int i;
    int clk;

    Verilated::commandArgs(argc, argv);

    VRISC_V_top* top=new VRISC_V_top;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp=new VerilatedVcdC;

    top->trace(tfp,99);
    tfp->open("RISC_V_top.vcd");

    top->clk=1;
    top->rst=1;
    top->a0=0;

    for(i=0;i<300;i++)
    {
        for(clk=0; clk<2; clk++)
        {
            tfp->dump(2*i+clk);
            top->clk=!top->clk;
            top->eval();
        }

        top->rst=0;

    
        if(Verilated::gotFinish()) exit(0);

    }

    tfp->close();
    exit(0);

}