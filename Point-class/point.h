#ifndef POINT_H
#define POINT_H

#include <iostream>
using namespace std;

class Point
{
    private:
        int coordX;
        int coordY;
    public:

        ///CONSTRUCTORS
        Point();
        Point(const int x, const int y);
        Point(const Point &p);
        Point(const int x);

        /// OPERATORS
        Point& operator = (const Point &p);
        Point& operator ++(int);
        Point& operator ++();
        Point& operator += (const Point &p);


        /// FUNCTIONS
        void setPoint(int x, int y);
        void displayPoints();


    //SetPoint with max of 1024x768
};

#endif // POINT_H
