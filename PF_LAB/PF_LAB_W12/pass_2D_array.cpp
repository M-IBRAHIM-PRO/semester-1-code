#include <iostream>
using namespace std;
int const m = 3;
int const n = 3;
void display(int array[m][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << array[i][j];
        }
    }
}
main()
{
    int array[][n] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    display(array);
}
