#include<iostream>
using namespace std;
main(){
int num;
int num1;
int sum;
int sum1;
int sum2;
int num2;
int num3;
int num4;
int num5;
//FOR THE SECOND NUMBER.
int num22;
int num23;
int num24;
int num25;

cout<<"ENTER THE NUMBERS YOU WANT TO OBTAIN FIVE MULTIPLES : ";
cin>>num;
num2=num+num;
num3=num2+num;
num4=num3+num;
num5=num4+num;
//SUM OF SERIES.
sum1=num + num2 + num3 + num4 + num5;
//FOR THE SECOND NUMBER.
cout<<"ENTER THE NUMBERS YOU WANT TO OBTAIN FIVE MULTIPLES : ";
cin>>num1;
num22=num1+num1;
num23=num1+num22;
num24=num1+num23;
num25=num1+num24;
//SUM OF SERIES 2.
sum2=num2 + num22 + num23 + num24 + num25;
//TOTAL SUM
sum=sum1 + sum2;
cout<<"THE FIVE MULTIPLES ARE "<<num<<" "<<num2<<" "<<num3<<" "<<num4<<" "<<num5<<endl;
cout<<"THE FIVE MULTIPLES ARE "<<num1<<" "<<num22<<" "<<num23<<" "<<num24<<" "<<num25<<endl;
cout<<"THE SUM OF TWO SERIES : "<<sum;
}




