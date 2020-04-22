#include "Curs.h"

Curs::Curs() : nLuc(0)
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

double Curs::medie()
{
    double m=0;
    for(int i=0; i<nLuc; i++)
    {
        m=m+LP[i];
    }
    m=m/nLuc;
    return m;
}
