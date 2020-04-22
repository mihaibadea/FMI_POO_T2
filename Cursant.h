#ifndef CURSANT_H
#define CURSANT_H

#include <string>
#include "Program.h"

class Cursant
{
    public:
        Cursant();
        virtual ~Cursant();
        Cursant(std::string, short int);
        friend std::ostream &operator<<(std::ostream &out, Cursant &C);
        friend std::istream &operator>>(std::istream &in, Cursant &C);
        std::string competenta();


    protected:

    private:
        std::string Nume;
        Program *P;
};

#endif // CURSANT_H
