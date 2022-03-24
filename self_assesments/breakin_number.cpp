#include <iostream>
using namespace std;
main()
{
    int number;
    cout << "Enter any number : ";
    cin >> number;
    int rem;
    int n1, n2, n3, n4;
    int i;
    for (int i = 1; number > 0; i++)
    {
        rem = number % (10000);
        number = number / 10;
    }
    cout << rem;
}