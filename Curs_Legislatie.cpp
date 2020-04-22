#include "Curs_Legislatie.h"

Curs_Legislatie::Curs_Legislatie()
{
    Titlu = "Legislatie rutiera";
    nLuc=2;

    for(int i=0; i<nLuc; i++)
    {
        LP[i]=0;
    }
}

Curs_Legislatie::Curs_Legislatie(short int a, short int b)
{
    Titlu = "Legislatie rutiera";
    nLuc=2;

    LP[0]=a;
    LP[1]=b;

}

double Curs_Legislatie::medie()
{
    double m=0;
    for(int i=0; i<nLuc; i++)
    {
        m=m+LP[i];
    }
    m=m/nLuc;
    return m;
}
