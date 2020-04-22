#ifndef CURS_H
#define CURS_H

class Curs
{
    public:
        Curs();
        virtual ~Curs()=default;
        Curs(const Curs& other);
        Curs& operator=(const Curs& other);
        double medie();

    protected:
        short int nLuc;
        short int LP[10];
    private:
};

#endif // CURS_H
