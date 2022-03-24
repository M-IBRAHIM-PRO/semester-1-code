#include <iostream>
using namespace std;
int const ARRAY_SIZE = 5;
int test[ARRAY_SIZE];
int below_average[ARRAY_SIZE];
float average(int sum)
{
    int average;
    average = sum / ARRAY_SIZE;
    return average;
}
void input()
{
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << "Enter score of test " << i + 1 << " : ";
        cin >> test[i];
    }
}
int sum()
{
    int sum = 0;
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        sum = sum + test[i];
    }
    return sum;
}
void checking(float average)
{
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        if (test[i] < average)
        {
            below_average[i] = test[i];
            cout << below_average[i] << " is below average." << endl;
        }
    }
}
main()
{
    input();
    int sum_score = sum();
    float average_number = average(sum_score);
    checking(average_number);
}