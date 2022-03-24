#include <iostream>
using namespace std;
void get_input(int array[], int size)
{
    cout << "Enter elements of array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
}
void duplicate(int number[], int size)
{
    int count = 0;
    int element;
    for (int i = 0; i < size; i++)
    {
        element = number[i];
        count = 0;
        for (int j = 0; j < size; j++)
        {
            if (element == number[j])
            {
                count++;
            }
        }
        if (count % 2 != 0)
        {
            cout << "Odd number : " << element;
        }
    }
}
main()
{
    int n;
    cout << "Enter size of numbers : ";
    cin >> n;
    int array[n];
    get_input(array, n);
    duplicate(array, n);
}