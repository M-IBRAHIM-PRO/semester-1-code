#include <iostream>
#include <fstream>
using namespace std;
main()
{
    char c;
    fstream newfile;
    cout << "Enter any letter : ";
    cin >> c;
    newfile.open("character.txt", ios::out);
    newfile << c;
    newfile.close();
}