#include <iostream>
using namespace std;
int add(int n1, int n2)
{
    return (n1 + n2);
}
int product(int n1, int n2)
{
    return (n1 * n2);
}
int divide(int n1, int n2)
{
    return (n1 / n2);
}
main()
{
    int n1, n2, result;
    char operato;
    cout << "Enter the first number : ";
    cin >> n1;
    cout << "Enter the second number : ";
    cin >> n2;
    cout << "Enter the operator : ";
    cin >> operato;

    if (operato == '+')
    {
        result = add(n1, n2);
    }
    else if (operato == '*')
    {
        result = product(n1, n2);
    }
    else if (operato == '/')
    {
        result = divide(n1, n2);
    }
    cout << result;
}