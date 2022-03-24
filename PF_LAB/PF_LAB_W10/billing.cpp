#include <iostream>
using namespace std;
float discount_code_finder(char c)
{
    char code[5] = {'a', 'b', 'c', 'd', 'e'};
    float discount_values[5] = {0.10, 0.20, 0.30, 0.40, 0.50};
    int value;
    float discount;
    for (int i = 0; i < 5; i++)
    {
        if (code[i] == c)
        {
            value = i;
        }
    }
    discount = discount_values[value];
    return discount;
}
float calculate_bill(int items, int price, int discount)
{
    int bill;
    bill = (items * price) - (items * price * discount);
    return bill;
}
main()
{
    int items;
    int price;
    char c;
    float discount;
    float total_bill;
    cout << "Enter the number of items : ";
    cin >> items;
    cout << "Enter per item price : ";
    cin >> price;
    cout << "Enter discount code : ";
    cin >> c;
    discount = discount_code_finder(c);
    cout << discount << endl;
    total_bill = calculate_bill(items, price, discount);
    cout << "Your total bill : " << total_bill;
}