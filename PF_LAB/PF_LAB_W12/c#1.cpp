#include <iostream>
using namespace std;
main()
{
    char *input, var;
    cout << "Enter any key : ";
    cin >> var;
    input = &var;
    cout << "You entered : " << *input;
}