#include <iostream>
using namespace std;
int x = 2;
void square(int *x)
{
    (*x) = *x * *x;
}
main()
{
    square(&x);
    cout << x;
}