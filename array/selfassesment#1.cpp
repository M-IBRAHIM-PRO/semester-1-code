#include <iostream>
using namespace std;
void greater_number(int number)
{
}
main()
{
    int number[5] = {1, 2, 3, 5, 7};
    for (int i = 0; i < 5; i++)
    {
        if (number[i] > number[i + 1] && number[i] > number[i + 2] && number[i] > number[i + 3] && number[i] > number[i + 4] && number[i] > number[i + 5])
        {
            cout << number[i];
        }
        else if (number[i + 1] > number[i] && number[i + 1] > number[i + 2] && number[i + 1] > number[i + 3] && number[i + 1] > number[i + 4] && number[i + 1] > number[i + 5])
        {
            cout << number[i + 1];
        }
        else if (number[i + 2] > number[i + 1] && number[i + 2] > number[i] && number[i + 2] > number[i + 3] && number[i + 2] > number[i + 4] && number[i + 2] > number[i + 5])
        {
            cout << number[i + 2];
        }
        else if (number[i + 3] > number[i + 1] && number[i + 3] > number[i + 2] && number[i + 3] > number[i] && number[i + 3] > number[i + 4] && number[i + 3] > number[i + 5])
        {
            cout << number[i + 3];
        }
        else if (number[i + 4] > number[i + 1] && number[i + 4] > number[i + 2] && number[i + 4] > number[i + 3] && number[i + 4] > number[i] && number[i + 4] > number[i + 5])
        {
            cout << number[i + 4];
        }
    }
}