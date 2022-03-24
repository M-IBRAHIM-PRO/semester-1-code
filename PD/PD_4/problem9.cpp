#include<iostream>
using namespace std;
main(){
    int x, y, h ; //Declaration of variables. 
    cout<<"Enter the value of h : ";
    cin>>h;
    cout<<"Enter the value of x : ";
    cin>>x;
    cout<<"Enter the value of y : ";
    cin>>y;

    //LOIGC
    if ( ((x > 0) && (x < 6*h)) && ((y > 0) && (y < 2*h))  ){
        cout<<"Inside";
    }
    else if ( ((x > 2*h) && (x < 4*h)) && ((y > 0) && (y < 8*h)) ){
        cout<<"Inside";
    }
    else if ( ((x >= 0) && (x <= 6*h)) && ((y >= 0) && (y <= 2*h)) ){
        cout<<"Border";
    }
    else if (  ((x >= 0*h) && (x <= 6*h)) && y==2*h ){
        cout<<"Border";
    }
    else if ( ((y >= 0*h) && (y <= 8*h)) && x==2*h ){
        cout<<"Border";
    }
    else if ( ((y >= 0*h) && (y <= 8*h)) && x==4*h ){
        cout<<"Border";
    }
    else if ( ((x > 2*h) && (x < 4*h)) && y==4*h ){
        cout<<"Border";
    }
    else if ( ((x > 2*h) && (x < 4*h)) && y==6*h ){
        cout<<"Border";
    }
    else if ( ((x > 2*h) && (x < 4*h)) && y==8*h ){
        cout<<"Border";
    }
    else if ( (y>=0) && (y<=2*h) && x==3*h ){
        cout<<"Border";
    }
    else {
        cout<<"Outside";
    }
}


