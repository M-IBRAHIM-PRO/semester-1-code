#include <iostream>
using namespace std;
string grade(int number)
{
    string result;
    if (number > 15)
    {
        result = "Passed";
    }
    else
    {
        result = "Falied";
    }
    return result;
}
main()
{
    float numbers[5];
    for (int i = 0; i < 5; i = 1 + i)
    {
        cout << "Enter marks : ";
        cin >> numbers[i];
    }
    for (int index = 0; index < 5; index++)
    {
        string result = grade(numbers[index]);
        cout << numbers[index] << ": " << result << endl;
    }
}