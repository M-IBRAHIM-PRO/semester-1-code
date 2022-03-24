#include <iostream>
using namespace std;
int const ARRAY_SIZE = 5;
int list[ARRAY_SIZE];
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
void input_data(int length)
{
    int numbers[length];
    for (int i = 0; i < length; i++)
    {
        cout << "Enter number " << i + 1 << " : ";
        cin >> list[i];
    }
}
void display()
{
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << list[i] << " ";
    }
}
main()
{
    input_data(ARRAY_SIZE);
    sorting(list, ARRAY_SIZE);
    display();
}