#include <fstream>
#include <iostream>
using namespace std;
void read_data()
{
    int c;
    fstream newfile;
    newfile.open("Integer.txt", ios::in);
    newfile >> c;
    cout << c;
    newfile.close();
}
main()
{
    read_data();
}