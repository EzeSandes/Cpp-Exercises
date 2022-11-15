#include <iostream>
#include "Prism.h"

using namespace std;

int main()
{
    Prism pri0; // 1 x 1 x 1
    Prism pri1("Blue", 3, 2); // 3 x 2 x 1
    Prism pri2("Green", 8, 8, 8);// 8 x 8 x 8
    Prism pri3(pri0);// 1 x 1 x 1

    cout << endl << "Initial values" << endl;
    cout << "waiting 1x1x1-Colorless - pri0: " << pri0 << endl;
    cout << "waiting 3x2x1-Blue - pri1: " << pri1 << endl;
    cout << "waiting 8x8x8-Green - pri2: " << pri2 << endl;
    cout << "waiting 1x1x1-Colorless - pri3: " << pri3 << endl;

    pri3 = 5 * pri1;
    pri1++;
    --pri2;

    cout << endl << "Final values" << endl;
    cout << "waiting 1x1x1-Colorless - pri0:" << pri0 << endl;
    cout << "waiting 4x3x2-Blue - pri1:" << pri1 << endl;
    cout << "waiting 7x7x7-Green - pri2:" << pri2 << endl;
    cout << "waiting 15x10x5-Blue - pri3:" << pri3 << endl;

    return 0;
}
