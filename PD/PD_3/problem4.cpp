#include<iostream>
using namespace std;
main(){
    int price_red, price_white, price_tulip;
    float payable, total;
    cout<<"Enter the number of red roses you want to buy : ";
    cin>>price_red;
    cout<<"Enter the number of white roses you want to buy : ";
    cin>>price_white;
    cout<<"Enter the number of tulip you want to buy : ";
    cin>>price_tulip;
    price_red=price_red*2;
    price_white=price_white*4.10;
    price_tulip=price_tulip*2.50;
    total=price_red+price_white+price_tulip;

    if (total<=200)
    {
        cout<<"Your bill : "<<total;
    }
    else{
        cout<<"Your bill : "<<total-(total*0.2);
    }
}