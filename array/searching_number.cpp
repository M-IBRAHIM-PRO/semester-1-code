#include <iostream>
using namespace std;
main()
{
    int const ARRAY_SIZE = 5;
    int numbers[ARRAY_SIZE];
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << "Enter number " << i + 1 << " : ";
        cin >> numbers[i];
    }
    int n;
    cout << "Enter number you want to search : ";
    cin >> n;
    int found_index;
    for (int index = 0; index < ARRAY_SIZE; index++)
    {
        if (numbers[index] == n)
        {
            found_index = index;
        }
    }
    cout << "Number is found at " << found_index << " index";
}