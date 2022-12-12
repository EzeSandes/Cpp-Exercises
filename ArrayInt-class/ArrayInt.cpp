#include "ArrayInt.h"

ArrayInt::ArrayInt()
{
    this->vec = NULL;
    this->numOfElem = 0;
}

/*
Constructor can throw an Exception(bad_alloc)
*/
ArrayInt::ArrayInt(const int *vec, int numOfElem)
{
    int i;

    this->numOfElem = numOfElem;
    
    this->vec = new int[numOfElem];

    for(i = 0; i < numOfElem; i++)
    {
        this->vec[i] = vec[i];
    }
}

ArrayInt::~ArrayInt()
{
    delete [] this->vec;
}

/////////////////////////////

ArrayInt& ArrayInt :: agregar(const int *vec, int numOfElem)
{
    int i;

    this->numOfElem = numOfElem;
    delete [] this->vec;
    this->vec = new int[numOfElem];

    for(i = 0; i < numOfElem; i++)
    {
        this->vec[i] = vec[i];
    }

    return *this;
}

/////////////////////////////

ostream& operator << (ostream &sal, const ArrayInt &obj)
{
    int i;

    sal << '[';

    for(i = 0; i < obj.numOfElem; i++)
    {
        sal << obj.vec[i] << (i == obj.numOfElem - 1? "" : ", ");
    }

    sal << ']';

    return sal;
}

/////////////////////////////

ArrayInt ArrayInt :: operator + (const ArrayInt &obj)
{
    int i, j,
        *aux;

    aux = new int[obj.numOfElem + this->numOfElem];

    for(i = 0; i < this->numOfElem; i++)
        aux[i] = this->vec[i];

    for(i = this->numOfElem, j = 0; i < this->numOfElem + obj.numOfElem; i++, j++)
        aux[i] = obj.vec[j];

    return ArrayInt(aux, obj.numOfElem + this->numOfElem);
}

/////////////////////////////

ArrayInt& ArrayInt :: operator = (const ArrayInt &obj)
{
    int i;

    this->numOfElem = obj.numOfElem;
    delete [] this->vec;
    this->vec = new int[obj.numOfElem];

    for(i = 0; i < obj.numOfElem; i++)
        this->vec[i] = obj.vec[i];

    return *this;
}

/////////////////////////////

ArrayInt ArrayInt :: operator + (int num)
{
    int i,
        *aux;

    aux = new int[this->numOfElem + 1];

    for(i = 0; i < this->numOfElem; i++)
        aux[i] = this->vec[i];

    aux[i] = num;

    return ArrayInt(aux, this->numOfElem + 1);
}

/////////////////////////////
