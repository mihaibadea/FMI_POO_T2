#include "Curs_Limba.h"

Curs_Limba::Curs_Limba()
{
    Titlu = "Limba generica";
    nLuc=3;

    for(int i=0; i<nLuc; i++)
    {
        LP[i]=0;
    }
}

Curs_Limba::Curs_Limba(short int a, short int b, short int c)
{
    Titlu = "Limba generica";
    nLuc=3;

    LP[0]=a;
    LP[1]=b;
    LP[2]=c;
}

double Curs_Limba::medie()
{
    double m=0;
    short int minim=10;
    for(int i=0; i<nLuc; i++)
    {
        m=m+LP[i];
        if(LP[i]<minim) minim=LP[i];
    }
    m=(m-minim)/(nLuc-1);
    return m;
}
