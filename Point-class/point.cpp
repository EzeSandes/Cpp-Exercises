#include "Point.h"

Point::Point()
{
    this->coordX = 0;
    this->coordY = 0;
}

Point::Point(const int x, const int y)
{
    this->coordX = x;
    this->coordY = y;
}


//Copy constructor
Point::Point(const Point &p) /// Point::Point(const Point &obj): x(obj.x),y(obj.y) {}
{
    this->coordX = p.coordX;
    this->coordY = p.coordY;
}

Point::Point(const int x)
{
    this->coordX = x;
    this->coordY = x * (4 / 3);
}
///////

/// OPERATORS

//https://stackoverflow.com/questions/34562865/why-does-operator-return-this
Point& Point::operator = (const Point &p)
{
    //This == left object. P == right object
    this->coordX = p.coordX;
    this->coordY = p.coordY;
    return *this;
}

/*
this means pointer to the object, so *this is an object. So, you are returning an object ie, *this returns a reference to the object.
*/
// p1 = p2 ++;
Point& Point::operator ++(int)
{
    this->coordX++;
    this->coordY++;
    return *this;
}

// p1 = ++p2; //For this kind of operations of  PRE-INCREMENT
Point& Point::operator ++()
{
    this->coordX++;
    this->coordY++;
    return *this;
}

Point& Point::operator += (const Point &p)
{
    this->coordX += p.coordX;
    this->coordY += p.coordY;

    return *this;
}

/// FUNCTIONS

void Point::setPoint(int x, int y)
{
    if(x <= 768 && y <= 1024)
    {
        this->coordX = x;
        this->coordY = y;
    }
}
////////
void Point::displayPoints()
{
    cout << "(" << this->coordX << ", " << this->coordY << ")";
}
