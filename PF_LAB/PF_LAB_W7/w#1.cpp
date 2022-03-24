#include <iostream>
using namespace std;
void display()
{
    char a, b;
    cout << "Enter any key :";
    cin >> a;
    while (a == 'y')
    {
        cout << "I am happy";
        cout << "Enter any key :";
        cin >> a;
    }
    cout << "\nprograms ends";
}
main()
{
    display();
}