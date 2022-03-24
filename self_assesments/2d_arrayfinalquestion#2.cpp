#include <iostream>
using namespace std;
int array[3][3] = {{1, 2, 7},
                   {2, 4, 5},
                   {3, 5, 9}};

int row_f[3] = {};
int col_f[3] = {};
//___________prototypes_________________
bool my_function(int col_id);
void print_row(int arr[], int size);
void print_col(int col_id);

main()
{
    int row, col;
    system("cls");
    cout << "Enter column : ";
    cin >> col;

    bool output = my_function(col - 1);
    cout << "output : " << output << endl;
}
bool my_function(int col_id)
{
    bool result;
    result = false;

    // print_row(array_f[row_id], 3);
    print_col(col_id);
    int counter = 0;
    for (int i = 0; i < 3; i++)
    {
        counter = 0;
        for (int j = 0; j < 3; j++)
        {
            row_f[j] = array[i][j];
            if (row_f[j] == col_f[j])
            {
                counter++;
                cout << "Counter : " << counter << endl;
                if (counter == 3)
                {
                    result = true;
                }
            }
        }
    }
    return result;
}
// void print_row(int arr[], int size)
// {
//     cout << "row = ";
//     for (int x = 0; x < size; x++)
//     {
//         row_f[x] = arr[x];
//         cout << row_f[x] << " ";
//     }
//     cout << endl;
// }
void print_col(int col_id)
{
    cout << "col = ";
    for (int i = 0; i < 3; i++)
    {
        col_f[i] = array[i][col_id];
        cout << array[i][col_id] << " ";
    }
    cout << endl;
}