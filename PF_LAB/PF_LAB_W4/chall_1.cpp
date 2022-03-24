#include<iostream>
using namespace std;
main(){
int user, discount_1, discount_2;
cout<<"Enter the billing amount :";
cin>>user;
discount_1=user-(user*0.05);
discount_2=user-(user*0.1);
if (user<=5000){
 cout<<"You have been discounted 5% and your bill : "<<discount_1<<endl;
}
else{
 cout<<"You have been discounted 10% and your bill : "<<discount_2<<endl;
}
}