#include <iostream>
#include <fstream>
using namespace std;
string parse(string row, int column);
void read_data();
bool even_odd(int age);
void odd_age(string name, int age);
void even_age(string name, int age);
main()
{
    read_data();
}
void read_data()
{
    fstream file;
    string line, age, name;
    file.open("names.txt", ios::in);
    while (!(file.eof()))
    {
        getline(file, line);
        name = parse(line, 1);
        // cout << "name from file : " << name << endl;
        age = parse(line, 2);
        // cout << "age from file : " << age << endl;
        int age_person = stoi(age);
        bool result = even_odd(age_person);
        if (result == 1)
        {
            even_age(name, age_person);
        }
        else
        {
            odd_age(name, age_person);
        }
    }
}
bool even_odd(int age)
{
    bool is_even = false;
    if (age % 2 == 0)
    {
        is_even = 1;
    }
    return is_even;
}
string parse(string row, int column)
{

    int commansCount = 1;
    string item;
    int index = 0;
    while (true)
    {

        char ch = row[index];
        if (ch == '\0')
            return item;
        if (ch == ',')
        {
            commansCount++;
        }
        else if (commansCount == column)
        {
            item = item + ch;
        }
        index++;
    }

    return item;
}
void odd_age(string name, int age)
{
    cout << "###############" << endl;
    cout << "#" << age << " HB " << name << "! " << age << " #" << endl;
    cout << "###############" << endl;
}
void even_age(string name, int age)
{
    cout << "***************" << endl;
    cout << "*" << age << " HB " << name << "! " << age << " *" << endl;
    cout << "***************" << endl;
}