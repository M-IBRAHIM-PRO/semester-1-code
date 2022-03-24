// #include <iostream>
// using namespace std;
// int fabonacch_seeries(int n_length)
// {
//     int n1 = 0, n2 = 1;
//     int next;
//     cout << n1 << " , " << n2 << " , ";
//     for (int i = n2; i < n_length - 1; i = i + 1)
//     {
//         next = n1 + n2;
//         cout << next << " , ";
//         n1 = n2;
//         n2 = next;
//     }
// }
// main()
// {
//     int n_lenght, result;
//     cout << "Enter a number : ";
//     cin >> n_lenght;
//     result = fabonacch_seeries(n_lenght);
//     cout << result;
// }
#include <iostream>
using namespace std;
void fibonacciSeries(int leng)
{
    int n1 = 0, n2 = 1, next;
    cout << n1 << ", ";
    cout << n2;
    for (int x = 1; x < leng - 1; x = x + 1)
    {
        next = n1 + n2;
        cout << ", " << next;
        n1 = n2;
        n2 = next;
    }
}
main()
{
    int n;
    cout << "How many numbers of Fibonacci Series you want to print: ";
    cin >> n;
    fibonacciSeries(n);
}
