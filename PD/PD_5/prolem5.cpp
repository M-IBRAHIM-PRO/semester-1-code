#include <iostream>
using namespace std;
int cat_year(int human_year)
{
    int result;
    if (human_year == 1)
    {
        result = 15;
    }
    else if (human_year == 2)
    {
        result = 15 + 9;
    }
    else if (human_year == 3)
    {
        result = 24 + 4;
    }
    else if (human_year > 3)
    {
        int greater_3;
        greater_3 = human_year - 3;
        result = 28 + (greater_3 * 4);
    }
    return result;
}
int dog_year(int human_year)
{
    int result;
    if (human_year == 1)
    {
        result = 15;
    }
    else if (human_year == 2)
    {
        result = 15 + 9;
    }
    else if (human_year == 3)
    {
        result = 24 + 5;
    }
    else if (human_year > 3)
    {
        int greater_3;
        greater_3 = human_year - 3;
        result = 29 + (greater_3 * 5);
    }
    return result;
}
main()
{
    int human_year, result_c_year, result_d_year;
    cout << "Enter human year : ";
    cin >> human_year;
    result_c_year = cat_year(human_year);
    result_d_year = dog_year(human_year);
    cout << "Human year : " << human_year;
    cout << "\nCat year : " << result_c_year;
    cout << "\nDog year : " << result_d_year;
}