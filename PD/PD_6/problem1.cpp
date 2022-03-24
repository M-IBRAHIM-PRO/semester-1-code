#include <iostream>
using namespace std;
void amplifier(int n)
{
    int i;
    for (i = 1; i <= n; i = i + 1)
    {
    }
    for (i = 1; i <= n; i = i + 1)
    {

        if (i % 4 == 0)
        {
            i = i * 10;
            cout << i << " ";
        }
        else
        {
            cout << i << " ";
        }
    }
}
main()
{
    int number;
    cout << "Enter number : ";
    cin >> number;
    amplifier(number);
}