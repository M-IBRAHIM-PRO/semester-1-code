#include <iostream>
using namespace std;
void evenodd_transformation(int numbers[3], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int index = 0; index < 3; index++)
        {
            if (numbers[index] % 2 == 0)
            {
                numbers[index] = numbers[index] - 2;
            }
            else
            {
                numbers[index] = numbers[index] + 2;
            }
        }
    }
    for (int index = 0; index < 3; index++)
    {
        cout << numbers[index] << " ";
    }
}
main()
{
    int numbers[3], n;
    cout << "Enter numbers : ";
    for (int index = 0; index < 3; index++)
    {
        cin >> numbers[index];
    }
    cout << endl;
    cout << "Enter number of times even-odd transformation need to be done : ";
    cin >> n;
    evenodd_transformation(numbers, n);
}