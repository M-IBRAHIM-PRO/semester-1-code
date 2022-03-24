#include <iostream>
using namespace std;
int const array_size = 10;
int numbers[array_size];
void user_input()
{

    for (int i = 0; i < array_size; i++)
    {
        cout << "Enter number" << i + 1 << " : " << endl;
        cin >> numbers[i];
    }
}
void reverse_order()
{
    for (int i = array_size - 1; i >= 0; i--)
    {
        cout << numbers[i] << endl;
    }
}
main()
{
    user_input();
    cout << "In reverse order : ";
    reverse_order();
}
