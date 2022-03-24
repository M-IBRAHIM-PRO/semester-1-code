#include <iostream>
using namespace std;
int array_size = 8;
main()
{
    int array[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = 0;
    cout << "Enter value : ";
    cin >> n;
    int temp;
    for (int position = 0; position < n; position++)
    {
        temp = array[0];
        for (int i = 0; i < array_size; i++)
        {
            array[i] = array[i + 1];
            array[array_size] = temp;
        }
    }
    for (int i = 0; i < array_size; i++)
    {
        cout << array[i] << " ";
    }
}