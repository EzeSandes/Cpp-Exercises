#ifndef ArrayInt_H
#define ArrayInt_H

#include <iostream>

using namespace std;

class ArrayInt
{
    private:
        int     *vec;
        int     numOfElem;

    public:
        ArrayInt();
        ArrayInt(const int *vec, int numOfElem);
        ~ArrayInt();

        ArrayInt& add(const int *vec, int numOfElem);
        friend ostream& operator << (ostream &exit, const ArrayInt &obj);

        ArrayInt operator + (const ArrayInt &obj);
        ArrayInt& operator = (const ArrayInt &obj);
        ArrayInt operator + (int num);
};

#endif // ArrayInt_H
