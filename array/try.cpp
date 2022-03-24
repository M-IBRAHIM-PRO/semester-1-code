#include <iostream>
using namespace std;
void initialize(int list[], int listSize)
{
    for (int count = 0; count < listSize; count++)
        list[count] = 0;
}
main()
{
    int size = 5;
    int array[5] = {1, 2, 3, 4, 5};
    cout << "array[3] : " << array[1] << endl;
    cout << "array[4] : " << array[2] << endl;
    initialize(array, size);
    cout << "array[3]  after : " << array[1] << endl;
    cout << "array[4] after : " << array[2] << endl;
    cout << "Array : " << array[0];
}