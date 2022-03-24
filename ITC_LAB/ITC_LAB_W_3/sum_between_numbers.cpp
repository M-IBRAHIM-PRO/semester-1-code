#include<iostream>
using namespace std;
main(){
float num_1, num_2, total_sum;
float n, n_cal, num1, num2, res1, res2;
cout<<"ENTER THE FIRST NUMBER : ";
cin>>num_1;
cout<<"ENTER THE SECOND NUMBER : ";
cin>>num_2;
//CALCULATION
n_cal=num_2 - num_1;
n=n_cal-1;
num1=n/2;
num2=num_1+num_2;
res1=num1*num2;

total_sum=res1;
//OUTPUT
cout<<"YOUR SUM BETWEEN GIVEN NUMBERS : "<<res1;
}