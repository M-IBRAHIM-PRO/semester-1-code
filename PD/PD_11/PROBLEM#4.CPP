#include <iostream>
#include <fstream>
using namespace std;
char letter_files[50];
void read_file();
main()
{
    read_file();
}
void read_file()
{
    fstream newfile;
    char c;
    int count = 0;
    newfile.open("Data.txt", ios::in);
    while (!newfile.eof())
    {
        newfile >> c;
        letter_files[count] = c;
        count++;
    }
    newfile.close();
    for (int i = 0; i < count - 1; i++)
    {
        cout << letter_files[i] << " ";
    }
    cout << endl;
    //-------for extracting text-----------
    int cotation_count = 0;
    string text;
    while (cotation_count != 2)
    {
        for (int i = 0; i < count - 1; i++)
        {
            if (letter_files[i] == '"')
            {
                cotation_count++;
            }
            if (cotation_count == 1 && cotation_count <= 2)
            {
                text = text + letter_files[i];
            }
        }
        if (text == "")
        {
            cout << "What... why did you make this?" << endl;
        }
        else
        {
            cout << "text : " << text << '"';
        }
    }
}