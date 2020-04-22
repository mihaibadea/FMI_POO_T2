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
#include "Program_Finantist.h"
#include "Program_Manager.h"
#include "Program_Programator.h"
#include "Program_Manager_Programatori.h"
#include "Program_Manager_Tiristi.h"
#include "Program_Soferi.h"

#include "Cursant.h"


using namespace std;

int main()
{

    map<std::string, int> M;

    cout<<"Numarul de cursanti: ";
    int n;

    cin>>n;

    for(int i=0; i<n; i++)
    {
        cout<<"Informatii pentru cursantul nr. "<<i+1<<": ";
        Cursant C;
        try{
            cin>>C;
            M[C.competenta()]++;
            cout<<C<<'\n';
        }
        catch(const char* t)
        {
            cout<<t<<'\n';
        }

    }

    for(auto a : M)
    {
        cout<<a.first<< " : "<<a.second;
    }



    return 0;
}
