#include <iostream>
using namespace std;
void change(int num)
{
    cout << "Value before any operation : " << num << endl;
    num = num + 100;
    cout << "Value after any operation : " << num << endl;
}
main()
{
    int x = 111;
    cout << "Value of x before passing to function : " << x << endl;
    change(x);
    cout << "Value of x after passing to function : " << x << endl;
}