#include <iostream>
using namespace std;

void pattren(int n)
{
    int row = 1;
    for (row = 1; row <= n; row = row + 1)
    {
        for (int col = 1; col <= n - row; col = col + 1)
        {
            cout << " ";
        }

        for (int col = row; col > 0; col = col - 1)
        {

            cout << col;
        }
        cout << endl;
    }
}
main()
{
    int n;
    cin >> n;
    pattren(n);
}
