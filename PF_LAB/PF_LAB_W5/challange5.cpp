#include<iostream>
using namespace std;
main(){
string day, month;
int amount;
float p_amount;
    cout<<"Enter the day : ";
    cin>>day;
    cout<<"Enter the amount : ";
    cin>>amount;
    cout<<"Enter the month : ";
    cin>>month;
    p_amount=amount-(amount*0.1);
if (day=="s"&& month=="october"){
        if (amount>=5000)
        {
            cout<<"You have been discounted 10% and your bill : "<<p_amount;}
        else{
            cout<<"Your bill : "<<amount;
        }
    }
else if(day=="thu"&& month=="october"){
       if (amount>=5000)
        {
            cout<<"You have been discounted 10% and your bill : "<<p_amount;}
        else{
            cout<<"Your bill : "<<amount;
        }
}       
else{
        cout<<"Your bill : "<<amount;
    }
}