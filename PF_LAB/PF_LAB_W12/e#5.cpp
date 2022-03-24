#include <iostream>
using namespace std;
main()
{
    int *p;
    int var = 222;
    int d = 34;
    p = &var;
    p = &d;
    cout
        << "value of var : " << var << endl;
    cout << "value of d: " << *p;
}