#include <iostream>
using namespace std;
void swap(int *p1, int *p2)
{
    int temp = 0;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    cout << "P1 :" << *p1 << endl;
    cout << "P2 :" << *p2 << endl;
}
main()
{
    int *p1, *p2;
    int var1 = 1, var2 = 2;
    // p1 = &var1;
    // p2 = &var2;
    swap(&var1, &var2);
}