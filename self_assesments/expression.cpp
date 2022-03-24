#include<iostream>
using namespace std;
main() 
{
 int m1;
 int m2;
 int m3;
cout<<"Enter the value of b : ";
cin>>m2;
cout<<"Enter the value of c : ";
cin>>m3;
m2=m3+m2;
cout<<"Enter the value of a : ";
cin>>m1;
m2=m2*m1;
m1=m1+m3;
m1=m1*m3;
m2=m1+m2;
cout<<"The final answer is " <<m2<< " .";
return 0;
}