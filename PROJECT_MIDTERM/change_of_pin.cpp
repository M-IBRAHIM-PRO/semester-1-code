#include <iostream>
using namespace std;
// USED FOR CHECKING NAME & PASWORD
string customer_1_n_valid, customer_2_n_valid, customer_3_n_valid, customer_4_n_valid;

string customer_1_p = "Empty", customer_2_p = "Empty", customer_3_p = "Empty", customer_4_p = "Empty";
// USED BY CUSTOMERS WHILE CHANGING PIN
string customer_1_n_pin_ch, customer_2_n_pin_ch, customer_3_n_pin_ch, customer_4_n_pin_ch, customer_5_n_pin_ch;
string customer_1_n = "Empty", customer_2_n = "Empty", customer_3_n = "Empty", customer_4_n = "Empty";
// USED BY ADMIN TO STORE PINS(in string data type) OF CUSTOMERS
string customer_1_p_a = "Empty", customer_2_p_a = "Empty", customer_3_p_a = "Empty", customer_4_p_a = "Empty";
void pin_change()
{
    string customer_p_changed;
    cout << "Enter your new pin : ";
    cin >> customer_p_changed;
    cout << "Your pin is being updated in customer 2--";
    cout << "Your pin is updated successfully----";
}

main()
{
    cout << "Enter your name : ";
    cin >> customer_1_n_valid;
    cout << "\nEnter your pin : ";
    cin >> customer_1_p;
    pin_change();
}