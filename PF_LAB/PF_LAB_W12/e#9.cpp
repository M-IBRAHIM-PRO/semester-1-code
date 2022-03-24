#include <iostream>
using namespace std;
void addone(int *p)
{
    (*p)++;
    cout << "value in function : " << *p;
}
main()
{
    int var = 10;
    int *p;
    p = &var;
    addone(p);
}