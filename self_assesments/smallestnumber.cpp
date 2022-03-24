#include <iostream>
using namespace std;
int const array_size = 4;
void input_data(int array[], int length_array)
{
    for (int i = 0; i < length_array; i++)
    {
        cin >> array[i];
    }
}
void sorting(int list[], int array_size, int nth)
{
    int min;
    int i;
    int j;
    int loc;
    int temp;
    for (i = 0; i < array_size - 1; i++)
    {
        min = list[i];
        loc = i; // INDEX OF LIST[i].
        for (j = i + 1; j < array_size; j++)
        {
            if (list[j] < min)
            {
                min = list[j];
                loc = j;
            }
            temp = list[i];      // IT STORES THE VALUE OF FIRST ELEMENT OF ARRAY IN SEPERATE VARIABLE.
            list[i] = list[loc]; // IT PLACE THE SMALLEST VALUE TO FIRST PLACE.
            list[loc] = temp;    // IT PLACE THE ELEMENT PLACED IN SEPERATE VARIABLE TO THE LOCATION WHERE SMALLEST VALUE WAS FOUND.
        }
    }
    for (int i = 0; i < array_size; i++)
    {
    }
    cout << "Minimum number : " << list[nth - 1];
}
main()
{
    cout << "Enter elements of array: ";
    int array[array_size];
    input_data(array, array_size);
    int n;
    cout << "Enter n : ";
    cin >> n;
    sorting(array, array_size, n);
}