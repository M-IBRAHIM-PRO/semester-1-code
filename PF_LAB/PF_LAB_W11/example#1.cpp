#include <fstream>
using namespace std;
main()
{
    string name = "Ibrahim";
    fstream newfile;
    newfile.open("My.txt", ios::out);
    newfile << name;
    newfile.close();
}