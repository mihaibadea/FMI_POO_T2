#include "Program.h"

Program::Program() : Titlu("Program generic"), Cursuri({}), Subprograme({})
{

}


Program::Program(const Program& other)
{

}

Program::~Program()
{
    for(auto k : Cursuri)
    {
        delete k;
    }

    Cursuri.clear();

    for(auto s : Subprograme)
    {
        for(auto k: s->Cursuri)
        {
            delete k;
        }

        s->Cursuri.clear();

        delete s;
    }

    Subprograme.clear();

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

    for(auto s : Subprograme)
    {
        for(auto k : s->Cursuri)
        {
            m=m+ (*k).medie();
            n++;
        }
    }

    m=m/n;
    return m;
}

std::string Program::competenta()
{
    double m = medie();

    if(m<5) return "picat";
    if(m<7) return "competenta mica";
    if(m<9) return "competenta medie";
    return "competenta mare";
}

std::ostream &operator<<(std::ostream &out, Program &P)
{

    out<<P.Titlu<<", "<<P.competenta();


    return out;
}
std::istream &operator>>(std::istream &in, Program &P)
{
    for(auto k : P.Cursuri)
    {
        std::cout<<"("<<(*k).getTitlu()<<") ";
        in>>(*k);
    }

    for(auto s : P.Subprograme)
    {
        std::cout<<"(subprogram) ";
        for(auto k : s->Cursuri)
        {
            std::cout<<"("<<(*k).getTitlu()<<") ";
            in>>(*k);
        }
    }

    return in;
}
