#include <iostream>
#include <fstream>
using namespace std;
main()
{
    int number;
    fstream newfile;
    newfile.open("Integer.txt", ios::out);
    cout << "Enter any number : ";
    cin >> number;
    newfile << number;
    newfile.close();
}