#include <iostream>
using namespace std;
int beta[3][3] = {};
void print(int arr[], int size);
main()
{
    system("cls");
    // for (int i = 0; i < 3; i++)
    //     for (int i = 0; i < 3; i++)
    //         cout << beta[i][i];

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         beta[i][j] = i * j;
    //         cout << beta[i][j];
    //     }
    // }

    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    // breakin row
    print(arr[2], 3);
    print(arr[1], 3);
    print(arr[0], 3);
}
void print(int arr[], int size)
{
    for (int x = 0; x < size; x++)
    {
        cout << arr[x] << endl;
    }
}