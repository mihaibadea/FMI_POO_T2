#include "Program.h"

Program::Program()
{
    //ctor
}


Program::Program(const Program& other)
{
    //copy ctor
}

Program& Program::operator=(const Program& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}

double Program::medie()
{
    double m=0;
    short int n=0;

    for(auto k : Cursuri)
    {
        m=m+ (*k).medie();
        n++;
    }

    //pt subprograme

    m=m/n;
    return m;
}

std::string Program::competenta()
{
    double m = medie();

    if(m<5) return "Picat";
    if(m<7) return "Mica";
    if(m<9) return "Medie";
    return "Mare";
}
