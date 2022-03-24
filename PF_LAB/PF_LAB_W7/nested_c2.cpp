#include <iostream>
using namespace std;
main()
{
    int rows = 0;
    cout << "Enter number of rows : ";
    cin >> rows;
    int i;
    for (i = 1; i <= rows; i = i + 1)
    {
        for (int j = 1; j <= i; j = j + 1)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (i = 1; i <= rows; i = i + 1)
    {
        for (int j = i; j < rows; j = j + 1)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
