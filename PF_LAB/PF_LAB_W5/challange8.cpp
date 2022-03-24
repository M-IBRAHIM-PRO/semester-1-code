#include<iostream>
using namespace std;
main(){
char n1, n2 , res;
    cout<<"Enter the paper sicssor or rock : ";
    cin>>n1;
    cout<<"Enter the paper sicssor or rock : ";
    cin>>n2;

    if (n1=='p'&& n2=='r'){
        cout<<"paper wins";
    }
    else if (n1=='s'&& n2=='r'){
        cout<<"rock wins";
    }
    else if (n1=='p'&& n2=='s'){
        cout<<"sicssor wins";
    }
    else if (n1=='p'&& n2=='p'){
        cout<<"its draw";
    }
    else if (n1=='r'&& n2=='r'){
        cout<<"its draw";
    }
    else if (n1=='s'&& n2=='s'){
        cout<<"its draw";
    }
}