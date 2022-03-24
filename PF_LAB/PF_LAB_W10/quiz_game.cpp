#include <iostream>
using namespace std;
void display_question()
{

}
void sort(int list[], int length)
{
    int index;
    int smallestIndex;
    int location;
    int temp;
    string temp_n;
    for (index = 0; index < length - 1; index++)
    {
        // Step a
        smallestIndex = index;
        for (location = index + 1; location < length; location++)
        {
            if (list[location] > list[smallestIndex])
            {
                smallestIndex = location;
            }
        }
        // Step b
        temp = list[smallestIndex];
        list[smallestIndex] = list[index];
        list[index] = temp;
    }
}
main()
{
}