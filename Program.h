#ifndef PROGRAM_H
#define PROGRAM_H

#include <vector>
#include "Curs.h"

class Program
{
    public:
        Program();
        virtual ~Program()=default;
        Program(const Program& other);
        Program& operator=(const Program& other);
        double medie();
        std::string competenta();

   // protected:
        std::vector<Curs*> Cursuri;
        std::vector<Program*> Subprograme;

    private:
};

#endif // PROGRAM_H
