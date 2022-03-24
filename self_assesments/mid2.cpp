#include <iostream>
using namespace std;
main()
{
    int row, col, s, x;
    cout << "Enter Number of Rows: ";
    cin >> x;
    for (row = 1; row <= x; row++)
    {
        for (s = 1; s <= x - row; s++)
        {
            cout << " ";
        }
        for (col = row; col > 1; col--)
        {
            cout << col;
        }
        if (row >= 1)
            cout << row;
        cout << endl;
    }
}