#include<iostream>
using namespace std;
main(){
  /*  coffee=chicago=.50  phoenix=.40  hoston=.45
    sweet=chic=1.45       p=1.30       h=1.35 
    water=chicago=.80     p=.70       h=.70       */

    string  city, product;
    float  price;
    int  quantity;
    cout<<"City names are chicago, pheonix, hoston";
    cout<<"Enter the city name : ";
    cin>>city;
    cout<<"Product names are coffee , water, sweets ";
    cout<<"Enter the product name : ";
    cin>>product;
    cout<<"Enter the quantity : ";
    cin>>quantity;

    if (city=="chicago"){
        if(product=="coffee"){
            price=quantity*0.50;
            cout<<"Your bill is :"<<price;
        }
        else if(product=="sweets"){
            price=quantity*1.45;
            cout<<"Your bill is :"<<price;
        }
        else if(product=="water"){
            price=quantity*0.80;
            cout<<"Your bill is :"<<price;
        }
    }
    else if (city=="pheonix"){
        if(product=="coffee"){
            price=quantity*0.40;
            cout<<"Your bill is :"<<price;
        }
        else if(product=="sweets"){
            price=quantity*1.30;
            cout<<"Your bill is :"<<price;
        }
        else if(product=="water"){
            price=quantity*0.70;
            cout<<"Your bill is :"<<price;
        }
    }
    else if (city=="houston"){
        if(product=="coffee"){
            price=quantity*0.45;
            cout<<"Your bill is :"<<price;
        }
        else if(product=="sweets"){
            price=quantity*1.35;
            cout<<"Your bill is :"<<price;
        }
        else if(product=="water"){
            price=quantity*0.70;
            cout<<"Your bill is :"<<price;
        }
    }
    else{
        cout<<"Enter a valid input ";
    }

}