#include <iostream>
using namespace std;
void display(int *p)
{
    cout << "You typed " << *p;
}
main()
{
    system("cls");
    int a, b, c;
    int *x, *y, *z;

    cout << "Enter any 3 numbres : ";
    cin >> a >> b >> c;
    x = &a;
    y = &b;
    z = &c;
    if ((*x) < (*y) && (*x) < (*z))
    {
        cout << *x << " is smallest ." << endl;
    }
    else if ((*x) > (*y) && (*z) > (*y))
    {
        cout << *y << " is smallest ." << endl;
    }
    else if ((*z) < (*y) && (*x) > (*z))
    {
        cout << *z << " is smallest ." << endl;
    }
    if ((*x) > (*y) && (*x) > (*z))
    {
        cout << *x << " is larest ." << endl;
    }
    else if ((*x) < (*y) && (*y) > (*z))
    {
        cout << *y << " is larest ." << endl;
    }
    else if ((*z) > (*y) && (*x) < (*z))
    {
        cout << *z << " is larest ." << endl;
    }
}