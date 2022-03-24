#include <iostream>
using namespace std;
void pattren(int n)
{
    for (int rows = 1; rows <= n; rows++)
    {
        for (int spaces = 1; spaces <= n - rows; spaces++)
        {
            cout << " ";
        }
        int column = 1;
        for (column = 1; column <= (2 * rows) - 1; column++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int rows = 1; rows <= n; rows++)
    {
        for (int spaces = 1; spaces <= rows; spaces++)
        {
            cout << " ";
        }
        for (int column = 1; column <= 2 * n; column++)
        {
            cout << "*";
            n--;
        }
        cout << endl;
    }
}
main()
{
    int number;
    cout << "Enter number of rows :";
    cin >> number;
    pattren(number);
}