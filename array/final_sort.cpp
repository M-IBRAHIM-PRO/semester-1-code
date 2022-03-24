#include <iostream>
using namespace std;
void Sort(int list[], int length)
{
    int index;
    int smallestIndex;
    int location;
    int temp;
    for (index = 0; index < length - 1; index++)
    {
        // Step a
        smallestIndex = index;
        for (location = index + 1; location < length; location++)
        {
            if (list[location] < list[smallestIndex])
            {
                smallestIndex = location;
            }
        }
        // Step b
        temp = list[smallestIndex];
        list[smallestIndex] = list[index];
        list[index] = temp;
    }
    //
}
void practice(int list[], int length)
{
    int location;
    int temp;
    int smallest_idx;
    for (int i = 0; i < length - 1; i++)
    {
        smallest_idx = i;
        for (location = i + 1; location < length; location++)
        {
            if (list[location] < list[smallest_idx])
            {
                smallest_idx = location;
            }
        }
        temp = list[smallest_idx];
        list[smallest_idx] = list[i];
        list[i] = temp;
    }
}
int main()
{
    int list[] = {2, 56, 34, 25, 7300, 46, 89, 10, 5, 16}; // Line 7
    practice(list, 10);
    for (int i = 0; i < 10; i++)
    {
        cout << list[i] << " ";
    }
    cout << endl;
}