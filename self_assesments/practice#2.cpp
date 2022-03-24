#include <iostream>
using namespace std;
main()
{
    int i;
    int sum = 0;
    for (i = 1; i <= 1000; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum = sum + i;
        }
    }
    cout << "Sum of numbers divisible by 3 and 5 : " << sum;
}