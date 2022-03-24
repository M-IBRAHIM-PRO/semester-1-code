#include <iostream>
using namespace std;
struct laptop_type
{
    string name;
    int price;
    laptop_type *next;
};
laptop_type *head = NULL;

//__prototypes
void take_input();
laptop_type *getlastrecord(laptop_type *temp);
void add_record(string lap_name, int price);
void print_one_record(laptop_type *one);
void print_all_records();
void search_record(string name);
//----------------------------------
main()
{
    string name;
    take_input();
    take_input();
    cout << "Enter name to sea: ";
    cin >> name;
    search_record(name);
    print_all_records();
}
void search_record(string name)
{
    bool is_found = false;
    laptop_type *temp = head;
    while (temp != NULL)
    {
        if (temp->name == name)
        {
            cout << "Laptop found " << endl;
            is_found = true;
            break;
        }
    }
    if (is_found == false)
    {
        cout << "Laptop not found " << endl;
    }
}
void take_input()
{
    string lap_name;
    int lap_price;
    cout << "Enter name  : ";
    cin >> lap_name;
    cout << "Enter price : ";
    cin >> lap_price;
    add_record(lap_name, lap_price);
}
// jab tak next empty nahi to temp may next ki value ho
laptop_type *getlastrecord(laptop_type *temp)
{
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    return temp;
}

void add_record(string lap_name, int price)
{
    laptop_type *record = new laptop_type; // record pointer new keyword tko point kar raha ha
    record->name = lap_name;
    record->price = price;
    record->next = NULL;
    if (head == NULL)
    {
        head = record;
    }
    else
    {
        laptop_type *temp = getlastrecord(head);
        temp->next = record;
    }
}
void print_one_record(laptop_type *one)
{
    cout << "Name of latop : " << one->name << endl;
    cout << "Price of laptop : " << one->price << endl;
}
void print_all_records()
{
    laptop_type *temp = head;
    while (temp != NULL)
    {
        print_one_record(temp);
        temp = temp->next;
    }
}