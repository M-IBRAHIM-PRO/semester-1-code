#include <iostream>
using namespace std;
//------------PROTOTYPES---------------
void storing_abc();
void comparison(string letter);
//------------GLOBAL ARRAYS-------------
char abc[26];
char wordA[30];
string morse_code[26] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};

//(Space) -.-.-.-

main()
{
    string word;
    storing_abc();
    cout << "Enter any word : ";
    getline(cin, word);
    comparison(word);
}
void storing_abc()
{
    int index = 0;
    for (int index = 0; index < 1;)
    {
        for (char i = 97; i <= 122; i++)
        {
            abc[index] = i;
            index++;
        }
    }
}
void comparison(string letter)
{
    string code;
    for (int i = 0; i < 26; i++)
    {
        if (abc[i] == letter[i])
        {
            cout << morse_code[i];
        }
        if (letter[i] == ' ')
        {
            cout << "-.-.-.-";
        }
    }
}