#include<iostream>
using namespace std;
main(){
float s1,s2 ,s3 ;
string name;
cout<<"ENTER THE STUDENT NAME :";
cin>>name;
cout<<"ENTER THE SUBJECT 1 MARKS :"<<endl;
cin>>s1;
cout<<"ENTER THE SUBJECT 2 MARKS :"<<endl;
cin>>s2;
s1=s1+s2;
cout<<"ENTER THE SUBJECT 3 MARKS :"<<endl;
cin>>s2;
s1=s1+s2;
cout<<"ENTER THE SUBJECT 4 MARKS :"<<endl;
cin>>s2;
s1=s1+s2;
cout<<"ENTER THE SUBJECT 5 MARKS :"<<endl;
cin>>s2;
s1=s1+s2;
s3=(s1/5);
cout<<"THE STUDENT NAME : "<<name<<" & SUBJECT PERCENTAGE : "<<s3;
}