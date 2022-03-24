#include <iostream> //Add sorting logic on line 135.
using namespace std;
main()
{ //  MENU
    cout << "*****************************************************************" << endl;
    cout << "*		        Book Store Management System		             *" << endl;
    cout << "*****************************************************************" << endl;
    cout << "                                                                 " << endl;
    cout << "                 Welcome To The Book Store                       " << endl;
    cout << "                                                                 " << endl;
    cout << "                                                                 " << endl;
    cout << "You want to login as an ADMIN OR CUSTOMER.                       " << endl;
    cout << "                                                                 " << endl;
    cout << "For ADMIN press 1.                                               " << endl;
    cout << "For CUSTOMER press 2.                                            " << endl;
    cout << "                                                                 " << endl;
    //  OPTION FROM USER.
    cout << "Your option---                                                   " << endl;
    int user_option;
    cin >> user_option;
    //  WORKING OF 1 & 2.
    if (user_option == 1)
    {
        cout << "*****************************************************************" << endl;
        cout << "*		        Book Store Management System		             *" << endl;
        cout << "*****************************************************************" << endl;
        cout << "                                                                 " << endl;
        cout << "                 Welcome To The Book Store As Admin              " << endl;
        cout << "                                                                 " << endl;
        cout << "Main Menu--------------------------------------------------------" << endl;
        cout << "                                                                 " << endl;
        cout << "1-Add Customers" << endl;
        cout << "2-View Customers" << endl;
        cout << "3-View Bills  (history)" << endl;
        cout << "4-View odders placed by the customers." << endl;
        cout << "5-Add stock of the shop." << endl;
        cout << "6-Manage the expenditures of the shop." << endl;
    }
    else if (user_option == 2)
    {
        cout << "*****************************************************************" << endl;
        cout << "*		        Book Store Management System		             *" << endl;
        cout << "*****************************************************************" << endl;
        cout << "                                                                 " << endl;
        cout << "                 Welcome To The Book Store As Customer           " << endl;
        cout << "                                                                 " << endl;
        cout << "Main Menu--------------------------------------------------------" << endl;
        cout << "                                                                 " << endl;
        cout << "1-View Items" << endl;
        cout << "2-Buy the required items" << endl;
        cout << "3-Change pin" << endl;
        cout << "4-Place odders." << endl;
    }
    else
    {
        cout << "For ADMIN press 1.                                               " << endl;
        cout << "For CUSTOMER press 2.                                            " << endl;
    }
    string customer_1_n = "Empty", customer_2_n = "Empty", customer_3_n = "Empty", customer_4_n = "Empty";
    string customer_1_p_a = "Empty", customer_2_p_a = "Empty", customer_3_p_a = "Empty", customer_4_p_a = "Empty"; // GIVEN BY ADMIN.
    string customer_1_p = "Empty", customer_2_p = "Empty", customer_3_p = "Empty", customer_4_p = "Empty";         // ENTERED BY CUSTOMER.
    int electricity_bill = 0, food_bill = 0, worker_salary = 0, orders_bill = 0, software_bill = 0;
    int bill_c1 = 0, bill_c2 = 0, bill_c3 = 0, bill_c4 = 0;
    string customer_1_n_pin_ch, customer_2_n_pin_ch, customer_3_n_pin_ch, customer_4_n_pin_ch, customer_5_n_pin_ch;
    int customer_1_p = 0, customer_2_p = 0, customer_3_p = 0, customer_4_p = 0;
    string customer_1_n_order_placing = "Empty", customer_2_n_order_placing = "Empty", customer_3_n_order_placing = "Empty", customer_4_n_order_placing = "Empty";
    string order_1_c1 = "Empty", order_2_c1 = "Empty", order_3_c1 = "Empty", order_1_c2 = "Empty", order_2_c2 = "Empty", order_3_c2 = "Empty", order_1_c3 = "Empty", order_2_c3 = "Empty", order_3_c3 = "Empty", order_1_c4 = "Empty", order_2_c4 = "Empty", order_3_c4 = "Empty";

    if (user_option == 1) // FOR ASKING OF OPTION AFTER THE DISPLAY OF admin MENU.
    {
        cout << "Your option---                                                   " << endl;
        cin >> user_option;
        if (user_option == 1) // ADDING OF CUSTOMER 1.
        {
            cout << "Enter name of customer 3 : " << endl;
            cin >> customer_4_n;
            cout << "Enter pin of customer 3 : " << endl;
            cin >> customer_4_p_a;
        }
        else if (user_option == 2) // VIEW CUSTOMERS
        {
            cout << "Following(s) are the customers and their pins added by ADMIN : ";
            cout << "1-" << customer_1_n << "\t" << customer_1_p_a;
            cout << "2-" << customer_2_n << "\t" << customer_2_p_a;
            cout << "3-" << customer_3_n << "\t" << customer_3_p_a;
        }
        else if (user_option == 3) // VIEW BILLS OF CUTOMERS
        {
            cout << "Following(s) are the customers and their bills : ";
            cout << "1-" << customer_1_n << "\t" << bill_c1;
            cout << "2-" << customer_2_n << "\t" << bill_c2;
            cout << "2-" << customer_3_n << "\t" << bill_c3;
        }
        else if (user_option == 4) // VIEW ORDERS PLACED BY CUSTOMERS
        {
            cout << "Following(s) are the customers and their orders : ";
            cout << "1-" << customer_1_n << "\t" << order_1_c1 << "\t" << order_2_c1 << "\t" << order_3_c1;
            cout << "2-" << customer_2_n << "\t" << order_1_c2 << "\t" << order_2_c2 << "\t" << order_3_c2;
            cout << "3-" << customer_3_n << "\t" << order_1_c3 << "\t" << order_2_c3 << "\t" << order_3_c3;
        }
        else if (user_option == 5) // ADDING OF STOCK.
        {
            string stock_adding_1 = "Empty", stock_adding_2 = "Empty", stock_adding_3 = "Empty", stock_adding_4 = "Empty", stock_adding_5 = "Empty";
            if (stock_adding_1 == "Empty" || stock_adding_2 == "Empty" || stock_adding_3 == "Empty" || stock_adding_4 == "Empty" || stock_adding_5 == "Empty")
            {
                cout << "Enter the things(5) you want to enter to existing stock : ";
                cin >> stock_adding_1;
                cout << "\n";
                cin >> stock_adding_2;
                cout << "\n";
                cin >> stock_adding_3;
                cout << "\n";
                cin >> stock_adding_4;
                cout << "\n";
                cin >> stock_adding_5;
            }
            else
            {
                cout << "Followings were the things added by ADMIN : ";
                cout << "1-" << stock_adding_1;
                cout << "\n2-" << stock_adding_2;
                cout << "\n3-" << stock_adding_3;
                cout << "\n4-" << stock_adding_4;
                cout << "\n5-" << stock_adding_5;
            }
        }
        else if (user_option == 6) // MANAGEMENT OF SHOP.
        {
            if (electricity_bill == 0 || food_bill == 0 || worker_salary == 0 || orders_bill == 0 || software_bill == 0)
            {
                cout << "Followings are the expenditures of the shop :";
                cout << "Enter Electricity bill : ";
                cin >> electricity_bill;
                cout << "Enter Food bill : ";
                cin >> food_bill;
                cout << "Enter Workers salary : ";
                cin >> worker_salary;
                cout << "Enter Orders bill : ";
                cin >> orders_bill;
                cout << "Enter Software bill : ";
                cin >> software_bill;
            }
            else
            {
                cout << "Followings are the expenditures of the shop (In Assending order) :";
                cout << "Electricity bill : "
                     << "\t" << electricity_bill;
                cout << "Food bill        : "
                     << "\t" << food_bill;
                cout << "Worker Salary    : "
                     << "\t" << worker_salary;
                cout << "Orders bill      : "
                     << "\t" << orders_bill;
                cout << "Software Bill : "
                     << "\t" << software_bill;
            }
        }
        else
        {
            cout << "Enter a valid input";
        }
    } // END OF ADMIN OPTIONS.
      // START OF CUSTOMER MENU OPTIONS.

    else if (user_option == 2) // FOR ASKING OF OPTION AFTER THE DISPLAY OF customer MENU.
    {
        cout << "Your option---                                                   " << endl;
        cin >> user_option;
        if (user_option == 1)
        {
            cout << "Followings items (with their prices) are available in store : ";
            cout << "\n1-Books---------------------Rs 300";
            cout << "\n2-Pens----------------------Rs 70";
            cout << "\n3-Geometry Items------------Rs 500";
            cout << "\n4-White Boards--------------Rs 700";
            cout << "\n5-Registers-----------------Rs 100";
        }
        else if (user_option == 2)
        {
            cout << "Enter your name : ";
            cin >> customer_4_n;
            cout << "\nEnter your pin : ";
            cin >> customer_4_p;
            if (customer_4_p == customer_4_p_a)
            {
                cout << "Enter items(5) you want to buy : ";
                string item_1, item_2, item_3, item_4, item_5, items; // ITEMS FOR EASE IN BILLING.
                cin >> item_1;
                cout << "\n";
                cin >> item_2;
                cout << "\n";
                cin >> item_3;
                cout << "\n";
                cin >> item_4;
                cout << "\n";
                cin >> item_5;
                int bill_i1 = 0, bill_i2 = 0, bill_i3 = 0, bill_i4 = 0, bill_i5 = 0;
                if (item_1 == "Books")
                {
                    bill_i1 = 300;
                }
                else if (item_1 == "Pens")
                {
                    bill_i2 = 70;
                }
                else if (item_1 == "Geometry Items")
                {
                    bill_i3 = 500;
                }
                else if (item_1 == "White Boards")
                {
                    bill_i4 = 700;
                }
                else if (item_1 == "Registers")
                {
                    bill_i5 = 100;
                }
                else
                {
                    cout << "Followings items (with their prices) are available in store : ";
                    cout << "\n1-Books---------------------Rs 300";
                    cout << "\n2-Pens----------------------Rs 70";
                    cout << "\n3-Geometry Items------------Rs 500";
                    cout << "\n4-White Boards--------------Rs 700";
                    cout << "\n5-Registers-----------------Rs 100";
                }
                bill_c4 = bill_i1 + bill_i2 + bill_i3 + bill_i4 + bill_i5;
                cout << customer_4_n << "\t"
                     << "Your Total Bill : " << bill_c4;
            }
            else
            {
                cout << "Your pasword is wrong ";
            }
        } // ENDING OF OPTION 2.
        else if (user_option == 3)
        {
            if (customer_1_n_pin_ch == "Empty")
            {
                cout << "Enter your name : ";
                cin >> customer_1_n_pin_ch;
                if (customer_1_n_pin_ch == customer_1_n)
                {
                    cout << "Enter your new pin : ";
                    cin >> customer_1_p;
                    cout << "Your pin is being updated in customer 1--";
                    cout << "Your pin is updated successfully----";
                }
                else
                {
                    cout << "Enter a correct name";
                }
            }
            else if (customer_2_n_pin_ch == "Empty")
            {
                cout << "Enter your name : ";
                cin >> customer_2_n_pin_ch;
                if (customer_2_n_pin_ch == customer_2_n)
                {
                    cout << "Enter your new pin : ";
                    cin >> customer_2_p;
                    cout << "Your pin is being updated in customer 2--";
                    cout << "Your pin is updated successfully----";
                }
                else
                {
                    cout << "Enter a correct name";
                }
            }
            else if (customer_3_n_pin_ch == "Empty")
            {
                cout << "Enter your name : ";
                cin >> customer_3_n_pin_ch;
                if (customer_3_n_pin_ch == customer_3_n)
                {
                    cout << "Enter your new pin : ";
                    cin >> customer_3_p;
                    cout << "Your pin is being updated in customer 3--";
                    cout << "Your pin is updated successfully----";
                }
                else
                {
                    cout << "Enter a correct name";
                }
            }

        } // ENDING OF OPTION 3.
        else if (user_option == 4)
        {
            if (customer_1_n_order_placing == "Empty")
            {

                cout << "Enter your name : ";
                cin >> customer_1_n_order_placing;
                if (customer_1_n_order_placing == customer_1_n)
                {
                    cout << "Enter order you want to place :";
                    cin >> order_1_c1, order_2_c1, order_3_c1;
                    cout << "Your order is beng placed(customer 1)";
                    cout << "\nYou will receive your items shortly";
                }
                else
                {
                    cout << "Enter a correct name";
                }
            }
            else if (customer_2_n_order_placing == "Empty")
            {
                cout << "Enter your name : ";
                cin >> customer_2_n_order_placing;
                if (customer_2_n_order_placing == customer_2_n)
                {
                    cout << "Enter order you want to place :";
                    cin >> order_1_c2, order_2_c2, order_3_c2;
                    cout << "Your order is beng placed(customer 2)";
                    cout << "\nYou will receive your items shortly";
                }
                else
                {
                    cout << "Enter a correct name";
                }
            }
            else if (customer_3_n_order_placing == "Empty")
            {

                cout << "Enter your name : ";
                cin >> customer_3_n_order_placing;
                if (customer_3_n_order_placing == customer_3_n)
                {
                    cout << "Enter order you want to place :";
                    cin >> order_1_c3, order_2_c3, order_3_c3;
                    cout << "Your order is beng placed (customer 3)";
                    cout << "\nYou will receive your items shortly";
                }
                else
                {
                    cout << "Enter a correct name";
                }
            }
        } // ENDING OF OPTION 4.
    }     // ENDING OF CUSTOMER OPTIONS..NOW MENU WILL DISPLAY FROM START.