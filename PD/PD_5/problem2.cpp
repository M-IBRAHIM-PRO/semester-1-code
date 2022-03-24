#include <iostream>
using namespace std;
float result;
long double volume_calculator(float x, float y, float z, string unit)
{
    result = ((x * y * z) / 3);
    if (unit == "millimeter")
    {
        return (result * 1000);
    }
    else if (unit == "centimeter")
    {
        return (result * 100);
    }
    else if (unit == "meter")
    {
        return (result);
    }
    else if (unit == "kilometer")
    {
        return (result / 1000);
    }
}

string unit_return(string unit)
{
    if (unit == "centimeter")
    {
        return "cubic centimeter";
    }
    else if (unit == "millimeter")
    {
        return "cubic millimeter";
    }
    else if (unit == "meter")
    {
        return "cubic meter";
    }
    else if (unit == "kilometer")
    {
        return "cubic kilometer";
    }
}
main()
{
    float x, y, z;
    long double value;
    string unit, unit_r;
    cout << "Enter lenght : ";
    cin >> x;
    cout << "Enter width : ";
    cin >> y;
    cout << "Enter height : ";
    cin >> z;
    cout << "Enter unit : ";
    cin >> unit;
    value = volume_calculator(x, y, z, unit);
    unit_r = unit_return(unit);
    cout << value << " " << unit_r;
}
