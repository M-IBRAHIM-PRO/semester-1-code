#include <iostream>
using namespace std;
string testjackpot(string word[4])
{
    string result;
    for (int index = 0; index < 4; index++)
    {
        word[index] = word[index];
        if (word[0] == word[1] && word[0] == word[2] && word[0] == word[3])
        {
            result = "True";
        }
        else
        {
            result = "False";
        }
    }
    return result;
}
main()
{
    string symbols[4];
    string output;
    cout << "Enter 4 symbols : ";
    int index;
    for (int index = 0; index < 4; index++)
    {
        cin >> symbols[index];
    }
    output = testjackpot(symbols);
    cout << output;
}