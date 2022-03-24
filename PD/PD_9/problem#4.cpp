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
void sorting(int list[], int array_size)
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
}
bool is_consective(int number[], int size)
{
    bool result = false;
    for (int i = 0; i < size; i++)
    {
        if (number[i + 1] - number[i] == 1)
        {
            result = true;
        }
    }
    return result;
}
bool checking(int list[], int size)
{
    bool result;

    result = is_consective(list, size);
    if (result == false)
    {
        return false;
    }
}
main()
{
    int n;
    bool result;
    cout << "Enter size of numbers : ";
    cin >> n;
    int array[n];
    get_input(array, n);
    sorting(array, n);
    result = checking(array, n);
    cout << result;
}