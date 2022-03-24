#include <iostream>
using namespace std;
main()
{
    int array_size = 5;
    int numbers[array_size];
    int max_index = 0;
    for (int i = 0; i < array_size; i++)
    {
        cout << "Enter number" << i + 1 << " : " << endl;
        cin >> numbers[i];
        if (numbers[i] > numbers[max_index])
        {
            max_index = i;
        }
    }
    cout << "Largest number in array : " << numbers[max_index];
}
void lar_num(int list[], int array_size)
{
    int max_index = 0;
    for (int i = 0; i < array_size; i++)
    {
        if (list[i] > list[max_index])
        {
            max_index = i;
        }
    }
    cout << "Largest number in array : " << list[max_index];
}