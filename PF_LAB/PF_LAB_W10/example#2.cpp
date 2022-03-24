#include <iostream>
using namespace std;
void display_GPA(int r_number)
{
    int roll_no[5] = {1, 2, 3, 4, 5};
    float cgpa[5] = {1.2, 3.5, 3.2, 2.3, 2.5};
    for (int index = 0; index < 5; index++)
    {
        if (roll_no[index] == r_number)
        {
            cout << "roll_no[" << index + 1 << "]" << roll_no[index] << "\t";
            cout << "cgpa[" << index + 1 << "]" << cgpa[index] << endl;
        }
    }
}
main()
{
    cout << "Enter roll number : ";
    int number;
    cin >> number;
    display_GPA(number);
}