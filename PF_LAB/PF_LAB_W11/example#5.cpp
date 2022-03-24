#include <iostream>
#include <fstream>
using namespace std;
void store_data(int roll_n, string name, char grade, float cgpa)
{
    fstream newfile;
    newfile.open("result_card.txt", ios::out);
    newfile << "roll_n"
            << "\t"
            << "name"
            << "\t"
            << "cgpa"
            << "\t"
            << "grade" << endl;
    newfile << roll_n << "  \t  " << name << "  \t  " << cgpa << "  \t      " << grade;
    newfile.close();
}
main()
{
    int roll_n;
    string name;
    char grade;
    float cgpa;
    cout << "Enter roll number : ";
    cin >> roll_n;
    cout << "Enter name of student : ";
    cin >> name;
    cout << "Enter cgpa : ";
    cin >> cgpa;
    cout << "Enter grade : ";
    cin >> grade;
    store_data(roll_n, name, grade, cgpa);
}