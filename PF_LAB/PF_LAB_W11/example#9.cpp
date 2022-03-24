#include <fstream>
#include <iostream>
using namespace std;
void read_data()
{
    char c;
    int count = 0;
    fstream newfile;
    newfile.open("result_card.txt", ios::in);
    while (!newfile.eof())
    {
        newfile >> c;
        cout << c;
    }
    newfile.close();
}
main()
{
    read_data();
}