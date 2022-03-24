#include <iostream>
using namespace std;
void display_array()
{
    int roll_no[5] = {1, 2, 3, 4, 5};
    int age[5] = {12, 121, 23, 23, 244};
    for (int index = 0; index < 5; index++)
    {
        cout << "roll_no[" << index + 1 << "]" << roll_no[index] << "\t";
        cout << "age[" << index + 1 << "]" << age[index] << endl;
    }
}
main()
{
    display_array();
}