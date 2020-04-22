#include "Program_Programator.h"

#include "Curs_Algebra.h"
#include "Curs_Geometrie.h"
#include "Curs_Analiza.h"
#include "Curs_Engleza.h"
#include "Curs_POO.h"

Program_Programator::Program_Programator()
{
    Titlu = "Program Programator";

    Curs *A = new Curs_Algebra;
    Curs *G = new Curs_Geometrie;
    Curs *B = new Curs_Analiza;
    Curs *P = new Curs_POO;
    Curs *E = new Curs_Engleza;

    Cursuri.push_back(A);
    Cursuri.push_back(G);
    Cursuri.push_back(B);
    Cursuri.push_back(P);
    Cursuri.push_back(E);
}

