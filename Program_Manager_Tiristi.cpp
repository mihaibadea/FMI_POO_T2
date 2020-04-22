#include "Program_Manager_Tiristi.h"

#include "Curs_Turca.h"
#include "Curs_Legislatie.h"
#include "Program_Manager.h"

Program_Manager_Tiristi::Program_Manager_Tiristi()
{
    Curs *T = new Curs_Turca;
    Curs *L = new Curs_Legislatie;
    Program *M = new Program_Manager;

    Cursuri.push_back(T);
    Cursuri.push_back(L);

    Subprograme.push_back(M);
}
