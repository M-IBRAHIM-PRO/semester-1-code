#include <iostream>
using namespace std;
main()
{
    int n = 5;
    for (int i = 1; i <= (n); i = i + 1)
    {
        cout << "i=" << i;
        for (int k = 1; k <= i; k = k + 1)
        {
            cout << "*";
        }
        for (int j = n; j <= i; j = j + 1)
        {
            cout << " ";
        }

        cout << endl;
    }
}