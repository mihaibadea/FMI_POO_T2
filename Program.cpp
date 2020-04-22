#include "Program.h"

Program::Program()
{
    //ctor
}

Program::~Program()
{
    //dtor
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
