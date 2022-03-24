#include <fstream>
#include <iostream>
using namespace std;
void read_data()
{
    float c;
    fstream newfile;
    newfile.open("float.txt", ios::in);
    newfile >> c;
    cout << c;
    newfile.close();
}
main()
{
    read_data();
}