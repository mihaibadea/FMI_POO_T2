#include <iostream>
#include <vector>

#include "Curs.h"
#include "Curs_HR.h"
#include "Curs_Financiar.h"
#include "Curs_Mate.h"

using namespace std;

int main()
{
    Curs_Mate A(10,10,10,5);

    Curs_HR B(10,10,10,5);

    cout<<A.medie()<<" "<<B.medie();


    return 0;
}
