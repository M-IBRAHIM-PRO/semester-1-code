#include <iostream>
using namespace std;
int main()
{float price;
string country_name;
    cout<<"Enter the contry name : ";
    cin>>country_name;
    cout<<"Enter the price of ticket : ";
    cin>>price;
    if(country_name=="Ireland"){
        price=price-price*0.05;
        cout<< "Your ticket price : "<<price;
    }
    else{
        cout<<"Your ticket price : "<<price;
    }
    return 0;
}
