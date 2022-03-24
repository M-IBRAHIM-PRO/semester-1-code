#include <iostream>
using namespace std;
main()
{
    system("cls");
    struct studentType
    {
        string name;
        double gpa;
        int sID;
        char grade;
    };
    studentType student;
    studentType *studentPtr;

    studentPtr = &student;
    // one way
    (*studentPtr).gpa = 3.9;
    // 2 way
    studentPtr->name = "ali";
    cout << student.gpa << endl;
    cout << student.name << endl;
    cout << "student pointer value : " << studentPtr << endl;
    cout << "Address of student : " << &student << endl;
    cout << "Address of student pointer : " << &studentPtr << endl;
    cout << endl;
    cout << "Address of student name : " << &student.name << endl;
    cout << "Address of student gpa : " << &student.gpa << endl;
    cout << "Address of student sID : " << &student.sID << endl;
    cout << "Address of student grade : " << &student.grade << endl;

    // cout << "Address of student type struct : " << &studentType << endl;
}