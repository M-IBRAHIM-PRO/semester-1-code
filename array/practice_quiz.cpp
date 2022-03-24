#include <iostream>
using namespace std;
main()
{
    // int const ARRAY_SIZE = 5;
    // int number[ARRAY_SIZE] = {12, 23, 42, 21, 2};
    // // int sum = 0;
    // // for (int i = 0; i < 5; i++)
    // // {
    // //     cin >> number[i];
    // //     sum = sum + number[i];
    // // }
    // // cout << "Sum : " << sum;
    // int max_index = 0;
    // for (int i = 0; i < 5; i++)
    // {
    //     if (number[max_index] < number[i])
    //     {
    //         max_index = i;
    //     }
    // }
    // int largest_number = number[max_index];
    // cout << "Largest number : " << largest_number;
    // int list[] = {1, 2, 3, 4, 5};
    // for (int i = 0; i < 5; i++)
    // {
    //     list[i] = 0;
    //     cout << "List[" << i << "] = " << list[i] << endl;
    // }
    // int number[5] = {1, 2};
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "number[" << i << "] = " << number[i] << endl;
    // }
    int array_1[] = {1, 2, 3, 4, 5};
    int array_2[] = {5, 4, 3, 2, 1};
    for (int i = 0; i < 5; i++)
    {
        array_2[i] = array_1[i];
        cout << array_2[i] << " ";
    }
}