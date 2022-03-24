#include <iostream>
#include <stdlib.h>
using namespace std;
void header();
int main_menu();
void display_student();
float agregate_calculator();

main()
{
    // variables
    int exit = 0, op;
    string st_1, st_2, st_3, st_4;
    string st_name1, st_name2, st_name3, st_name4;
    float matric_1, matric_2, matric_3, matric_4;
    float inter_1, inter_2, inter_3, inter_4;
    float e_cat_1, e_cat_2, e_cat_3, e_cat_4;
    float agregate_1, agregate_2, agregate_3, agregate_4;

    // main code
    op = main_menu();
    if (op == 1)
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
    }
    else if (op == 2)
    {
        cout << "No record to show yet.";
    }
    else if (op == 3)
    {
        cout << "No record to show yet.";
    }
    else if (op == 4)
    {
        header();
        cout << "Program is being executed---";
        exit = 1;
    }
    if (exit == 0)
    {
        op = main_menu();
        if (op == 1)
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
        }
        else if (op == 2)
        {
            cout << "Followig(s) are students :";
            display_student(st_name1, matric_1, inter_1, e_cat_1);
        }
        else if (op == 3)
        {
            agregate_calculator(matric_1, inter_1, e_cat_1);
            cout << "Merit list is of order :";
            cout << "Student Name :" << st_name1 << "\tMatric Marks :" << matric_1 << "\tInter Marks :" << inter_1 << "\tEcat Marks :" << e_cat_1 << "\tAgregate :" << agregate_1 << endl;
        }
        else if (op == 4)
        {
            header();
            cout << "Program is being executed---";
            exit = 1;
        }
    }
    if (exit == 0)
    {
        op = main_menu();
        if (op == 1)
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
        }
        else if (op == 2)
        {
            cout << "Followig(s) are students :";
            display_student(st_name1, matric_1, inter_1, e_cat_1);
            display_student(st_name2, matric_2, inter_2, e_cat_2);
        }
        else if (op == 3)
        {
            agregate_calculator(matric_1, inter_1, e_cat_1);
            agregate_calculator(matric_2, inter_2, e_cat_2);
            cout << "Merit list is of order :";
            if (agregate_1 > agregate_2)
            {
                cout << "Student Name :" << st_name1 << "\tMatric Marks :" << matric_1 << "\tInter Marks :" << inter_1 << "\tEcat Marks :" << e_cat_1 << "\tAgregate :" << agregate_1 << endl;
            }
            else
            {
                cout << "Student Name :" << st_name1 << "\tMatric Marks :" << matric_2 << "\tInter Marks :" << inter_2 << "\tEcat Marks :" << e_cat_2 << "\tAgregate :" << agregate_2 << endl;
            }
        }
        else if (op == 4)
        {
            header();
            cout << "Program is being executed---";
            exit = 1;
        }
    }
    if (exit == 0)
    {
        op = main_menu();
        if (op == 1)
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
        }
        else if (op == 2)
        {
            cout << "Followig(s) are students :";
            display_student(st_name1, matric_1, inter_1, e_cat_1);
            display_student(st_name2, matric_2, inter_2, e_cat_2);
            display_student(st_name3, matric_3, inter_3, e_cat_3);
        }
        else if (op == 3)
        {
            agregate_calculator(matric_1, inter_1, e_cat_1);
            agregate_calculator(matric_2, inter_2, e_cat_2);
            agregate_calculator(matric_3, inter_3, e_cat_3);
            cout << "Merit list is of order :";
            if ((agregate_1 > agregate_2) && (agregate_1 > agregate_3))
            {
                cout << "Student Name :" << st_name1 << "\tMatric Marks :" << matric_1 << "\tInter Marks :" << inter_1 << "\tEcat Marks :" << e_cat_1 << "\tAgregate :" << agregate_1 << endl;
            }
            else if ((agregate_1 < agregate_2) && (agregate_2 > agregate_3))
            {
                cout << "Student Name :" << st_name1 << "\tMatric Marks :" << matric_2 << "\tInter Marks :" << inter_2 << "\tEcat Marks :" << e_cat_2 << "\tAgregate :" << agregate_2 << endl;
            }
            else
            {
                cout << "Student Name :" << st_name3 << "\tMatric Marks :" << matric_3 << "\tInter Marks :" << inter_3 << "\tEcat Marks :" << e_cat_3 << "\tAgregate :" << agregate_3 << endl;
            }
        }
        else if (op == 4)
        {
            header();
            cout << "Program is being executed---";
            exit = 1;
        }
    }
    if (exit == 0)
    {
        op = main_menu();
        if (op == 1)
        {
            cout << "At most four stuents can be added.";
        }
        else if (op == 2)
        {
            cout << "Followig(s) are students :";
            display_student(st_name1, matric_1, inter_1, e_cat_1);
            display_student(st_name2, matric_2, inter_2, e_cat_2);
            display_student(st_name3, matric_3, inter_3, e_cat_3);
            display_student(st_name4, matric_4, inter_4, e_cat_4);
        }
        else if (op == 3)
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
        else if (op == 4)
        {
            header();
            cout << "Program is being executed---";
            exit = 1;
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
int main_menu(int op)
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
    cout << name << "\t" << matric << "\t" << inter << "\t" << e_cat << "\t";
}
float agregate_calculator(float matric, float inter, float e_cat)
{
    float agregate = (((matric / 11.0) * 0.25) + ((inter / 11.0) * 0.45) + ((e_cat / 4.0) * 0.30));
    return agregate;
}