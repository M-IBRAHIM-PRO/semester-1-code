#include <iostream>
using namespace std;
main()
{
    string name;
    int p_box;
    int profit;
    int n_volenteer;
    int average;
    cout << "Enter number of volenteers :";
    cin >> n_volenteer;
    cout << endl;
    cout << "Enter price of box : ";
    cin >> p_box;

    int counter = 0, n_boxes_sold = 0, sum_box_sold = 0;
    while (counter < n_volenteer)
    {
        cout << "Enter name & number of boxes sold : ";
        cin >> name >> n_boxes_sold;
        sum_box_sold = sum_box_sold + n_boxes_sold;
        counter++;
    }
    if (counter != 0)
    {
        cout << "Total number of boxes sold : " << sum_box_sold << endl;
        profit = p_box * sum_box_sold;
        cout << "Total revenew generated" << profit << endl;
        average = sum_box_sold / n_volenteer;
        cout << "Average number of boxes sold by each student : " << average << endl;
    }
    else
    {
        cout << "Enter a valid input.";
    }
}