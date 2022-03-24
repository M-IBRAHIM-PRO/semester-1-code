#include <iostream>
using namespace std;
void prime(int n)
{
    cout << "Number is divisible by following number :";
    for (int i = 2; i < n; i++)
    {
        bool result;
        if (n % i == 0)
        {
            result = false;
            cout << " " << i << endl;
            // cout << "result = " << result << endl;
        }
        else
        {
            result = true;
            // cout << "result = " << result << endl;
        }
    }
}
main()
{
    int number;
    cout << "Enter number : ";
    cin >> number;
    prime(number);
}