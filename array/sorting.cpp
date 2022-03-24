#include <iostream>
using namespace std;
int const size_array = 6;
int array[] = {1, 4, 7, 0, 9, 10};
int smallest_index = 0;
int location;
int index = 0;
int temp;
void sorting(int array[], int size_array)
{
    // STEP 1 FINDING THE SMALLEST NUMBER
    for (int location = index + 1; location < size_array - 1; location++)
    {
        if (array[location] < array[smallest_index])
        {
            smallest_index = location;
        }
    }
    cout << "Smallest number : " << array[smallest_index] << endl;
    // STEP 2 SWAPING
    temp = array[smallest_index];
    array[smallest_index] = array[index];
    array[index] = temp;
}
void display_array(int size_array)
{
    cout << "Array in sorted form  : " << endl;
    for (int index = 0; index < size_array; index++)
    {
        cout << array[index] << " ";
    }
    cout << endl;
}
main()
{
    sorting(array, size_array);
    display_array(size_array);
}