#include<iostream>
using namespace std;
main(){
int ni, n1, n2, n3, n4, n5, n6, n7, n8;
cout<<"ENTER THE FOUR DIGIT NUMBEER : ";
cin>>ni;
n1=ni%10;
n2=ni/10;
n3=n2%10;
n4=n2/10;
n5=n4%10;
n6=n4/10;
n7=n6%10;
cout<<"THE 1 DIGIT : "<<n1<<endl;
cout<<"THE 2 DIGIT : "<<n3<<endl;
cout<<"THE 3 DIGIT : "<<n5<<endl;
cout<<"THE 4 DIGIT : "<<n7<<endl;
//OUTPUT
cout<<"YOUR OUTPUT : "<<n1<<""<<n3<<""<<n5<<""<<n7;
}