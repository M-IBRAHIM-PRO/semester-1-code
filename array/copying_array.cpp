#include <iostream>
using namespace std;
int const array1_size = 5;
int const array2_size = 5;
int n_elements_to_be_copied = 5;
int array1[] = {1, 2, 3, 4, 5};
int array2[] = {5, 4, 3, 2, 1};
void copyArray(int list1[], int size_1, int list2[], int size_2, int numOfElements)
{
    for (int index = 0; index < size_1; index++)
    {
        array2[index] = array1[index];
    }
}
main()
{
    copyArray(array1, array1_size, array2, array2_size, n_elements_to_be_copied); // HERE WE HAVE TO PASS ARRAY WITHOUT [].
    cout << "Array 1 : " << endl;
    for (int index = 0; index < array1_size; index++)
    {
        cout << array1[index] << " ";
    }
    cout << endl;
    cout << "Array 2 : " << endl;
    for (int index = 0; index < array2_size; index++)
    {
        cout << array2[index] << " ";
    }
    cout << endl;
}
