#include <iostream>
using namespace std;
int display_marks()
{
    int roll_no[5] = {1, 2, 3, 4, 5};
    int marks[5] = {12, 121, 23, 23, 244};
    int max_index = 0;
    for (int index = 0; index < 5; index++)
    {
        if (marks[index] > max_index)
        {
            max_index = index;
        }
    }
    return max_index;
}
main()
{
    int greater_index;
    greater_index = display_marks();
    cout << "Roll number" << greater_index + 1 << " has hiesght marks";
}