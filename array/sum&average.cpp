#include <iostream>
using namespace std;
main()
{
    int array_size = 5;
    int numbers[array_size];
    int sum = 0;
    int average = 0;
    int i;
    for (int i = 0; i < array_size; i++)
    {
        cout << "Enter number" << i + 1 << " you want to sum" << endl;
        cin >> numbers[i];
        sum = sum + numbers[i];
    }
    average = sum / array_size;
    cout << "Average of numbers entered  : " << average;
}