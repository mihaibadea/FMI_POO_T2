#include <iostream>
#include <vector>

#include "Curs.h"
#include "Curs_HR.h"
#include "Curs_Financiar.h"

using namespace std;

int main()
{
    Curs_HR A(1,2,3,4);

    Curs_Financiar B(5,8,9);

    cout<<A.medie()<<" "<<B.medie();


    return 0;
}
