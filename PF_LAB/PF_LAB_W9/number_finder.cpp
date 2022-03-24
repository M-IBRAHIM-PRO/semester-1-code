#include <iostream>
using namespace std;
int const array_size = 10;
int numbers[array_size];
void user_input()
{
    for (int i = 0; i < array_size; i++)
    {
        cin >> numbers[i];
    }
}
void number_finder(int user_number)
{
    bool result = false;
    for (int i = 0; i < array_size; i++)
    {
        if (numbers[i] == user_number)
        {
            result = true;
        }
    }
    if (result == true)
    {
        cout << "Number is found ";
    }
}
main()
{
    int user_number;
    cout << "Enter 10 numbers : ";
    user_input();
    cout << "Enter number you want to find : ";
    cin >> user_number;
    number_finder(user_number);
}