#include <iostream>
using namespace std;
void replace(int *pr1, int *pr2);
main()
{
    system("cls");

    // int a;
    // int *pa;
    // a = 21;
    // pa = &a;
    // cout << "Value of a : " << a << endl;
    // cout << "Value of pa : " << *pa << endl;
    // cout << endl;
    // *pa = 23;
    // cout << "Value of a : " << a << endl;
    // cout << "Value of pa : " << *pa << endl;
    // int c = 22, *pc;
    // int d = 33, *pd;
    // pc = &c;
    // cout << "Value of c use of pointer : " << *pc << endl;
    // pd = &d;
    // cout << "Value of d use of pointer : " << *pd << endl;

    // int a = 10;
    // int b;
    // int *pa = &a;
    // // pa = &a;
    // cout << "value of a " << a;

    // int a = 5;
    // cout << a++ << endl;
    // cout << "after " << a << endl;

    int a, b, *pa, *pb;
    a = 12;
    b = 24;
    // *pa = &a;
    // *pb = &b;
    // replace(&pa, &pb);
}
void replace(int *pr1, int *pr2)
{
    int t;
    t = *pr1;
    *pr1 = *pr2;
    *pr2 = t;
}