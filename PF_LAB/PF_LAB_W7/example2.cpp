#include <iostream>
using namespace std;
void digit_counter(int n)
{
    int count = 0;
    for (int x = n; x > 0; x = n / 10)
    {
        count = count + 1;
    }
    cout << "Total digits are : " << count;
}

main()
{
    int n;
    cout << "Enter digit:";
    cin >> n;
    digit_counter(n);
}