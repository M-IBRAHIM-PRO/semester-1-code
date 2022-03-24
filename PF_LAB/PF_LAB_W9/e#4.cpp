#include <iostream>
using namespace std;
main()
{
    int array[5];
    cout << "Enter five numbers" << endl;
    int i;
    for (i = 0; i < 5; i++)
    {
        cin >> array[i];
    }
    cout << "numbers are as follows: ";
    for (int j = 0; j < 5; j++)
    {
        cout << array[j] << " "; // IF WE PUT I IT WILL DISPLAY ONLY INDEX NUMBRS AS 0,1,2,3,4;
    }
}