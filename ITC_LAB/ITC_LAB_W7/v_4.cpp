#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main_menu();
void header();
void exitprogram();
void display_student(string name, float matric, float inter, float e_cat);
float agregate_calculator(float matric, float inter, float e_cat);
void merit_list(string st_name1, string st_name2, string st_name3, string st_name4, float matric_1, float matric_2, float matric_3, float matric_4, float inter_1, float inter_2, float inter_3, float inter_4, float e_cat_1, float e_cat_2, float e_cat_3, float e_cat_4, float agregate_1, float agregate_2, float agregate_3, float agregate_4);
void exit_program();

// variables
int op = 0;
string st_name1 = "empty", st_name2 = "empty", st_name3 = "empty", st_name4 = "empty";
float matric_1 = 0, matric_2 = 0, matric_3 = 0, matric_4 = 0;
float inter_1 = 0, inter_2 = 0, inter_3 = 0, inter_4 = 0;
float e_cat_1 = 0, e_cat_2 = 0, e_cat_3 = 0, e_cat_4 = 0;
float agregate_1 = 0, agregate_2 = 0, agregate_3 = 0, agregate_4 = 0;

main()
{

    // LOGIC
    int count = 0;

    while (op != 4)
    {
        op = main_menu();
        exit_program();
        if (op == 1)
        {
            if (count == 0)
            {
                cout << "Please enter The Student Information, Matric Marks, Inter Marks, Ecat Marks" << endl;
                cout << "Enter the Student Name:" << endl;
                cin >> st_name1;
                cout << "\nEnter your Matric Marks :";
                cin >> matric_1;
                cout << "\nEnter your Inter Marks :";
                cin >> inter_1;
                cout << "\nEnter your Ecat Marks :";
                cin >> e_cat_1;
                count = count + 1;
            }
            else if (count == 1)
            {
                cout << "Please enter The Student Information, Matric Marks, Inter Marks, Ecat Marks" << endl;
                cout << "Enter the Student Name:" << endl;
                cin >> st_name2;
                cout << "\nEnter your Matric Marks :";
                cin >> matric_2;
                cout << "\nEnter your Inter Marks :";
                cin >> inter_2;
                cout << "\nEnter your Ecat Marks :";
                cin >> e_cat_2;
                count = count + 1;
            }
            else if (count == 2)
            {
                cout << "Please enter The Student Information, Matric Marks, Inter Marks, Ecat Marks" << endl;
                cout << "Enter the Student Name:" << endl;
                cin >> st_name3;
                cout << "\nEnter your Matric Marks :";
                cin >> matric_3;
                cout << "\nEnter your Inter Marks :";
                cin >> inter_3;
                cout << "\nEnter your Ecat Marks :";
                cin >> e_cat_3;
                count = count + 1;
            }
            else if (count == 3)
            {
                cout << "Please enter The Student Information, Matric Marks, Inter Marks, Ecat Marks" << endl;
                cout << "Enter the Student Name:" << endl;
                cin >> st_name4;
                cout << "\nEnter your Matric Marks :";
                cin >> matric_4;
                cout << "\nEnter your Inter Marks :";
                cin >> inter_4;
                cout << "\nEnter your Ecat Marks :";
                cin >> e_cat_4;
                count = count + 1;
            }
            else
            {
                cout << "Atmost four students can be added.";
            }
        }
        else if (op == 2)
        {
            if (count == 0)
            {
                cout << "No record to show yet.";
                count = count + 1;
            }
            else if (count == 1)
            {
                display_student(st_name1, matric_1, inter_1, e_cat_1);
                count = count + 1;
            }
            else if (count == 2)
            {
                display_student(st_name1, matric_1, inter_1, e_cat_1);
                display_student(st_name2, matric_2, inter_2, e_cat_2);
                count = count + 1;
            }
            else if (count == 3)
            {
                display_student(st_name1, matric_1, inter_1, e_cat_1);
                display_student(st_name2, matric_2, inter_2, e_cat_2);
                display_student(st_name3, matric_3, inter_3, e_cat_3);
                count = count + 1;
            }
            else if (count == 4)
            {
                display_student(st_name1, matric_1, inter_1, e_cat_1);
                display_student(st_name2, matric_2, inter_2, e_cat_2);
                display_student(st_name3, matric_3, inter_3, e_cat_3);
                display_student(st_name4, matric_4, inter_4, e_cat_4);
                count = count + 1;
            }
        }
        else if (op == 3)
        {
            merit_list(st_name1, st_name2, st_name3, st_name4,
                       matric_1, matric_2, matric_3, matric_4, inter_1, inter_2, inter_3, inter_4, e_cat_1, e_cat_2, e_cat_3, e_cat_4, agregate_1, agregate_2, agregate_3, agregate_4);
        }
        else if (op == 4)
        {
            exit_program();
        }
        else
        {
            cout << "Enter a valid input";
            exit_program();
        }
    }
}
void header()
{

    cout << "******************************************************" << endl;
    cout << "*       University Admission Management System       *" << endl;
    cout << "******************************************************" << endl;
    cout << "                                                      " << endl;
    cout << "                                                      " << endl;
}
int main_menu()
{
    header();
    cout << "Main Menu __" << endl;
    cout << "------------------------------------------------------" << endl;
    cout << "Select one of the following options numbers.." << endl;
    cout << "1- Add New Student Record" << endl;
    cout << "2- View All Records" << endl;
    cout << "3- Print the Record in Merit Order" << endl;
    cout << "4- Exit" << endl;
    cout << "Your option--";
    int op;
    cin >> op;
    return op;
}
void display_student(string name, float matric, float inter, float e_cat)
{
    if (matric != 0)
    {
        cout << name << "\t" << matric << "\t" << inter << "\t" << e_cat << endl;
    }
}
float agregate_calculator(float matric, float inter, float e_cat)
{
    float agregate = (((matric / 11.0) * 0.25) + ((inter / 11.0) * 0.45) + ((e_cat / 4.0) * 0.30));
    return agregate;
}
void merit_list(string st_name1, string st_name2, string st_name3, string st_name4, float matric_1, float matric_2, float matric_3, float matric_4, float inter_1, float inter_2, float inter_3, float inter_4, float e_cat_1, float e_cat_2, float e_cat_3, float e_cat_4, float agregate_1, float agregate_2, float agregate_3, float agregate_4)
{
    if (agregate_1 > agregate_2 && agregate_1 > agregate_3 && agregate_1 > agregate_4)
    {

        cout << "Student Name :" << st_name1 << "\tMatric Marks :" << matric_1 << "\tInter Marks :" << inter_1 << "\tEcat Marks :" << e_cat_1 << "\tAgregate :" << agregate_1 << endl;
        if (agregate_2 > agregate_3 && agregate_2 > agregate_4)
        {
            cout << "Student Name :" << st_name2 << "\tMatric Marks :" << matric_2 << "\tInter Marks :" << inter_2 << "\tEcat Marks :" << e_cat_2 << "\tAgregate :" << agregate_2 << endl;
            if (agregate_3 > agregate_4)
            {
                cout << "Student Name :" << st_name3 << "\tMatric Marks :" << matric_3 << "\tInter Marks :" << inter_3 << "\tEcat Marks :" << e_cat_3 << "\tAgregate :" << agregate_3 << endl;
                cout << "Student Name :" << st_name4 << "\tMatric Marks :" << matric_4 << "\tInter Marks :" << inter_4 << "\tEcat Marks :" << e_cat_4 << "\tAgregate :" << agregate_4 << endl;
            }
            else
            {
                cout << "Student Name :" << st_name4 << "\tMatric Marks :" << matric_4 << "\tInter Marks :" << inter_4 << "\tEcat Marks :" << e_cat_4 << "\tAgregate :" << agregate_4 << endl;
                cout << "Student Name :" << st_name3 << "\tMatric Marks :" << matric_3 << "\tInter Marks :" << inter_3 << "\tEcat Marks :" << e_cat_3 << "\tAgregate :" << agregate_3 << endl;
            }
        }
        if (agregate_3 > agregate_2 && agregate_3 > agregate_4)
        {
            cout << "Student Name :" << st_name3 << "\tMatric Marks :" << matric_3 << "\tInter Marks :" << inter_3 << "\tEcat Marks :" << e_cat_3 << "\tAgregate :" << agregate_3 << endl;
            if (agregate_2 > agregate_4)
            {
                cout << "Student Name :" << st_name2 << "\tMatric Marks :" << matric_2 << "\tInter Marks :" << inter_2 << "\tEcat Marks :" << e_cat_2 << "\tAgregate :" << agregate_2 << endl;
                cout << "Student Name :" << st_name4 << "\tMatric Marks :" << matric_4 << "\tInter Marks :" << inter_4 << "\tEcat Marks :" << e_cat_4 << "\tAgregate :" << agregate_4 << endl;
            }
            else
            {
                cout << "Student Name :" << st_name4 << "\tMatric Marks :" << matric_4 << "\tInter Marks :" << inter_4 << "\tEcat Marks :" << e_cat_4 << "\tAgregate :" << agregate_4 << endl;
                cout << "Student Name :" << st_name2 << "\tMatric Marks :" << matric_2 << "\tInter Marks :" << inter_2 << "\tEcat Marks :" << e_cat_2 << "\tAgregate :" << agregate_2 << endl;
            }
        }
        if (agregate_4 > agregate_2 && agregate_4 > agregate_3)
        {
            cout << "Student Name :" << st_name4 << "\tMatric Marks :" << matric_4 << "\tInter Marks :" << inter_4 << "\tEcat Marks :" << e_cat_4 << "\tAgregate :" << agregate_4 << endl;
            if (agregate_2 > agregate_3)
            {
                cout << "Student Name :" << st_name2 << "\tMatric Marks :" << matric_2 << "\tInter Marks :" << inter_2 << "\tEcat Marks :" << e_cat_2 << "\tAgregate :" << agregate_2 << endl;
                cout << "Student Name :" << st_name3 << "\tMatric Marks :" << matric_3 << "\tInter Marks :" << inter_3 << "\tEcat Marks :" << e_cat_3 << "\tAgregate :" << agregate_3 << endl;
            }
            else
            {
                cout << "Student Name :" << st_name3 << "\tMatric Marks :" << matric_3 << "\tInter Marks :" << inter_3 << "\tEcat Marks :" << e_cat_3 << "\tAgregate :" << agregate_3 << endl;
                cout << "Student Name :" << st_name2 << "\tMatric Marks :" << matric_2 << "\tInter Marks :" << inter_2 << "\tEcat Marks :" << e_cat_2 << "\tAgregate :" << agregate_2 << endl;
            }
        }
    }

    if (agregate_2 > agregate_1 && agregate_2 > agregate_3 && agregate_2 > agregate_4)
    {
        cout << "Student Name :" << st_name2 << "\tMatric Marks :" << matric_2 << "\tInter Marks :" << inter_2 << "\tEcat Marks :" << e_cat_2 << "\tAgregate :" << agregate_2 << endl;
        if (agregate_1 > agregate_3 && agregate_1 > agregate_4)
        {
            cout << "Student Name :" << st_name1 << "\tMatric Marks :" << matric_1 << "\tInter Marks :" << inter_1 << "\tEcat Marks :" << e_cat_1 << "\tAgregate :" << agregate_1 << endl;
            if (agregate_3 > agregate_4)
            {
                cout << "Student Name :" << st_name3 << "\tMatric Marks :" << matric_3 << "\tInter Marks :" << inter_3 << "\tEcat Marks :" << e_cat_3 << "\tAgregate :" << agregate_3 << endl;
                cout << "Student Name :" << st_name4 << "\tMatric Marks :" << matric_4 << "\tInter Marks :" << inter_4 << "\tEcat Marks :" << e_cat_4 << "\tAgregate :" << agregate_4 << endl;
            }
            else
            {
                cout << "Student Name :" << st_name4 << "\tMatric Marks :" << matric_4 << "\tInter Marks :" << inter_4 << "\tEcat Marks :" << e_cat_4 << "\tAgregate :" << agregate_4 << endl;
                cout << "Student Name :" << st_name3 << "\tMatric Marks :" << matric_3 << "\tInter Marks :" << inter_3 << "\tEcat Marks :" << e_cat_3 << "\tAgregate :" << agregate_3 << endl;
            }
        }
        if (agregate_3 > agregate_1 && agregate_3 > agregate_4)
        {
            cout << "Student Name :" << st_name3 << "\tMatric Marks :" << matric_3 << "\tInter Marks :" << inter_3 << "\tEcat Marks :" << e_cat_3 << "\tAgregate :" << agregate_3 << endl;
            if (agregate_1 > agregate_4)
            {
                cout << "Student Name :" << st_name1 << "\tMatric Marks :" << matric_1 << "\tInter Marks :" << inter_1 << "\tEcat Marks :" << e_cat_1 << "\tAgregate :" << agregate_1 << endl;
                cout << "Student Name :" << st_name4 << "\tMatric Marks :" << matric_4 << "\tInter Marks :" << inter_4 << "\tEcat Marks :" << e_cat_4 << "\tAgregate :" << agregate_4 << endl;
            }
            else
            {
                cout << "Student Name :" << st_name4 << "\tMatric Marks :" << matric_4 << "\tInter Marks :" << inter_4 << "\tEcat Marks :" << e_cat_4 << "\tAgregate :" << agregate_4 << endl;
                cout << "Student Name :" << st_name1 << "\tMatric Marks :" << matric_1 << "\tInter Marks :" << inter_1 << "\tEcat Marks :" << e_cat_1 << "\tAgregate :" << agregate_1 << endl;
            }
        }
        if (agregate_4 > agregate_1 && agregate_4 > agregate_3)
        {
            cout << "Student Name :" << st_name4 << "\tMatric Marks :" << matric_4 << "\tInter Marks :" << inter_4 << "\tEcat Marks :" << e_cat_4 << "\tAgregate :" << agregate_4 << endl;
            if (agregate_1 > agregate_3)
            {
                cout << "Student Name :" << st_name1 << "\tMatric Marks :" << matric_1 << "\tInter Marks :" << inter_1 << "\tEcat Marks :" << e_cat_1 << "\tAgregate :" << agregate_1 << endl;
                cout << "Student Name :" << st_name3 << "\tMatric Marks :" << matric_3 << "\tInter Marks :" << inter_3 << "\tEcat Marks :" << e_cat_3 << "\tAgregate :" << agregate_3 << endl;
            }
            else
            {
                cout << "Student Name :" << st_name3 << "\tMatric Marks :" << matric_3 << "\tInter Marks :" << inter_3 << "\tEcat Marks :" << e_cat_3 << "\tAgregate :" << agregate_3 << endl;
                cout << " " << endl;
                cout << " " << endl;
                cout << "Student Name :" << st_name1 << "\tMatric Marks :" << matric_1 << "\tInter Marks :" << inter_1 << "\tEcat Marks :" << e_cat_1 << "\tAgregate :" << agregate_1 << endl;
            }
        }
    }

    if (agregate_3 > agregate_1 && agregate_3 > agregate_2 && agregate_3 > agregate_4)
    {
        cout << "Student Name :" << st_name3 << "\tMatric Marks :" << matric_3 << "\tInter Marks :" << inter_3 << "\tEcat Marks :" << e_cat_3 << "\tAgregate :" << agregate_3 << endl;

        if (agregate_1 > agregate_2 && agregate_1 > agregate_4)
        {
            cout << "Student Name :" << st_name1 << "\tMatric Marks :" << matric_1 << "\tInter Marks :" << inter_1 << "\tEcat Marks :" << e_cat_1 << "\tAgregate :" << agregate_1 << endl;
            if (agregate_2 > agregate_4)
            {
                cout << "Student Name :" << st_name2 << "\tMatric Marks :" << matric_2 << "\tInter Marks :" << inter_2 << "\tEcat Marks :" << e_cat_2 << "\tAgregate :" << agregate_2 << endl;
                cout << "Student Name :" << st_name4 << "\tMatric Marks :" << matric_4 << "\tInter Marks :" << inter_4 << "\tEcat Marks :" << e_cat_4 << "\tAgregate :" << agregate_4 << endl;
            }
            else
            {
                cout << "Student Name :" << st_name4 << "\tMatric Marks :" << matric_4 << "\tInter Marks :" << inter_4 << "\tEcat Marks :" << e_cat_4 << "\tAgregate :" << agregate_4 << endl;
                cout << "Student Name :" << st_name2 << "\tMatric Marks :" << matric_2 << "\tInter Marks :" << inter_2 << "\tEcat Marks :" << e_cat_2 << "\tAgregate :" << agregate_2 << endl;
            }
        }
        if (agregate_2 > agregate_1 && agregate_2 > agregate_4)
        {
            cout << "Student Name :" << st_name2 << "\tMatric Marks :" << matric_2 << "\tInter Marks :" << inter_2 << "\tEcat Marks :" << e_cat_2 << "\tAgregate :" << agregate_2 << endl;
            if (agregate_1 > agregate_4)
            {
                cout << "Student Name :" << st_name1 << "\tMatric Marks :" << matric_1 << "\tInter Marks :" << inter_1 << "\tEcat Marks :" << e_cat_1 << "\tAgregate :" << agregate_1 << endl;
                cout << "Student Name :" << st_name4 << "\tMatric Marks :" << matric_4 << "\tInter Marks :" << inter_4 << "\tEcat Marks :" << e_cat_4 << "\tAgregate :" << agregate_4 << endl;
                ;
            }
            else
            {
                cout << "Student Name :" << st_name4 << "\tMatric Marks :" << matric_4 << "\tInter Marks :" << inter_4 << "\tEcat Marks :" << e_cat_4 << "\tAgregate :" << agregate_4 << endl;
                cout << "Student Name :" << st_name1 << "\tMatric Marks :" << matric_1 << "\tInter Marks :" << inter_1 << "\tEcat Marks :" << e_cat_1 << "\tAgregate :" << agregate_1 << endl;
            }
        }
        if (agregate_4 > agregate_1 && agregate_4 > agregate_2)
        {
            cout << "Student Name :" << st_name4 << "\tMatric Marks :" << matric_4 << "\tInter Marks :" << inter_4 << "\tEcat Marks :" << e_cat_4 << "\tAgregate :" << agregate_4 << endl;
            if (agregate_1 > agregate_2)
            {
                cout << "Student Name :" << st_name1 << "\tMatric Marks :" << matric_1 << "\tInter Marks :" << inter_1 << "\tEcat Marks :" << e_cat_1 << "\tAgregate :" << agregate_1 << endl;
                cout << "Student Name :" << st_name2 << "\tMatric Marks :" << matric_2 << "\tInter Marks :" << inter_2 << "\tEcat Marks :" << e_cat_2 << "\tAgregate :" << agregate_2 << endl;
            }
            else
            {
                cout << "Student Name :" << st_name2 << "\tMatric Marks :" << matric_2 << "\tInter Marks :" << inter_2 << "\tEcat Marks :" << e_cat_2 << "\tAgregate :" << agregate_2 << endl;
                cout << "Student Name :" << st_name1 << "\tMatric Marks :" << matric_1 << "\tInter Marks :" << inter_1 << "\tEcat Marks :" << e_cat_1 << "\tAgregate :" << agregate_1 << endl;
            }
        }
    }

    if (agregate_4 > agregate_1 && agregate_4 > agregate_2 && agregate_4 > agregate_3)
    {
        cout << "Student Name :" << st_name4 << "\tMatric Marks :" << matric_4 << "\tInter Marks :" << inter_4 << "\tEcat Marks :" << e_cat_4 << "\tAgregate :" << agregate_4 << endl;

        if (agregate_1 > agregate_2 && agregate_1 > agregate_3)
        {
            cout << "Student Name :" << st_name1 << "\tMatric Marks :" << matric_1 << "\tInter Marks :" << inter_1 << "\tEcat Marks :" << e_cat_1 << "\tAgregate :" << agregate_1 << endl;
            if (agregate_2 > agregate_3)
            {
                cout << "Student Name :" << st_name2 << "\tMatric Marks :" << matric_2 << "\tInter Marks :" << inter_2 << "\tEcat Marks :" << e_cat_2 << "\tAgregate :" << agregate_2 << endl;
                cout << "Student Name :" << st_name3 << "\tMatric Marks :" << matric_3 << "\tInter Marks :" << inter_3 << "\tEcat Marks :" << e_cat_3 << "\tAgregate :" << agregate_3 << endl;
            }
            else
            {
                cout << "Student Name :" << st_name3 << "\tMatric Marks :" << matric_3 << "\tInter Marks :" << inter_3 << "\tEcat Marks :" << e_cat_3 << "\tAgregate :" << agregate_3 << endl;
                cout << "Student Name :" << st_name2 << "\tMatric Marks :" << matric_2 << "\tInter Marks :" << inter_2 << "\tEcat Marks :" << e_cat_2 << "\tAgregate :" << agregate_2 << endl;
            }
        }
        if (agregate_2 > agregate_1 && agregate_2 > agregate_3)
        {
            cout << "Student Name :" << st_name2 << "\tMatric Marks :" << matric_2 << "\tInter Marks :" << inter_2 << "\tEcat Marks :" << e_cat_2 << "\tAgregate :" << agregate_2 << endl;
            if (agregate_1 > agregate_3)
            {
                cout << "Student Name :" << st_name1 << "\tMatric Marks :" << matric_1 << "\tInter Marks :" << inter_1 << "\tEcat Marks :" << e_cat_1 << "\tAgregate :" << agregate_1 << endl;
                cout << "Student Name :" << st_name3 << "\tMatric Marks :" << matric_3 << "\tInter Marks :" << inter_3 << "\tEcat Marks :" << e_cat_3 << "\tAgregate :" << agregate_3 << endl;
            }
            else
            {
                cout << "Student Name :" << st_name3 << "\tMatric Marks :" << matric_3 << "\tInter Marks :" << inter_3 << "\tEcat Marks :" << e_cat_3 << "\tAgregate :" << agregate_3 << endl;
                cout << "Student Name :" << st_name1 << "\tMatric Marks :" << matric_1 << "\tInter Marks :" << inter_1 << "\tEcat Marks :" << e_cat_1 << "\tAgregate :" << agregate_1 << endl;
            }
        }
        if (agregate_3 > agregate_1 && agregate_3 > agregate_2)
        {
            cout << "Student Name :" << st_name3 << "\tMatric Marks :" << matric_3 << "\tInter Marks :" << inter_3 << "\tEcat Marks :" << e_cat_3 << "\tAgregate :" << agregate_3 << endl;
            if (agregate_1 > agregate_2)
            {
                cout << "Student Name :" << st_name1 << "\tMatric Marks :" << matric_1 << "\tInter Marks :" << inter_1 << "\tEcat Marks :" << e_cat_1 << "\tAgregate :" << agregate_1 << endl;
                cout << "Student Name :" << st_name2 << "\tMatric Marks :" << matric_2 << "\tInter Marks :" << inter_2 << "\tEcat Marks :" << e_cat_2 << "\tAgregate :" << agregate_2 << endl;
            }
            else
            {
                cout << "Student Name :" << st_name2 << "\tMatric Marks :" << matric_2 << "\tInter Marks :" << inter_2 << "\tEcat Marks :" << e_cat_2 << "\tAgregate :" << agregate_2 << endl;
                cout << "Student Name :" << st_name1 << "\tMatric Marks :" << matric_1 << "\tInter Marks :" << inter_1 << "\tEcat Marks :" << e_cat_1 << "\tAgregate :" << agregate_1 << endl;
            }
        }
    }
}
void exit_program()
{
    cout << "Press any key to continue.";
    getch();
    system("cls");
}