#include <iostream>
using namespace std;
int const m = 3;
int const n = 3;
int matrix[m][n] = {{1, 6, 0}, {0, 0, 0}, {4, 0, 5}};
main()
{
    int count_zero = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[m][n] == 0)
            {
                count_zero++;
            }
        }
    }
    if (count_zero >= (m * n) / 2)
    {
        cout << "It is a sparse matrix.";
    }
    else
    {
        cout << "It is not a sparse matrix.";
    }
}