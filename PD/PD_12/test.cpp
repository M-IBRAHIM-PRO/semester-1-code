#include <iostream>
#include <fstream>
using namespace std;
//-------prototypes--------
void reserve();
void getclas();
void display();
//-------global arrays------
char seat_arragement_file[13][6];

//------global variables-------
char tic_type;
int seat_n;
int c_num;

main()
{
    int rows = 0;
    int columns = 0;
    char c;
    ifstream file("Data.txt");
    while (!file.eof())
    {
        file >> c;
        seat_arragement_file[rows][columns] = c;
        cout << " rows " << rows << " columns " << columns << " data " << seat_arragement_file[rows][columns] << endl;
        columns++;
        if (columns == 6 && rows < 13)
        {
            columns = 0;
            rows++;
        }
    }
    cout << "Enter ticket type: ";
    cin >> tic_type;
    cout << "Enter desired seat : ";
    cin >> seat_n;
    getclas();
    display();
    reserve();
    display();
}
void getclas()
{
    if (tic_type == 'a' || tic_type == 'A')
    {
        c_num = 1;
    }
    else if (tic_type == 'b' || tic_type == 'B')
    {
        c_num = 2;
    }
    else if (tic_type == 'c' || tic_type == 'C')
    {
        c_num = 3;
    }
    else if (tic_type == 'd' || tic_type == 'D')
    {
        c_num = 4;
    }
    else if (tic_type == 'e' || tic_type == 'E')
    {
        c_num = 5;
    }
    else if (tic_type == 'f' || tic_type == 'F')
    {
        c_num = 6;
    }
}
void reserve()
{
    seat_arragement_file[seat_n][c_num] = '1';
}
void display()
{
    for (int i = 0; i < 13; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            seat_arragement_file[i][j];
        }
        cout << endl;
    }
}