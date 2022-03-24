#include <iostream>
#include <fstream>
using namespace std;
float get_data()
{
    float number;
    cout << "Enter any value decimal :";
    cin >> number;
    return number;
}
void store_data(float number)
{
    fstream newfile;
    newfile.open("float.txt", ios::out);
    newfile << number;
    newfile.close();
}
main()
{
    float data;
    data = get_data();
    store_data(data);
}