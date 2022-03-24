#include <iostream>
using namespace std;
int array[3][3] = {{1, 2, 3},
                   {2, 4, 6},
                   {3, 5, 9}};

int row_f[3] = {};
int col_f[3] = {};
//___________prototypes_________________
bool my_function(int arr[3][3], int col_id, int row_id);
void print_row(int arr[], int size);
void print_col(int array[3][3], int col_id);

main()
{
    int row, col;
    system("cls");
    cout << "Enter row and column : ";
    cin >> row >> col;

    bool output = my_function(array, row - 1, col - 1);
    cout << "output : " << output << endl;
}
bool my_function(int array_f[3][3], int col_id, int row_id)
{
    bool result;
    result = false;

    print_row(array_f[row_id], 3);
    print_col(array_f, col_id);
    int counter = 0;
    for (int i = 0; i < 3; i++)
    {
        if (row_f[i] == col_f[i])
        {
            counter++;
        }
    }
    cout << "Counter : " << counter << endl;
    if (counter == 3)
    {
        result = true;
    }
    return result;
}
void print_row(int arr[], int size)
{
    cout << "row = ";
    for (int x = 0; x < size; x++)
    {
        row_f[x] = arr[x];
        cout << row_f[x] << " ";
    }
    cout << endl;
}
void print_col(int arr[3][3], int col_id)
{
    cout << "col = ";
    for (int i = 0; i < 3; i++)
    {
        col_f[i] = arr[i][col_id];
        cout << arr[i][col_id] << " ";
    }
    cout << endl;
}