#include<iostream>
using namespace std;
main(){
string m_name;
int a_price, c_price, no_a_tic, no_c_tic, total_p;
float net_p , perce_c;

//TAKING INPUT FROM USER
cout<<"ENTER THE MOVIE NAME : ";
cin>>m_name;
//cin.ignore(); //IT IS USED WHEN WE HAVE TO TAKE INT AFTER TAKING STRING.
cout<<"ENTER THE ADULT TICKET PRICE : ";
cin>>a_price;
cout<<"ENTER THE CHILD TICKET PRICE : ";
cin>>c_price;
cout<<"ENTER THE ADULT TICKET SOLD : ";
cin>>no_a_tic;
cout<<"ENTER THE CHILD TICKET SOLD : ";
cin>>no_c_tic;
cout<<"ENTER THE PERCENTAGE OF CAHARITY : ";
cin>>perce_c;

//CALCULATIONS
total_p=(a_price*no_a_tic) + (c_price*no_c_tic);
perce_c=(perce_c*total_p)/100;
net_p=total_p - perce_c;

//FINAL OUTPUT
cout<<"THE AMOUNT GENERATED BY TICKETS SOLD : "<<total_p<<endl;
cout<<"THE NET PROFIT AFTER DONATING : "<<net_p;
}