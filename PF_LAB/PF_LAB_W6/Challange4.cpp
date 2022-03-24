#include <iostream>
using namespace std;
string age_finder(int age)
{
    if (age >= 18)
    {
        return "You can vote";
    }
    else if (age < 18)
    {
        return "You cannot vote";
    }
}

main()
{
    int age;
    string result;
    cout << "Enter your age : ";
    cin >> age;
    result = age_finder(age);
    cout << result;
}