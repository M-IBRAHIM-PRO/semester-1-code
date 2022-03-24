#include <iostream>
using namespace std;
main()
{
    int number[10];
    int user_input;
    bool result = false;
    int i;
    // IT STORES 10 NUMBER IN ARRAY NUMBER .
    for (i = 0; i < 10; i++)
    {
        cout << "Enter number " << i + 1 << " you want to store ";
        cin >> number[i];
    }
    // IT TAKES INPUT FROM USER
    cout << "Enter number : ";
    cin >> user_input;
    // IT VERIFY NUMBER IS PRESENT IN ARRAY OR NOT.
    for (i = 0; i <= 10; i++)
    {
        if (number[i] == user_input)
        {
            result = true;
        }
    }
    // IF WE USE THIS PART OF CODE IN LOOP IT WILL DISPLAY MANY TIMES.
    if (result == true)
    {
        cout << "Number is found";
    }
    else
    {
        cout << "Number is not found";
    }
}