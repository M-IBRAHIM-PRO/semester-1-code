#include <iostream>
using namespace std;
int array[3][5] = {
    {2, 0, 0, 0, 1},
    {1, 0, 0, 0, 0},
    {0, 0, 0, 0, 0}};

void parking_exit();
main()
{
    cout << "The shortest way out of parking is : " << endl;
    parking_exit();
}
void parking_exit()
{
    bool previous = false;
    int var[3] = {};
    int i = 0;
    for (i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (array[i][j] == 2)
            {
                var[0] = j;
            }
            if (array[i][j] == 1)
            {
                var[i + 1] = j;
            }
        }
    }
    if (var[0] - var[1] != 0)
    {
        if (var[0] - var[1] < 0)
        {
            cout << "Move right " << -1 * (var[0] - var[1]) << " steps." << endl;
        }
        else if (var[0] - var[1] > 0)
        {
            cout << "Move left " << (var[0] - var[1]) << " steps." << endl;
        }
    }
    else
    {
        cout << "Move one step down." << endl;
        previous = true;
    }
    if (previous != true)
        cout << "Move one step down." << endl;
    previous = false;
    if (var[1] != var[2])
    {
        if (var[1] - var[2] < 0)
        {
            cout << "Move right " << -1 * (var[1] - var[2]) << " steps." << endl;
        }
        else
        {
            cout << "Move left " << (var[1] - var[2]) << " steps." << endl;
        }
    }
    else
    {
        cout << "Move one step down." << endl;
        previous = true;
    }
    if (previous != true)
        cout << "Move one step down." << endl;
    if (4 - var[2] != 0)
    {
        cout << "Move right " << (4 - var[2]) << " steps." << endl;
    }
    else
    {
        cout << "Move one step down." << endl;
    }
}