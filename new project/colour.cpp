#include <iostream>
#include <windows.h>
using namespace std;
HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
main()
{
    system("cls");
    for (int i = 0; i < 143 + (7 * 25); i++)
    {
        SetConsoleTextAttribute(color, i);
        cout << i << " Ibra ddc " << endl;
    }
}