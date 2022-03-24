#include <iostream>
using namespace std;
void add_record(string m_name, string modle_name, float processor, int ram, int hard, int gen, double price);
struct laptopTyppe
{
    string Manufacturer;
    string model_type;
    float processor_in_gigahertz;
    int ram_in_gb;
    int hard_in_gb;
    int generation;
    double price;
    laptopTyppe *next;
};
laptopTyppe *head = NULL;
void takeInput()
{
    string m_name, modle_name;
    float processor;
    int ram, hard, gen;
    double price;
    cout << "Enter manufacture name ";
    cin >> m_name;
    cout << "Enter model_type ";
    cin >> modle_name;
    cout << "Enter processor_in_gigahertz ";
    cin >> processor;
    cout << "Enter ram_in_gb ";
    cin >> ram;
    cout << "Enter hard_in_gb ";
    cin >> hard;
    cout << "Enter generation ";
    cin >> gen;
    cout << "Enter price ";
    cin >> price;
    add_record(m_name, modle_name, processor, ram, hard, gen, price);
}

// void display(laptopTyppe record)
// {
//     cout << record.Manufacturer << endl;
//     cout << record.model_type << endl;
//     cout << record.processor_in_gigahertz << endl;
//     cout << record.hard_in_gb << endl;
//     cout << record.ram_in_gb << endl;
//     cout << record.generation << endl;
//     cout << record.price << endl;
// }
laptopTyppe *getLastRecord(laptopTyppe *temp)
{
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    return temp;
}

main()
{
    system("cls");
    takeInput();
    system("pause");
    system("cls");
    takeInput();
}
void add_record(string m_name, string modle_name, float processor, int ram, int hard, int gen, double price)
{
    laptopTyppe *record = new laptopTyppe;
    record->Manufacturer = m_name;
    record->model_type = modle_name;
    record->processor_in_gigahertz = processor;
    record->ram_in_gb = ram;
    record->hard_in_gb = hard;
    record->generation = gen;
    record->price = price;
    if (head == NULL)
    {
        head = record;
    }
    else
    {
        laptopTyppe *temp = getLastRecord(head);
        temp->next = record;
    }
}