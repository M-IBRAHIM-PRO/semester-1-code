#include <iostream>
#include <string>
using namespace std;
main()
{
    system("cls");
    // int array[5] = {1, 2, 2, 4, 1};
    // int num = 0;
    // for (int i = 0; i < 5; i++)
    // {
    //     if (array[i] > num)
    //     {
    //         num = array[i];
    //     }
    // }
    // cout << num;

    // string a = "asas";
    // int num = a.length();
    // cout << num;
    // char c[4] = {"c++"};

    string word;
    cout << "Enter any word : ";
    cin >> word;
    int idx = 0;
    int num = 0;
    // for (idx = 0; word[idx] != '\0'; idx++)
    // {
    //     cout << word[idx] << " ";
    // }
    if (word[word.length() - 1] == 'n')
    {
        cout << true;
    }
    else
    {
        cout << false;
    }
}