#include <iostream>
#include "Hora.h"
#include "HoraExc.h"

using namespace std;

int main()
{
    Hora h1(86399);
    Hora h2(3601);
    Hora h3;

    cout << "h1 debe decir 23:59:59 - dice: <" << h1 << ">" << endl;
    cout << "h2 debe decir 1:0:1 - dice: <" << h2 << ">" << endl;

    h3 = h1 + h2;
    cout << "h3 debe decir 1:0:0 - dice: <" << h3 << ">" << endl;

    Hora h4(172799);
    cout << "h4 debe decir 0:0:0 - dice: <" << ++h4 << ">" << endl;

    try{
        Hora h5(1000);

        cout << h5;
    }catch(HoraExc &err)
    {
        cout << err.what() << endl;
    }
    return 0;
}
