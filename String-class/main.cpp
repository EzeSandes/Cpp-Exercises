#include <iostream>
#include "String.h"

using namespace std;

int main()
{
    String str1("Hola"), str2("Hola");

    printf(str1 == str2 ? "They are equal" : "They are different");

    cout << "\n\n" << endl;
    return 0;
}
