#include <iostream>
using namespace std;
double calculate_mean(int *balance, int size)
{
    int sum = 0;
    double mean;
    for (int i = 0; i < size; i++)
    {
        sum = sum + balance[i];
    }
    mean = sum / size;
    return mean;
}
main()
{
    int balance[5] = {12, 33, 11, 333, 44};
    double mean;
    mean = calculate_mean(balance, 5);
    cout << "Mean value  : " << mean;
}