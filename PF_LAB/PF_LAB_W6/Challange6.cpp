#include <iostream>
using namespace std;
string case_finder(char user_input)
{
    if (user_input == 'a')
    {
        return "lower case";
    }
    else if (user_input == 'A')
    {
        return "upper case";
    }
}
main()
{
    char user_input;
    string result;
    cout << "Enter the letter : ";
    cin >> user_input;

    result = case_finder(user_input);
    cout << result;
}