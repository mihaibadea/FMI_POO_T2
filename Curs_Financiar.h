#ifndef CURS_FINANCIAR_H
#define CURS_FINANCIAR_H

#include "Curs.h"

class Curs_Financiar : public Curs
{
    public:
        Curs_Financiar();
        Curs_Financiar(short int, short int, short int);
        ~Curs_Financiar()=default;
        double medie();

    protected:

    private:
};

#endif // CURS_FINANCIAR_H
