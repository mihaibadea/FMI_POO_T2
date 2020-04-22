#include "Curs.h"

Curs::Curs() : nLuc(0), Titlu("Curs generic")
{

}


Curs::Curs(const Curs& other)
{
    nLuc=other.nLuc;
    for(int i=0; i<nLuc; i++)
    {
        LP[i]=other.LP[i];
    }
}

Curs& Curs::operator=(const Curs& rhs)
{
    if (this == &rhs) return *this;

    nLuc=rhs.nLuc;
    for(int i=0; i<nLuc; i++)
    {
        LP[i]=rhs.LP[i];
    }

    return *this;
}



std::ostream &operator<<(std::ostream &out, Curs &C)
{
    out<<C.Titlu<<" -- ";
    out<<"Note lucrari practice: {";

    for(int i=0; i<C.nLuc-1; i++)
    {
        out<<C.LP[i]<<", ";
    }

    out<<C.LP[C.nLuc-1];

    out<<"}; ";
    return out;
}

std::istream &operator>>(std::istream &in, Curs &C)
{

    for(int i=0; i<C.nLuc; i++)
    {
        in>>C.LP[i];
    }
    return in;
}


