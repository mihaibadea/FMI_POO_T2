#ifndef CURS_MATE_H
#define CURS_MATE_H

#include "Curs.h"

class Curs_Mate : public Curs
{
    public:
        Curs_Mate();
        Curs_Mate(short int, short int, short int, short int);
        ~Curs_Mate()=default;
        double medie();

    protected:
        short int EvFin;
    private:
};

#endif // CURS_MATE_H
