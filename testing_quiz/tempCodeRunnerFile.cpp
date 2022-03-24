#include <iostream>
using namespace std;
main()
{
    for (int i = 10; i >= 0; i = i - 1)
    {
        cout << i << "before" << endl;
        cout << i << endl;
        cout << i << "after" << endl;
    }
    int i = 10;
    while (i >= 0) // we cannot inetalize a variable in while loop as we do in for loop
    {
        cout << " " << i;
        i = i - 1;
    }
}