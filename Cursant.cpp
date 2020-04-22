#include "Cursant.h"

#include "Program.h"
#include "Program_Finantist.h"
#include "Program_Manager.h"
#include "Program_Programator.h"
#include "Program_Manager_Programatori.h"
#include "Program_Manager_Tiristi.h"
#include "Program_Soferi.h"

Cursant::Cursant()
{
    //ctor
}

Cursant::Cursant(std::string k, short int opt): Nume(k)
{
    switch(opt)
    {
    case 1:
        P = new Program_Finantist;
        break;
    case 2:
        P = new Program_Manager;
        break;
    case 3:
        P = new Program_Manager_Programatori;
        break;
    case 4:
        P = new Program_Manager_Tiristi;
        break;
    case 5:
        P = new Program_Programator;
        break;
    case 6:
        P = new Program_Soferi;
        break;
    default:
        throw("Optiune invalida");
    }
}

Cursant::~Cursant()
{
    delete P;
}

std::string Cursant::competenta()
{
    return P->competenta();
}

std::ostream &operator<<(std::ostream &out, Cursant &C)
{
    out<<C.Nume<<": "<<C.P->competenta()<<", media "<<C.P->medie()<<" \n";
    return out;
}
std::istream &operator>>(std::istream &in, Cursant &C)
{
    std::string k;
    short int opt;

    std::cout<<"(nume, optiune curs) ";

    in>>k>>opt;

    C.Nume=k;

    switch(opt)
    {
    case 1:
        C.P = new Program_Finantist;
        break;
    case 2:
        C.P = new Program_Manager;
        break;
    case 3:
        C.P = new Program_Manager_Programatori;
        break;
    case 4:
        C.P = new Program_Manager_Tiristi;
        break;
    case 5:
        C.P = new Program_Programator;
        break;
    case 6:
        C.P = new Program_Soferi;
        break;
    default:
        throw("Optiune invalida");
    }

    in>>(*(C.P));



    return in;
}
