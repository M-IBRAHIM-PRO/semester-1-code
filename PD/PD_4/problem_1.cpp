//warm   dry Play tennis
//warm   humid swim
// cold   dry Play basketball
//cold   humid Watch tv
#include<iostream>
using namespace std;
main(){
   string temperature, humidity, activity;

   cout<<"Enter the temperature : ";
   cin>>temperature;
   cout<<"Enter the humidity : ";
   cin>>humidity;
   
    if (temperature=="warm")
    {
        if(humidity=="dry"){
            cout<<"Play tenis";
        }
        if(humidity=="humid")
            cout<<"Swim";
    }
    else if (temperature=="cold")
    {
        if(humidity=="dry"){
            cout<<"Play Basketball";
        }
        if(humidity=="humid"){
            cout<<"Watch TV";
        }
    }
    else{
        cout<<"Enter a valid input.";
    }
}