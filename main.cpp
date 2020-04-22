#include <iostream>
#include <vector>

#include "Curs.h"
#include "Curs_HR.h"
#include "Curs_Financiar.h"
#include "Curs_Mate.h"
#include "Curs_Algebra.h"
#include "Curs_Geometrie.h"
#include "Curs_Analiza.h"
#include "Curs_Limba.h"
#include "Curs_Engleza.h"
#include "Curs_Turca.h"
#include "Curs_Legislatie.h"
#include "Curs_Programare.h"
#include "Curs_POO.h"
#include "Curs_PP.h"
#include "Curs_Condus.h"

#include "Program.h"


using namespace std;

int main()
{

    Program V;

    Curs *A = new Curs_HR(5,6,7,8);
    Curs *B = new Curs_Condus(10);

    V.Cursuri.push_back(A);
    V.Cursuri.push_back(B);

    cout<<V.medie()<<" "<<V.competenta();




    return 0;
}
