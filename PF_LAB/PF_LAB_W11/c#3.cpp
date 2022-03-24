#include <fstream>
#include <iostream>
using namespace std;
void read_data()
{
    float c;
    fstream newfile;
    newfile.open("float.txt", ios::app);
    newfile << "New line added.";
    newfile.close();
}
main()
{
    read_data();
}