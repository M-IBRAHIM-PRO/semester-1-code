#include <iostream>
using namespace std;
int const array_size = 10;
int numbers[array_size];
int numbers_check[array_size] = {10, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int sum_of_check = numbers_check[0] + numbers_check[1] + numbers_check[2] + numbers_check[3] + numbers_check[4] + numbers_check[5] + numbers_check[6] + numbers_check[7] + numbers_check[8] + numbers_check[9];
int sum = 0;
void user_input()
{
    for (int i = 0; i < array_size - 1; i++)
    {
        cout << "Enter number " << i + 1 << " : ";
        cin >> numbers[i];
        sum = sum + numbers[i];
    }
}
void number_checker()
{
    int missing_number = 0;
    if (sum != sum_of_check)
    {
        missing_number = sum_of_check - sum;
    }
    cout << "Missing number : " << missing_number << endl;
}
main()
{
    cout << "sum_of_check : " << sum_of_check << endl;
    user_input();
    number_checker();
}