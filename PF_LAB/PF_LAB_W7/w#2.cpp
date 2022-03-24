#include <iostream>
using namespace std;
void number_checker(int n)
{
    while (n < 0)
    {
        cout << "Enter a positve number";
        cin >> n;
    }
}
main()
{
    int number;
    cout << "Enter a positve number";
    cin >> number;
    number_checker(number);
}