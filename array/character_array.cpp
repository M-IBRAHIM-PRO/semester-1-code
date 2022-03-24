#include <iostream>
using namespace std;
main()
{
    char name[10];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter letter " << i + 1 << " : ";
        cin >> name[i];
    }
    cout << "Stored letters are as follows: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << name[i] << " ";
    }
}