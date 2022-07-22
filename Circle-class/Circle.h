#include <iostream>

using namespace std;

class Circle
{
    private:
        float   radius;

    public:
        Circle(float radius = 0);
        Circle& operator = (float num);
        Circle& operator -- ();
        float perimeter() const;
        float area() const;
        friend ostream& operator << (ostream &sal, const Circle &obj);
};
