#include<iostream>
using namespace std;
main(){
int num_1;
int num_2;
int num2;
int num3;
int num4;
int num5;
int fb_series;
cout<<"ENTER THE NUMBER 1 YOU WANT TO OBTAIN FIBONACCI SEQUENCE : ";
cin>>num_1;
cout<<"ENTER THE NUMBER 2 YOU WANT TO OBTAIN FIBONACCI SEQUENCE : ";
cin>>num_2;
num2=num_1 + num_2;
num3=num2 + num_1;
num4=num3 + num_1;
num5=num4 + num_1;
cout<<"THE FIBONACCI SEQUENCE OF THE NUMBERS GIVEN : "<<num_1<<" "<<num2<<" "<<num3<<" "<<num4<<" "<<num5;

}