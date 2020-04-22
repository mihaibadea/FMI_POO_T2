#include "Curs_HR.h"

Curs_HR::Curs_HR()
{
    Titlu = "Resurse umane";
    nLuc=4;

    for(int i=0; i<nLuc; i++)
    {
        LP[i]=0;
    }
}

Curs_HR::Curs_HR(short int a, short int b, short int c, short int d)
{
    Titlu = "Resurse umane";
    nLuc=4;

    LP[0]=a;
    LP[1]=b;
    LP[2]=c;
    LP[3]=d;
}

double Curs_HR::medie()
{
    double m=0;
    for(int i=0; i<nLuc; i++)
    {
        m=m+LP[i];
    }
    m=m/nLuc;
    return m;
}
