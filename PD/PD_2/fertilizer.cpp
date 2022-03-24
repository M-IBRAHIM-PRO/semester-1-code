#include<iostream>
using namespace std;
main(){
int n1, n2;
float n3, cost;
cout<<"ENTER THE WEIGHT IN POUNDS OF FERTILIZER BAG : ";
cin>>n1;
cout<<"ENTER THE COST OF BAG : ";
cin>>n2;
cout<<"ENTER THE AREA IN SQUARE FEET THAT CAN BE COVERED WITH THE BAG : ";
cin>>n3;
cost=n2/n1;
n3=n2/n3;
cout<<"------------------------------------------------------------------";
cout<<"THE COST OF FERTILIZER PER POUND : "<<cost<<endl;
cout<<"THE COST OF PER SQUARE FEET OF AREA COVERED : "<<n3;

}