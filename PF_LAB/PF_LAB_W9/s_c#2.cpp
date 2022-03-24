#include <iostream>
using namespace std;
char word[10];
char abc[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
void character_increment()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (word[i] == abc[j])
            {
                cout << abc[j + 1];
            }
        }
    }
}
main()
{
    cout << "Enter any word : ";
    cin >> word;
    character_increment();
}