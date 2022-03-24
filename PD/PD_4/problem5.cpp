#include<iostream>
using namespace std;
main(){
    int e_min, i_min;
    float total_bill;
    char type, time;
    cout<<"Enter the minutes you you used the service : ";
    cin>>i_min;
    cout<<"Enter the type of service you are using : ";
    cin>>type;

    if(type=='r'){
        if(i_min>50){
            e_min=i_min-50;
            cout<<"your bill : "<<(e_min*0.2)+10;
        }
        else{
            cout<<"Your bill : "<<10;
        }
    }
    else if(type=='p'){
        cout<<"Enter 'd' for day time & 'n' for night time ";
        cin>>time;
        if(time=='d'){
            if(i_min>75){
              e_min=i_min-75;
              total_bill=(e_min*0.1)+25;
            cout<<"your bill : ";
            }
            else{
            cout<<"Your bill : "<<25;
        }
        }
        else if(time=='n'){
           if(i_min>75){
              e_min=i_min-75;
              total_bill=(e_min*0.05)+25;
            cout<<"your bill : ";
            }
            else{
            cout<<"Your bill : "<<25;
        }
        }
        else{
            cout<<"Your bill : "<<25;
        }
    }
}