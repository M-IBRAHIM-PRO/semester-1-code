#include<iostream>
using namespace std;
main(){
int n1, n2, n3, n4;
int n5, n6, n7, n8;
int n9, n10, n11, n12, res;
cout<<"ENTER THE FIRST NUMBER : ";
cin>>n1;
cout<<"ENTER THE SECOND NUMBER : ";
cin>>n2;
cout<<"ENTER THE THIRD NUMBER : ";
cin>>n3;
n1=n1+n2+n3;
cout<<"ENTER THE FOURTH NUMBER : ";
cin>>n2;
n1=n1+n2;
cout<<"ENTER THE FIFTH NUMBER : ";
cin>>n2;
n1=n1+n2;

cout<<"ENTER THE SIXTH NUMBER : ";
cin>>n5;
cout<<"ENTER THE SEVENTH NUMBER : ";
cin>>n6;
cout<<"ENTER THE EIGHTH NUMBER : ";
cin>>n7;
n5=n5*n6*n7;
cout<<"ENTER THE NINETH NUMBER : ";
cin>>n6;
n5=n5*n6;
cout<<"ENTER THE TENTH NUMBER : ";
cin>>n6;
n5=n5*n6;

cout<<"ENTER THE ELEVENTH NUMBER : ";
cin>>n9;
cout<<"ENTER THE TWELVETH NUMBER : ";
cin>>n10;
cout<<"ENTER THE THIRTEENTH NUMBER : ";
cin>>n11;
n9=n9-n10-n11;
cout<<"ENTER THE FOURTEENTH NUMBER : ";
cin>>n10;
n9=n10-n9;
cout<<"ENTER THE FIFTEENTH NUMBER : ";
cin>>n10;
n9=n10-n9;
n11=n5+n1;
n12=n11-n9;
res=n12;

cout<<"THE RESULT : "<<res;

}