#ifndef PRISM_H
#define PRISM_H

#include <iostream>

using namespace std;

class Prisma
{
private:
    int     height,
            width,
            depth;

    string  color;

public:
    Prisma(string color = "Incoloro", int height = 1, int width = 1, int depth = 1);
    friend ostream& operator << (ostream &sal, const Prisma &obj);
    friend Prisma operator * (int num, const Prisma &obj);
    Prisma operator ++ (int);
    Prisma& operator -- ();
};

#endif // PRISM_H
