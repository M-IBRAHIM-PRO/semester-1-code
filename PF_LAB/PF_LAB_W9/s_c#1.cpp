#include <iostream>
using namespace std;
int const array_size = 5;
char word[] = "hello";
void reverse_order()
{
    for (int i = array_size - 1; i >= 0; i--)
    {
        cout << word[i];
    }
}
main()
{
    reverse_order();
}
