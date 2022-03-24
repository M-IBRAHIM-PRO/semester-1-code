#include <iostream>
using namespace std;
int const number_of_orders = 3;
string order_c1[number_of_orders] = {"order 1 c1", "order 2 c1", "order 3 c1"}; // USED FOR STORING ORDERS OF CUSTOMER 1.
string order_c2[number_of_orders] = {"order 1 c2", "order 2 c2", "order 3 c2"}; // USED FOR STORING ORDERS OF CUSTOMER 2.
string order_c3[number_of_orders] = {"order 1 c3", "order 2 c3", "order 3 c3"}; // USED FOR STORING ORDERS OF CUSTOMER 3.
string order_c4[number_of_orders] = {"order 1 c4", "order 2 c4", "order 3 c4"}; // USED FOR STORING ORDERS OF CUSTOMER 4.
main()
{
    cout << "Following(s) are the customers and their orders : " << endl;
    for (int i = 0; i <= 4; i++)
    {
        if (i == 0)
        {
            cout << "customer 1 "
                 << "\t";
            int index = 0;
            while (order_c1[index] == '\0')
            {
                cout << order_c1[index];
                index++;
            }
            cout << endl;
        }
        else if (i == 1)
        {
            cout << "customer 2"
                 << "\t";
            int index = 0;
            while (order_c2 == '\0')
            {
                cout << order_c2[index];
                index++;
            }
            cout << endl;
        }
        else if (i == 2)
        {
            cout << "customer 3"
                 << "\t";
            int index = 0;
            while (order_c3 == '\0')
            {
                cout << order_c3[index];
                index++;
            }
            cout << endl;
        }
        else if (i == 3)
        {
            cout << "customer 4"
                 << "\t";
            int index = 0;
            while (order_c4 == '\0')
            {
                cout << order_c4[index];
                index++;
            }
            cout << endl;
        }
    }
}