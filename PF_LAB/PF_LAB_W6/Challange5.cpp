#include <iostream>
using namespace std;
int max(int n1, int n2, int n3, int n4)
{
    if (((n1 > n2) && (n1 > n3)) && (n1 > n4))
    {
        return n1;
    }
    else if (((n2 > n1) && (n2 > n3)) && (n2 > n4))
    {
        return n2;
    }
    else if (((n3 > n1) && (n3 > n2)) && (n3 > n4))
    {
        return n3;
    }
    else if (((n4 > n1) && (n4 > n3)) && (n4 > n2))
    {
        return n4;
    }
}
int min(int n1, int n2, int n3, int n4)
{
    if (((n1 < n2) && (n1 < n3)) && (n1 < n4))
    {
        return n1;
    }
    else if (((n2 < n1) && (n2 < n3)) && (n2 < n4))
    {
        return n2;
    }
    else if (((n3 < n1) && (n3 < n2)) && (n3 < n4))
    {
        return n3;
    }
    else if (((n4 < n1) && (n4 < n3)) && (n4 < n2))
    {
        return n4;
    }
}
main()
{
    int n1, n2, n3, n4, result_1, result;
    cout << "Enter the first number : ";
    cin >> n1;
    cout << "Enter the second number : ";
    cin >> n2;
    cout << "Enter the third number : ";
    cin >> n3;
    cout << "Enter the first number : ";
    cin >> n4;

    result = max(n1, n2, n3, n4);
    result_1 = min(n1, n2, n3, n4);
    cout << "Maximun value is " << result;
    cout << "\nMinimun value is " << result_1;
}