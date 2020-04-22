#ifndef CURS_CONDUS_H
#define CURS_CONDUS_H

#include "Curs.h"

class Curs_Condus : public Curs
{
    public:
        Curs_Condus();
        Curs_Condus(short int);
        ~Curs_Condus()=default;
        double medie();

    protected:

    private:
};

#endif // CURS_CONDUS_H
