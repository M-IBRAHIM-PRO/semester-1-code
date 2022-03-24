#include <iostream>
using namespace std;
int array[3][3] = {{1, 2, 3},
                   {2, 4, 2},
                   {5, 5, 9}};

int row_f[3] = {};
int col_f[3] = {};
//___________prototypes_________________
bool my_function(int arr[3][3]);
void print_col(int col_id);

main()
{
    system("cls");

    bool output = my_function(array);
    cout << "output : " << output << endl;
}
bool my_function(int arr[3][3])
{
    bool result;
    result = false;

    int counter = 0;
    for (int row = 0; row < 3; row++)
    {
        counter = 0;
        for (int col = 0; col < 3; col++)
        {
            row_f[col] = array[row][col];
            col_f[col] = array[col][row];
            if (col_f[col] == row_f[col])
            {
                counter++;
                // cout << "Counter : " << counter << endl;
                if (counter == 3)
                {
                    result = true;
                }
            }
        }
    }
    return result;
}
