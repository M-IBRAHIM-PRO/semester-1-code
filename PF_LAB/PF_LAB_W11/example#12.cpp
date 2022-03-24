#include <fstream>
#include <iostream>
using namespace std;
void read_data()
{
    char d;
    int count = 0;
    fstream newfile;
    newfile.open("result_card.txt", ios::in);
    while (!newfile.eof())
    {
        newfile >> d;
        cout << d << endl;
        count++;
    }
    cout << "number of letters : " << count;
    newfile.close();
}
main()
{
    read_data();
}