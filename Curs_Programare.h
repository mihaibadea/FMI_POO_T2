#ifndef CURS_PROGRAMARE_H
#define CURS_PROGRAMARE_H

#include "Curs.h"

class Curs_Programare : public Curs
{
    public:
        Curs_Programare();
        Curs_Programare(short int, short int, short int, short int, short int);
        ~Curs_Programare()=default;
        double medie();
        friend std::ostream &operator<<(std::ostream &out, Curs_Programare &C);
        friend std::istream &operator>>(std::istream &in, Curs_Programare &C);

    protected:
        short int EvFin;
    private:
};



#endif // CURS_PROGRAMARE_H
