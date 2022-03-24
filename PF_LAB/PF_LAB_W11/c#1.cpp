#include <fstream>
#include <iostream>
using namespace std;
void read_data(char letter)
{
    char d;
    int count = 0;
    fstream newfile;
    newfile.open("result_card.txt", ios::in);
    while (!newfile.eof())
    {
        newfile >> d;
        count++;
        if (d == letter)
        {
            cout << "location of letter : " << count << endl;
        }
    }
    newfile.close();
}
main()
{
    char letter;
    cout << "Enter letter : ";
    cin >> letter;
    read_data(letter);
}