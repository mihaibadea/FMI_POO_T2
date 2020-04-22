#include "Program_Manager_Programatori.h"

#include "Program_Manager.h"
#include "Program_Programator.h"

Program_Manager_Programatori::Program_Manager_Programatori()
{
    Program *M = new Program_Manager;
    Program *P = new Program_Programator;

    Subprograme.push_back(M);
    Subprograme.push_back(P);
}
