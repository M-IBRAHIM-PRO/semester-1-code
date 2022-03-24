#include <iostream>
using namespace std;
char objects[5][5] = {
    {'-', '#', '#', '-', '#'},
    {'#', '-', '-', '#', '-'},
    {'-', '#', '-', '-', '-'},
    {'#', '-', '#', '-', '#'},
    {'#', '-', '-', '-', '-'}};

void displayWorld();
void setGravityStatus(bool variable);

bool gravity = false;
bool isBlackHole = true;
void timeTick(int time);
main()
{
    int time;
    displayWorld();
    cout << endl;
    cout << "Enter 0 or 1 : ";
    cin >> gravity;
    setGravityStatus(gravity);
    cout << "Enter time tick value : ";
    cin >> time;
    timeTick(time);
}
void setGravityStatus(bool variable)
{
    if (variable == true)
    {
        gravity = true;
    }
    else
    {
        gravity = false;
    }
}
void timeTick(int time)
{
    if (gravity == true)
    {
        if (time >= 4)
        {
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    cout << objects[i][j] << " ";
                }
                cout << endl;
            }
        }
        else
        {
            for (int n = 0; n < time; n++)
            {
                for (int i = time; i > 0; i--)
                {
                    for (int j = 0; j < 5; j++)
                    {
                        if (objects[i][j] == '#' && objects[i + 1][j] != '#')
                        {
                            swap(objects[i][j], objects[i + 1][j]);
                        }
                    }
                }
            }
            displayWorld();
        }
    }
}
void displayWorld()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << objects[i][j] << " ";
        }
        cout << endl;
    }
}