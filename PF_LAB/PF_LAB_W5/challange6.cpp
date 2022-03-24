//b 40kg 15000   e 25kg 8000 1000/kg for b 500/kg for e
#include <iostream>
using namespace std;
main(){
 int weight, e_wweighte, e_wweightb;
 float price;
 char c;
 cout<<"Enter the class of ticket : ";
 cin>>c;
 cout <<"Enter the weight of lugguage : ";
 cin>>weight;
 e_wweighte=25-weight;
 e_wweightb=40-weight;

 if (c=='e'){
     if (weight<=25){
       cout<<"Your charge is 8000 .";    }
    else if (weight>25){
        cout<<"You have extra weight of "<<e_wweighte<<" you will be charged at the rate of 500 rupees per kg.\nYour bill is"<<e_wweighte*500<<endl;
    }   
 }
else if (c=='b'){
    if (weight<=40){
       cout<<"Your charge is 15000 .";    }
    else if (weight>40){
        cout<<"You have extra weight of "<<e_wweightb<<" you will be charged at the rate of 1000 rupees per kg.\nYour bill is"<<e_wweightb*1000<<endl;
    }   
else{
    cout <<"Enter a valid input ";
}
}


}