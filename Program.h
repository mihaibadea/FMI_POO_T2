#ifndef PROGRAM_H
#define PROGRAM_H

#include <vector>
#include "Curs.h"

class Program
{
    public:
        Program();
        virtual ~Program();
        Program(const Program& other);
        Program& operator=(const Program& other);
        double medie();
        std::string competenta();
        friend std::ostream &operator<<(std::ostream &out, Program &P);
        friend std::istream &operator>>(std::istream &in, Program &P);

   // protected:
        std::vector<Curs*> Cursuri;
        std::vector<Program*> Subprograme;
        std::string Titlu;

    private:
};

#endif // PROGRAM_H
