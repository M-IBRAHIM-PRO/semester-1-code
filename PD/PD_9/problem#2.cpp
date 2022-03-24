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
void checking(int list[], int size)
{
    int loc;
    int count = 0;
    int max[size];
    int counter = 0;
    for (int i = 1; i < size; i++)
    {
        if ((list[i - 1] < list[i]) && (list[i + 1] < list[i]))
        {
            loc = i;
            count++;
            max[counter] = list[loc];
            counter++;
        }
    }
    for (int i = 0; i < counter; i++)
    {
        cout << max[i] << " ";
    }
}
main()
{
    int n;
    cout << "Enter size of numbers : ";
    cin >> n;
    int array[n];
    get_input(array, n);
    checking(array, n);
}