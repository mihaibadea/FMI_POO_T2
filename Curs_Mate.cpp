#include "Curs_Mate.h"

Curs_Mate::Curs_Mate()
{
    nLuc=3;
    for(int i=0; i<nLuc; i++)
    {
        LP[i]=0;
    }
    EvFin=0;
}

Curs_Mate::Curs_Mate(short int a, short int b, short int c, short int d)
{
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
