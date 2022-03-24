#include <iostream>
#include <fstream>
using namespace std;
//-------global variables------
char menu_option;
char tic_type;
int seat_n;

//--------prototyopes-------
char menu();

//-------global arrays------
char seat_arragement_file[13][6];

main()
{
    char option;
    while (true)
    {
        option = menu();
        if (option == '1')
        {
            int rows = 0;
            int columns = 0;
            char c;
            ifstream file("Data.txt");

            while (!file.eof())
            {
                file >> c;
                seat_arragement_file[rows][columns] = c;
                // cout << " rows " << rows << " columns " << columns << " data " << seat_arragement_file[rows][columns] << endl;
                columns++;
                if (columns == 6 && rows < 13)
                {
                    columns = 0;
                    rows++;
                }
            }
        }
        else if (option == '2')
        {
            cout << "Enter ticket type: ";
            cin >> tic_type;
            cout << "Enter desired seat : ";
            cin >> seat_n;
        }
        else if (option == '3')
        {
        }
        else if (option == '4')
        {
        }
        else if (option == '5')
        {
        }
        else if (option == '6')
        {
            cout << "Thanks for using " << endl;
            break;
        }
    }
}
char menu()
{
    cout << "1. Load the reserved seats arrangement from the file" << endl;
    cout << "2. Ask the user for the ticket type and desired seat" << endl;
    cout << "3. Print the reserved seats arrangement" << endl;
    cout << "4. Store the reserved seats arrangement in the file" << endl;
    cout << "5. New Plane seats arrangement" << endl;
    cout << "6. Exit" << endl;
    cout << "Your option--" << endl;
    cin >> menu_option;
    return menu_option;
}