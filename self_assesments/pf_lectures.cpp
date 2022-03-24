#include <iostream>
using namespace std;
int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int input_data[] = {1, 3, 4, 6, 5, 7, 8, 2, 10};
void compare()
{
    int missing_element;
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum = sum + array[i];
    }
    int sum_1 = 0;
    for (int i = 0; i < 9; i++)
    {
        sum_1 = sum_1 + input_data[i];
    }

    cout << "Missing element : " << sum - sum_1;
}
main()
{
    compare();
}