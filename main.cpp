#include <iostream>
#include <vector>

#include "Curs.h"
#include "Curs_HR.h"
#include "Curs_Financiar.h"
#include "Curs_Mate.h"
#include "Curs_Algebra.h"
#include "Curs_Geometrie.h"
#include "Curs_Analiza.h"
#include "Curs_NLP.h"

using namespace std;

int main()
{
    Curs_Algebra A(10,10,10,5);

    Curs_HR B(10,10,10,5);

    Curs_Financiar C(1,2,3);


    cout<<A.medie()<<" "<<B.medie()<<" "<<C.medie();

    cout<<"\n";

    cout<<A<<" \n"<<B<<" \n"<<C;


    return 0;
}
