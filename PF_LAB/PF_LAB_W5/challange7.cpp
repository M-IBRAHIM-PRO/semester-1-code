#include<iostream>
using namespace std;
main(){
 int n1,n2,n3;
 cout<<"Enter the first number : ";
 cin>>n1;
 cout<<"Enter the second number : ";
 cin>>n2;
 cout<<"Enter the third number : ";
 cin>>n3;
if(n1==n2 && n1==n3){
    cout<<"3";
}
else if (n1==n2 || n1==n3 || n2==n3) {
     cout<<"2";}

else{
    cout<<"0";

}




}