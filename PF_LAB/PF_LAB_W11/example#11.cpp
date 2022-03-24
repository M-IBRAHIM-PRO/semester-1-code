#include <fstream>
#include <iostream>
using namespace std;
void read_data()
{
    string line;
    int count = 0;
    fstream newfile;
    newfile.open("english.txt", ios::in);
    while (!newfile.eof())
    {
        getline(newfile, line);
        count++;
    }
    cout << "number of line : " << count;
    newfile.close();
}
main()
{
    read_data();
}