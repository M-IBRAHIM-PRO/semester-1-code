#include <iostream>
using namespace std;
int dot_counter(int t_number)
{
    int result = 0;

    for (int i = 1; i <= t_number; i = i + 1)
    {
        cout << "result b : " << result << endl;
        result = i + result;
        cout << "result a : " << result << endl;
    }
    return result;
}
main()
{
    int number, n_dots;
    cout << "Enter triangle number : ";
    cin >> number;
    n_dots = dot_counter(number);
    cout << "triangle(" << number << ")"
         << "   :         " << n_dots;
}