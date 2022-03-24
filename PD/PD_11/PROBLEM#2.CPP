#include <iostream>
#include <fstream>
using namespace std;
char abc[26];
char letter_files[26]; // USED TO STORE THE CHARACTERS PRESENT IN TXT FILE.
// -----------------prototypes------------
void storing_abc();
void read_file();
void compare();

main()
{
    storing_abc();
    read_file();
    compare();
}
void storing_abc()
{
    int index = 0;
    for (int index = 0; index < 1;)
    {
        for (char i = 97; i <= 122; i++)
        {
            abc[index] = i;
            index++;
        }
    }
}
void read_file()
{
    fstream newfile;
    char c;
    int count = 0;
    newfile.open("alphabat.txt", ios::in);
    while (!newfile.eof())
    {
        newfile >> c;
        letter_files[count] = c;
        count++;
    }
    newfile.close();
    // for (int i = 0; i < count - 1; i++)
    // {
    //     cout << letter_files[i] << " ";
    // }
}
void compare()
{
    char missing_character;
    for (int i = 0; i < 26; i++)
    {
        if (abc[i] != letter_files[i])
        {
            missing_character = abc[i];
            fstream newfile;
            newfile.open("alphabat.txt", ios::app);
            newfile << missing_character << " ";
        }
    }
}