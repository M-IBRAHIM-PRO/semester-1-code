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
void largest_number_finder()
{
    int max_index = 0;
    for (int i = 0; i < array_size; i++)
    {
        if (numbers[i] > numbers[max_index])
        {
            max_index = i;
        }
    }
    cout << "Largest number in array : " << numbers[max_index];
}
main()
{
    user_input();
    largest_number_finder();
}