#include "Program_Programator.h"

#include "Curs_Algebra.h"
#include "Curs_Geometrie.h"
#include "Curs_Analiza.h"
#include "Curs_Engleza.h"
#include "Curs_PP.h"

Program_Programator::Program_Programator()
{
    Titlu = "Program Programator";

    Curs *A = new Curs_Algebra;
    Curs *G = new Curs_Geometrie;
    Curs *B = new Curs_Analiza;
    Curs *E = new Curs_Engleza;
    Curs *P = new Curs_PP;

    Cursuri.push_back(A);
    Cursuri.push_back(G);
    Cursuri.push_back(B);
    Cursuri.push_back(E);
    Cursuri.push_back(P);
}

