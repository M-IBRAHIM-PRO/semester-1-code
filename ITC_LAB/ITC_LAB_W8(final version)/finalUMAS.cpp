#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
//-------   GLOBLE VARIABLES   -------
int const t_users = 10;
int count_user = 0;           // used for counting users.
bool announce_result = false; // USED TO ANNOUNCE RESULT.
//-------   GLOBLE ARRAYS   -------
//-------   GENERAL ARRAYS   -------
string user_names_array[t_users];
string pasword_array[t_users];
string role_array[t_users];
//-------   STUDENT RECORD ARRAYS   -------
int const t_students = 10;
int student_counter = 0;
void addStudentIntoArray(string name, int matric, int fsc, int ecat, string p1, string p2, string p3);

string names_array[t_students];
float matric_array[t_students];
float inter_array[t_students];
float ecat_array[t_students];
string prefrence_1_array[t_students];
string prefrence_2_array[t_students];
string prefrence_3_array[t_students];

float agregate_array[t_students];
//-------   UNIVERSITY RECORD ARRAYS   -------
string departments[3];
//-------   FUNCTIONS PROTOTYPE   -------
void header();
string person_checking();
void add_user(string username, string pasword, string role);
int admin_menu();
int student_menu();
void clear_screen();
//-------   START OF MAIN FUNCTION   -------
main()
{
    while (true)
    {
        string type = person_checking();
        if (type == "admin")
        {
            int Admin_Option;
            while (true)
            {
                clear_screen();
                Admin_Option = admin_menu();
                if (Admin_Option == 1)
                {
                    addStudentIntoArray();
                    // Add New Student
                }
                else if (Admin_Option == 2)
                {
                    // View Students
                }
                else if (Admin_Option == 3)
                {
                    // Print the Record in Merit Order
                }
                else if (Admin_Option == 4)
                {
                    // Generate Merit
                }
                else if (Admin_Option == 5)
                {
                    // Seat Management
                }
                else if (Admin_Option == 6)
                {
                    char announce;
                    cout << "Press a to announce result";
                    cin >> announce;
                    if (announce == 'a')
                    {
                        announce_result = true;
                    }
                    else
                    {
                        cout << "You pressed wrong key.";
                    }
                    // Announce Result
                }
                else if (Admin_Option == 7)
                {
                    // Add Users
                }
                else if (Admin_Option == 8)
                {
                    header();
                    cout << "Thanks for using UMAS" << endl;
                    clear_screen();
                    break;
                    // Logout
                }
                clear_screen();
            } // END OF ADMIN
        }
        else if (type == "student")
        {
            int Student_Option;
            while (true)
            {
                clear_screen();
                Student_Option = student_menu();
                if (Student_Option == 1)
                {
                    // View your Profile
                }
                else if (Student_Option == 2)
                {
                    if (announce_result == true)
                    {
                    }
                    else
                    {
                        cout << "Your result is not announced by administration. " << endl;
                    }
                    // Check Admission Status
                }
                else if (Student_Option == 3)
                {
                    header();
                    cout << "Thanks for using UMAS" << endl;
                    clear_screen();
                    break;
                    // Logout
                }
                clear_screen();
            } // END OF STUDENT
        }
        else
        {
            cout << "Your user_name or pasword is wrong .";
        }
    } // END OF WHILE LOOP 1.

} //-------   END OF MAIN FUNCTION   -------
//-------   FUNCTIONS   -------
void header()
{
    cout << "******************************************************" << endl;
    cout << "*       University Admission Management System       *" << endl;
    cout << "******************************************************" << endl;
}
string person_checking()
{
    string user_name, pasword;
    cout << "Enter user_name : ";
    cin >> user_name;
    cout << "Enter pasword : ";
    cin >> pasword;
    for (int i = 0; i < t_users; i++)
    {
        if (user_names_array[i] == user_name && pasword_array[i] == pasword)
        {
            return role_array[i];
        }
    }
    return "User name or pasword is wrong ";
}
void add_user(string username, string pasword, string role)
{
    if (count_user < t_users)
    {
        user_names_array[count_user] = username;
        pasword_array[count_user] = pasword;
        role_array[count_user] = role;
        count_user++;
    }
    else
    {
        cout << "Maximum limit reached .";
    }
}
int admin_menu()
{
    header();
    cout << "       WELCOME AS AN ADMIN   " << endl;
    cout << "------------------------------------------------------" << endl;
    cout << "Select one of the following options numbers.." << endl;
    cout << "1- Add New Student " << endl;
    cout << "2- View Students" << endl;
    cout << "3- Print the Record in Merit Order" << endl;
    cout << "4- Generate Merit" << endl;
    cout << "5- Seat Management" << endl;
    cout << "6- Announce Result" << endl;
    cout << "7- Add Users" << endl;
    cout << "8- Logout" << endl;
    cout << "Your option--";
    int admin_option;
    cin >> admin_option;
    return admin_option;
}
void addStudentIntoArray(string name, int matric, int fsc, int ecat, string p1, string p2, string p3)
{
    if (count_user < t_users)
    {
        names_array[student_counter] = name;
        matric_array[student_counter] = matric;
        inter_array[student_counter] = fsc;
        ecat_array[student_counter] = ecat;
        prefrence_1_array[student_counter] = p1;
        prefrence_2_array[student_counter] = p2;
        prefrence_3_array[student_counter] = p3;
        student_counter++;
    }
    else
    {
        cout << "Atmost students are added.";
    }
}
int student_menu()
{
    header();
    cout << "       WELCOME AS AN STUDENT   " << endl;
    cout << "------------------------------------------------------" << endl;
    cout << "Select one of the following options numbers.." << endl;
    cout << "1- View your Profile " << endl;
    cout << "2- Check Admission Status" << endl;
    cout << "3- Logout" << endl;
    cout << "Your option--";
    int student_option;
    cin >> student_option;
    return student_option;
}
void clear_screen()
{
    cout << "Press any key to continue.";
    getch();
    system("cls");
}
