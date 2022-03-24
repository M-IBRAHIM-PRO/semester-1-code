#include <iostream>
using namespace std;
int number[7];
string boomseven(int numbers[])
{
    int index;
    bool result;
    string output;
    for (int index = 0; index < 7; index++)
    {
        if (numbers[index] == 7)
        {
            result = true;
        }
        else
        {
            result = false;
        }
    }
    if (result == 1)
    {
        output = "Boom!";
    }
    else
    {
        output = "Number 7 is not found";
    }
    return output;
}
main()
{
    string result;
    cout << "Enter numbers : ";
    for (int index = 0; index < 7; index++)
    {
        cin >> number[index];
    }
    result = boomseven(number);
    cout << result;
}