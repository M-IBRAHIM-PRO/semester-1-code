#include <iostream>
#include <windows.h>

using namespace std;
// student structure
struct student_record
{
    string name;
    student_record *next;
    subject_data *marks_next;
} str;
student_record *head = NULL;

// marks structure
struct subject_data
{
    string name_subject;
    float m_subject;
    subject_data *next;
};
subject_data *head_sd = NULL;

void add_record(string st_name, string subject_name, float subject_marks)
{
    student_record *new_studend = new student_record;
    new_studend->name = st_name;
    new_studend->next = NULL;

    subject_data *subject = new subject_data;
    subject->name_subject = subject_name;
    subject->m_subject = subject_marks;
    subject->next = NULL;
}

student_record *getlast_st_record(student_record *temp)
{
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    return temp;
}
subject_data *getlast_sub_record(subject_data *temp)
{
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    return temp;
}

bool search_record(student_record name)
{
    bool is_found = false;
    student_record *temp = head;
    while (temp != NULL)
    {
        if (temp->name == str.name)
        {
            cout << "student found " << endl;
            is_found = true;
            break;
        }
    }
    if (is_found == false)
    {
        cout << "stuent not found " << endl;
    }
    return is_found;
}

bool take_input()
{
    string st_name, sub_name;
    float sub_m;
    cout << "Enter student name : ";
    cin >> st_name;
    cout << "Enter subject name : ";
    cin >> sub_name;
    cout << "Enter subject marks : ";
    cin >> sub_m;
    add_record(st_name, sub_name, sub_m);
    bool is_found = false;
    student_record *temp = head;
    while (temp != NULL)
    {
        if (temp->name == st_name)
        {
            cout << "student found " << endl;
            is_found = true;
            break;
        }
    }
    if (is_found == false)
    {
        cout << "stuent not found " << endl;
    }
    return is_found;
}
void gotoxy(int x, int y)
{
    COORD cursorPosition;
    cursorPosition.X = x;
    cursorPosition.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cursorPosition);
}

void print_one_record(student_record *one, subject_data *sub)
{
    cout.setf(ios::left);
    cout.width(30);
    cout << one->name;
    cout.width(5);
    cout << "->";
    cout.width(15);
    cout << sub->name_subject;
    cout << endl;
    cout.width(15);
    cout << sub->m_subject;
}
void print_all_records()
{
    student_record *temp_st = head;
    subject_data *temp_sub = head_sd;
    while (temp_st != NULL && temp_sub != NULL)
    {
        print_one_record(temp_st, temp_sub);
        temp_st = temp_st->next;
        temp_sub = temp_sub->next;
    }
}
main()
{
    system("cls");
    while (1)
    {
        gotoxy(0, 19);
        take_input();
    }
}