#include <iostream>
using namespace std;
main()
{
    int numbers[3] = {34, 98, 45};
    int user_input;
    cout << "Enter any number : ";
    cin >> user_input;
    int i;
    for (i = 0; i <= 2; i++)
    {
        if (numbers[i] == user_input)
        {
            cout << "Number is present " << endl;
        }
        else
        {
            cout << "Number is not present " << endl;
        }
    }
}