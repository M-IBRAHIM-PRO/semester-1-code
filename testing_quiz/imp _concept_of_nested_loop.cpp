#include <iostream>
using namespace std;
main()
{
    // for (int i = 10; i >= 0; i = i - 1)
    // {
    //     cout << i << "before" << endl;
    //     cout << i << endl;
    //     cout << i << "after" << endl;
    // }
    // int i = 10;
    // while (i >= 0) // we cannot inetalize a variable in while loop as we do in for loop
    // {
    //     cout << " " << i;
    //     i = i - 1;
    // }
    for (int i = 1; i <= 5; i = i + 1)
    {
        cout << "\nline i" << i;
        cout << " * ";
        for (int j = 1; j <= i; j = j + 1) // it will work when value of previous loop will be equal to its initial value.
        {
            cout << "\nline j" << j;
            cout << " * ";
        }
        for (int k = 1; k <= i; k = k + 1) // it will work when value of previous loop will be equal to its initial value.
        {
            cout << "\nline k" << k;
            cout << " * ";
        }
        for (int l = 1; l <= i; l = l + 1) // it will work when value of previous loop will be equal to its initial value.
        {
            cout << "\nline L" << l;
            cout << " * ";
        }

        cout << endl;
    }
    // parent  loop decides number of rows .()
    //   loop decides number of rows       .()
    //   loop decides number of rows       .()
    // nested loop decides number of coulmbs().().()
}
