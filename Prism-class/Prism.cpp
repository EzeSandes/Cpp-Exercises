#include "Prism.h"

Prism::Prism(string color, int height, int width, int depth)
: height(height), width(width), depth(depth), color(color)
{}

////////////////////////////////////////////

ostream& operator << (ostream &sal, const Prism &obj)
{
    return sal << obj.height << "x" << obj.width << "x" << obj.depth << "-" << obj.color;
}

////////////////////////////////////////////

Prism operator * (int num, const Prism &obj)
{
    return Prism(obj.color, obj.height * num, obj.widht * num, obj.depth * num);
}

////////////////////////////////////////////

Prism Prism :: operator ++ (int) // POST Increment
{
    Prism aux(*this);

    this->height++;
    this->width++;
    this->depth++;

    return aux;
}

////////////////////////////////////////////

Prism& Prism :: operator -- () // PRE
{
    this->height--;
    this->width--;
    this->depth--;

    return *this;
}
