#include <iostream>
#include <conio.h>
using namespace std;
char object[5][5] = {
    {'-', '#', '#', '-', '#'},
    {'#', '-', '-', '#', '-'},
    {'-', '#', '-', '-', '-'},
    {'#', '-', '#', '-', '#'},
    {'#', '-', '-', '-', '-'}};
void display()
{
    for (int x = 0; x < 5; x++)
    {
        for (int p = 0; p < 5; p++)
        {
            cout << object[x][p] << " ";
        }
        cout << endl;
    }
}
void black_hole(int time)
{
    char store[5];
    int y = 0;
    while (y != time)
    {
        for (int x = 0; x < 5; x++)
        {
            store[x] = object[4][x];
        }
        for (int x = 4; x > 0; x--)
        {
            for (int p = 0; p < 5; p++)
            {
                swap(object[x][p], object[x - 1][p]);
            }
        }
        // for (int x = 0; x < 5; x++)
        // {
        //     object[0][x] = store[x];
        // }
        y++;
    }
    display();
}
main()
{
    system("cls");
    display();
    int choose;
    int x;
    cout << "Enter time :";
    cin >> x;
    black_hole(x);
}