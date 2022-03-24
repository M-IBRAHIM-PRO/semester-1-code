#include<iostream>
using namespace std;
main(){
string input_user;
float x,y; 
    cout<<"Enter the name of shape you want to calculate the area : ";
    cin>>input_user;
    if (input_user=="square"){
        cout<<"Enter the length of one side : ";
        cin>>x;
        cout<<"The area of square : "<<x*x;
    }
    if (input_user=="rectangle"){
        cout<<"Enter the width : ";
        cin>>x;
        cout<<"Enter the breath : ";
        cin>>y;
        cout<<"The area of rectangle : "<<x*y;
    }
    if (input_user=="circle"){
        cout<<"Enter the radius of circle : ";
        cin>>x;
        cout<<"The area of rectangle : "<<3.14*x*x;
    }
    if (input_user=="triangle"){
        cout<<"Enter the height of triangle : ";
        cin>>x;
        cout<<"Enter the base of triangle : ";
        cin>>y;
        cout<<"The area of circle : "<<0.5*x*y;
    }


}