#include "Curs_Programare.h"

Curs_Programare::Curs_Programare()
{
    Titlu = "Programare generica";
    nLuc=4;
    for(int i=0; i<nLuc; i++)
    {
        LP[i]=0;
    }
    EvFin=0;
}

Curs_Programare::Curs_Programare(short int a, short int b, short int c, short int d, short int e)
{
    Titlu = "Programare generica";

    nLuc=4;

    LP[0]=a;
    LP[1]=b;
    LP[2]=c;
    LP[3]=d;

    EvFin=e;
}

double Curs_Programare::medie()
{
    double m=0;

    short int minim=10, maxim=0;

    for(int i=0; i<nLuc; i++)
    {
        m=m+LP[i];
        if(LP[i]>maxim) maxim=LP[i];
        if(LP[i]<minim) minim=LP[i];
    }

    m=(m-maxim-minim)/(nLuc-2);

    return 0.5*m + 0.5*EvFin;
}

std::ostream &operator<<(std::ostream &out, Curs_Programare &C)
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

std::istream &operator>>(std::istream &in, Curs_Programare &C)
{
    for(int i=0; i<C.nLuc; i++)
    {
        in>>C.LP[i];
    }

    in>>C.EvFin;

    return in;
}

