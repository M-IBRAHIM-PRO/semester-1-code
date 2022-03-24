#include <iostream>
using namespace std;
main()
{
    int *p;
    int var = 222;
    p = &var;
    var = 3333;
    cout << "value of var : " << var << endl;
    cout << "value of var by pointer: " << *p;
}