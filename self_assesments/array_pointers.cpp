#include <iostream>
using namespace std;
main()
{
    int array[4] = {3, 2, 1, 4};
    int a = sizeof(array) / sizeof(array[0]);
    cout << a << endl;
    int *pr;
    pr = array;
    for (int i = 0; i < a; i++)
    {
        *(pr + i) = 0;
        cout << "Value of *(pr + " << i << " ) = " << *(pr + i) << endl;
    }
}