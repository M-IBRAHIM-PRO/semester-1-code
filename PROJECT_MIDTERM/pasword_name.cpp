#include <iostream>
using namespace std;
bool name_pasword_checker();
// USED BY ADMIN TO STORE NAMES OF CUSTOMERS
string customer_1_n_a = "Empty", customer_2_n_a = "Empty", customer_3_n_a = "Empty", customer_4_n_a = "Empty";
// USED BY ADMIN TO STORE PINS(in string data type) OF CUSTOMERS
string customer_1_p_a = "Empty", customer_2_p_a = "Empty", customer_3_p_a = "Empty", customer_4_p_a = "Empty";
// USED BY CUSTOMER  FOR COMPARISON WHILE CHANGING PIN
string customer_1_p = "Empty", customer_2_p = "Empty", customer_3_p = "Empty", customer_4_p = "Empty";
// USED BY CUSTOMERS WHILE CHANGING PIN
string customer_1_n_a_valid, customer_2_n_a_valid, customer_3_n_a_valid, customer_4_n_a_valid;
main()
{
    bool valid;
    cout << "Enter your name : ";
    cin >> customer_1_n_a_valid;
    cout << "\nEnter your pin : ";
    cin >> customer_1_p;
    string customer_p_a;
    valid = name_pasword_checker(customer_1_p,customer_1_n_a_valid);
    if (valid == 1)
    {
        //PERFORM FUNCTION
    }
    else
    {
        cout<<"User name or pasword is wrong "<<endl;
    }
}
bool name_pasword_checker(string customer_p, string customer_n_valid)
{
    bool result = false;
    if (customer_p == customer_1_p_a && customer_1_n_a == customer_n_valid)
    {
        result = true;
    }
    return result;
}