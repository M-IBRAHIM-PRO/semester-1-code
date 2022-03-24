#include <iostream>
using namespace std;
main()
{
    int n_t, i_number;
    int counter = 0, even = 0, odd = 0, zeros = 0;
    cout << "Enter times you want to enter number : ";
    cin >> n_t;
    for (counter = 1; counter <= n_t; counter = counter + 1)
    {
        cout << "Enter number : ";
        cin >> i_number;

        if (i_number == 0)
        {
            zeros++;
        }
        else if (i_number % 2 == 0)
        {
            even++;
        }
        else if (i_number % 2 == 1)
        {
            odd++;
        }
        else if (i_number % 2 == -1)
        {
            odd++;
        }
    }
    cout << "\nNumber of even numbers : " << even << endl;
    cout << "Number of odd numbers : " << odd << endl;
    cout << "Number of zeros numbers : " << zeros << endl;
}