#include <iostream>
#include <stdlib.h>
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
    system("cls");
    //  WORKING OF 1 & 2.
    if (user_option == 1)
    {
        cout << "\n*****************************************************************" << endl;
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
        cout << "\n*****************************************************************" << endl;
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
    //(ADMIN VARIABLES)
    // USED BY ADMIN TO STORE NAMES OF CUSTOMERS
    string customer_1_n = "Empty", customer_2_n = "Empty", customer_3_n = "Empty", customer_4_n = "Empty";
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
    string customer_1_n_pin_ch, customer_2_n_pin_ch, customer_3_n_pin_ch, customer_4_n_pin_ch, customer_5_n_pin_ch;
    // USED WHILE PLACING ORDER
    string customer_1_n_order_placing = "Empty", customer_2_n_order_placing = "Empty", customer_3_n_order_placing = "Empty", customer_4_n_order_placing = "Empty";
    // USED BY CUSTOMERS TO PLACE THREE ORDERS
    string order_1_c1 = "Empty", order_2_c1 = "Empty", order_3_c1 = "Empty", order_1_c2 = "Empty", order_2_c2 = "Empty", order_3_c2 = "Empty", order_1_c3 = "Empty", order_2_c3 = "Empty", order_3_c3 = "Empty", order_1_c4 = "Empty", order_2_c4 = "Empty", order_3_c4 = "Empty";
    string stock_adding_1 = "Empty", stock_adding_2 = "Empty", stock_adding_3 = "Empty", stock_adding_4 = "Empty", stock_adding_5 = "Empty";

    if (user_option == 1) // FOR ASKING OF OPTION AFTER THE DISPLAY OF admin MENU.
    {
        system("cls");
        cout << "Your option---                                                   " << endl;
        cin >> user_option;
        system("cls");
        if (user_option == 1) // ADDING OF CUSTOMER 1.
        {
            cout << "Enter name of customer 1 : " << endl;
            cin >> customer_1_n;
            cout << "Enter pin of customer 1 : " << endl;
            cin >> customer_1_p_a;
        }
        else if (user_option == 2) // VIEW CUSTOMERS
        {
            cout << "You have not entered any customer yet. ";
        }
        else if (user_option == 3) // VIEW BILLS OF CUTOMERS
        {
            cout << "You don't have any record yet. ";
        }
        else if (user_option == 4) // VIEW ORDERS PLACED BY CUSTOMERS
        {
            cout << "There is no order by customer yet. ";
        }
        else if (user_option == 5) // ADDING OF STOCK.
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
        else if (user_option == 6) // MANAGEMENT OF SHOP.
        {
            cout << "Followings are the expenditures of the shop (In Assending order) :";
            cout << "\nEnter Electricity bill : ";
            cin >> electricity_bill;
            cout << "\nEnter Food bill : ";
            cin >> food_bill;
            cout << "\nEnter Workers salary : ";
            cin >> worker_salary;
            cout << "\nEnter Orders bill : ";
            cin >> orders_bill;
        }
        else
        {
            cout << "\nEnter a valid input";
        }
    } // END OF ADMIN OPTIONS.
      // START OF CUSTOMER MENU OPTIONS.

    else if (user_option == 2) // FOR ASKING OF OPTION AFTER THE DISPLAY OF customer MENU.
    {
        cout << "\nYour option---                                                   " << endl;
        cin >> user_option;
        system("cls");
        if (user_option == 1)
        {
            cout << "\nFollowings items (with their prices) are available in store : ";
            cout << "\n1-Books---------------------Rs 300" << endl;
            cout << "\n2-Pens----------------------Rs 70" << endl;
            cout << "\n3-Geometry Items------------Rs 500" << endl;
            cout << "\n4-White Boards--------------Rs 700" << endl;
            cout << "\n5-Registers-----------------Rs 100" << endl;
        }
        else if (user_option == 2)
        {
            cout << "You are not being added by the ADMIN. ";
            cout << "\nSo, you cannot buy any thing right now";

        } // ENDING OF OPTION 2.
        else if (user_option == 3)
        {
            cout << "You are not being added by the ADMIN. ";
            cout << "\nSo, you cannot change pin right now";
        } // ENDING OF OPTION 3.
        else if (user_option == 4)
        {
            cout << "You are not being added by the ADMIN. ";
            cout << "\nSo, you cannot place order right now";
        } // ENDING OF OPTION 4.
        else
        {
            cout << "\nEnter a valid input";
        }
    } // ENDING OF CUSTOMER OPTIONS..NOW MENU WILL DISPLAY FROM START.
      //  MENU
    system("cls");
    cout << "\n*****************************************************************" << endl;
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
    cin >> user_option;
    system("cls");

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
        cout << "\n*****************************************************************" << endl;
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
    if (user_option == 1) // FOR ASKING OF OPTION AFTER THE DISPLAY OF admin MENU.
    {
        cout << "Your option---                                                   " << endl;
        cin >> user_option;
        system("cls");
        if (user_option == 1) // ADDING OF CUSTOMER 2.
        {
            cout << "Enter name of customer 2 : " << endl; // ADDING OF CUSTOMER 2.
            cin >> customer_2_n;
            cout << "Enter pin of customer 2 : " << endl;
            cin >> customer_2_p_a;
        }                          // ENDING OF OPTION 1.
        else if (user_option == 2) // VIEW CUSTOMERS
        {
            cout << "\nFollowing(s) are the customers and their pins added by ADMIN : ";
            cout << "\n1-" << customer_1_n << "\t" << customer_1_p_a;
        }                          // ENDING OF OPTION 2.
        else if (user_option == 3) // VIEW BILLS OF CUTOMERS
        {
            cout << "No record of customer bills to show yet.";
        }                          // ENDING OF OPTION 3.
        else if (user_option == 4) // VIEW ORDERS PLACED BY CUSTOMERS
        {
            cout << "No record to show yet";
        }                          // ENDING OF OPTION 4.
        else if (user_option == 5) // ADDING OF STOCK.
        {
            cout << "\nEnter the things(5) you want to enter to existing stock : ";
            cin >> stock_adding_1;
            cout << "\n";
            cin >> stock_adding_2;
            cout << "\n";
            cin >> stock_adding_3;
            cout << "\n";
            cin >> stock_adding_4;
            cout << "\n";
            cin >> stock_adding_5;
        }                          // ENDING OF OPTION 5.
        else if (user_option == 6) // MANAGEMENT OF SHOP.
        {
            cout << "\nFollowings are the expenditures of the shop :";
            cout << "\nEnter Electricity bill : ";
            cin >> electricity_bill;
            cout << "Enter Food bill : ";
            cin >> food_bill;
            cout << "Enter Workers salary : ";
            cin >> worker_salary;
            cout << "Enter Orders bill : ";
            cin >> orders_bill;
        } // ENDING OF OPTION 6.
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
        system("cls");
        if (user_option == 1)
        {

            cout << "\nFollowings items (with their prices) are available in store : ";
            cout << "\n1-Books---------------------Rs 300";
            cout << "\n2-Pens----------------------Rs 70";
            cout << "\n3-Geometry Items------------Rs 500";
            cout << "\n4-White Boards--------------Rs 700";
            cout << "\n5-Registers-----------------Rs 100\n";
        }
        else if (user_option == 2)
        {
            cout << "Enter your name : ";
            cin >> customer_1_n;
            cout << "\nEnter your pin : ";
            cin >> customer_1_p;
            if (customer_1_p == customer_1_p_a)
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
                    cout << "\nFollowings items (with their prices) are available in store : ";
                    cout << "\n1-Books---------------------Rs 300";
                    cout << "\n2-Pens----------------------Rs 70";
                    cout << "\n3-Geometry Items------------Rs 500";
                    cout << "\n4-White Boards--------------Rs 700";
                    cout << "\n5-Registers-----------------Rs 100" << endl;
                }
                bill_c2 = bill_i1 + bill_i2 + bill_i3 + bill_i4 + bill_i5;
                cout << customer_2_n << "\t"
                     << "Your Total Bill : " << bill_c2;
            }
            else
            {
                cout << "\nYour pasword is wrong ";
            }
        } // ENDING OF OPTION 2.
        else if (user_option == 3)
        {
            if (customer_1_n_pin_ch == "Empty")
            {
                cout << "\nEnter your name : ";
                cin >> customer_1_n_pin_ch;
                if (customer_1_n_pin_ch == customer_1_n)
                {
                    cout << "\nEnter your new pin : ";
                    cin >> customer_1_p;
                    cout << "\nYour pin is being updated in customer 1--";
                    cout << "\nYour pin is updated successfully----";
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
            }
            else
            {
                cout << "Enter a correct name";
            }
        } // ENDING OF OPTION 4.
    }
    else
    {
        cout << "Enter a valid input";
    }
    //  MENU
    system("cls");
    cout << "\n*****************************************************************" << endl;
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
    cin >> user_option;
    system("cls");

    //  WORKING OF 1 & 2.
    if (user_option == 1)
    {
        cout << "\n*****************************************************************" << endl;
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
        cout << "\n*****************************************************************" << endl;
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
    if (user_option == 1) // FOR ASKING OF OPTION AFTER THE DISPLAY OF admin MENU.
    {
        cout << "Your option---                                                   " << endl;
        cin >> user_option;
        system("cls");
        system("cls");
        if (user_option == 1) // ADDING OF CUSTOMER 3.
        {
            cout << "Enter name of customer 3 : " << endl;
            cin >> customer_3_n;
            cout << "Enter pin of customer 3 : " << endl;
            cin >> customer_3_p_a;
        }                          // ENDING OF OPTION 1.
        else if (user_option == 2) // VIEW CUSTOMERS
        {
            cout << "\nFollowing(s) are the customers and their pins added by ADMIN : ";
            cout << "\n1-" << customer_1_n << "\t" << customer_1_p_a;
            cout << "\n2-" << customer_2_n << "\t" << customer_2_p_a;
        }                          // ENDING OF OPTION 2.
        else if (user_option == 3) // VIEW BILLS OF CUTOMERS
        {
            cout << "\nFollowing(s) are the customers and their bills : ";
            cout << "\n1-" << customer_1_n << "\t" << bill_c1;
        }                          // ENDING OF OPTION 3.
        else if (user_option == 4) // VIEW ORDERS PLACED BY CUSTOMERS
        {
            cout << "Following(s) are the customers and their orders : ";
            cout << "\n1-" << customer_1_n << "\t" << order_1_c1 << "\t" << order_2_c1 << "\t" << order_3_c1;
        }                          // ENDING OF OPTION 4.
        else if (user_option == 5) // ADDING OF STOCK.
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
        }                          // ENDING OF OPTION 5.
        else if (user_option == 6) // MANAGEMENT OF SHOP.
        {
            cout << "Enter the expenditures of the shop :";
            cout << "\nEnter Electricity bill : ";
            cin >> electricity_bill;
            cout << "Enter Food bill : ";
            cin >> food_bill;
            cout << "Enter Workers salary : ";
            cin >> worker_salary;
            cout << "Enter Orders bill : ";
            cin >> orders_bill;
        } // ENDING OF OPTION 6.
        else
        {
            cout << "Enter a valid input";
        }
    }                          // END OF ADMIN OPTIONS.
    else if (user_option == 2) // FOR ASKING OF OPTION AFTER THE DISPLAY OF customer MENU.
    {
        cout << "Your option---                                                   " << endl;
        cin >> user_option;
        system("cls");
        if (user_option == 1)
        {
            cout << "\nFollowings items (with their prices) are available in store : ";
            cout << "\n1-Books---------------------Rs 300";
            cout << "\n2-Pens----------------------Rs 70";
            cout << "\n3-Geometry Items------------Rs 500";
            cout << "\n4-White Boards--------------Rs 700";
            cout << "\n5-Registers-----------------Rs 100\n";
        } // ENDING OF OPTION 1.
        else if (user_option == 2)
        {
            cout << "Enter your name : ";
            cin >> customer_2_n;
            cout << "\nEnter your pin : ";
            cin >> customer_2_p;
            if (customer_2_p == customer_2_p_a)
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
                bill_c2 = bill_i1 + bill_i2 + bill_i3 + bill_i4 + bill_i5;
                cout << customer_2_n << "\t"
                     << "Your Total Bill : " << bill_c2;
            }
            else
            {
                cout << "Your pasword is wrong ";
            }
        } // ENDING OF OPTION 2.
        else if (user_option == 3)
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
    } // ENDING OF OPTION 3.
    else if (user_option == 4)
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
    } // ENDING OF OPTION 4.
    else
    {
        cout << "Enter a valid input";
    }
    //  MENU
    system("cls");
    cout << "\n*****************************************************************" << endl;
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
    cin >> user_option;
    system("cls");

    //  WORKING OF 1 & 2.
    if (user_option == 1)
    {
        system("cls");
        cout << "\n*****************************************************************" << endl;
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
        system("cls");
        cout << "\n*****************************************************************" << endl;
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
    if (user_option == 1) // FOR ASKING OF OPTION AFTER THE DISPLAY OF admin MENU.
    {
        cout << "Your option---                                                   " << endl;
        cin >> user_option;
        system("cls");
        if (user_option == 1) // ADDING OF CUSTOMER 4.
        {
            cout << "Enter name of customer 4 : " << endl;
            cin >> customer_4_n;
            cout << "Enter pin of customer 4 : " << endl;
            cin >> customer_4_p_a;
        }                          // ENDING OF OPTION 1.
        else if (user_option == 2) // VIEW CUSTOMERS
        {
            cout << "\nFollowing(s) are the customers and their pins added by ADMIN : ";
            cout << "\n1-" << customer_1_n << "\t" << customer_1_p_a;
            cout << "\n2-" << customer_2_n << "\t" << customer_2_p_a;
            cout << "\n3-" << customer_3_n << "\t" << customer_3_p_a;
        }                          // ENDING OF OPTION 2.
        else if (user_option == 3) // VIEW BILLS OF CUTOMERS
        {
            cout << "\nFollowing(s) are the customers and their bills : ";
            cout << "\n1-" << customer_1_n << "\t" << bill_c1;
            cout << "\n2-" << customer_2_n << "\t" << bill_c2;
        }                          // ENDING OF OPTION 3.
        else if (user_option == 4) // VIEW ORDERS PLACED BY CUSTOMERS
        {
            cout << "Following(s) are the customers and their orders : ";
            cout << "\n1-" << customer_1_n << "\t" << order_1_c1 << "\t" << order_2_c1 << "\t" << order_3_c1;
            cout << "\n2-" << customer_2_n << "\t" << order_1_c2 << "\t" << order_2_c2 << "\t" << order_3_c2;
        }                          // ENDING OF OPTION 4.
        else if (user_option == 5) // ADDING OF STOCK.
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

        }                          // ENDING OF OPTION 5.
        else if (user_option == 6) // MANAGEMENT OF SHOP.
        {
            if (electricity_bill == 0 || food_bill == 0 || worker_salary == 0 || orders_bill == 0 || software_bill == 0)
            {
                cout << "Enter the expenditures of the shop :";
                cout << "\nEnter Electricity bill : ";
                cin >> electricity_bill;
                cout << "Enter Food bill : ";
                cin >> food_bill;
                cout << "Enter Workers salary : ";
                cin >> worker_salary;
                cout << "Enter Orders bill : ";
                cin >> orders_bill;
            }
            else
            {
                cout << "Followings are the expenditures of the shop (In Assending order) :";
                cout << "\nElectricity bill : "
                     << "\t" << electricity_bill;
                cout << "\nFood bill        : "
                     << "\t" << food_bill;
                cout << "\nWorker Salary    : "
                     << "\t" << worker_salary;
                cout << "\nOrders bill      : "
                     << "\t" << orders_bill;
            }
        } // ENDING OF OPTION 6.
        else
        {
            cout << "Enter a valid input";
        }
    }                          // END OF ADMIN OPTIONS.
    else if (user_option == 2) // FOR ASKING OF OPTION AFTER THE DISPLAY OF customer MENU.
    {
        cout << "Your option---                                                   " << endl;
        cin >> user_option;
        system("cls");
        if (user_option == 1)
        {
            cout << "\nFollowings items (with their prices) are available in store : ";
            cout << "\n1-Books---------------------Rs 300";
            cout << "\n2-Pens----------------------Rs 70";
            cout << "\n3-Geometry Items------------Rs 500";
            cout << "\n4-White Boards--------------Rs 700";
            cout << "\n5-Registers-----------------Rs 100\n";
        } // ENDING OF OPTION 1.
        else if (user_option == 2)
        {
            cout << "Enter your name : ";
            cin >> customer_3_n;
            cout << "\nEnter your pin : ";
            cin >> customer_3_p;
            if (customer_3_p == customer_3_p_a)
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
                bill_c3 = bill_i1 + bill_i2 + bill_i3 + bill_i4 + bill_i5;
                cout << customer_3_n << "\t"
                     << "Your Total Bill : " << bill_c3;
            }
            else
            {
                cout << "Your pasword is wrong ";
            }
        } // ENDING OF OPTION 2.
        else if (user_option == 3)
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
        cout << "Enter your name : ";
        cin >> customer_3_n_order_placing;
        if (customer_3_n_order_placing == customer_3_n)
        {
            cout << "Enter order you want to place :";
            cin >> order_1_c3, order_2_c3, order_3_c3;
            cout << "Your order is beng placed(customer 2)";
            cout << "\nYou will receive your items shortly";
        }
        else
        {
            cout << "Enter a correct name";
        }
    } // ENDING OF OPTION 4.
    else
    {
        cout << "Enter a valid input";
    }
    //  MENU
    system("cls");
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
    cin >> user_option;
    system("cls");

    //  WORKING OF 1 & 2.
    if (user_option == 1)
    {
        cout << "\n*****************************************************************" << endl;
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
        cout << "\n*****************************************************************" << endl;
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
    if (user_option == 1) // FOR ASKING OF OPTION AFTER THE DISPLAY OF admin MENU.
    {
        cout << "Your option---                                                   " << endl;
        cin >> user_option;
        system("cls");
        if (user_option == 1) // MAXIMUM LIMIT REACHED
        {
            cout << "Atmost four customers can be added.";
        }                          // ENDING OF OPTION 1.
        else if (user_option == 2) // VIEW CUSTOMERS
        {
            cout << "\nFollowing(s) are the customers and their pins added by ADMIN : ";
            cout << "\n1-" << customer_1_n << "\t" << customer_1_p_a;
            cout << "\n2-" << customer_2_n << "\t" << customer_2_p_a;
            cout << "\n3-" << customer_3_n << "\t" << customer_3_p_a;
            cout << "\n4-" << customer_4_n << "\t" << customer_4_p_a;
        }                          // ENDING OF OPTION 2.
        else if (user_option == 3) // VIEW BILLS OF CUTOMERS
        {
            cout << "\nFollowing(s) are the customers and their bills : ";
            cout << "\n1-" << customer_1_n << "\t" << bill_c1;
            cout << "\n2-" << customer_2_n << "\t" << bill_c2;
            cout << "\n3-" << customer_3_n << "\t" << bill_c3;
        }                          // ENDING OF OPTION 3.
        else if (user_option == 4) // VIEW ORDERS PLACED BY CUSTOMERS
        {
            cout << "Following(s) are the customers and their orders : ";
            cout << "\n1-" << customer_1_n << "\t" << order_1_c1 << "\t" << order_2_c1 << "\t" << order_3_c1;
            cout << "\n2-" << customer_2_n << "\t" << order_1_c2 << "\t" << order_2_c2 << "\t" << order_3_c2;
            cout << "\n3-" << customer_3_n << "\t" << order_1_c3 << "\t" << order_2_c3 << "\t" << order_3_c3;
        }                          // ENDING OF OPTION 4.
        else if (user_option == 5) // ADDING OF STOCK.
        {
            cout << "Followings were the things added by ADMIN : ";
            cout << "\n1-" << stock_adding_1;
            cout << "\n2-" << stock_adding_2;
            cout << "\n3-" << stock_adding_3;
            cout << "\n4-" << stock_adding_4;
            cout << "\n5-" << stock_adding_5;
        }                          // ENDING OF OPTION 5.
        else if (user_option == 6) // MANAGEMENT OF SHOP.
        {
            cout << "Followings are the expenditures of the shop (In Assending order) :";
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
            else if (food_bill > electricity_bill && food_bill > worker_salary && food_bill > orders_bill)
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
            else if (worker_salary > electricity_bill && worker_salary > food_bill && worker_salary > orders_bill)
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
            else if (orders_bill > electricity_bill && orders_bill > food_bill && orders_bill > worker_salary)
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
        } // ENDING OF OPTION 6.
        else
        {
            cout << "Enter a valid input";
        }
    }                          // END OF ADMIN OPTIONS.
    else if (user_option == 2) // FOR ASKING OF OPTION AFTER THE DISPLAY OF customer MENU.
    {
        cout << "Your option---                                                   " << endl;
        cin >> user_option;
        system("cls");
        if (user_option == 1)
        {
            cout << "\nFollowings items (with their prices) are available in store : ";
            cout << "\n1-Books---------------------Rs 300";
            cout << "\n2-Pens----------------------Rs 70";
            cout << "\n3-Geometry Items------------Rs 500";
            cout << "\n4-White Boards--------------Rs 700";
            cout << "\n5-Registers-----------------Rs 100\n";
        } // ENDING OF OPTION 1.
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
            cout << "Enter your name : ";
            cin >> customer_4_n_pin_ch;
            if (customer_4_n_pin_ch == customer_4_n)
            {
                cout << "Enter your new pin : ";
                cin >> customer_4_p;
                cout << "Your pin is being updated in customer 4--";
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
        cout << "Enter your name : ";
        cin >> customer_4_n_order_placing;
        if (customer_4_n_order_placing == customer_4_n)
        {
            cout << "Enter order you want to place :";
            cin >> order_1_c4, order_2_c4, order_3_c4;
            cout << "Your order is beng placed(customer 4)";
            cout << "\nYou will receive your items shortly";
        }
        else
        {
            cout << "Enter a correct name";
        }
    } // ENDING OF OPTION 4.
    else
    {
        cout << "Enter a valid input";
    }
    //  MENU
    system("cls");
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
    cin >> user_option;
    system("cls");
    //  WORKING OF 1 & 2.
    if (user_option == 1)
    {
        cout << "\n*****************************************************************" << endl;
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
        cout << "\n*****************************************************************" << endl;
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
    if (user_option == 1) // FOR ASKING OF OPTION AFTER THE DISPLAY OF admin MENU.
    {
        cout << "Your option---                                                   " << endl;
        cin >> user_option;
        system("cls");
        if (user_option == 1) // MAXIMUM LIMIT REACHED
        {
            cout << "Atmost four customers can be added.";
        }                          // ENDING OF OPTION 1.
        else if (user_option == 2) // VIEW CUSTOMERS
        {
            cout << "\nFollowing(s) are the customers and their pins added by ADMIN : ";
            cout << "\n1-" << customer_1_n << "\t" << customer_1_p_a;
            cout << "\n2-" << customer_2_n << "\t" << customer_2_p_a;
            cout << "\n3-" << customer_3_n << "\t" << customer_3_p_a;
            cout << "\n4-" << customer_4_n << "\t" << customer_4_p_a;
            cout << "----------------------------------------------";
        }                          // ENDING OF OPTION 2.
        else if (user_option == 3) // VIEW BILLS OF CUTOMERS
        {
            cout << "\nFollowing(s) are the customers and their bills : ";
            cout << "\n1-" << customer_1_n << "\t" << bill_c1;
            cout << "\n2-" << customer_2_n << "\t" << bill_c2;
            cout << "\n3-" << customer_3_n << "\t" << bill_c3;
            cout << "\n4-" << customer_4_n << "\t" << bill_c4;
        }                          // ENDING OF OPTION 3.
        else if (user_option == 4) // VIEW ORDERS PLACED BY CUSTOMERS
        {
            cout << "Following(s) are the customers and their orders : ";
            cout << "\n1-" << customer_1_n << "\t" << order_1_c1 << "\t" << order_2_c1 << "\t" << order_3_c1;
            cout << "\n2-" << customer_2_n << "\t" << order_1_c2 << "\t" << order_2_c2 << "\t" << order_3_c2;
            cout << "\n3-" << customer_3_n << "\t" << order_1_c3 << "\t" << order_2_c3 << "\t" << order_3_c3;
            cout << "\n4-" << customer_4_n << "\t" << order_1_c4 << "\t" << order_2_c4 << "\t" << order_3_c4;
        }                          // ENDING OF OPTION 4.
        else if (user_option == 5) // ADDING OF STOCK.
        {
            cout << "Followings were the things added by ADMIN : ";
            cout << "\n1-" << stock_adding_1;
            cout << "\n2-" << stock_adding_2;
            cout << "\n3-" << stock_adding_3;
            cout << "\n4-" << stock_adding_4;
            cout << "\n5-" << stock_adding_5;
        }                          // ENDING OF OPTION 5.
        else if (user_option == 6) // MANAGEMENT OF SHOP.
        {
            cout << "Followings are the expenditures of the shop (In Assending order) :";
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
            else if (food_bill > electricity_bill && food_bill > worker_salary && food_bill > orders_bill)
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
            else if (worker_salary > electricity_bill && worker_salary > food_bill && worker_salary > orders_bill)
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
            else if (orders_bill > electricity_bill && orders_bill > food_bill && orders_bill > worker_salary)
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

        } // ENDING OF OPTION 6.
        else
        {
            cout << "Enter a valid input";
        }
    }                          // END OF ADMIN OPTIONS.
    else if (user_option == 2) // FOR ASKING OF OPTION AFTER THE DISPLAY OF customer MENU.
    {
        cout << "Your option---                                                   " << endl;
        cin >> user_option;
        system("cls");
        if (user_option == 1)
        {
            cout << "\nFollowings items (with their prices) are available in store : ";
            cout << "\n1-Books---------------------Rs 300";
            cout << "\n2-Pens----------------------Rs 70";
            cout << "\n3-Geometry Items------------Rs 500";
            cout << "\n4-White Boards--------------Rs 700";
            cout << "\n5-Registers-----------------Rs 100\n";
        } // ENDING OF OPTION 1.
        else if (user_option == 2)
        {
            cout << "All the coustomers have brought thier desired things";
        } // ENDING OF OPTION 2.
        else if (user_option == 3)
        {
            cout << "All the coustomers have changed their pins";
        } // ENDING OF OPTION 3.
        else if (user_option == 4)
        {
            cout << "All the coustomers have placed their orders";
        } // ENDING OF OPTION 4.
    }
    else
    {
        cout << "Enter a valid input";
    }
    //  MENU
    system("cls");
    cout << "\n*****************************************************************" << endl;
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
    cin >> user_option;
    system("cls");

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
        cout << "\n*****************************************************************" << endl;
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
    if (user_option == 1) // FOR ASKING OF OPTION AFTER THE DISPLAY OF admin MENU.
    {
        cout << "Your option---                                                   " << endl;
        cin >> user_option;
        system("cls");
        if (user_option == 1) // MAXIMUM LIMIT REACHED
        {
            cout << "Atmost four customers can be added.";
        }                          // ENDING OF OPTION 1.
        else if (user_option == 2) // VIEW CUSTOMERS
        {
            cout << "\nFollowing(s) are the customers and their pins added by ADMIN : ";
            cout << "\n1-" << customer_1_n << "\t" << customer_1_p_a;
            cout << "\n2-" << customer_2_n << "\t" << customer_2_p_a;
            cout << "\n3-" << customer_3_n << "\t" << customer_3_p_a;
            cout << "\n4-" << customer_4_n << "\t" << customer_4_p_a;
            cout << "----------------------------------------------";
        }                          // ENDING OF OPTION 2.
        else if (user_option == 3) // VIEW BILLS OF CUTOMERS
        {
            cout << "\nFollowing(s) are the customers and their bills : ";
            cout << "\n1-" << customer_1_n << "\t" << bill_c1;
            cout << "\n2-" << customer_2_n << "\t" << bill_c2;
            cout << "\n3-" << customer_3_n << "\t" << bill_c3;
            cout << "\n4-" << customer_4_n << "\t" << bill_c4;
            cout << "----------------------------------------------";
        }                          // ENDING OF OPTION 3.
        else if (user_option == 4) // VIEW ORDERS PLACED BY CUSTOMERS
        {
            cout << "Following(s) are the customers and their orders : ";
            cout << "\n1-" << customer_1_n << "\t" << order_1_c1 << "\t" << order_2_c1 << "\t" << order_3_c1;
            cout << "\n2-" << customer_2_n << "\t" << order_1_c2 << "\t" << order_2_c2 << "\t" << order_3_c2;
            cout << "\n3-" << customer_3_n << "\t" << order_1_c3 << "\t" << order_2_c3 << "\t" << order_3_c3;
            cout << "\n4-" << customer_4_n << "\t" << order_1_c4 << "\t" << order_2_c4 << "\t" << order_3_c4;
            cout << "--------------------------------------------------------------------------------------";
        }                          // ENDING OF OPTION 4.
        else if (user_option == 5) // ADDING OF STOCK.
        {
            cout << "Followings were the things added by ADMIN : ";
            cout << "\n1-" << stock_adding_1;
            cout << "\n2-" << stock_adding_2;
            cout << "\n3-" << stock_adding_3;
            cout << "\n4-" << stock_adding_4;
            cout << "\n5-" << stock_adding_5;
        }                          // ENDING OF OPTION 5.
        else if (user_option == 6) // MANAGEMENT OF SHOP.
        {
            cout << "Followings are the expenditures of the shop (In Assending order) :";
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
            else if (food_bill > electricity_bill && food_bill > worker_salary && food_bill > orders_bill)
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
            else if (worker_salary > electricity_bill && worker_salary > food_bill && worker_salary > orders_bill)
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
            else if (orders_bill > electricity_bill && orders_bill > food_bill && orders_bill > worker_salary)
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

        } // ENDING OF OPTION 6.
        else
        {
            cout << "Enter a valid input";
        }

    }                          // END OF ADMIN OPTIONS.
    else if (user_option == 2) // FOR ASKING OF OPTION AFTER THE DISPLAY OF customer MENU.
    {
        cout << "Your option---                                                   " << endl;
        cin >> user_option;
        system("cls");
        if (user_option == 1)
        {
            cout << "\nFollowings items (with their prices) are available in store : ";
            cout << "\n1-Books---------------------Rs 300";
            cout << "\n2-Pens----------------------Rs 70";
            cout << "\n3-Geometry Items------------Rs 500";
            cout << "\n4-White Boards--------------Rs 700";
            cout << "\n5-Registers-----------------Rs 100\n";
        } // ENDING OF OPTION 1.
        else if (user_option == 2)
        {
            cout << "All the coustomers have brought thier desired things";
        } // ENDING OF OPTION 2.
        else if (user_option == 3)
        {
            cout << "All the coustomers have changed their pins";
        } // ENDING OF OPTION 3.
        else if (user_option == 4)
        {
            cout << "All the coustomers have placed their orders";
        } // ENDING OF OPTION 4.

        else
        {
            cout << "Enter a valid input";
        }
    }
    else
    {
        cout << "Enter a valid input";
    }
    //  MENU
    system("cls");
    cout << "\n*****************************************************************" << endl;
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
    cin >> user_option;
    system("cls");

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
        cout << "\n*****************************************************************" << endl;
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
    if (user_option == 1) // FOR ASKING OF OPTION AFTER THE DISPLAY OF admin MENU.
    {
        cout << "Your option---                                                   " << endl;
        cin >> user_option;
        system("cls");
        if (user_option == 1) // MAXIMUM LIMIT REACHED
        {
            cout << "Atmost four customers can be added.";
        }                          // ENDING OF OPTION 1.
        else if (user_option == 2) // VIEW CUSTOMERS
        {
            cout << "\nFollowing(s) are the customers and their pins added by ADMIN : ";
            cout << "\n1-" << customer_1_n << "\t" << customer_1_p_a;
            cout << "\n2-" << customer_2_n << "\t" << customer_2_p_a;
            cout << "\n3-" << customer_3_n << "\t" << customer_3_p_a;
            cout << "\n4-" << customer_4_n << "\t" << customer_4_p_a;
            cout << "----------------------------------------------";
        }                          // ENDING OF OPTION 2.
        else if (user_option == 3) // VIEW BILLS OF CUTOMERS
        {
            cout << "\nFollowing(s) are the customers and their bills : ";
            cout << "\n1-" << customer_1_n << "\t" << bill_c1;
            cout << "\n2-" << customer_2_n << "\t" << bill_c2;
            cout << "\n3-" << customer_3_n << "\t" << bill_c3;
            cout << "\n4-" << customer_4_n << "\t" << bill_c4;
            cout << "----------------------------------------------";
        }                          // ENDING OF OPTION 3.
        else if (user_option == 4) // VIEW ORDERS PLACED BY CUSTOMERS
        {
            cout << "Following(s) are the customers and their orders : ";
            cout << "\n1-" << customer_1_n << "\t" << order_1_c1 << "\t" << order_2_c1 << "\t" << order_3_c1;
            cout << "\n2-" << customer_2_n << "\t" << order_1_c2 << "\t" << order_2_c2 << "\t" << order_3_c2;
            cout << "\n3-" << customer_3_n << "\t" << order_1_c3 << "\t" << order_2_c3 << "\t" << order_3_c3;
            cout << "\n4-" << customer_4_n << "\t" << order_1_c4 << "\t" << order_2_c4 << "\t" << order_3_c4;
            cout << "--------------------------------------------------------------------------------------";
        }                          // ENDING OF OPTION 4.
        else if (user_option == 5) // ADDING OF STOCK.
        {
            cout << "Followings were the things added by ADMIN : ";
            cout << "\n1-" << stock_adding_1;
            cout << "\n2-" << stock_adding_2;
            cout << "\n3-" << stock_adding_3;
            cout << "\n4-" << stock_adding_4;
            cout << "\n5-" << stock_adding_5;
        }                          // ENDING OF OPTION 5.
        else if (user_option == 6) // MANAGEMENT OF SHOP.
        {
            cout << "Followings are the expenditures of the shop (In Assending order) :";
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
            else if (food_bill > electricity_bill && food_bill > worker_salary && food_bill > orders_bill)
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
            else if (worker_salary > electricity_bill && worker_salary > food_bill && worker_salary > orders_bill)
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
            else if (orders_bill > electricity_bill && orders_bill > food_bill && orders_bill > worker_salary)
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

        } // ENDING OF OPTION 6.
        else
        {
            cout << "Enter a valid input";
        }

    }                          // END OF ADMIN OPTIONS.
    else if (user_option == 2) // FOR ASKING OF OPTION AFTER THE DISPLAY OF customer MENU.
    {
        cout << "Your option---                                                   " << endl;
        cin >> user_option;
        system("cls");
        if (user_option == 1)
        {
            cout << "\nFollowings items (with their prices) are available in store : ";
            cout << "\n1-Books---------------------Rs 300";
            cout << "\n2-Pens----------------------Rs 70";
            cout << "\n3-Geometry Items------------Rs 500";
            cout << "\n4-White Boards--------------Rs 700";
            cout << "\n5-Registers-----------------Rs 100\n";
        } // ENDING OF OPTION 1.
        else if (user_option == 2)
        {
            cout << "All the coustomers have brought thier desired things";
        } // ENDING OF OPTION 2.
        else if (user_option == 3)
        {
            cout << "All the coustomers have changed their pins";
        } // ENDING OF OPTION 3.
        else if (user_option == 4)
        {
            cout << "All the coustomers have placed their orders";
        } // ENDING OF OPTION 4.

        else
        {
            cout << "Enter a valid input";
        }
    }
    else
    {
        cout << "Enter a valid input";
    }
    //  MENU
    system("cls");
    cout << "\n*****************************************************************" << endl;
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
    cin >> user_option;
    system("cls");

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
        cout << "\n*****************************************************************" << endl;
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
    if (user_option == 1) // FOR ASKING OF OPTION AFTER THE DISPLAY OF admin MENU.
    {
        cout << "Your option---                                                   " << endl;
        cin >> user_option;
        system("cls");
        if (user_option == 1) // MAXIMUM LIMIT REACHED
        {
            cout << "Atmost four customers can be added.";
        }                          // ENDING OF OPTION 1.
        else if (user_option == 2) // VIEW CUSTOMERS
        {
            cout << "\nFollowing(s) are the customers and their pins added by ADMIN : ";
            cout << "\n1-" << customer_1_n << "\t" << customer_1_p_a;
            cout << "\n2-" << customer_2_n << "\t" << customer_2_p_a;
            cout << "\n3-" << customer_3_n << "\t" << customer_3_p_a;
            cout << "\n4-" << customer_4_n << "\t" << customer_4_p_a;
            cout << "----------------------------------------------";
        }                          // ENDING OF OPTION 2.
        else if (user_option == 3) // VIEW BILLS OF CUTOMERS
        {
            cout << "\nFollowing(s) are the customers and their bills : ";
            cout << "\n1-" << customer_1_n << "\t" << bill_c1;
            cout << "\n2-" << customer_2_n << "\t" << bill_c2;
            cout << "\n3-" << customer_3_n << "\t" << bill_c3;
            cout << "\n4-" << customer_4_n << "\t" << bill_c4;
            cout << "----------------------------------------------";
        }                          // ENDING OF OPTION 3.
        else if (user_option == 4) // VIEW ORDERS PLACED BY CUSTOMERS
        {
            cout << "Following(s) are the customers and their orders : ";
            cout << "\n1-" << customer_1_n << "\t" << order_1_c1 << "\t" << order_2_c1 << "\t" << order_3_c1;
            cout << "\n2-" << customer_2_n << "\t" << order_1_c2 << "\t" << order_2_c2 << "\t" << order_3_c2;
            cout << "\n3-" << customer_3_n << "\t" << order_1_c3 << "\t" << order_2_c3 << "\t" << order_3_c3;
            cout << "\n4-" << customer_4_n << "\t" << order_1_c4 << "\t" << order_2_c4 << "\t" << order_3_c4;
            cout << "--------------------------------------------------------------------------------------";
        }                          // ENDING OF OPTION 4.
        else if (user_option == 5) // ADDING OF STOCK.
        {
            cout << "Followings were the things added by ADMIN : ";
            cout << "\n1-" << stock_adding_1;
            cout << "\n2-" << stock_adding_2;
            cout << "\n3-" << stock_adding_3;
            cout << "\n4-" << stock_adding_4;
            cout << "\n5-" << stock_adding_5;
        }                          // ENDING OF OPTION 5.
        else if (user_option == 6) // MANAGEMENT OF SHOP.
        {
            cout << "Followings are the expenditures of the shop (In Assending order) :";
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
            else if (food_bill > electricity_bill && food_bill > worker_salary && food_bill > orders_bill)
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
            else if (worker_salary > electricity_bill && worker_salary > food_bill && worker_salary > orders_bill)
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
            else if (orders_bill > electricity_bill && orders_bill > food_bill && orders_bill > worker_salary)
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

        } // ENDING OF OPTION 6.
        else
        {
            cout << "Enter a valid input";
        }

    }                          // END OF ADMIN OPTIONS.
    else if (user_option == 2) // FOR ASKING OF OPTION AFTER THE DISPLAY OF customer MENU.
    {
        cout << "Your option---                                                   " << endl;
        cin >> user_option;
        system("cls");
        if (user_option == 1)
        {
            cout << "\nFollowings items (with their prices) are available in store : ";
            cout << "\n1-Books---------------------Rs 300";
            cout << "\n2-Pens----------------------Rs 70";
            cout << "\n3-Geometry Items------------Rs 500";
            cout << "\n4-White Boards--------------Rs 700";
            cout << "\n5-Registers-----------------Rs 100\n";
        } // ENDING OF OPTION 1.
        else if (user_option == 2)
        {
            cout << "All the coustomers have brought thier desired things";
        } // ENDING OF OPTION 2.
        else if (user_option == 3)
        {
            cout << "All the coustomers have changed their pins";
        } // ENDING OF OPTION 3.
        else if (user_option == 4)
        {
            cout << "All the coustomers have placed their orders";
        } // ENDING OF OPTION 4.

        else
        {
            cout << "Enter a valid input";
        }
    }
    else
    {
        cout << "Enter a valid input";
    }
    //  MENU
    system("cls");
    cout << "\n*****************************************************************" << endl;
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
    cin >> user_option;
    system("cls");

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
        cout << "\n*****************************************************************" << endl;
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
    if (user_option == 1) // FOR ASKING OF OPTION AFTER THE DISPLAY OF admin MENU.
    {
        cout << "Your option---                                                   " << endl;
        cin >> user_option;
        system("cls");
        if (user_option == 1) // MAXIMUM LIMIT REACHED
        {
            cout << "Atmost four customers can be added.";
        }                          // ENDING OF OPTION 1.
        else if (user_option == 2) // VIEW CUSTOMERS
        {
            cout << "\nFollowing(s) are the customers and their pins added by ADMIN : ";
            cout << "\n1-" << customer_1_n << "\t" << customer_1_p_a;
            cout << "\n2-" << customer_2_n << "\t" << customer_2_p_a;
            cout << "\n3-" << customer_3_n << "\t" << customer_3_p_a;
            cout << "\n4-" << customer_4_n << "\t" << customer_4_p_a;
            cout << "----------------------------------------------";
        }                          // ENDING OF OPTION 2.
        else if (user_option == 3) // VIEW BILLS OF CUTOMERS
        {
            cout << "\nFollowing(s) are the customers and their bills : ";
            cout << "\n1-" << customer_1_n << "\t" << bill_c1;
            cout << "\n2-" << customer_2_n << "\t" << bill_c2;
            cout << "\n3-" << customer_3_n << "\t" << bill_c3;
            cout << "\n4-" << customer_4_n << "\t" << bill_c4;
            cout << "----------------------------------------------";
        }                          // ENDING OF OPTION 3.
        else if (user_option == 4) // VIEW ORDERS PLACED BY CUSTOMERS
        {
            cout << "Following(s) are the customers and their orders : ";
            cout << "\n1-" << customer_1_n << "\t" << order_1_c1 << "\t" << order_2_c1 << "\t" << order_3_c1;
            cout << "\n2-" << customer_2_n << "\t" << order_1_c2 << "\t" << order_2_c2 << "\t" << order_3_c2;
            cout << "\n3-" << customer_3_n << "\t" << order_1_c3 << "\t" << order_2_c3 << "\t" << order_3_c3;
            cout << "\n4-" << customer_4_n << "\t" << order_1_c4 << "\t" << order_2_c4 << "\t" << order_3_c4;
            cout << "--------------------------------------------------------------------------------------";
        }                          // ENDING OF OPTION 4.
        else if (user_option == 5) // ADDING OF STOCK.
        {
            cout << "Followings were the things added by ADMIN : ";
            cout << "\n1-" << stock_adding_1;
            cout << "\n2-" << stock_adding_2;
            cout << "\n3-" << stock_adding_3;
            cout << "\n4-" << stock_adding_4;
            cout << "\n5-" << stock_adding_5;
        }                          // ENDING OF OPTION 5.
        else if (user_option == 6) // MANAGEMENT OF SHOP.
        {
            cout << "Followings are the expenditures of the shop (In Assending order) :";
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
            else if (food_bill > electricity_bill && food_bill > worker_salary && food_bill > orders_bill)
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
            else if (worker_salary > electricity_bill && worker_salary > food_bill && worker_salary > orders_bill)
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
            else if (orders_bill > electricity_bill && orders_bill > food_bill && orders_bill > worker_salary)
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

        } // ENDING OF OPTION 6.
        else
        {
            cout << "Enter a valid input";
        }

    }                          // END OF ADMIN OPTIONS.
    else if (user_option == 2) // FOR ASKING OF OPTION AFTER THE DISPLAY OF customer MENU.
    {
        cout << "Your option---                                                   " << endl;
        cin >> user_option;
        system("cls");
        if (user_option == 1)
        {
            cout << "\nFollowings items (with their prices) are available in store : ";
            cout << "\n1-Books---------------------Rs 300";
            cout << "\n2-Pens----------------------Rs 70";
            cout << "\n3-Geometry Items------------Rs 500";
            cout << "\n4-White Boards--------------Rs 700";
            cout << "\n5-Registers-----------------Rs 100\n";
        } // ENDING OF OPTION 1.
        else if (user_option == 2)
        {
            cout << "All the coustomers have brought thier desired things";
        } // ENDING OF OPTION 2.
        else if (user_option == 3)
        {
            cout << "All the coustomers have changed their pins";
        } // ENDING OF OPTION 3.
        else if (user_option == 4)
        {
            cout << "All the coustomers have placed their orders";
        } // ENDING OF OPTION 4.

        else
        {
            cout << "Enter a valid input";
        }
    }
    else
    {
        cout << "Enter a valid input";
    }
    //  MENU
    system("cls");
    cout << "\n*****************************************************************" << endl;
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
    cin >> user_option;
    system("cls");

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
        cout << "\n*****************************************************************" << endl;
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
    if (user_option == 1) // FOR ASKING OF OPTION AFTER THE DISPLAY OF admin MENU.
    {
        cout << "Your option---                                                   " << endl;
        cin >> user_option;
        system("cls");
        if (user_option == 1) // MAXIMUM LIMIT REACHED
        {
            cout << "Atmost four customers can be added.";
        }                          // ENDING OF OPTION 1.
        else if (user_option == 2) // VIEW CUSTOMERS
        {
            cout << "\nFollowing(s) are the customers and their pins added by ADMIN : ";
            cout << "\n1-" << customer_1_n << "\t" << customer_1_p_a;
            cout << "\n2-" << customer_2_n << "\t" << customer_2_p_a;
            cout << "\n3-" << customer_3_n << "\t" << customer_3_p_a;
            cout << "\n4-" << customer_4_n << "\t" << customer_4_p_a;
            cout << "----------------------------------------------";
        }                          // ENDING OF OPTION 2.
        else if (user_option == 3) // VIEW BILLS OF CUTOMERS
        {
            cout << "\nFollowing(s) are the customers and their bills : ";
            cout << "\n1-" << customer_1_n << "\t" << bill_c1;
            cout << "\n2-" << customer_2_n << "\t" << bill_c2;
            cout << "\n3-" << customer_3_n << "\t" << bill_c3;
            cout << "\n4-" << customer_4_n << "\t" << bill_c4;
            cout << "----------------------------------------------";
        }                          // ENDING OF OPTION 3.
        else if (user_option == 4) // VIEW ORDERS PLACED BY CUSTOMERS
        {
            cout << "Following(s) are the customers and their orders : ";
            cout << "\n1-" << customer_1_n << "\t" << order_1_c1 << "\t" << order_2_c1 << "\t" << order_3_c1;
            cout << "\n2-" << customer_2_n << "\t" << order_1_c2 << "\t" << order_2_c2 << "\t" << order_3_c2;
            cout << "\n3-" << customer_3_n << "\t" << order_1_c3 << "\t" << order_2_c3 << "\t" << order_3_c3;
            cout << "\n4-" << customer_4_n << "\t" << order_1_c4 << "\t" << order_2_c4 << "\t" << order_3_c4;
            cout << "--------------------------------------------------------------------------------------";
        }                          // ENDING OF OPTION 4.
        else if (user_option == 5) // ADDING OF STOCK.
        {
            cout << "Followings were the things added by ADMIN : ";
            cout << "\n1-" << stock_adding_1;
            cout << "\n2-" << stock_adding_2;
            cout << "\n3-" << stock_adding_3;
            cout << "\n4-" << stock_adding_4;
            cout << "\n5-" << stock_adding_5;
        }                          // ENDING OF OPTION 5.
        else if (user_option == 6) // MANAGEMENT OF SHOP.
        {
            cout << "Followings are the expenditures of the shop (In Assending order) :";
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
            else if (food_bill > electricity_bill && food_bill > worker_salary && food_bill > orders_bill)
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
            else if (worker_salary > electricity_bill && worker_salary > food_bill && worker_salary > orders_bill)
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
            else if (orders_bill > electricity_bill && orders_bill > food_bill && orders_bill > worker_salary)
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

        } // ENDING OF OPTION 6.
        else
        {
            cout << "Enter a valid input";
        }

    }                          // END OF ADMIN OPTIONS.
    else if (user_option == 2) // FOR ASKING OF OPTION AFTER THE DISPLAY OF customer MENU.
    {
        cout << "Your option---                                                   " << endl;
        cin >> user_option;
        system("cls");
        if (user_option == 1)
        {
            cout << "\nFollowings items (with their prices) are available in store : ";
            cout << "\n1-Books---------------------Rs 300";
            cout << "\n2-Pens----------------------Rs 70";
            cout << "\n3-Geometry Items------------Rs 500";
            cout << "\n4-White Boards--------------Rs 700";
            cout << "\n5-Registers-----------------Rs 100\n";
        } // ENDING OF OPTION 1.
        else if (user_option == 2)
        {
            cout << "All the coustomers have brought thier desired things";
        } // ENDING OF OPTION 2.
        else if (user_option == 3)
        {
            cout << "All the coustomers have changed their pins";
        } // ENDING OF OPTION 3.
        else if (user_option == 4)
        {
            cout << "All the coustomers have placed their orders";
        } // ENDING OF OPTION 4.

        else
        {
            cout << "Enter a valid input";
        }
    }
    else
    {
        cout << "Enter a valid input";
    }
    //  MENU
    system("cls");
    cout << "\n*****************************************************************" << endl;
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
    cin >> user_option;
    system("cls");

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
        cout << "\n*****************************************************************" << endl;
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
    if (user_option == 1) // FOR ASKING OF OPTION AFTER THE DISPLAY OF admin MENU.
    {
        cout << "Your option---                                                   " << endl;
        cin >> user_option;
        system("cls");
        if (user_option == 1) // MAXIMUM LIMIT REACHED
        {
            cout << "Atmost four customers can be added.";
        }                          // ENDING OF OPTION 1.
        else if (user_option == 2) // VIEW CUSTOMERS
        {
            cout << "\nFollowing(s) are the customers and their pins added by ADMIN : ";
            cout << "\n1-" << customer_1_n << "\t" << customer_1_p_a;
            cout << "\n2-" << customer_2_n << "\t" << customer_2_p_a;
            cout << "\n3-" << customer_3_n << "\t" << customer_3_p_a;
            cout << "\n4-" << customer_4_n << "\t" << customer_4_p_a;
            cout << "----------------------------------------------";
        }                          // ENDING OF OPTION 2.
        else if (user_option == 3) // VIEW BILLS OF CUTOMERS
        {
            cout << "\nFollowing(s) are the customers and their bills : ";
            cout << "\n1-" << customer_1_n << "\t" << bill_c1;
            cout << "\n2-" << customer_2_n << "\t" << bill_c2;
            cout << "\n3-" << customer_3_n << "\t" << bill_c3;
            cout << "\n4-" << customer_4_n << "\t" << bill_c4;
            cout << "----------------------------------------------";
        }                          // ENDING OF OPTION 3.
        else if (user_option == 4) // VIEW ORDERS PLACED BY CUSTOMERS
        {
            cout << "Following(s) are the customers and their orders : ";
            cout << "\n1-" << customer_1_n << "\t" << order_1_c1 << "\t" << order_2_c1 << "\t" << order_3_c1;
            cout << "\n2-" << customer_2_n << "\t" << order_1_c2 << "\t" << order_2_c2 << "\t" << order_3_c2;
            cout << "\n3-" << customer_3_n << "\t" << order_1_c3 << "\t" << order_2_c3 << "\t" << order_3_c3;
            cout << "\n4-" << customer_4_n << "\t" << order_1_c4 << "\t" << order_2_c4 << "\t" << order_3_c4;
            cout << "--------------------------------------------------------------------------------------";
        }                          // ENDING OF OPTION 4.
        else if (user_option == 5) // ADDING OF STOCK.
        {
            cout << "Followings were the things added by ADMIN : ";
            cout << "\n1-" << stock_adding_1;
            cout << "\n2-" << stock_adding_2;
            cout << "\n3-" << stock_adding_3;
            cout << "\n4-" << stock_adding_4;
            cout << "\n5-" << stock_adding_5;
        }                          // ENDING OF OPTION 5.
        else if (user_option == 6) // MANAGEMENT OF SHOP.
        {
            cout << "Followings are the expenditures of the shop (In Assending order) :";
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
            else if (food_bill > electricity_bill && food_bill > worker_salary && food_bill > orders_bill)
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
            else if (worker_salary > electricity_bill && worker_salary > food_bill && worker_salary > orders_bill)
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
            else if (orders_bill > electricity_bill && orders_bill > food_bill && orders_bill > worker_salary)
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

        } // ENDING OF OPTION 6.
        else
        {
            cout << "Enter a valid input";
        }

    }                          // END OF ADMIN OPTIONS.
    else if (user_option == 2) // FOR ASKING OF OPTION AFTER THE DISPLAY OF customer MENU.
    {
        cout << "Your option---                                                   " << endl;
        cin >> user_option;
        system("cls");
        if (user_option == 1)
        {
            cout << "\nFollowings items (with their prices) are available in store : ";
            cout << "\n1-Books---------------------Rs 300";
            cout << "\n2-Pens----------------------Rs 70";
            cout << "\n3-Geometry Items------------Rs 500";
            cout << "\n4-White Boards--------------Rs 700";
            cout << "\n5-Registers-----------------Rs 100\n";
        } // ENDING OF OPTION 1.
        else if (user_option == 2)
        {
            cout << "All the coustomers have brought thier desired things";
        } // ENDING OF OPTION 2.
        else if (user_option == 3)
        {
            cout << "All the coustomers have changed their pins";
        } // ENDING OF OPTION 3.
        else if (user_option == 4)
        {
            cout << "All the coustomers have placed their orders";
        } // ENDING OF OPTION 4.

        else
        {
            cout << "Enter a valid input";
        }
    }
    else
    {
        cout << "Enter a valid input";
    }
    //  MENU
    system("cls");
    cout << "\n*****************************************************************" << endl;
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
    cin >> user_option;
    system("cls");

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
        cout << "\n*****************************************************************" << endl;
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
    if (user_option == 1) // FOR ASKING OF OPTION AFTER THE DISPLAY OF admin MENU.
    {
        cout << "Your option---                                                   " << endl;
        cin >> user_option;
        system("cls");
        if (user_option == 1) // MAXIMUM LIMIT REACHED
        {
            cout << "Atmost four customers can be added.";
        }                          // ENDING OF OPTION 1.
        else if (user_option == 2) // VIEW CUSTOMERS
        {
            cout << "\nFollowing(s) are the customers and their pins added by ADMIN : ";
            cout << "\n1-" << customer_1_n << "\t" << customer_1_p_a;
            cout << "\n2-" << customer_2_n << "\t" << customer_2_p_a;
            cout << "\n3-" << customer_3_n << "\t" << customer_3_p_a;
            cout << "\n4-" << customer_4_n << "\t" << customer_4_p_a;
            cout << "----------------------------------------------";
        }                          // ENDING OF OPTION 2.
        else if (user_option == 3) // VIEW BILLS OF CUTOMERS
        {
            cout << "\nFollowing(s) are the customers and their bills : ";
            cout << "\n1-" << customer_1_n << "\t" << bill_c1;
            cout << "\n2-" << customer_2_n << "\t" << bill_c2;
            cout << "\n3-" << customer_3_n << "\t" << bill_c3;
            cout << "\n4-" << customer_4_n << "\t" << bill_c4;
            cout << "----------------------------------------------";
        }                          // ENDING OF OPTION 3.
        else if (user_option == 4) // VIEW ORDERS PLACED BY CUSTOMERS
        {
            cout << "Following(s) are the customers and their orders : ";
            cout << "\n1-" << customer_1_n << "\t" << order_1_c1 << "\t" << order_2_c1 << "\t" << order_3_c1;
            cout << "\n2-" << customer_2_n << "\t" << order_1_c2 << "\t" << order_2_c2 << "\t" << order_3_c2;
            cout << "\n3-" << customer_3_n << "\t" << order_1_c3 << "\t" << order_2_c3 << "\t" << order_3_c3;
            cout << "\n4-" << customer_4_n << "\t" << order_1_c4 << "\t" << order_2_c4 << "\t" << order_3_c4;
            cout << "--------------------------------------------------------------------------------------";
        }                          // ENDING OF OPTION 4.
        else if (user_option == 5) // ADDING OF STOCK.
        {
            cout << "Followings were the things added by ADMIN : ";
            cout << "\n1-" << stock_adding_1;
            cout << "\n2-" << stock_adding_2;
            cout << "\n3-" << stock_adding_3;
            cout << "\n4-" << stock_adding_4;
            cout << "\n5-" << stock_adding_5;
        }                          // ENDING OF OPTION 5.
        else if (user_option == 6) // MANAGEMENT OF SHOP.
        {
            cout << "Followings are the expenditures of the shop (In Assending order) :";
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
            else if (food_bill > electricity_bill && food_bill > worker_salary && food_bill > orders_bill)
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
            else if (worker_salary > electricity_bill && worker_salary > food_bill && worker_salary > orders_bill)
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
            else if (orders_bill > electricity_bill && orders_bill > food_bill && orders_bill > worker_salary)
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

        } // ENDING OF OPTION 6.
        else
        {
            cout << "Enter a valid input";
        }

    }                          // END OF ADMIN OPTIONS.
    else if (user_option == 2) // FOR ASKING OF OPTION AFTER THE DISPLAY OF customer MENU.
    {
        cout << "Your option---                                                   " << endl;
        cin >> user_option;
        system("cls");
        if (user_option == 1)
        {
            cout << "\nFollowings items (with their prices) are available in store : ";
            cout << "\n1-Books---------------------Rs 300";
            cout << "\n2-Pens----------------------Rs 70";
            cout << "\n3-Geometry Items------------Rs 500";
            cout << "\n4-White Boards--------------Rs 700";
            cout << "\n5-Registers-----------------Rs 100\n";
        } // ENDING OF OPTION 1.
        else if (user_option == 2)
        {
            cout << "All the coustomers have brought thier desired things";
        } // ENDING OF OPTION 2.
        else if (user_option == 3)
        {
            cout << "All the coustomers have changed their pins";
        } // ENDING OF OPTION 3.
        else if (user_option == 4)
        {
            cout << "All the coustomers have placed their orders";
        } // ENDING OF OPTION 4.

        else
        {
            cout << "Enter a valid input";
        }
    }
    else
    {
        cout << "Enter a valid input";
    }
    //  MENU
    system("cls");
    cout << "\n*****************************************************************" << endl;
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
    cin >> user_option;
    system("cls");

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
        cout << "\n*****************************************************************" << endl;
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
    if (user_option == 1) // FOR ASKING OF OPTION AFTER THE DISPLAY OF admin MENU.
    {
        cout << "Your option---                                                   " << endl;
        cin >> user_option;
        system("cls");
        if (user_option == 1) // MAXIMUM LIMIT REACHED
        {
            cout << "Atmost four customers can be added.";
        }                          // ENDING OF OPTION 1.
        else if (user_option == 2) // VIEW CUSTOMERS
        {
            cout << "\nFollowing(s) are the customers and their pins added by ADMIN : ";
            cout << "\n1-" << customer_1_n << "\t" << customer_1_p_a;
            cout << "\n2-" << customer_2_n << "\t" << customer_2_p_a;
            cout << "\n3-" << customer_3_n << "\t" << customer_3_p_a;
            cout << "\n4-" << customer_4_n << "\t" << customer_4_p_a;
            cout << "----------------------------------------------";
        }                          // ENDING OF OPTION 2.
        else if (user_option == 3) // VIEW BILLS OF CUTOMERS
        {
            cout << "\nFollowing(s) are the customers and their bills : ";
            cout << "\n1-" << customer_1_n << "\t" << bill_c1;
            cout << "\n2-" << customer_2_n << "\t" << bill_c2;
            cout << "\n3-" << customer_3_n << "\t" << bill_c3;
            cout << "\n4-" << customer_4_n << "\t" << bill_c4;
            cout << "----------------------------------------------";
        }                          // ENDING OF OPTION 3.
        else if (user_option == 4) // VIEW ORDERS PLACED BY CUSTOMERS
        {
            cout << "Following(s) are the customers and their orders : ";
            cout << "\n1-" << customer_1_n << "\t" << order_1_c1 << "\t" << order_2_c1 << "\t" << order_3_c1;
            cout << "\n2-" << customer_2_n << "\t" << order_1_c2 << "\t" << order_2_c2 << "\t" << order_3_c2;
            cout << "\n3-" << customer_3_n << "\t" << order_1_c3 << "\t" << order_2_c3 << "\t" << order_3_c3;
            cout << "\n4-" << customer_4_n << "\t" << order_1_c4 << "\t" << order_2_c4 << "\t" << order_3_c4;
            cout << "--------------------------------------------------------------------------------------";
        }                          // ENDING OF OPTION 4.
        else if (user_option == 5) // ADDING OF STOCK.
        {
            cout << "Followings were the things added by ADMIN : ";
            cout << "\n1-" << stock_adding_1;
            cout << "\n2-" << stock_adding_2;
            cout << "\n3-" << stock_adding_3;
            cout << "\n4-" << stock_adding_4;
            cout << "\n5-" << stock_adding_5;
        }                          // ENDING OF OPTION 5.
        else if (user_option == 6) // MANAGEMENT OF SHOP.
        {
            cout << "Followings are the expenditures of the shop (In Assending order) :";
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
            else if (food_bill > electricity_bill && food_bill > worker_salary && food_bill > orders_bill)
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
            else if (worker_salary > electricity_bill && worker_salary > food_bill && worker_salary > orders_bill)
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
            else if (orders_bill > electricity_bill && orders_bill > food_bill && orders_bill > worker_salary)
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

        } // ENDING OF OPTION 6.
        else
        {
            cout << "Enter a valid input";
        }

    }                          // END OF ADMIN OPTIONS.
    else if (user_option == 2) // FOR ASKING OF OPTION AFTER THE DISPLAY OF customer MENU.
    {
        cout << "Your option---                                                   " << endl;
        cin >> user_option;
        system("cls");
        if (user_option == 1)
        {
            cout << "\nFollowings items (with their prices) are available in store : ";
            cout << "\n1-Books---------------------Rs 300";
            cout << "\n2-Pens----------------------Rs 70";
            cout << "\n3-Geometry Items------------Rs 500";
            cout << "\n4-White Boards--------------Rs 700";
            cout << "\n5-Registers-----------------Rs 100\n";
        } // ENDING OF OPTION 1.
        else if (user_option == 2)
        {
            cout << "All the coustomers have brought thier desired things";
        } // ENDING OF OPTION 2.
        else if (user_option == 3)
        {
            cout << "All the coustomers have changed their pins";
        } // ENDING OF OPTION 3.
        else if (user_option == 4)
        {
            cout << "All the coustomers have placed their orders";
        } // ENDING OF OPTION 4.

        else
        {
            cout << "Enter a valid input";
        }
    }
    else
    {
        cout << "Enter a valid input";
    }
}