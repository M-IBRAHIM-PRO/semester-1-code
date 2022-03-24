#include <iostream>
using namespace std;
main()
{
    int *p;
    int var = 222;
    p = &var;
    cout << "Address of var : " << p;
}