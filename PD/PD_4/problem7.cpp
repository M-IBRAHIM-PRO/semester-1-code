#include<iostream>
using namespace std;
main(){
   string month;
   int n_stays, e_days;
   float a_bill, s_bill;

    cout<<"Enter the month : ";
    cin>>month;
    cout<<"Enter the number of stays : ";
    cin>>n_stays;

    if((month=="may")||(month=="october")){
        if(n_stays<7){
            s_bill=n_stays*50;
            a_bill=n_stays*65;
        }
        else if(n_stays>7){
            s_bill=n_stays*50;
            a_bill=n_stays*65;
            e_days=n_stays-7;
            s_bill=s_bill-(e_days*(50*0.05));
        }
        else if(n_stays>14){
            s_bill=n_stays*50;
            a_bill=n_stays*65;
            e_days=n_stays-14;
            s_bill=s_bill-(e_days*(50*0.3));
    }
    }
    else if((month=="june")||(month=="september")){
        if(n_stays<7){
            s_bill=n_stays*75;
            a_bill=n_stays*68;
        }
        else if(n_stays>7){
            s_bill=n_stays*75;
            a_bill=n_stays*68;
        }
        else if(n_stays>14){
            s_bill=n_stays*75;
            a_bill=n_stays*68;
            e_days=n_stays-14;
            s_bill=s_bill-(e_days*(75*0.2));
        }
    }
    else if((month=="july")||(month=="august")){
        if(n_stays<7){
            s_bill=n_stays*76;
            a_bill=n_stays*77;
        }
        else if(n_stays>7){
            s_bill=n_stays*50;
            a_bill=n_stays*65;
            s_bill=s_bill-(s_bill*0.05);
            a_bill=a_bill-(a_bill*0.05);
        }
        else if(n_stays>14){
            s_bill=n_stays*50;
            a_bill=n_stays*65;
            s_bill=s_bill-(s_bill*0.3);
            a_bill=a_bill-(a_bill*0.3);
    }
    else{
        cout<<"Enter a valid input ";
    }
    }
    cout<<"Studio : "<<s_bill<<endl;
    cout<<"Appartment : "<<a_bill<<endl;
}