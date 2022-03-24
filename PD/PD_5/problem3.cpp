#include <iostream>
using namespace std;
string leap_checker(int year)
{
    int n4, n100, n400;
    n4 = year % 4;
    n100 = year % 100;
    n400 = year % 400;
    if (n4 == 0 && n100 == 0 && n400 == 0)
    {
        return "True";
    }
    else if (n4 == 0 && n100 != 0)
    {
        return "True";
    }
    else if (n4 != 0)
    {
        return "False";
    }
    else if (n4 == 0 && n100 == 0 && n400 != 0)
    {
        return "False";
    }
}
main()
{
    /*Leap Year :
● If a year is divisible by 4, 100 and 400 then it is a leap year.
● If a year is divisible by 4 but not divisible by 100 then it is a leap year
   Not a Leap Year :
● If a year is not divisible by 4 then it is not a leap year
● If a year is divisible by 4 and 100 but not divisible by 400 then it is not a leap year
 Given a year you must implement a function that returns
 true if it 's a leap year, or
 false if it' s not .*/
    int year;
    string result;
    cout << "Enter year : ";
    cin >> year;
    result = leap_checker(year);
    cout << result;
}