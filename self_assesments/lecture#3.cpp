#include <iostream>
using namespace std;
struct nameType
{
    string first;
    string last;
};
struct courseType
{
    string name;
    int callNum;
    int credits;
    char grade;
};
struct studentType
{
    nameType name;
    double gpa;
    courseType course;
};
studentType student;
studentType classList[100];
courseType course;
nameType name;
main()
{
    student.gpa = 3.76;
    cout << student.gpa << endl;
    student.name.last = "Anderson";
    cout << student.name.last << endl;
    // classList[1].name = student;
    // classList[0].callNum = 0;
    student.name = classList[10].name;
    cout << student.name.first;
    // cout << student.name << endl;
    //  course = classList[0];
    //  cin << classList[0];
    for (int j = 0; j < 100; j++)
    {
        classList[j].course = course;
        // cout << classList[j].course.name << endl;
    }

    // classList.name.last = " ";
    //  course.credits = studentType.course.credits;
}