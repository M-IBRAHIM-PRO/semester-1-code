#include<iostream>
using namespace std;
main(){
char day;
int amount;
float p_amount, p_amount2;
string month;
    cout<<"Enter the day : ";
    cin>>day;
    cout<<"Enter the month : ";
    cin>>month;
    cout<<"Enter the amount : ";
    cin>>amount;
    p_amount=amount-(amount*0.1);
    p_amount2=amount-(amount*0.05);
    if (day=='s' && (month=="october"||"march")){
        if (amount>=5000){
            cout<<"You have been discounted 10% and your bill : "<<p_amount;}
        else{
            cout<<"Your bill : "<<amount;}
    }
    else if(day=='m'&& (month=="november"||"december")){
        if (amount>=5000){
         cout<<"Your bill : "<<p_amount2;}
        else{
            cout<<"Your bill : "<<amount;}
    }
    else {
        cout<<"Your bill : "<<amount; }
}