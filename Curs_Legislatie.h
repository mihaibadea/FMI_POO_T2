#ifndef CURS_LEGISLATIE_H
#define CURS_LEGISLATIE_H

#include "Curs.h"

class Curs_Legislatie : public Curs
{
    public:
        Curs_Legislatie();
        Curs_Legislatie(short int, short int);
        ~Curs_Legislatie()=default;
        double medie();

    protected:

    private:
};
#endif // CURS_LEGISLATIE_H
