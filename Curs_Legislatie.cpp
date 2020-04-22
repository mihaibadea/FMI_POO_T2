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

