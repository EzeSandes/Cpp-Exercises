#include "Circle.h"

#define PI  3.14

Circle :: Circle(float radius)
: radius(radius)
{}

///////////////////////////////////////
/*
IMPORTANT: Because we do not use dynamic memory in the class, we do not need to have a destructor, a copy constructor or the operator '='
            since in static classes, these operators and constructors there are by default.
*/
///////////////////////////////////////
Circle& Circle :: operator = (float num)
{
    this->radius = num;

    return *this;
}

///////////////////////////////////////

Circle& Circle :: operator -- ()
{
    this->radius--;

    return *this;
}

///////////////////////////////////////

float Circle :: perimeter() const
{
    return 2 * PI * this->radius;
}

///////////////////////////////////////

float Circle :: area() const
{
    return PI * this->radius * this->radius;
}

///////////////////////////////////////

ostream& operator << (ostream &sal, const Circle &obj)
{
    return sal << "Radius: " << obj.radius;
}

///////////////////////////////////////
