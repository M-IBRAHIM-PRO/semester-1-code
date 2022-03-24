#include <fstream>
#include <iostream>
using namespace std;
void read_data()
{
    char c;
    fstream newfile;
    newfile.open("character.txt", ios::in);
    newfile >> c;
    cout << c;
    newfile.close();
}
main()
{
    read_data();
}