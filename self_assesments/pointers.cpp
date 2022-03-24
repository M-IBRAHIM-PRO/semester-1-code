#include <iostream>
#include <iomanip>        //Line 2
const double PI = 3.1416; // Line 4

using namespace std;
/*
        & is used to display address(pointed by pointer)
        * is used to display value of present in address(pointed by pointer)
        *p it is used to manuplite value of address to wic pointer points
*/
main()
{
    system("cls");
    // int x = 34;
    // int *p;
    // p = &x;
    // *p = 3444; // it is used to manuplite value of address to wic pointer points.
    // // cout << *p;
    // cout << x << endl;
    // cout << *p << endl;

    // double radius;                                 // Line 7
    // double *radiusPtr;                             // Line 8
    // cout << fixed << showpoint << setprecision(2); // Line 9
    // radius = 2.5;                                  // Line 10
    // radiusPtr = &radius;                           // Line 11
    // cout << "Line 12: Radius = " << radius
    //      << ", area = " << PI * radius * radius
    //      << endl; // Line 12

    // cout << "Line 13: Radius = " << *radiusPtr
    //      << ", area = "
    //      << PI * (*radiusPtr) * (*radiusPtr)
    //      << endl;                          // Line 13
    // cout << "Line 14: Enter the radius: "; // Line 14
    // cin >> *radiusPtr;                     // Line 15
    // cout << endl;                          // Line 16
    // cout << "Line 17: Radius = " << radius << ", area = "
    //      << PI * radius * radius << endl; // Line 17
    // cout << "Line 18: Radius = " << *radiusPtr
    //      << ", area = "
    //      << PI * (*radiusPtr) * (*radiusPtr) << endl
    //      << endl; // Line 18
    // cout << "Line 19: Address of radiusPtr: "
    //      << &radiusPtr << endl; // Line 19
    // cout << "Line 20: Value stored in radiusPtr: "
    //      << radiusPtr << endl; // Line 20
    // cout << "Line 21: Address of radius: "
    //      << &radius << endl; // Line 21
    // cout << "Line 22: Value stored in radius: "
    //      << radius << endl; // Line 22

    int x = 10, y = 0;
    x = y;
    cout << "x " << x << endl;
    cout << "y " << y << endl;
    cout << endl;
    y = x;
    x = 10 * 2;
    y = 10 * 12;

    cout << "x " << x << endl;
    cout << "y " << y << endl;

    return 0; // Line 23
}
