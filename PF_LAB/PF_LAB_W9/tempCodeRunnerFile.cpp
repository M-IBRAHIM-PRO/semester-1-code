#include <iostream>
using namespace std;
int numbers[5];
int i;
void input()
{
    for (i = 0; i < 5; i++)
    {
        cin >> numbers[i];
    }
}
float sum()
{
    float sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + numbers[i];
    }
    return sum;
}
float avg(float sum)
{
    float avg;
    avg = sum / 5;
    return avg;
}
main()
{
    float sum_of_numbers = 0;
    float avg_of_numbers = 0;

    cout << "Enter five numbers : ";
    input();
    sum_of_numbers = sum();
    avg_of_numbers = avg(sum_of_numbers);
    cout << "Sum of numbers : " << sum_of_numbers;
    cout << "Average of numbers : " << avg_of_numbers;
}