#include <iostream>
using namespace std;
main()
{
    int n_days;
    cout << "Enter the number of days : ";
    cin >> n_days;
    int patients;
    int untreated_t, treated_t;
    for (int i = 1; i <= n_days; i = i + 1)
    {
        cout << "\nEnter the patients : ";
        cin >> patients;
        int untreated, doctors = 7;
        int treated;
        if (i == 1)
        {
            if (patients > 7)
            {
                treated = doctors;
                untreated = patients - doctors;
                treated_t = treated;
                untreated_t = untreated;
            }
            else
            {
                treated = patients;
                untreated = 0;
                treated_t = treated;
                untreated_t = untreated;
            }
        }
        else if (i == 2)
        {
            if (patients > 7)
            {
                treated = doctors;
                untreated = patients - doctors;
                treated_t = treated + treated_t;
                untreated_t = untreated + untreated_t;
            }
            else
            {
                treated = patients;
                untreated = 0;
                treated_t = treated + treated_t;
                untreated_t = untreated + untreated_t;
            }
        }
        else if (i == 3)
        {
            if (untreated_t > treated_t)
            {
                doctors = doctors + 1;
            }
            else
            {
                doctors = doctors;
            }
            if (patients > 7)
            {
                treated = doctors;
                untreated = patients - doctors;
                treated_t = treated + treated_t;
                untreated_t = untreated + untreated_t;
            }
            else
            {
                treated = patients;
                untreated = 0;
                treated_t = treated + treated_t;
                untreated_t = untreated + untreated_t;
            }
        }
        else
        {
            if (untreated_t > treated_t)
            {
                doctors = doctors + 1;
            }
            else
            {
                doctors = doctors;
            }
            if (patients > 7)
            {
                treated = doctors;
                untreated = patients - doctors;
                treated_t = treated + treated_t;
                untreated_t = untreated + untreated_t;
            }
            else
            {
                treated = patients;
                untreated = 0;
                treated_t = treated + treated_t;
                untreated_t = untreated + untreated_t;
            }
        }
    }
    cout << "\nTreated patients :  " << treated_t;
    cout << "\nUntreated patients :  " << untreated_t;
}