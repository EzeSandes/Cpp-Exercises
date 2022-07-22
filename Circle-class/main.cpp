#include <iostream>
#include "Circle.h"

using namespace std;

int main()
{
    /*
    If you want to do as an extra operator, ">>" 
    
    cout << "Enter radius of a circle:" << endl;
    cin >> r;
    */
    Circle  circ1(1);
    //Circle  circ2();
    Circle circ2;
    Circle  circ3(circ1);
    
    circ1 = r; /// it gives a value to the radius
    circ3 = -- circ1 ; /// decrease the radius in one unit
    
    cout << "Perimeter of the circle:" << circ1.perimeter() << endl;       /// perimeter =  2 * pi * radius
    cout << "Area of the circle:" << circ1.area() << endl;
                /// Area = pi * radiussquare

    cout << circ3.show(); /// Show the radius of the circle.
    cout << circ1 << endl;
    cout << circ2 << endl;
    cout << circ3 << endl;

    return 0;
}
