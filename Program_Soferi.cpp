#include "Program_Soferi.h"

#include "Curs_Legislatie.h"
#include "Curs_Condus.h"

Program_Soferi::Program_Soferi()
{
    Curs *L = new Curs_Legislatie;
    Curs *C = new Curs_Condus;

    Cursuri.push_back(L);
    Cursuri.push_back(C);

}
