#include <iostream>
using namespace std;
void pattren(int n)
{
    int row = 1;
    for (row = 1; row <= n; row = row + 1)
    {
        for (int space = 1; space <= n - row; space = space + 1)
        {
            cout << " ";
        }
        for (int col = row; col > 0; col = col - 1)
        {
            cout << col;
        }
        for (int col = 2; col <= row; col++)
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