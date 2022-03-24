#include <iostream>
using namespace std;
bool lenght_checker(string word)
{
    int index = 0;
    bool result;
    while (word[index] == '\0')
    {
        index++;
    }
    if (index % 2 == 0)
    {
        result = true;
    }
    else
    {
        result = false;
    }
    return result;
}
main()
{
    string word;
    bool result;
    cout << "Enter word : ";
    cin >> word;
    result = lenght_checker(word);
    if (result == 0)
        cout << "False";
    else
        cout << "True";
}