#include "Program_Finantist.h"

#include "Curs_Algebra.h"
#include "Curs_Financiar.h"

Program_Finantist::Program_Finantist()
{
    Titlu = "Program Finantist";

    Curs *M = new Curs_Algebra;
    Curs *F = new Curs_Financiar;

    Cursuri.push_back(M);
    Cursuri.push_back(F);
}

