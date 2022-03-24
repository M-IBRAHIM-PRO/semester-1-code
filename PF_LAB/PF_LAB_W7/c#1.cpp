#include <iostream>
using namespace std;
void tables(int number)
{
    int result = 0;
    for (int i = 1; i <= 10; i = i + 1)
    {
        result = i * number;
        cout << result << endl;
    }
}
main()
{
    int number;
    cout << "Enter number you want to attain tables :";
    cin >> number;
    tables(number);
    cout << "\nEnter number you want to attain tables :";
    cin >> number;
    tables(number);
    cout << "\nEnter number you want to attain tables :";
    cin >> number;
    tables(number);
}