#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
// CONST VARIABLES
int const N_CUSTOMER = 5;
int const N_STOCKS = 10;
int const N_BILLS = 4;
int const N_ORDERS = 10;

// GLOBAL VARIABLES
int user_option;
int entry_count = 0;
int customer_display = 0; // used for counting customer while displaying
// int bill_display = 0;
int bill_count = 0;
int order_place_count = 0;
int pin_change_count = 0;

// GLOBAL ARRAYS
string customer_n_a[N_CUSTOMER] = {" "};  // names given by admin
string customer_p_a[N_CUSTOMER] = {" "};  // pins given by admin
int customers_bills[N_CUSTOMER] = {0};    // used to store the bills of customers.
string stock_adding[N_STOCKS] = {" "};    // used for adding stock of shop.
int bills_shop[N_BILLS] = {0};            // used for adding bills of shop.
string bills_shop_names[N_BILLS] = {" "}; // used to store names of bills.
int stock_prices[N_STOCKS] = {0};         // used for adding prices of stock.
string orders[N_ORDERS] = {" "};          // used for taking orders from customers
string customer_1[N_ORDERS] = {" "};      // used to store the orders placed by customer 1.
string customer_2[N_ORDERS] = {" "};      // used to store the orders placed by customer 2.
string customer_3[N_ORDERS] = {" "};      // used to store the orders placed by customer 3.
string customer_4[N_ORDERS] = {" "};      // used to store the orders placed by customer 4.
string customer_5[N_ORDERS] = {" "};      // used to store the orders placed by customer 5.

// PROTOTYPES 0F FUNCTIONS
void header();
int main_menu();
//------------------------FOR ADMIN SECTION---------------------------
int admin_menu();
void add_customer();
void add_customer_array(string name, string pin);
void display_customer();
void display_customers_bills();
void display_order(string array[]);
void view_orders();
int stock_management_menu();
void adding_stock_with_price();
void view_stock();
void update_stock();
int shop_management_menu();
void add_bills_shop();
void view_bills_shop();
void update_bill();
void sorting(int list[], string names[], int array_size);

//------------------------FOR CUSTOMER SECTION---------------------------
int customer_menu();
void view_items();
void clear_screen();
int calculateBill(string item);
void bill_generator();
void store_bill(int bill, int count);
void pin_change();
void order_placing();

//------START OF MAIN-----------------
main()
{
    // local VARIABLES
    int main_option;
    int admin_option;
    int customer_option;
    //_______________END OF LOCAL VARIABLES___________________
    while (true)
    {
        main_option = main_menu();
        clear_screen();
        if (main_option == 1) //------------start of ADMIN SECTION--------
        {
            while (true)
            {
                admin_option = admin_menu();
                clear_screen();
                //------------start of ADMIN OPTIONS--------

                if (admin_option == 1) // for adding customers
                {
                    add_customer();
                    clear_screen();
                }
                else if (admin_option == 2) // View Customers
                {
                    if (customer_n_a[0] != " " && customer_p_a[0] != " ")
                    {
                        display_customer();
                        clear_screen();
                    }
                    else
                    {
                        cout << "No customer is being added yet" << endl;
                        cout << endl;
                        clear_screen();
                    }
                }
                else if (admin_option == 3) // View Bills  (history)
                {
                    if (customer_n_a[0] != " " && customers_bills[0] != 0)
                    {
                        display_customers_bills();
                        clear_screen();
                    }
                    else
                    {
                        cout << "No customer has done shoping yet" << endl;
                        cout << endl;
                        clear_screen();
                    }
                }
                else if (admin_option == 4) // View odders placed by the customers
                {
                    if (customer_1[1] != " ")
                    {
                        view_orders();
                        clear_screen();
                    }
                    else
                    {
                        cout << "No order has been placed." << endl;
                        cout << endl;
                        clear_screen();
                    }
                }
                else if (admin_option == 5) // Add / Update stock of the shop
                {
                    int Stock_menu_option;
                    while (true)
                    {
                        Stock_menu_option = stock_management_menu();
                        clear_screen();
                        if (Stock_menu_option == 1)
                        {
                            adding_stock_with_price();
                            clear_screen();
                        }
                        else if (Stock_menu_option == 2)
                        {
                            if (stock_adding[0] != " ")
                            {
                                view_stock();
                                clear_screen();
                            }
                            else
                            {
                                cout << "No stock has been added yet." << endl;
                                clear_screen();
                            }
                        }
                        else if (Stock_menu_option == 3)
                        {
                            update_stock();
                            clear_screen();
                        }
                        else if (Stock_menu_option == 4)
                        {
                            break;
                        }
                        else
                        {
                            cout << "Enter a valid input" << endl;
                            clear_screen();
                            break;
                        }
                    }
                }
                else if (admin_option == 6) // Manage the expenditures of the shop
                {
                    int Shop_menu_option;
                    while (true)
                    {
                        Shop_menu_option = shop_management_menu();
                        clear_screen();
                        if (Shop_menu_option == 1)
                        {
                            add_bills_shop();
                            clear_screen();
                        }
                        else if (Shop_menu_option == 2)
                        {
                            if (bills_shop[0] != 0)
                            {
                                view_bills_shop();
                                clear_screen();
                            }
                            else
                            {
                                cout << "No bills are added by the admin." << endl;
                                cout << endl;
                                clear_screen();
                            }
                        }
                        else if (Shop_menu_option == 3)
                        {
                            update_bill();
                            clear_screen();
                        }
                        else if (Shop_menu_option == 4)
                        {
                            break;
                        }
                        else
                        {
                            cout << "Enter a valid input" << endl;
                            cout << endl;
                            clear_screen();
                            break;
                        }
                    }
                }
                else if (admin_option == 7) // exit from admin section
                {
                    break;
                }
                else
                {
                    cout << "Invalid input" << endl;
                    cout << endl;
                    clear_screen();
                    break;
                }

            } // END OF WHILE LOOP
        }     // END OF ADMIN SECTION

        else if (main_option == 2) //------------start of CUSTOMER SECTION--------
        {
            while (true)
            {
                customer_option = customer_menu();
                clear_screen();
                //------------start of CUSTOMER OPTIONS--------
                if (customer_option == 1) // View Items
                {
                    if (stock_adding[0] != " ")
                    {
                        view_items();
                        clear_screen();
                    }
                    else
                    {
                        cout << "There is no stock to display" << endl;
                        cout << endl;
                        clear_screen();
                    }
                }
                else if (customer_option == 2) // Buy the required items
                {
                    bill_generator();
                    clear_screen();
                }
                else if (customer_option == 3) // Change pin
                {
                    pin_change();
                    clear_screen();
                }
                else if (customer_option == 4) // Place odders
                {
                    order_placing();
                    clear_screen();
                }
                else if (customer_option == 5) // exit from customer section
                {
                    break;
                }
                else
                {
                    cout << "Invalid input" << endl;
                    cout << endl;
                    clear_screen();
                    break;
                }

            } // END OF WHILE LOOP
        }     // END OF CUSTOMER SECTION

        else if (main_option == 3) //-------- EXIT FROM THE PROGRAM------
        {
            cout << "Thanks for using BOOK STORE MANAGEMENT SYSTEM." << endl;
            cout << endl;
            break;
        }

        else //--------------IN CASE OF WRONG INPUT OF MAIN MENU--------
        {
            cout << "Enter a valid input" << endl;
            clear_screen();
            continue;
        }
    } //----------END OF WHILE LOOP------------------
} // END OF MAIN

//--------------FUNCTIONS-------------------
void header()
{
    cout << "***************************************************************** " << endl;
    cout << "              *Book Store Management System* " << endl;
    cout << "***************************************************************** " << endl;
}
int main_menu()
{
    header();
    cout << "                                                                 " << endl;
    cout << "                 Welcome To Book Store                       " << endl;
    cout << "                                                                 " << endl;
    cout << "You want to login as an ADMIN OR CUSTOMER.                       " << endl;
    cout << "                                                                 " << endl;
    cout << "For ADMIN press 1.                                               " << endl;
    cout << "For CUSTOMER press 2.                                            " << endl;
    cout << "To EXIT program, press 3.                                            " << endl;
    cout << "                                                                 " << endl;
    //  OPTION FROM USER.
    cout << "Your option---                                                   " << endl;
    cin >> user_option;
    return user_option;
}

//------------------------FOR ADMIN SECTION---------------------------
int admin_menu()
{
    header();
    cout << "                                                                 " << endl;
    cout << "                 Welcome To Book Store                       " << endl;
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
void display_customer()
{
    cout << "Following(s) are customers and their pins: " << endl;
    cout << "Name\t Pin" << endl;
    if (customer_display < N_CUSTOMER)
    {
        for (int i = 0; i <= customer_display; i++)
        {
            cout << customer_n_a[i] << "\t\t\t" << customer_p_a[i] << endl;
        }
    }
    else
    {
        for (int i = 0; i <= N_CUSTOMER - 1; i++)
        {
            cout << customer_n_a[i] << "\t\t\t" << customer_p_a[i] << endl;
        }
    }
    customer_display++;
}
void display_customers_bills()
{
    cout << "Following(s) are the customers and their bills : " << endl;
    cout << "Name\t\t\tBill" << endl;
    if (bill_count < N_CUSTOMER)
    {
        for (int i = 0; i <= bill_count; i++)
        {
            if (customer_n_a[i] != " " && customers_bills[i] != 0)
                cout << customer_n_a[i] << "\t\t\t" << customers_bills[i] << endl;
        }
    }
    else
    {
        for (int i = 0; i <= N_CUSTOMER - 1; i++)
        {
            cout << customer_n_a[i] << "\t\t\t" << customers_bills[i] << endl;
        }
    }
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
void view_orders()
{
    if (orders[0] != " ")
    {
        cout << "Following are the orders." << endl;
        cout << endl;
        if (customer_1[0] != " " && customer_1[0] != " ")
        {
            cout << customer_n_a[0] << "\t";
            display_order(customer_1);
            cout << endl;
        }
        if (customer_2[0] != " ")
        {
            cout << customer_n_a[1] << "\t";
            display_order(customer_2);
            cout << endl;
        }
        if (customer_3[0] != " ")
        {
            cout << customer_n_a[2] << "\t";
            display_order(customer_3);
            cout << endl;
        }
        if (customer_4[0] != " ")
        {
            cout << customer_n_a[3] << "\t";
            display_order(customer_4);
            cout << endl;
        }
        if (customer_5[0] != " ")
        {
            cout << customer_n_a[4] << "\t";
            display_order(customer_5);
            cout << endl;
        }
    }
    else
    {
        cout << "No order have been placed yet." << endl;
    }
}
int stock_management_menu()
{
    header();
    cout << "                                                                 " << endl;
    cout << "Stock Management  Menu--------------------------------------------------------" << endl;
    cout << "                                                                 " << endl;
    cout << "1-Add Stock of shop" << endl;
    cout << "2-View added stock " << endl;
    cout << "3-Update added stock" << endl;
    cout << "4-Back to admin menu" << endl;
    cout << "Your option---                                                   " << endl;
    cin >> user_option;
    return user_option;
}
void adding_stock_with_price()
{
    int n_stock;
    cout << "Maximum number of stocks you can enter : " << N_STOCKS << endl;
    cout << "How many stocks you want to add : ";
    cin >> n_stock;
    for (int i = 0; i < n_stock; i++)
    {
        cout << "Enter stock " << i + 1 << " : ";
        cin >> stock_adding[i];
        cout << "Enter stock " << i + 1 << " price : ";
        cin >> stock_prices[i];
    }
    cout << "You stocks are being added." << endl;
}
void view_stock()
{
    int index = 0;
    cout << "Following are the stocks added by ADMIN." << endl;
    cout << "Item\t\tPrice(Rs)" << endl;
    while (stock_adding[index] != "\0")
    {
        cout << stock_adding[index] << "\t\t" << stock_prices[index] << endl;
        index++;
    }
}
void update_stock()
{
    string stock_name, stock_name_final;
    cout << "Enter name of stock which you want to update : ";
    cin >> stock_name;
    cout << "Enter name of new stock : ";
    cin >> stock_name_final;
    int index = 0;
    while (stock_adding[index] == "\0")
    {
        if (stock_adding[index] == stock_name)
        {
            stock_adding[index] = stock_name_final;
        }
        index++;
    }
    cout << "Your stock is updated---" << endl;
}
int shop_management_menu()
{
    header();
    cout << "                                                                 " << endl;
    cout << "Shop Management  Menu--------------------------------------------" << endl;
    cout << "                                                                 " << endl;
    cout << "1-Add Bills of shop" << endl;
    cout << "2-View added bills " << endl;
    cout << "3-Update added bills" << endl;
    cout << "4-Back to admin menu" << endl;
    cout << "Your option---                                                   " << endl;
    cin >> user_option;
    return user_option;
}
void add_bills_shop()
{
    for (int i = 0; i < N_BILLS; i++)
    {
        cout << "Enter bill " << i + 1 << " name  : ";
        cin >> bills_shop_names[i];
        cout << "Enter " << bills_shop_names[i] << " bill amount : ";
        cin >> bills_shop[i];
    }
    cout << "Your bills added" << endl;
}
void sorting(int list[], string names[], int array_size)
{
    int min;
    int i;
    int j;
    int loc;
    int temp;
    string temp_name;
    for (i = 0; i < array_size - 1; i++)
    {
        min = list[i];
        loc = i; // INDEX OF LIST[i].
        for (j = i + 1; j < array_size; j++)
        {
            if (list[j] < min)
            {
                min = list[j];
                loc = j;
            }
            temp = list[i];         // IT STORES THE VALUE OF FIRST ELEMENT OF ARRAY IN SEPERATE VARIABLE.
            temp_name = names[i];   // FOR NAME SWAPING
            list[i] = list[loc];    // IT PLACE THE SMALLEST VALUE TO FIRST PLACE.
            names[i] = names[loc];  // FOR NAME SWAPING
            list[loc] = temp;       // IT PLACE THE ELEMENT PLACED IN SEPERATE VARIABLE TO THE LOCATION WHERE SMALLEST VALUE WAS FOUND.
            names[loc] = temp_name; // FOR NAME SWAPING
        }
    }
}
void view_bills_shop()
{
    cout << "Your bills in asseding order are as show below : " << endl;
    cout << "Name\t\tAmount(Rs)" << endl;
    sorting(bills_shop, bills_shop_names, N_BILLS);
    int total;
    for (int i = 0; i < N_BILLS; i++)
    {
        cout << bills_shop_names[i] << ":\t\t" << bills_shop[i] << endl;
        total = total + bills_shop[i];
    }
    cout << "Total expenditure"
         << ":\t\t" << total << endl;
}
void update_bill()
{
    string bill_name;
    int bill_amount_final;
    cout << "Enter name of bill which you want to update : ";
    cin >> bill_name;
    cout << "Enter amount of bill : ";
    cin >> bill_amount_final;
    for (int index = 0; index < N_BILLS; index++)
    {
        if (bills_shop_names[index] == bill_name)
        {
            bills_shop[index] = bill_amount_final;
        }
    }
    cout << "Your amount is updated---" << endl;
}

//------------------------FOR CUSTOMER SECTION---------------------------
int customer_menu()
{
    header();
    cout << "                                                                 " << endl;
    cout << "                 Welcome To Book Store                       " << endl;
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
    cout << "Following(s) items are available in shop:" << endl;
    cout << endl;
    int index = 0;
    cout << "Item\t\tPrice(Rs)" << endl;
    while (stock_adding[index] != "\0")
    {
        cout << stock_adding[index] << "\t\t" << stock_prices[index] << endl;
        index++;
    }
}
int calculateBill(string item)
{
    int price;
    int index = 0;
    while (stock_adding[index] != "\0")
    {
        if (item == stock_adding[index])
        {
            price = stock_prices[index];
        }
        index++;
    }
    return price;
}
void bill_generator()
{
    string customer_n, customer_p;
    cout << "Enter name : ";
    cin >> customer_n;
    cout << "Enter pin : ";
    cin >> customer_p;
    if (customer_n_a[bill_count] == customer_n && customer_p_a[bill_count] == customer_p)
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

        cout << "Total Bill :\t" << t_bill << endl;
        store_bill(t_bill, bill_count);

        bill_count++;
    }
    else
    {
        cout << "User_name or pin is wrong." << endl;
    }
}
void store_bill(int bill, int count)
{
    customers_bills[count] = bill;
}
void pin_change()
{
    string customer_n, customer_p;
    cout << "Enter name : ";
    cin >> customer_n;
    cout << "Enter pin : ";
    cin >> customer_p;
    if (customer_n_a[pin_change_count] == customer_n && customer_p_a[pin_change_count] == customer_p)
    {
        string customer_p_changed;
        cout << "Enter your new pin : ";
        cin >> customer_p_changed;
        customer_p_a[pin_change_count] = customer_p_changed;
        cout << "Your pin is being updated---" << endl;
        cout << "Your pin is updated successfully----" << endl;
        pin_change_count++;
    }
    else
    {
        cout << "User_name or pin is wrong " << endl;
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

//------------------------FOR CLEARING SCREEN---------------------------
void clear_screen()
{
    cout << "Press any key to continue.";
    getch();
    system("cls");
}
