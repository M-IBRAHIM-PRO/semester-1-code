#include <iostream>
using namespace std;
int row_f[3];
int col_f[3];
main()
{
    int array[3][3] = {{1, 2, 3},
                       {4, 5, 6},
                       {7, 8, 9}};
    system("cls");
    int c_num = 0;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            row_f[col] = array[row][col];
            col_f[col] = array[col][row];
            // cout << row_f[col] << " ";
            // cout << col_f[col] << " ";
        }
    }
}