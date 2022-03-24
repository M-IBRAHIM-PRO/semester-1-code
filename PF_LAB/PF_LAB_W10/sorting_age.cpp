#include <iostream>
using namespace std;
void Sort(int list[], string names[], int length)
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
        temp_n = names[smallestIndex];
        list[smallestIndex] = list[index];
        names[smallestIndex] = names[index];
        list[index] = temp;
        names[index] = temp_n;
    }
}
main()
{
    string names[5];
    int age[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter name of person " << i + 1 << " and its age : ";
        cin >> names[i] >> age[i];
    }
    Sort(age, names, 5);
    cout << "From elder to younger : " << endl;
    for (int index = 0; index < 5; index++)
    {
        cout << names[index] << "\t" << age[index] << endl;
    }
}