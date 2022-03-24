#include <iostream>
using namespace std;
int const ARRAY_SIZE = 6;
int distance_travelled[ARRAY_SIZE];
float average_speed[ARRAY_SIZE];
float speed()
{
    for (int i = 0; i < ARRAY_SIZE - 1; i++)
    {
        average_speed[i] = (distance_travelled[i + 1] - distance_travelled[i] / 10);
    }
}
void input()
{
    for (int index = 0; index < ARRAY_SIZE; index++)
    {
        cout << "Enter distance traveled after " << index * 10 << " seconds:";
        cin >> distance_travelled[index];
    }
}
void min_speed()
{
    int min_index = 0;
    for (int i; i < ARRAY_SIZE - 1; i++)
    {
        if (average_speed[i] < average_speed[min_index])
        {
            min_index = i;
        }
    }
    cout << "Minimum speed : " << average_speed[min_index];
}
void max_speed()
{
    int max_index = 0;
    for (int i; i < ARRAY_SIZE - 1; i++)
    {
        if (average_speed[i] > average_speed[max_index])
        {
            max_index = i;
        }
    }
    cout << "Maximum speed : " << average_speed[max_index];
    ;
}
void display()
{
    cout << "Time   "
         << "Distance Traveled    "
         << "Average Speed / Time Interval   " << endl;
    cout << 0 << distance_travelled[0] << " " << 0 << " [0, 0] " << endl;
    for (int index = 1; index < ARRAY_SIZE; index++)
    {
        cout << index * 1 << distance_travelled[index] << " " << average_speed[index - 1] << " [" << (index - 1) * 10 << ", " << index * 10 << "]" << endl;
    }
}
main()
{
    input();
    speed();
    display();
    min_speed();
    max_speed();
}