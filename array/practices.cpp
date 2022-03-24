#include <iostream>
using namespace std;
int const size_of_array = 10;
int numbers[] = {2, 56, 34, 25, 73, 46, 89, 10, 5, 16};
int smallest_index;
int temp;
int index;
void sorting(int numbers[], int size_of_array)
{
    smallest_index = index;
    for (index = 0; index < size_of_array - 1; index++)
    {
        // STEP 1 FINDING SMALLEST NUMBERS
        for (int location = index + 1; location < size_of_array; location++)
            if (numbers[index] < smallest_index)
            {
                smallest_index = index;
            }

        cout << "Smallest number out of loop : " << numbers[smallest_index] << endl;
        temp = numbers[smallest_index];
        cout << "Temp " << index + 1 << " : " << temp << endl;
        numbers[smallest_index] = numbers[index];
        cout << "Smallest number after temp : " << numbers[smallest_index] << endl;
        numbers[index] = temp;
        cout << "numbers[index] which is equal to temp(end step of swaping)  : " << numbers[index] << endl;
    }
}
void display_array()
{
    cout << "Numbers in sorted form is as follows : " << endl;
    for (int index = 0; index < size_of_array; index++)
    {
        cout << numbers[index] << " ";
    }
    cout << endl;
}
main()
{
    sorting(numbers, size_of_array);
    display_array();
}