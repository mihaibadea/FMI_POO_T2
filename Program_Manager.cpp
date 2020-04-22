#include "Program_Manager.h"

#include "Curs_HR.h"
#include "Curs_Financiar.h"
#include "Curs_Engleza.h"

Program_Manager::Program_Manager()
{
    Titlu = "Program Manager";

    Curs *H = new Curs_HR;
    Curs *F = new Curs_Financiar;
    Curs *E = new Curs_Engleza;

    Cursuri.push_back(H);
    Cursuri.push_back(F);
    Cursuri.push_back(E);
}

