#ifndef CURS_LIMBA_H
#define CURS_LIMBA_H

#include "Curs.h"

class Curs_Limba : public Curs
{
    public:
        Curs_Limba();
        Curs_Limba(short int, short int, short int);
        ~Curs_Limba()=default;
        double medie();

    protected:

    private:
};


#endif // CURS_LIMBA_H
