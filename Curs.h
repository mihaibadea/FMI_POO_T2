#ifndef CURS_H
#define CURS_H

#include <iostream>

class Curs
{
    public:
        Curs();
        virtual ~Curs()=default;
        Curs(const Curs&);
        Curs& operator=(const Curs& );
        virtual double medie()=0;
        friend std::ostream &operator<<(std::ostream &out, Curs &C);
        friend std::istream &operator>>(std::istream &in, Curs &C);

        std::string getTitlu(){return Titlu;};

    protected:
        short int nLuc;
        short int LP[10];
        std::string Titlu;
    private:
};

#endif // CURS_H
