#include <iostream>
using namespace std;
main()
{
    int electricity_bill = 0, food_bill = 0, worker_salary = 0, orders_bill = 0, software_bill = 0;
    if (electricity_bill > food_bill && electricity_bill > worker_salary && electricity_bill > orders_bill)
    {
        cout << "\nElectricity bill : "
             << "\t" << electricity_bill;
        if (food_bill > worker_salary && food_bill > orders_bill)
        {
            cout << "\nFood bill        : "
                 << "\t" << food_bill;
            if (worker_salary > orders_bill)
            {
                cout << "\nWorker Salary    : "
                     << "\t" << worker_salary;
                cout << "\nOrders bill      : "
                     << "\t" << orders_bill;
            }
            else
            {
                cout << "\nOrders bill      : "
                     << "\t" << orders_bill;
                cout << "\nWorker Salary    : "
                     << "\t" << worker_salary;
            }
        }
        if (worker_salary > food_bill && worker_salary > orders_bill)
        {
            cout << "\nWorker Salary    : "
                 << "\t" << worker_salary;
            if (food_bill > orders_bill)
            {
                cout << "\nFood bill        : "
                     << "\t" << food_bill;
                cout << "\nOrders bill      : "
                     << "\t" << orders_bill;
            }
            else
            {
                cout << "\nOrders bill      : "
                     << "\t" << orders_bill;
                cout << "\nFood bill        : "
                     << "\t" << food_bill;
            }
        }
        if (orders_bill > food_bill && orders_bill > worker_salary)
        {
            cout << "\nOrders bill      : "
                 << "\t" << orders_bill;
            if (food_bill > worker_salary)
            {
                cout << "\nFood bill        : "
                     << "\t" << food_bill;
                cout << "\nWorker Salary    : "
                     << "\t" << worker_salary;
            }
            else
            {
                cout << "\nWorker Salary    : "
                     << "\t" << worker_salary;
                cout << "\nFood bill        : "
                     << "\t" << food_bill;
            }
        }
    }

    else if (food_bill > electricity_bill && food_bill > worker_salary && food_bill > orders_bill)
    {
        cout << "\nFood bill        : "
             << "\t" << food_bill;
        if (electricity_bill > worker_salary && electricity_bill > orders_bill)
        {
            cout << "\nElectricity bill : "
                 << "\t" << electricity_bill;
            if (worker_salary > orders_bill)
            {
                cout << "\nWorker Salary    : "
                     << "\t" << worker_salary;
                cout << "\nOrders bill      : "
                     << "\t" << orders_bill;
            }
            else
            {
                cout << "\nOrders bill      : "
                     << "\t" << orders_bill;
                cout << "\nWorker Salary    : "
                     << "\t" << worker_salary;
            }
        }
        if (worker_salary > electricity_bill && worker_salary > orders_bill)
        {
            cout << "\nWorker Salary    : "
                 << "\t" << worker_salary;
            if (electricity_bill > orders_bill)
            {
                cout << "\nElectricity bill : "
                     << "\t" << electricity_bill;
                cout << "\nOrders bill      : "
                     << "\t" << orders_bill;
            }
            else
            {
                cout << "\nOrders bill      : "
                     << "\t" << orders_bill;
                cout << "\nElectricity bill : "
                     << "\t" << electricity_bill;
            }
        }
        if (orders_bill > electricity_bill && orders_bill > worker_salary)
        {
            cout << "\nOrders bill      : "
                 << "\t" << orders_bill;
            if (electricity_bill > worker_salary)
            {
                cout << "\nElectricity bill : "
                     << "\t" << electricity_bill;
                cout << "\nWorker Salary    : "
                     << "\t" << worker_salary;
            }
            else
            {
                cout << "\nWorker Salary    : "
                     << "\t" << worker_salary;
                cout << " " << endl;
                cout << " " << endl;
                cout << "\nElectricity bill : "
                     << "\t" << electricity_bill;
            }
        }
    }

    if (worker_salary > electricity_bill && worker_salary > food_bill && worker_salary > orders_bill)
    {
        cout << "\nWorker Salary    : "
             << "\t" << worker_salary;

        if (electricity_bill > food_bill && electricity_bill > orders_bill)
        {
            cout << "\nElectricity bill : "
                 << "\t" << electricity_bill;
            if (food_bill > orders_bill)
            {
                cout << "\nFood bill        : "
                     << "\t" << food_bill;
                cout << "\nOrders bill      : "
                     << "\t" << orders_bill;
            }
            else
            {
                cout << "\nOrders bill      : "
                     << "\t" << orders_bill;
                cout << "\nFood bill        : "
                     << "\t" << food_bill;
            }
        }
        if (food_bill > electricity_bill && food_bill > orders_bill)
        {
            cout << "\nFood bill        : "
                 << "\t" << food_bill;
            if (electricity_bill > orders_bill)
            {
                cout << "\nElectricity bill : "
                     << "\t" << electricity_bill;
                cout << "\nOrders bill      : "
                     << "\t" << orders_bill;
                ;
            }
            else
            {
                cout << "\nOrders bill      : "
                     << "\t" << orders_bill;
                cout << "\nElectricity bill : "
                     << "\t" << electricity_bill;
            }
        }
        if (orders_bill > electricity_bill && orders_bill > food_bill)
        {
            cout << "\nOrders bill      : "
                 << "\t" << orders_bill;
            if (electricity_bill > food_bill)
            {
                cout << "\nElectricity bill : "
                     << "\t" << electricity_bill;
                cout << "\nFood bill        : "
                     << "\t" << food_bill;
            }
            else
            {
                cout << "\nFood bill        : "
                     << "\t" << food_bill;
                cout << "\nElectricity bill : "
                     << "\t" << electricity_bill;
            }
        }
    }

    if (orders_bill > electricity_bill && orders_bill > food_bill && orders_bill > worker_salary)
    {
        cout << "\nOrders bill      : "
             << "\t" << orders_bill;

        if (electricity_bill > food_bill && electricity_bill > worker_salary)
        {
            cout << "\nElectricity bill : "
                 << "\t" << electricity_bill;
            if (food_bill > worker_salary)
            {
                cout << "\nFood bill        : "
                     << "\t" << food_bill;
                cout << "\nWorker Salary    : "
                     << "\t" << worker_salary;
            }
            else
            {
                cout << "\nWorker Salary    : "
                     << "\t" << worker_salary;
                cout << "\nFood bill        : "
                     << "\t" << food_bill;
            }
        }
        if (food_bill > electricity_bill && food_bill > worker_salary)
        {
            cout << "\nFood bill        : "
                 << "\t" << food_bill;
            if (electricity_bill > worker_salary)
            {
                cout << "\nElectricity bill : "
                     << "\t" << electricity_bill;
                cout << "\nWorker Salary    : "
                     << "\t" << worker_salary;
            }
            else
            {
                cout << "\nWorker Salary    : "
                     << "\t" << worker_salary;
                cout << "\nElectricity bill : "
                     << "\t" << electricity_bill;
            }
        }
        if (worker_salary > electricity_bill && worker_salary > food_bill)
        {
            cout << "\nWorker Salary    : "
                 << "\t" << worker_salary;
            if (electricity_bill > food_bill)
            {
                cout << "\nElectricity bill : "
                     << "\t" << electricity_bill;
                cout << "\nFood bill        : "
                     << "\t" << food_bill;
            }
            else
            {
                cout << "\nFood bill        : "
                     << "\t" << food_bill;
                cout << "\nElectricity bill : "
                     << "\t" << electricity_bill;
            }
        }
    }
    cout << "Total                 " << electricity_bill + food_bill + worker_salary + orders_bill;
}