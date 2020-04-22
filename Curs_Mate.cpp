#include "Curs_Mate.h"

Curs_Mate::Curs_Mate()
{
    Titlu = "Matematica generica";
    nLuc=3;
    for(int i=0; i<nLuc; i++)
    {
        LP[i]=0;
    }
    EvFin=0;
}

Curs_Mate::Curs_Mate(short int a, short int b, short int c, short int d)
{
    Titlu = "Matematica generica";

    nLuc=3;

    LP[0]=a;
    LP[1]=b;
    LP[2]=c;

    EvFin=d;
}

double Curs_Mate::medie()
{
    double m=0;

    for(int i=0; i<nLuc; i++)
    {
        m=m+LP[i];
    }

    m=m/nLuc;

    return 0.5*m + 0.5*EvFin;
}

std::ostream &operator<<(std::ostream &out, Curs_Mate &C)
{
    out<<C.Titlu<<" -- ";

    out<<"Note lucrari practice: {";

    for(int i=0; i<C.nLuc-1; i++)
    {
        out<<C.LP[i]<<", ";
    }

    out<<C.LP[C.nLuc-1];

    out<<"} Nota examen final: "<<C.EvFin<<"; ";

    return out;
}

std::istream &operator>>(std::istream &in, Curs_Mate &C)
{

    for(int i=0; i<C.nLuc; i++)
    {
        in>>C.LP[i];
    }

    in>>C.EvFin;

    return in;
}

