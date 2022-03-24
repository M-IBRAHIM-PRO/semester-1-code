#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
char letter_files[100];
string orders[50];
void read_file();
string parse(string row, int column);
string parse_commas(string row, int column);
main()
{
    // int min_order, min_price;
    // cout << "Enter minimum number of orders : ";
    // cin >> min_order;
    // cout << "Enter minimum price : ";
    // cin >> min_price;
    read_file();
}
void read_file()
{
    fstream newfile;
    string line, name, number_order;
    int line_counter = 0;

    newfile.open("Customers.txt", ios::in);
    getline(newfile, line);
    int i = 0;
    int index = 0;
    while (newfile.eof())
    {
        name = parse(line, 1);
        cout << "name from file : " << name << endl;
        number_order = parse(line, 2);
        index = line[i];
        cout << "index : " << index << endl;
        cout << "number of order from file : " << number_order << endl;
        int t_orders = stoi(number_order);
        while (line[index + 1] != ']')
        {
            orders[index] = parse_commas(line, i);
            index++;
        }
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
string parse_commas(string row, int column)
{
    int spacesCount = 1;
    string item;
    int index = 0;
    while (true)
    {
        char ch = row[index];
        if (ch == '\0')
            return item;
        if (ch == ',')
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
