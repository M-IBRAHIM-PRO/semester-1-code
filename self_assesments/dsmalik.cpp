#include <iostream>
using namespace std;
main()
{
    double gpa;                                    // Line 5
    cout << "Enter the GPA: ";                     // Line 6
    cin >> gpa;                                    // Line 7
    cout << endl;                                  // Line 8
    if (gpa >= 2.0)                                // Line 9
        if (gpa >= 3.9)                            // Line 10
            cout << "Dean\'s Honor List." << endl; // Line 11
        else                                       // Line 12
            cout << "The GPA is below the graduation "
                 << "requirement. \nSee your "
                 << "academic advisor." << endl;
}