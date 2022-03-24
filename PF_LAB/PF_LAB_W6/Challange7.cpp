#include <iostream>
using namespace std;
/* Vehicle Type      Vehicle Code       Tax Rate
   Motorcycle           M                   6%
   Electric             E                   8%
   Sedan                S                   10%
   Van                  V                   12%
   Truck                T                   15%   */

float tax_calculator(char type, float price)
{
    if (type == 'M')
    {
        price = price + (0.06 * price);
        return t_price;
    }
    else if (type == 'E')
    {
        price = price + (0.08 * price);
        return price;
    }
    else if (type == 'S')
    {
        price = price + (0.1 * price);
        return price;
    }
    else if (type == 'V')
    {
        price = price + (0.12 * price);
        return price;
    }
    else if (type == 'T')
    {
        price = price + (0.15 * price);
        return price;
    }
}
main()
{
    char type;
    int t_percent, result;
    float t_price, total_price;
    int price;

    cout << "Enter the vehicle code : ";
    cin >> type;
    cout << "Enter the price of vehicle : ";
    cin >> price;
    result = tax_calculator(type, t_price);
    total_price = t_price + price;
    cout << "Your vehicle is of type : " << type << "\nAnd its tax : " << t_price << "\nNow total price of your vehicle :" << total_price;
}