#include <iostream>
using namespace std;
struct student
{
    string name;
    string id;
} student_1, student_2;
void print_record(student record);

main()
{
    system("cls");
    student_1.name = "aslam";
    student_1.id = "cs-167";
    student_2 = student_1;

    // cout << &student_2.name << endl;
    // cout << &student_2.id;
    // if (student_1.id == student_2.id)
    // {
    //     cout << "s ame";
    // }

    print_record(student_1);
}
void print_record(student record)
{
    cout << record.name << endl;
    cout << record.id << endl;
}