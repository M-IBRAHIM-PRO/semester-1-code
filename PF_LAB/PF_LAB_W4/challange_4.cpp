#include<iostream>
using namespace std;
main(){
string user, pasword;
cout<<"Enter the pasword :";
cin>>user;
pasword="abc123";
if (user==pasword){
 cout<<"You entered the correct pasword"<<endl;
}
else{
 cout<<"Its not the same,Try again"<<endl;
}
}