#include <iostream>
#include <fstream>
using namespace std;

int const N_CUSTOMER = 5;
int entry_count = 0;

string customer_n_a[N_CUSTOMER] = {" "}; // names given by admin
string customer_p_a[N_CUSTOMER] = {" "}; // pins given by admin

//----------------prototypes-----------------
void loadcustomer();
void add_customer();
void display_customer();
void add_customer_array(string name, string pin);
void savecustomerInFile(string name, string pin);

main()
{
    loadcustomer();
    while (true)
    {
        add_customer();
        display_customer();
    }
}
void loadcustomer()
{
    fstream file;
    file.open("names_pins.txt", ios::in);
    string name, pin;
    entry_count = 0;
    while (!file.eof())
    {
        file >> name;
        file >> pin;
        add_customer_array(name, pin);
    }
    file.close();
}
void add_customer()
{
    string name, pin;
    cout << "Enter customer  name" << endl;
    cin >> name;
    cout << "Enter customer  pin" << endl;
    cin >> pin;
    add_customer_array(name, pin);
    savecustomerInFile(name, pin);
}
void display_customer()
{
    cout << "Name\tPin" << endl;
    for (int i = 0; i < entry_count; i++)
    {
        cout << customer_n_a[i] << "\t" << customer_p_a[i] << endl;
    }
}
void add_customer_array(string name, string pin)
{
    customer_n_a[entry_count] = name;
    customer_p_a[entry_count] = pin;
    entry_count++;
}
void savecustomerInFile(string name, string pin)
{
    fstream file;
    file.open("names_pins.txt", ios::app);
    file << name << " " << pin;
    cout << "Record saved into file " << endl;
    file.close();
}