#include "Curs_Condus.h"

Curs_Condus::Curs_Condus()
{
    Titlu = "Condus";
    nLuc=1;
    LP[0]=0;
}

Curs_Condus::Curs_Condus(short int a)
{
    Titlu = "Condus";
    nLuc=1;
    LP[0]=a;
}

double Curs_Condus::medie()
{
    double m=0;
    for(int i=0; i<nLuc; i++)
    {
        m=m+LP[i];
    }
    m=m/nLuc;
    return m;
}
