#include<iostream>
using namespace std;
main(){
char day;
int amount;
float p_amount;
string month;
    cout<<"Enter the day : ";
    cin>>day;
    cout<<"Enter the month : ";
    cin>>month;
    cout<<"Enter the amount : ";
    cin>>amount;
    p_amount=amount-(amount*0.1);
    if (day=='s' && (month=="october"||"march")){
        if (amount>=5000)
        {
            cout<<"You have been discounted 10% and your bill : "<<p_amount;}
        else{
            cout<<"Your bill : "<<amount;
        }
    }
    else{
         cout<<"Your bill : "<<amount;}

        

}