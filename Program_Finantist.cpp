#include "Program_Finantist.h"

#include "Curs_Mate.h"
#include "Curs_Financiar.h"

Program_Finantist::Program_Finantist()
{
    Titlu = "Program Finantist";

    Curs *M = new Curs_Mate;
    Curs *F = new Curs_Financiar;

    Cursuri.push_back(M);
    Cursuri.push_back(F);
}

Program_Finantist::~Program_Finantist()
{
    //dtor
}
