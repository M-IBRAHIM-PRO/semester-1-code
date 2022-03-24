#include <iostream>
using namespace std;
int frequency_checker(int number, int digit)
{
    int count = 0, n_digits;
    for (int i = number; i > 0; i = i / 10)
    {
        n_digits = i % 10;
        if (n_digits == digit)
        {
            count = count + 1;
        }
    }
    return count;
}
main()
{
    int number, digit, result;
    cout << "Enter number";
    cin >> number;
    cout << "Enter digit";
    cin >> digit;
    result = frequency_checker(number, digit);
    cout << result;
}