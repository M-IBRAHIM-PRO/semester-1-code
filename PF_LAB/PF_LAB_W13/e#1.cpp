#include <iostream>
using namespace std;
/*
Define a struct laptopType to store the following data about a laptop: Manufacturer (
string), model type ( string), processor in gigahertz (float), ram (int) in GB, hard
drive size ( int) in GB, generation (int), and the price (double)
*/
struct laptopTyppe
{
    string Manufacturer;
    string model_type;
    float processor_in_gigahertz;
    int ram_in_gb;
    int hard_in_gb;
    int generation;
    double price;
};
laptopTyppe takeInput()
{
    laptopTyppe record;
    cout << "Enter manufacture name ";
    cin >> record.Manufacturer;
    cout << "Enter model_type ";
    cin >> record.model_type;
    cout << "Enter processor_in_gigahertz ";
    cin >> record.processor_in_gigahertz;
    cout << "Enter ram_in_gb ";
    cin >> record.ram_in_gb;
    cout << "Enter hard_in_gb ";
    cin >> record.hard_in_gb;
    cout << "Enter generation ";
    cin >> record.generation;
    cout << "Enter price ";
    cin >> record.price;
    return record;
}
void display(laptopTyppe record)
{
    cout << record.Manufacturer << endl;
    cout << record.model_type << endl;
    cout << record.processor_in_gigahertz << endl;
    cout << record.hard_in_gb << endl;
    cout << record.ram_in_gb << endl;
    cout << record.generation << endl;
    cout << record.price << endl;
}
main()
{
    laptopTyppe array[5];
    laptopTyppe record;
    for (int i = 0; i < 5; i++)
    {
        array[i] = takeInput();
    }
    for (int i = 0; i < 5; i++)
    {
        display(array[i]);
        cout << "-----------------------------" << endl;
    }
}