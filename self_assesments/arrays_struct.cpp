#include <iostream>
using namespace std;
int const ARRAY_SIZE = 10;
struct list_type
{
    int array[ARRAY_SIZE];
    int list_size;
};
list_type list_1;
void search_in_list(int item);
main()
{
    system("cls");
    list_1.list_size = 0;
    list_1.array[0] = 12;
    list_1.list_size++;
    list_1.array[1] = 23;
    list_1.list_size++;
    cout << "Enter number :";
    int number;
    cin >> number;
    search_in_list(number);
}
void search_in_list(int item)
{
    bool answer = false;
    for (int loc = 0; loc < list_1.list_size; loc++)
    {
        if (list_1.array[loc] == item)
        {
            cout << "Is found" << endl;
            answer = true;
            break;
        }
    }
    if (!answer)
        cout << "not found" << endl;
    cout << answer;
}