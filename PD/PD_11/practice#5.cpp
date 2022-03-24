#include <conio.h>
#include <iostream>
#include <fstream>
using namespace std;
//-----------prototypes----------
void read_file();
string parse(string row, int column);
//---------global arrays---------

//-----------global variables----
main()
{
    read_file();
}
void read_file()
{
    fstream newfile;
    string line, name, number_order;

    newfile.open("Customers.txt", ios::in);
    getline(newfile, line);
    int i = 0;
    int index = 0;
    while (line[i] == '\0')
    {
        name = parse(line, 1);
        cout << "name from file : " << name << endl;
        number_order = parse(line, 2);
        index = line[i];
        cout << "index : " << index << endl;
        cout << "number of order from file : " << number_order << endl;
        int t_orders = stoi(number_order);
        cout << "orders total : " << t_orders << endl;
    }
    newfile.close();
}
string parse(string row, int column)
{
    int spacesCount = 1;
    string item;
    int index = 0;
    while (true)
    {
        char ch = row[index];
        if (ch == '\0')
            return item;
        if (ch == ' ')
        {
            spacesCount++;
        }
        else if (spacesCount == column)
        {
            item = item + ch;
        }
        index++;
    }
    return item;
}
