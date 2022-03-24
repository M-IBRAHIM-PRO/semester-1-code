#include <iostream>
using namespace std;
void calculation()
{
    int sum = 0;
    int i = 1;
    while (i <= 5)
    {
        sum = sum + i;
        i = i + 1;
    }
    cout << sum;
}
main()
{
    cout << "sum of first five natural numbers : ";
    calculation();
}