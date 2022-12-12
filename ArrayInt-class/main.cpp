#include <iostream>
#include "ArrayInt.h"

using namespace std;

int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int arr2[] = {9, 10, 11, 12, 13};

    ArrayInt v1;
    ArrayInt v2(arr2, sizeof(arr2) / sizeof(arr2[0]));
    ArrayInt v3;

    cout << v1.agregar(arr1, sizeof(arr1) / sizeof(arr1[0])) << endl;
    v3 = v1 + v2;
    v3 = v3 + 14;
    cout << v3 << endl;

    return 0;
}
