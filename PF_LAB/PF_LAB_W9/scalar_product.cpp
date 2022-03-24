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
void scalar_product(int scalar_number)
{
    int result;
    for (int i = 0; i < array_size; i++)
    {
        cout << numbers[i] << "\t" << numbers[i] * scalar_number << endl;
    }
}
main()
{
    int scalar_number;
    cout << "Enter 10 numbers : ";
    user_input();
    cout << "Enter scalar number : ";
    cin >> scalar_number;
    scalar_product(scalar_number);
}