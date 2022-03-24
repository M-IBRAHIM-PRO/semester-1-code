#include <iostream>
using namespace std;
float averge(int marks[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + marks[i];
    }
    return sum / size;
}
main()
{
    int limit;
    float average;
    cout << "Enter number of students you want to enter marks: ";
    cin >> limit;
    string names[limit];
    int marks[limit];
    for (int i = 0; i < limit; i++)
    {
        cout << "Enter name of student " << i + 1 << " and his marks : ";
        cin >> names[i] >> marks[i];
    }
    average = averge(marks, limit);
    cout << "Average marks : " << average;
}