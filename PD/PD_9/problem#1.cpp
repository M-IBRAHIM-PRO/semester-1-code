#include <iostream>
using namespace std;
void get_input(int size, char letters[])
{
    cout << "Enter elements of array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> letters[i];
    }
}
void duplicate(char letter[], int size, char character)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {

        if (letter[i] == character)
        {
            count = count + 1;
        }
    }
    cout << "letter : " << character << " appears " << count << " times";
}
main()
{
    int n;
    char character;
    cout << "Enter number of letter you want to enter : ";
    cin >> n;
    cout << "Enter letter which you want to check : ";
    cin >> character;
    char array[n];
    get_input(n, array);
    duplicate(array, n, character);
}