#include "Curs_Financiar.h"

Curs_Financiar::Curs_Financiar()
{
    nLuc=3;

    for(int i=0; i<nLuc; i++)
    {
        LP[i]=0;
    }
}

Curs_Financiar::Curs_Financiar(short int a, short int b, short int c)
{
    nLuc=3;

    LP[0]=a;
    LP[1]=b;
    LP[2]=c;
}

