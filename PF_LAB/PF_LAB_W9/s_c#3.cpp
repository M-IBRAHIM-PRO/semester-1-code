#include <iostream>
using namespace std;
char word[10];
char vowels[] = {'a', 'e', 'i', 'o', 'u'};
void vowel_finder()
{
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int r = 0; r < 5; r++)
        {
            if (word[i] == vowels[r])
            {
                count = count + 1;
            }
        }
    }
    cout << count;
}
main()
{
    cout << "Enter a word : ";
    cin >> word;
    vowel_finder();
}