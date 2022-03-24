#include <iostream>
using namespace std;
int prime_number[100] = {};
bool is_prime(int num)
{
    bool result = true;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            result = false;
        }
    }
    return result;
}
main()
{
    system("cls");
    int n;
    cout << "Enter any number  : ";
    cin >> n;
    bool result;
    int idx = 0;
    for (int i = 2; i <= n; i++)
    {
        result = is_prime(i);
        if (result == true)
        {
            prime_number[idx] = i;
            idx++;
        }
    }
    bool result_1 = 1;
    for (int i = 0; i < idx; i++)
    {
        for (int j = i; j <= idx; j++)
        {
            if (prime_number[i] + prime_number[j] == n)
            {
                cout << prime_number[i] << " + " << prime_number[j] << " = " << n << endl;
                break;
            }
        }
    }
}
