#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
void header();
int main_menu();
// ADMIN FUNCTIONS
int admin_menu();
void display_customer(string name, string pin);
void display_orders(string name, string order_1, string order_2, string order_3);
void display_customers_bills(string name, int bill);
void adding_stock();
void view_stock();
void adding_bills();
void sorting_total();
void view_shop_bills();
// CUSTOMER FUNCTIONS
int customer_menu();
void view_items();
int calculateBill(string item);
int bill_generator();
void pin_change();
void clear_screen();
//------------------VARIABLES---------------------------------
int user_option;
//(ADMIN VARIABLES)
// USED BY ADMIN TO STORE NAMES OF CUSTOMERS
string customer_1_n_a = "Empty", customer_2_n_a = "Empty", customer_3_n_a = "Empty", customer_4_n_a = "Empty";
// USED BY ADMIN TO STORE PINS(in string data type) OF CUSTOMERS
string customer_1_p_a = "Empty", customer_2_p_a = "Empty", customer_3_p_a = "Empty", customer_4_p_a = "Empty";
// USED BY ADMIN TO MANAGE STORE
int electricity_bill = 0, food_bill = 0, worker_salary = 0, orders_bill = 0, software_bill = 0;
// USED BY ADMIN TO VIEW BILLS OF CUSTOMERS
int bill_c1 = 0, bill_c2 = 0, bill_c3 = 0, bill_c4 = 0;

//(CUTOMER VARIABLES)
// USED BY CUSTOMER  FOR COMPARISON WHILE CHANGING PIN
string customer_1_p = "Empty", customer_2_p = "Empty", customer_3_p = "Empty", customer_4_p = "Empty";
// USED BY CUSTOMERS WHILE CHANGING PIN
string customer_1_n_a_pin_ch, customer_2_n_a_pin_ch, customer_3_n_a_pin_ch, customer_4_n_a_pin_ch, customer_5_n_pin_ch;
// USED WHILE PLACING ORDER
string customer_1_n_a_order_placing = "Empty", customer_2_n_a_order_placing = "Empty", customer_3_n_a_order_placing = "Empty", customer_4_n_a_order_placing = "Empty";
// USED BY CUSTOMERS TO PLACE THREE ORDERS
string order_1_c1 = "Empty", order_2_c1 = "Empty", order_3_c1 = "Empty", order_1_c2 = "Empty", order_2_c2 = "Empty", order_3_c2 = "Empty", order_1_c3 = "Empty", order_2_c3 = "Empty", order_3_c3 = "Empty", order_1_c4 = "Empty", order_2_c4 = "Empty", order_3_c4 = "Empty";
string stock_adding_1 = "Empty", stock_adding_2 = "Empty", stock_adding_3 = "Empty", stock_adding_4 = "Empty", stock_adding_5 = "Empty";
// USED FOR CHECKING NAME & PASWORD
string customer_1_n_a_valid, customer_2_n_a_valid, customer_3_n_a_valid, customer_4_n_a_valid;
// LOGIC
main()
{
    while (true)
    {
        user_option = main_menu();
        clear_screen();
        if (user_option == 1)
        {
            while (true)
            {
                int user_A_option;
                user_A_option = admin_menu();
                clear_screen();
                if (user_A_option == 1)
                {
                    int count = 0;
                    if (count == 0)
                    {
                        cout << "Enter name of customer 1 : " << endl;
                        cin >> customer_1_n_a;
                        cout << "Enter pin of customer 1 : " << endl;
                        cin >> customer_1_p_a;
                        count++;
                    }
                    else if (count == 1)
                    {
                        cout << "Enter name of customer 1 : " << endl;
                        cin >> customer_2_n_a;
                        cout << "Enter pin of customer 1 : " << endl;
                        cin >> customer_2_p_a;
                        count++;
                    }
                    else if (count == 2)
                    {
                        cout << "Enter name of customer 1 : " << endl;
                        cin >> customer_3_n_a;
                        cout << "Enter pin of customer 1 : " << endl;
                        cin >> customer_3_p_a;
                        count++;
                    }
                    else if (count == 3)
                    {
                        cout << "Enter name of customer 1 : " << endl;
                        cin >> customer_4_n_a;
                        cout << "Enter pin of customer 1 : " << endl;
                        cin >> customer_4_p_a;
                        count++;
                    }
                    else
                    {
                        cout << "Atmost four customers can be added.";
                    }
                } // END OF OPTION 1(ADMIN)
                else if (user_A_option == 2)
                {
                    int count = 0;
                    if (count == 0)
                    {
                        cout << "No record to show yet ." << endl;
                        count++;
                    }
                    else if (count == 1)
                    {
                        display_customer(customer_1_n_a, customer_1_p_a);
                        count++;
                    }
                    else if (count == 2)
                    {
                        display_customer(customer_1_n_a, customer_1_p_a);
                        display_customer(customer_2_n_a, customer_2_p_a);
                        count++;
                    }
                    else if (count == 3)
                    {
                        display_customer(customer_1_n_a, customer_1_p_a);
                        display_customer(customer_2_n_a, customer_2_p_a);
                        display_customer(customer_3_n_a, customer_3_p_a);
                        count++;
                    }
                    else if (count == 4)
                    {
                        display_customer(customer_1_n_a, customer_1_p_a);
                        display_customer(customer_2_n_a, customer_2_p_a);
                        display_customer(customer_3_n_a, customer_3_p_a);
                        display_customer(customer_4_n_a, customer_4_p_a);
                        count++;
                    }
                    else
                    {
                        display_customer(customer_1_n_a, customer_1_p_a);
                        display_customer(customer_2_n_a, customer_2_p_a);
                        display_customer(customer_3_n_a, customer_3_p_a);
                        display_customer(customer_4_n_a, customer_4_p_a);
                        count++;
                    }
                } // END OF OPTION 2(ADMIN)
                else if (user_A_option == 3)
                {
                    int count = 0;
                    if (count == 0)
                    {
                        cout << "No record to show yet " << endl;
                        count++;
                    }
                    else if (count == 1)
                    {
                        display_customers_bills(customer_1_n_a, bill_c1);
                        count++;
                    }
                    else if (count == 2)
                    {
                        display_customers_bills(customer_1_n_a, bill_c1);
                        display_customers_bills(customer_2_n_a, bill_c2);
                        count++;
                    }
                    else if (count == 3)
                    {
                        display_customers_bills(customer_1_n_a, bill_c1);
                        display_customers_bills(customer_2_n_a, bill_c2);
                        display_customers_bills(customer_3_n_a, bill_c3);
                        count++;
                    }
                    else if (count == 4)
                    {
                        display_customers_bills(customer_1_n_a, bill_c1);
                        display_customers_bills(customer_2_n_a, bill_c2);
                        display_customers_bills(customer_3_n_a, bill_c3);
                        display_customers_bills(customer_4_n_a, bill_c4);
                        count++;
                    }
                    else
                    {
                        display_customers_bills(customer_1_n_a, bill_c1);
                        display_customers_bills(customer_2_n_a, bill_c2);
                        display_customers_bills(customer_3_n_a, bill_c3);
                        display_customers_bills(customer_4_n_a, bill_c4);
                        count++;
                    }
                } // END OF OPTION 3(ADMIN)
                else if (user_A_option == 4)
                {
                    int count = 0;
                    if (count == 0)
                    {
                        cout << "No record to show yet" << endl;
                        count++;
                    }
                    else if (count == 1)
                    {
                        display_orders(customer_1_n_a, order_1_c1, order_2_c1, order_3_c1);
                        count++;
                    }
                    else if (count == 2)
                    {
                        display_orders(customer_1_n_a, order_1_c1, order_2_c1, order_3_c1);
                        display_orders(customer_1_n_a, order_1_c2, order_2_c2, order_3_c2);
                        count++;
                    }
                    else if (count == 3)
                    {
                        display_orders(customer_1_n_a, order_1_c1, order_2_c1, order_3_c1);
                        display_orders(customer_1_n_a, order_1_c2, order_2_c2, order_3_c2);
                        display_orders(customer_1_n_a, order_1_c3, order_2_c3, order_3_c3);
                        count++;
                    }
                    else if (count == 4)
                    {
                        display_orders(customer_1_n_a, order_1_c1, order_2_c1, order_3_c1);
                        display_orders(customer_1_n_a, order_1_c2, order_2_c2, order_3_c2);
                        display_orders(customer_1_n_a, order_1_c3, order_2_c3, order_3_c3);
                        display_orders(customer_1_n_a, order_1_c4, order_2_c4, order_3_c4);
                        count++;
                    }
                    else
                    {
                        display_orders(customer_1_n_a, order_1_c1, order_2_c1, order_3_c1);
                        display_orders(customer_1_n_a, order_1_c2, order_2_c2, order_3_c2);
                        display_orders(customer_1_n_a, order_1_c3, order_2_c3, order_3_c3);
                        display_orders(customer_1_n_a, order_1_c4, order_2_c4, order_3_c4);
                        count++;
                    }
                } // END OF OPTION 4(ADMIN)
                else if (user_A_option == 5)
                {
                    int count = 0;
                    if (count == 0)
                    {
                        adding_stock();
                        count++;
                    }
                    else if (count == 1)
                    {
                        view_stock();
                        count++;
                    }
                    else if (count == 2)
                    {
                        char update;
                        string stock_u;
                        cout << "Do you want update stock" << endl;
                        cout << "Press y to update and n to move back to menu" << endl;
                        cin >> update;
                        if (update == 'y')
                        {
                            cout << "Enter name of item which you want to update." << endl;
                            cin >> stock_u;
                            if (stock_u == stock_adding_1)
                            {
                                stock_adding_1 = stock_u;
                            }
                            else if (stock_u == stock_adding_2)
                            {
                                stock_adding_2 = stock_u;
                            }
                            else if (stock_u == stock_adding_3)
                            {
                                stock_adding_1 = stock_u;
                            }
                            else if (stock_u == stock_adding_4)
                            {
                                stock_adding_4 = stock_u;
                            }
                            else if (stock_u == stock_adding_5)
                            {
                                stock_adding_5 = stock_u;
                            }
                            else
                            {
                                cout << "You enter wrong stock." << endl;
                            }
                        }
                        else if (update == 'n')
                        {
                            admin_menu();
                        }
                        count++;
                    }
                    else if (count == 3)
                    {
                        view_stock();
                        count++;
                    }
                } // END OF OPTION 5(ADMIN)
                else if (user_A_option == 6)
                {
                    int count = 0;
                    if (count == 0)
                    {
                        adding_bills();
                        count++;
                    }
                    else if (count == 1)
                    {
                        view_shop_bills();
                    }
                    else if (count == 2)
                    {
                        char update;
                        int bill_u;
                        cout << "Do you want update bill" << endl;
                        cout << "Press y to update and n to move back to menu" << endl;
                        cin >> update;
                        if (update == 'y')
                        {
                            cout << "Enter name of bill which you want to update." << endl;
                            cin >> bill_u;
                            if (bill_u == electricity_bill)
                            {
                                electricity_bill = bill_u;
                            }
                            else if (bill_u == food_bill)
                            {
                                food_bill = bill_u;
                            }
                            else if (bill_u == worker_salary)
                            {
                                worker_salary = bill_u;
                            }
                            else if (bill_u == orders_bill)
                            {
                                orders_bill = bill_u;
                            }
                            else
                            {
                                cout << "You enter wrong bill name." << endl;
                            }
                        }
                        else if (update == 'n')
                        {
                            admin_menu();
                        }
                        count++;
                    }
                    else if (count == 3)
                    {
                        view_shop_bills();
                        count++;
                    }
                } // END OF OPTION 6(ADMIN)
                else if (user_A_option == 7)
                {
                    break;
                }
            } // END OF LOOP.
        }     // END OF (ADMIN) options
        else if (user_option == 2)
        {
            while (true)
            {
                int user_C_option;
                user_C_option = customer_menu();
                clear_screen();
                if (user_C_option == 1)
                {
                    view_items();
                } // END OF OPTION 1(CUSTOMER)
                else if (user_C_option == 2)
                {
                    int count = 0;
                    // ONLY CUSTOMER 1 CAN BUY THE ITEMS.
                    if (count == 0)
                    {
                        cout << "Enter your name : ";
                        cin >> customer_1_n_a_valid;
                        cout << "\nEnter your pin : ";
                        cin >> customer_1_p;
                        if (customer_1_p == customer_1_p_a && customer_1_n_a == customer_1_n_a_valid)
                        {
                            bill_c1 = bill_generator();
                            cout << "Your total bill : " << bill_c1 << endl;
                        }
                        else
                        {
                            cout << "Your user_name or pin is wrong. " << endl;
                        }
                        count++;
                    }
                    // ONLY CUSTOMER 2 CAN BUY THE ITEMS.
                    else if (count == 1)
                    {
                        cout << "Enter your name : ";
                        cin >> customer_2_n_a_valid;
                        cout << "\nEnter your pin : ";
                        cin >> customer_2_p;
                        if (customer_2_p == customer_2_p_a && customer_2_n_a == customer_2_n_a_valid)
                        {
                            bill_c2 = bill_generator();
                            cout << "Your total bill : " << bill_c2 << endl;
                        }
                        else
                        {
                            cout << "Your user_name or pin is wrong. " << endl;
                        }
                        count++;
                    }
                    // ONLY CUSTOMER 3 CAN BUY THE ITEMS.
                    else if (count == 2)
                    {
                        cout << "Enter your name : ";
                        cin >> customer_3_n_a_valid;
                        cout << "\nEnter your pin : ";
                        cin >> customer_3_p;
                        if (customer_3_p == customer_3_p_a && customer_3_n_a == customer_3_n_a_valid)
                        {
                            bill_c3 = bill_generator();
                            cout << "Your total bill : " << bill_c3 << endl;
                        }
                        else
                        {
                            cout << "Your user_name or pin is wrong. " << endl;
                        }
                        count++;
                    }
                    // ONLY CUSTOMER 4 CAN BUY THE ITEMS.
                    else if (count == 3)
                    {
                        cout << "Enter your name : ";
                        cin >> customer_4_n_a_valid;
                        cout << "\nEnter your pin : ";
                        cin >> customer_4_p;
                        if (customer_4_p == customer_4_p_a && customer_4_n_a == customer_4_n_a_valid)
                        {
                            bill_c4 = bill_generator();
                            cout << "Your total bill : " << bill_c4 << endl;
                        }
                        else
                        {
                            cout << "Your user_name or pin is wrong. " << endl;
                        }
                        count++;
                    }
                    else
                    {
                        cout << "Only four customers are added by admin." << endl;
                        cout << "If you want to buy items request admin to create your account." << endl;
                    }
                } // END OF OPTION 2(CUSTOMER)
                else if (user_C_option == 3)
                {
                    int count = 0;
                    if (count == 0)
                    {
                        cout << "Enter your name : ";
                        cin >> customer_1_n_a_pin_ch;
                        cout << "\nEnter your pin : ";
                        cin >> customer_1_p;
                        if (customer_1_p == customer_1_p_a && customer_1_n_a == customer_1_n_a_pin_ch)
                        {
                            pin_change();
                        }
                        else
                        {
                            cout << "Your user_name or pin is wrong. " << endl;
                        }
                        count++;
                    }
                    else if (count == 1)
                    {
                        cout << "Enter your name : ";
                        cin >> customer_2_n_a_pin_ch;
                        cout << "\nEnter your pin : ";
                        cin >> customer_2_p;
                        if (customer_2_p == customer_2_p_a && customer_2_n_a == customer_2_n_a_pin_ch)
                        {
                            pin_change();
                        }
                        else
                        {
                            cout << "Your user_name or pin is wrong. " << endl;
                        }
                        count++;
                    }
                    else if (count == 2)
                    {
                        cout << "Enter your name : ";
                        cin >> customer_3_n_a_pin_ch;
                        cout << "\nEnter your pin : ";
                        cin >> customer_3_p;
                        if (customer_3_p == customer_3_p_a && customer_3_n_a == customer_3_n_a_pin_ch)
                        {
                            pin_change();
                        }
                        else
                        {
                            cout << "Your user_name or pin is wrong. " << endl;
                        }
                        count++;
                    }
                    else if (count == 3)
                    {
                        cout << "Enter your name : ";
                        cin >> customer_4_n_a_pin_ch;
                        cout << "\nEnter your pin : ";
                        cin >> customer_4_p;
                        if (customer_4_p == customer_4_p_a && customer_4_n_a == customer_4_n_a_pin_ch)
                        {
                            pin_change();
                        }
                        else
                        {
                            cout << "Your user_name or pin is wrong. " << endl;
                        }
                        count++;
                    }
                    else
                    {
                        cout << "Only four customers are added by admin." << endl;
                        cout << "If you want to buy items request admin to create your account." << endl;
                    }
                } // END OF OPTION 3(CUSTOMER)
                else if (user_C_option == 4)
                {
                    int count = 0;
                    if (count == 0)
                    {
                        cout << "Enter your name : ";
                        cin >> customer_1_n_a_order_placing;
                        cout << "\nEnter your pin : ";
                        cin >> customer_1_p;
                        if (customer_1_p == customer_1_p_a && customer_1_n_a_order_placing == customer_1_n_a)
                        {

                            cout << "Enter items you want to order : ";
                            cin >> order_1_c1, order_2_c1, order_3_c1;
                            cout << "Your order is beng placed." << endl;
                            cout << "You will receive your items shortly" << endl;
                        }
                        else
                        {
                            cout << "Your user_name or pasword is wrong" << endl;
                        }
                        count++;
                    }
                    else if (count == 1)
                    {
                        cout << "Enter your name : ";
                        cin >> customer_2_n_a_order_placing;
                        cout << "\nEnter your pin : ";
                        cin >> customer_2_p;
                        if (customer_2_p == customer_2_p_a && customer_2_n_a_order_placing == customer_2_n_a)
                        {

                            cout << "Enter items you want to order : ";
                            cin >> order_1_c2, order_2_c2, order_3_c2;
                            cout << "Your order is beng placed." << endl;
                            cout << "You will receive your items shortly" << endl;
                        }
                        else
                        {
                            cout << "Your user_name or pasword is wrong" << endl;
                        }
                        count++;
                    }
                    else if (count == 2)
                    {
                        cout << "Enter your name : ";
                        cin >> customer_3_n_a_order_placing;
                        cout << "Enter your pin : ";
                        cin >> customer_3_p;
                        if (customer_3_p == customer_3_p_a && customer_3_n_a_order_placing == customer_3_n_a)
                        {
                            cout << "Enter items you want to order : ";
                            cin >> order_1_c3, order_2_c3, order_3_c3;
                            cout << "Your order is beng placed." << endl;
                            cout << "You will receive your items shortly" << endl;
                        }
                        else
                        {
                            cout << "Your user_name or pasword is wrong" << endl;
                        }
                        count++;
                    }
                    else if (count == 3)
                    {
                        cout << "Enter your name : ";
                        cin >> customer_4_n_a_order_placing;
                        cout << "\nEnter your pin : ";
                        cin >> customer_4_p;
                        if (customer_4_p == customer_4_p_a && customer_4_n_a_order_placing == customer_4_n_a)
                        {
                            cout << "Enter items you want to order : ";
                            cin >> order_1_c4, order_2_c4, order_3_c4;
                            cout << "Your order is beng placed." << endl;
                            cout << "You will receive your items shortly" << endl;
                        }
                        else
                        {
                            cout << "Your user_name or pasword is wrong" << endl;
                        }
                        count++;
                    }
                    else
                    {
                        cout << "Only four customers are added by admin." << endl;
                        cout << "If you want to buy items request admin to create your account." << endl;
                    }
                } // END OF OPTION 4(CUSTOMER)
                else if (user_C_option == 5)
                {
                    break;
                } // END OF OPTION 5
            }     // END OF LOOP.
        }         // END OF (customer) options
        else if (user_option == 3)
        {
            header();
            cout << "Thanks for coming to our store." << endl;
            break;
        }
        else
        {
            cout << "Enter a valid input" << endl;
            continue;
        }
    } // END OF LOOP
} // END OF MAIN.
void header()
{
    cout << "***************************************************************** " << endl;
    cout << "*		        Book Store Management System		             * " << endl;
    cout << "***************************************************************** " << endl;
}
int main_menu()
{
    header();
    cout << "                                                                 " << endl;
    cout << "                 Welcome To The Book Store                       " << endl;
    cout << "                                                                 " << endl;
    cout << "You want to login as an ADMIN OR CUSTOMER.                       " << endl;
    cout << "                                                                 " << endl;
    cout << "For ADMIN press 1.                                               " << endl;
    cout << "For CUSTOMER press 2.                                            " << endl;
    cout << "To EXIT program press 3.                                            " << endl;
    cout << "                                                                 " << endl;
    //  OPTION FROM USER.
    cout << "Your option---                                                   " << endl;
    cin >> user_option;
    return user_option;
}
// FUNCTIONS FOR ADMIN
int admin_menu()
{
    header();
    cout << "                                                                 " << endl;
    cout << "                 Welcome To The Book Store                       " << endl;
    cout << "                                                                 " << endl;
    cout << "Main Menu--------------------------------------------------------" << endl;
    cout << "                                                                 " << endl;
    cout << "1-Add Customers" << endl;
    cout << "2-View Customers" << endl;
    cout << "3-View Bills  (history)" << endl;
    cout << "4-View odders placed by the customers." << endl;
    cout << "5-Add / Update stock of the shop." << endl;
    cout << "6-Manage the expenditures of the shop." << endl;
    cout << "7-Back to main menu." << endl;
    cout << "Your option---                                                   " << endl;
    cin >> user_option;
    return user_option;
}
void adding_stock()
{
    cout << "Enter the things(5) you want to enter to existing stock : ";
    cin >> stock_adding_1;
    cin >> stock_adding_2;
    cin >> stock_adding_3;
    cin >> stock_adding_4;
    cin >> stock_adding_5;
}
void view_stock()
{
    cout << "Followings were the things added by ADMIN : " << endl;
    cout << "1-" << stock_adding_1 << endl;
    cout << "2-" << stock_adding_2 << endl;
    cout << "3-" << stock_adding_3 << endl;
    cout << "4-" << stock_adding_4 << endl;
    cout << "5-" << stock_adding_5 << endl;
}
void adding_bills()
{
    cout << "Enter Electricity bill : ";
    cin >> electricity_bill;
    cout << "Enter Food bill : ";
    cin >> food_bill;
    cout << "Enter Workers salary : ";
    cin >> worker_salary;
    cout << "Enter Orders bill : ";
    cin >> orders_bill;
}
void sorting_total() // USED BY ADMIN IN MAINTANENCE
{
    if (electricity_bill > food_bill && electricity_bill > worker_salary && electricity_bill > orders_bill)
    {
        cout << "\nElectricity bill : "
             << "\t" << electricity_bill;
        if (food_bill > worker_salary && food_bill > orders_bill)
        {
            cout << "\nFood bill        : "
                 << "\t" << food_bill;
            if (worker_salary > orders_bill)
            {
                cout << "\nWorker Salary    : "
                     << "\t" << worker_salary;
                cout << "\nOrders bill      : "
                     << "\t" << orders_bill;
            }
            else
            {
                cout << "\nOrders bill      : "
                     << "\t" << orders_bill;
                cout << "\nWorker Salary    : "
                     << "\t" << worker_salary;
            }
        }
        if (worker_salary > food_bill && worker_salary > orders_bill)
        {
            cout << "\nWorker Salary    : "
                 << "\t" << worker_salary;
            if (food_bill > orders_bill)
            {
                cout << "\nFood bill        : "
                     << "\t" << food_bill;
                cout << "\nOrders bill      : "
                     << "\t" << orders_bill;
            }
            else
            {
                cout << "\nOrders bill      : "
                     << "\t" << orders_bill;
                cout << "\nFood bill        : "
                     << "\t" << food_bill;
            }
        }
        if (orders_bill > food_bill && orders_bill > worker_salary)
        {
            cout << "\nOrders bill      : "
                 << "\t" << orders_bill;
            if (food_bill > worker_salary)
            {
                cout << "\nFood bill        : "
                     << "\t" << food_bill;
                cout << "\nWorker Salary    : "
                     << "\t" << worker_salary;
            }
            else
            {
                cout << "\nWorker Salary    : "
                     << "\t" << worker_salary;
                cout << "\nFood bill        : "
                     << "\t" << food_bill;
            }
        }
    }
    if (food_bill > electricity_bill && food_bill > worker_salary && food_bill > orders_bill)
    {
        cout << "\nFood bill        : "
             << "\t" << food_bill;
        if (electricity_bill > worker_salary && electricity_bill > orders_bill)
        {
            cout << "\nElectricity bill : "
                 << "\t" << electricity_bill;
            if (worker_salary > orders_bill)
            {
                cout << "\nWorker Salary    : "
                     << "\t" << worker_salary;
                cout << "\nOrders bill      : "
                     << "\t" << orders_bill;
            }
            else
            {
                cout << "\nOrders bill      : "
                     << "\t" << orders_bill;
                cout << "\nWorker Salary    : "
                     << "\t" << worker_salary;
            }
        }
        if (worker_salary > electricity_bill && worker_salary > orders_bill)
        {
            cout << "\nWorker Salary    : "
                 << "\t" << worker_salary;
            if (electricity_bill > orders_bill)
            {
                cout << "\nElectricity bill : "
                     << "\t" << electricity_bill;
                cout << "\nOrders bill      : "
                     << "\t" << orders_bill;
            }
            else
            {
                cout << "\nOrders bill      : "
                     << "\t" << orders_bill;
                cout << "\nElectricity bill : "
                     << "\t" << electricity_bill;
            }
        }
        if (orders_bill > electricity_bill && orders_bill > worker_salary)
        {
            cout << "\nOrders bill      : "
                 << "\t" << orders_bill;
            if (electricity_bill > worker_salary)
            {
                cout << "\nElectricity bill : "
                     << "\t" << electricity_bill;
                cout << "\nWorker Salary    : "
                     << "\t" << worker_salary;
            }
            else
            {
                cout << "\nWorker Salary    : "
                     << "\t" << worker_salary;
                cout << " " << endl;
                cout << " " << endl;
                cout << "\nElectricity bill : "
                     << "\t" << electricity_bill;
            }
        }
    }
    if (worker_salary > electricity_bill && worker_salary > food_bill && worker_salary > orders_bill)
    {
        cout << "\nWorker Salary    : "
             << "\t" << worker_salary;

        if (electricity_bill > food_bill && electricity_bill > orders_bill)
        {
            cout << "\nElectricity bill : "
                 << "\t" << electricity_bill;
            if (food_bill > orders_bill)
            {
                cout << "\nFood bill        : "
                     << "\t" << food_bill;
                cout << "\nOrders bill      : "
                     << "\t" << orders_bill;
            }
            else
            {
                cout << "\nOrders bill      : "
                     << "\t" << orders_bill;
                cout << "\nFood bill        : "
                     << "\t" << food_bill;
            }
        }
        if (food_bill > electricity_bill && food_bill > orders_bill)
        {
            cout << "\nFood bill        : "
                 << "\t" << food_bill;
            if (electricity_bill > orders_bill)
            {
                cout << "\nElectricity bill : "
                     << "\t" << electricity_bill;
                cout << "\nOrders bill      : "
                     << "\t" << orders_bill;
                ;
            }
            else
            {
                cout << "\nOrders bill      : "
                     << "\t" << orders_bill;
                cout << "\nElectricity bill : "
                     << "\t" << electricity_bill;
            }
        }
        if (orders_bill > electricity_bill && orders_bill > food_bill)
        {
            cout << "\nOrders bill      : "
                 << "\t" << orders_bill;
            if (electricity_bill > food_bill)
            {
                cout << "\nElectricity bill : "
                     << "\t" << electricity_bill;
                cout << "\nFood bill        : "
                     << "\t" << food_bill;
            }
            else
            {
                cout << "\nFood bill        : "
                     << "\t" << food_bill;
                cout << "\nElectricity bill : "
                     << "\t" << electricity_bill;
            }
        }
    }
    if (orders_bill > electricity_bill && orders_bill > food_bill && orders_bill > worker_salary)
    {
        cout << "\nOrders bill      : "
             << "\t" << orders_bill;

        if (electricity_bill > food_bill && electricity_bill > worker_salary)
        {
            cout << "\nElectricity bill : "
                 << "\t" << electricity_bill;
            if (food_bill > worker_salary)
            {
                cout << "\nFood bill        : "
                     << "\t" << food_bill;
                cout << "\nWorker Salary    : "
                     << "\t" << worker_salary;
            }
            else
            {
                cout << "\nWorker Salary    : "
                     << "\t" << worker_salary;
                cout << "\nFood bill        : "
                     << "\t" << food_bill;
            }
        }
        if (food_bill > electricity_bill && food_bill > worker_salary)
        {
            cout << "\nFood bill        : "
                 << "\t" << food_bill;
            if (electricity_bill > worker_salary)
            {
                cout << "\nElectricity bill : "
                     << "\t" << electricity_bill;
                cout << "\nWorker Salary    : "
                     << "\t" << worker_salary;
            }
            else
            {
                cout << "\nWorker Salary    : "
                     << "\t" << worker_salary;
                cout << "\nElectricity bill : "
                     << "\t" << electricity_bill;
            }
        }
        if (worker_salary > electricity_bill && worker_salary > food_bill)
        {
            cout << "\nWorker Salary    : "
                 << "\t" << worker_salary;
            if (electricity_bill > food_bill)
            {
                cout << "\nElectricity bill : "
                     << "\t" << electricity_bill;
                cout << "\nFood bill        : "
                     << "\t" << food_bill;
            }
            else
            {
                cout << "\nFood bill        : "
                     << "\t" << food_bill;
                cout << "\nElectricity bill : "
                     << "\t" << electricity_bill;
            }
        }
    }
    cout << "Total                 " << electricity_bill + food_bill + worker_salary + orders_bill;
}
void view_shop_bills()
{
    sorting_total();
}
void display_customer(string name, string pin)
{
    if (name != "Empty")
    {
        cout << name << "\t" << pin << endl;
    }
}
void display_orders(string name, string order_1, string order_2, string order_3)
{
    cout << "Following(s) are the customers and their orders : " << endl;
    cout << name << "\t" << order_1 << "\t" << order_2 << "\t" << order_3 << endl;
}
void display_customers_bills(string name, int bill)
{
    cout << "\nFollowing(s) are the customers and their bills : " << endl;
    cout << name << "\t" << bill << endl;
}
// FUNCTIONS FOR CUSTOMERS.
int customer_menu()
{
    header();
    cout << "                                                                 " << endl;
    cout << "                 Welcome To The Book Store                       " << endl;
    cout << "                                                                 " << endl;
    cout << "Main Menu--------------------------------------------------------" << endl;
    cout << "                                                                 " << endl;
    cout << "1-View Items" << endl;
    cout << "2-Buy the required items" << endl;
    cout << "3-Change pin" << endl;
    cout << "4-Place odders." << endl;
    cout << "5-Back to main menu." << endl;
    cout << "Your option---                                                   " << endl;
    cin >> user_option;
    return user_option;
}
void view_items()
{
    cout << "\nFollowings items (with their prices) are available in store : ";
    cout << "\n1-Books---------------------Rs 300" << endl;
    cout << "\n2-Pens----------------------Rs 70" << endl;
    cout << "\n3-Geometry Items------------Rs 500" << endl;
    cout << "\n4-White Boards--------------Rs 700" << endl;
    cout << "\n5-Registers-----------------Rs 100" << endl;
}
int calculateBill(string item)
{
    int price;
    if (item == "books")
    {
        price = 300;
    }
    if (item == "pens")
    {
        price = 70;
    }
    if (item == "geometry items")
    {
        price = 500;
    }
    if (item == "white board")
    {
        price = 700;
    }
    if (item == "register")
    {
        price = 100;
    }
    else
    {
        cout << "Enter correct name of items ." << endl;
        customer_menu();
    }
    return price;
}
int bill_generator()
{
    int n;
    int bill;
    int t_bill = 0;
    string item;

    cout << "Enter  number  of items you want to buy : " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter item name:";
        cin >> item;
        bill = calculateBill(item);
        t_bill = t_bill + bill;
    }
    return t_bill;
}
void pin_change()
{
    string customer_p_changed;
    cout << "Enter your new pin : ";
    cin >> customer_p_changed;
    cout << "Your pin is being updated in customer 2--";
    cout << "Your pin is updated successfully----";
}
// FUNCTION FOR OPTION 3.
void clear_screen()
{
    cout << "Press any key to continue.";
    getch();
    system("cls");
}