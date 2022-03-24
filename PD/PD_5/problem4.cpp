#include <iostream>
using namespace std;
int leap_checker(int year)
{
    int n4, n100, n400;
    n4 = year % 4;
    n100 = year % 100;
    n400 = year % 400;
    int a;
    if (n4 == 0 && n100 == 0 && n400 == 0)
    {
        a = 1;
    }
    else if (n4 == 0 && n100 != 0)
    {
        a = 1;
    }
    else if (n4 != 0)
    {
        a = 0;
    }
    else if (n4 == 0 && n100 == 0 && n400 != 0)
    {
        a = 0;
    }
    return a;
}
int calculation(int year_1)
{
    int count = 0;
    count = leap_checker(year_1);
    count = leap_checker(year_1 + 1) + count;
    count = leap_checker(year_1 + 2) + count;
    count = leap_checker(year_1 + 3) + count;
    count = leap_checker(year_1 + 4) + count;
    count = leap_checker(year_1 + 5) + count;
    count = leap_checker(year_1 + 6) + count;
    count = leap_checker(year_1 + 7) + count;
    count = leap_checker(year_1 + 8) + count;
    count = leap_checker(year_1 + 9) + count;
    return count;
}
int main()
{
    int year1, year2;
    int result;
    cout << "Enter year : ";
    cin >> year1;
    cout << "Enter year : ";
    cin >> year2;

    result = calculation(year1);
    cout << result;
}