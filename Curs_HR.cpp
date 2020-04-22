#include "Curs_HR.h"

Curs_HR::Curs_HR()
{
    nLuc=4;

    for(int i=0; i<nLuc; i++)
    {
        LP[i]=0;
    }
}

Curs_HR::Curs_HR(int a, int b, int c, int d)
{
    nLuc=4;

    LP[0]=a;
    LP[1]=b;
    LP[2]=c;
    LP[3]=d;
}
