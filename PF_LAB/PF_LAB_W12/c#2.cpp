#include <iostream>
using namespace std;
void dispaly(char *input)
{
    cout << "You entered : " << *input;
}
main()
{
    char *input, var;
    cout << "Enter any key : ";
    cin >> var;
    input = &var;
    dispaly(input);
}