#include<iostream>
using namespace std;
main(){
    //<=10 ,10_50, 50-150, 150-1000, 1000 above
    float speed;
    cout<<"Enter the speed of the car : ";
    cin>>speed;
    if (speed<=10)
    {
        cout<<"Your speed is slow.";
    }
    else if(speed<=50){
        cout<<"\nYour speed is average.";
    }
    else if (speed<=150)
    {
        cout<<"\nYour speed is fast.";
    }
    else if (speed<=1000)
    {
        cout<<"\nYour speed is very fast.";
    }
    else if (1000<speed)
    {
        cout<<"\nYour speed is ultra fast.";
    }
       
}