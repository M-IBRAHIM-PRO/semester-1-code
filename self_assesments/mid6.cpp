#include <iostream>
using namespace std;
bool is_prime(int n)
{
    bool prime = true;
    for (int i = 2; i < n; i = i + 1)
    {
        if (n % i == 0)
        {
            prime = false;
        }
    }
    return prime;
}
main()
{
    int number;
    bool result;
    cout << "Enter number : ";
    cin >> number;
    result = is_prime(number);
    cout << result;
}