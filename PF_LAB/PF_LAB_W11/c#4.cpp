#include <iostream>
#include <fstream>
using namespace std;
void store_data(string name, int age, string s_name, float m_marks)
{
    fstream newfile;
    newfile.open("student.txt", ios::app);
    newfile << name << "  \t  " << age << "  \t  " << s_name << "  \t     " << m_marks;
    newfile.close();
}
main()
{
    int age;
    string name, s_name;
    float m_marks;
    cout << "Enter name of student : ";
    cin >> name;
    cout << "Enter age : ";
    cin >> age;
    cout << "Enter school name (without spaces): ";
    cin >> s_name;
    cout << "Enter matric marks : ";
    cin >> m_marks;
    store_data(name, age, s_name, m_marks);
}