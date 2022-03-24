#include <iostream>
using namespace std;
int const array_size = 4;
void display(int *array)
{
    for (int i = 0; i < array_size; i++)
    {
        cout << array[i] << " ";
    }
}
main()
{

    int array[array_size] = {1, 2, 3, 4};
    display(array);
}