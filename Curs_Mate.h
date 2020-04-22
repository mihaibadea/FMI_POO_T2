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
        friend std::ostream &operator<<(std::ostream &out, Curs_Mate &C);
        friend std::istream &operator>>(std::istream &in, Curs_Mate &C);

    protected:
        short int EvFin;
    private:
};

#endif // CURS_MATE_H
