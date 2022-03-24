#include <iostream>
using namespace std;
main()
{
    int number;
    cout << "Enter number to print tables upto that number : ";
    cin >> number;
    for (int i = 1; i <= number; i++)
    {
        int sum = 0;
        for (int j = 1; j <= 10; j++)
        {
            int k = 0;
            k = i * j;
            cout << "   " << k;
            sum = sum + k;
        }
        cout << "   sum = " << sum << endl;
    }
}
