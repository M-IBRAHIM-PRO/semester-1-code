#include <iostream>
using namespace std;
int name_pasword_checker(string customer_p, string customer_p_a, string customer_n, string customer_n_valid);
//(ADMIN VARIABLES)
// USED BY ADMIN TO STORE NAMES OF CUSTOMERS
string customer_1_n = "Empty", customer_2_n = "Empty", customer_3_n = "Empty", customer_4_n = "Empty";
// USED BY ADMIN TO STORE PINS(in string data type) OF CUSTOMERS
string customer_1_p_a = "Empty", customer_2_p_a = "Empty", customer_3_p_a = "Empty", customer_4_p_a = "Empty";
// USED BY ADMIN TO MANAGE STORE
int electricity_bill = 0, food_bill = 0, worker_salary = 0, orders_bill = 0, software_bill = 0;
// USED BY ADMIN TO VIEW BILLS OF CUSTOMERS
int bill_c1 = 0, bill_c2 = 0, bill_c3 = 0, bill_c4 = 0, bill_c;

//(CUTOMER VARIABLES)
// USED BY CUSTOMER  FOR COMPARISON WHILE CHANGING PIN
string customer_1_p = "Empty", customer_2_p = "Empty", customer_3_p = "Empty", customer_4_p = "Empty";
// USED BY CUSTOMERS WHILE CHANGING PIN
// string customer_1_n_pin_ch, customer_2_n_pin_ch, customer_3_n_pin_ch, customer_4_n_pin_ch, customer_5_n_pin_ch;
// USED WHILE PLACING ORDER
// string customer_1_n_order_placing = "Empty", customer_2_n_order_placing = "Empty", customer_3_n_order_placing = "Empty", customer_4_n_order_placing = "Empty";
// USED BY CUSTOMERS TO PLACE THREE ORDERS
string order_1_c1 = "Empty", order_2_c1 = "Empty", order_3_c1 = "Empty", order_1_c2 = "Empty", order_2_c2 = "Empty", order_3_c2 = "Empty", order_1_c3 = "Empty", order_2_c3 = "Empty", order_3_c3 = "Empty", order_1_c4 = "Empty", order_2_c4 = "Empty", order_3_c4 = "Empty";
string stock_adding_1 = "Empty", stock_adding_2 = "Empty", stock_adding_3 = "Empty", stock_adding_4 = "Empty", stock_adding_5 = "Empty";
// USED FOR CHECKING NAME & PASWORD
string customer_1_n_valid, customer_2_n_valid, customer_3_n_valid, customer_4_n_valid;
main()
{
    int t_bill = 0;
    cout << "Enter your name : ";
    cin >> customer_1_n_valid;
    cout << "\nEnter your pin : ";
    cin >> customer_1_p;
    t_bill=bill_generator(customer_1_p, customer_1_p_a, customer_1_n, customer_1_n_valid);
    cout<<"Your total bill :"<<t_bill;
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
    if(item=="white board"){
        price=700;
    }
    if(item=="register"){
        price=100;
    }
    else{

    }
    return price;
}
int bill_generator(string customer_p, string customer_p_a, string customer_n, string customer_n_valid)
{
    int n;
    int bill;
    int t_bill = 0;
    string item;
    if (customer_p == customer_p_a && customer_n == customer_n_valid)
    {
        cout << "Enter  number  of items you want to buy : " << endl;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cout << "Enter item name:";
            cin >> item;
            bill = calculateBill(item);
            t_bill = t_bill + bill;
        }
    }
    else
    {
        cout << "\nYour pasword is wrong ";
    }
    return t_bill;
}
