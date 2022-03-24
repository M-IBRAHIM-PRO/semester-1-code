#include <iostream>
using namespace std;
int size_1 = 3;
int size_2 = 3;
int size_3 = size_1 + size_2;
main()
{
    int array1[size_1] = {1, 2, 3};
    int arrat2[size_2] = {4, 5, 6};
    int array3[size_3] = {};
    int j = 0;
    for (int i = 0; i < size_3; i++)
    {
        if (i < size_1)
            array3[i] = array1[i];
        else if (i >= size_1)
        {
            array3[i] = arrat2[j];
            j++;
        }
        cout << array3[i] << " ";
    }
}