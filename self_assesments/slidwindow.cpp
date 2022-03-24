#include <iostream>
using namespace std;
main()
{
    int size = 5;
    int array[size] = {1, 2, 3, 4, 5};
    int sum_lar = 0, sum = 0;
    int n;
    cout << "Enter size : ";
    cin >> n;
    // int sum;
    for (int i = 0; i < size - n + 1; i++)
    {
        for (int j = i; j < n + i; j++)
        {
            sum = sum + array[j];
        }
        if (sum > sum_lar)
        {
            sum_lar = sum;
        }
        sum = 0;
    }
    cout << sum_lar;
}