#include "myProgram.hpp"
#include "FT_bakery.hpp"



int main(int argc, char* argv[])
{

    MyProgram * m = new MyProgram();
    m->verifyArguments(argc, argv);
    m->start();

};
