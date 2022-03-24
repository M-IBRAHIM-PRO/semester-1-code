#include <iostream>
using namespace std;
void pattern(int n)
{

    for (int rows = 1; rows <= n; rows++)
    {
        for (int rows = 1; rows <= n; rows++)
        {
            for (int column = 1; column <= rows; column++)
            {
                cout << column;
            }
            cout << endl;
        }
        for (int rows = 1; rows <= n; rows++)
        {
            int column;
            for (column = 1; column <= (n - rows); column++)
            {
                for (int reverse = column; column <= (n - rows); column++)
                {
                    cout << column;
                }
            }
            cout << endl;
        }
    }
}

main()
{
    int number;
    cout << "Enter number of times : ";
    cin >> number;
    pattern(number);
}