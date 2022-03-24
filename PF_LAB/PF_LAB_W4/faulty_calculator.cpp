#include<iostream>
using namespace std;
main(){
int n1,n2;
char oper;
cout<<"Enter the first number : ";
cin>>n1;
cout<<"Enter the second number : ";
cin>>n2;
cout<<"Enter the operator(+,-,*,/) : ";
cin>>oper;

if (oper=='+'){
  cout<<"Your answer : "<<n1-n2;
}
if (oper=='-'){
    cout<<"Your answer : "<<n1+n2;
}
if (oper=='/'){
    cout<<"Your answer : "<<n1*n2;
}
if (oper=='*'){
    cout<<"Your answer : "<<n1/n2;
}


}