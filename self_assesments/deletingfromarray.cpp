#include <iostream>
using namespace std;
int const SIZE = 5;
int numbers[SIZE];
void removing_element(int position)
{
    for (int i = position - 1; i < SIZE; i++)
    {
        numbers[i] = numbers[i + 1];
    }
}
void get_data(int array[], int length)
{
    cout << "Enter elements of array : ";
    for (int i = 0; i < length; i++)
    {
        cin >> array[i];
    }
}
void display()
{
    for (int i = 0; i < SIZE - 1; i++)
    {
        cout << numbers[i] << " ";
    }
}
main()
{
    get_data(numbers, SIZE);
    cout << "";
    int n;
    cout << "Enter index you want to remove : ";
    cin >> n;
    removing_element(n);
    display();
}