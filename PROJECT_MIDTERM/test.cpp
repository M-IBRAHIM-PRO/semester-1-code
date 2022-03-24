#include <iostream>
#include <stdlib.h>
#include <conio.h>
// checked include in main code
using namespace std;

int const N_CUSTOMER = 5;
int const N_ORDERS = 5;
int entry_count = 0;
int order_place_count = 0;

//------prototypes---------
void add_customer();
void add_customer_array(string name, string pin);
void display_order(string array[]);
void view_orders();
void order_placing();
void clear_screen();

string customer_n_a[N_CUSTOMER] = {" "}; // names given by admin
string customer_p_a[N_CUSTOMER] = {" "};
string orders[N_ORDERS] = {" "};
string customer_1[N_ORDERS] = {" "}; // used to store the orders placed by customer 1.
string customer_2[N_ORDERS] = {" "}; // used to store the orders placed by customer 2.
string customer_3[N_ORDERS] = {" "}; // used to store the orders placed by customer 3.
string customer_4[N_ORDERS] = {" "}; // used to store the orders placed by customer 4.
string customer_5[N_ORDERS] = {" "}; // used to store the orders placed by customer 5.

main()
{
    add_customer();
    // view_orders();
    order_placing();
    view_orders();
    clear_screen();
}
void add_customer()
{
    string name, pin;
    cout << "Enter customer  name" << endl;
    cin >> name;
    cout << "Enter customer  pin" << endl;
    cin >> pin;
    add_customer_array(name, pin);
}
void add_customer_array(string name, string pin)
{
    customer_n_a[entry_count] = name;
    customer_p_a[entry_count] = pin;
    entry_count++;
}
void display_order(string array[]) // used in another function for displaying array.
{
    int index = 0;
    while (array[index] != "\0")
    {
        cout << array[index] << " ";
        index++;
    }
}
void order_placing()
{
    string customer_n, customer_p;
    cout << "Enter name : ";
    cin >> customer_n;
    cout << "Enter pin : ";
    cin >> customer_p;
    if (customer_n_a[order_place_count] == customer_n && customer_p_a[order_place_count] == customer_p)
    {
        int n;
        cout << "Enter number of orders you want to place (max = 5) : ";
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cout << "Enter order " << i + 1 << " : ";
            cin >> orders[i];
        }
        // cout << "Nmae " << customer_n << endl;
        // cout << "Name in array " << customer_n_a[0] << endl;
        // cout << "Checking array:" << endl;
        // for (int i = 0; i < n; i++)
        // {
        //     cout << orders[i] << " ";
        // }
        // cout << endl;
        if (customer_n == customer_n_a[0])
        {
            for (int i = 0; i < n; i++)
            {
                customer_1[i] = orders[i];
            }
        }
        else if (customer_n == customer_n_a[1])
        {
            for (int i = 0; i < n; i++)
            {
                customer_2[i] = orders[i];
            }
        }
        else if (customer_n == customer_3[0])
        {
            for (int i = 0; i < n; i++)
            {
                customer_3[i] = orders[i];
            }
        }
        else if (customer_n == customer_4[0])
        {
            for (int i = 0; i < n; i++)
            {
                customer_4[i] = orders[i];
            }
        }
        else if (customer_n == customer_5[0])
        {
            for (int i = 0; i < n; i++)
            {
                customer_5[i] = orders[i];
            }
        }
        order_place_count++;
    }
    else
    {
        cout << "User_name or pin is wrong " << endl;
    }
}
void view_orders()
{
    cout << "Following are the orders." << endl;
    cout << endl;
    cout << customer_n_a[0] << "\t\t\t";
    display_order(customer_1);
    cout << endl;
    // cout << customer_n_a[1] << "\t";
    // display_order(customer_2);
    // cout << endl;
    // cout << customer_n_a[2] << "\t";
    // display_order(customer_3);
    // cout << endl;
    // cout << customer_n_a[3] << "\t";
    // display_order(customer_4);
    // cout << endl;
    // cout << customer_n_a[4] << "\t";
    // display_order(customer_5);
    // cout << endl;
}
void clear_screen()
{
    cout << "Press any key to continue.";
    getch();
    system("cls");
}
