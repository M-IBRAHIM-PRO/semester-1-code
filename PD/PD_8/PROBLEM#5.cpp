#include <iostream>
using namespace std;
void same_characters(string a1, string a2)
{
    int index_1 = 0, index_2 = 0;
    int count = 0;
    char same_c;
    while (a1[index_1] == '\0' && a1[index_2] == '\0')
    {
        index_1++;
        index_2++;
        if (a1[index_1] == a2[index_2])
        {
            count++;
            same_c = a1[index_1];
        }
    }
    cout << "Strings have " << count << " equal characters which are " << same_c << " ";
}
main()
{
    string a1, a2;
    cout << "Enter character in array 1 : ";
    cin >> a1;
    cout << "Enter character in array 2 : ";
    cin >> a2;
    same_characters(a1, a2);
}