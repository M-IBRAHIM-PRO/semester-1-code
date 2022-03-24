#include<iostream>
using namespace std;
main(){
    //e=exam ,a=arival , l=late.
    int mm_e, hh_e, mm_a, hh_a, mm_l, hh_l, hh_early, mm_early;
    cout<<"Enter the exam time in hour[0-23] : ";
    cin>>hh_e;
    cout<<"Enter the exam time in minutes[0-60] : ";
    cin>>mm_e;
    cout<<"Enter the arival time in hours[0-23] : ";
    cin>>hh_a;
    cout<<"Enter the arival time in minutes[0-60] : ";
    cin>>mm_a;

    //Logic 
    if ((hh_e==hh_a) && (mm_e==mm_a)){
        cout<<"On Time ";
    }
    else if((hh_e!=hh_a) && (mm_e==mm_a)){
        if (hh_a < hh_e){
            hh_early=hh_e-hh_a;
            cout<<"Early"<<"\n"<<hh_early<<" Hour  Before the exam";
        }
        else if (hh_a > hh_e){
            hh_l=hh_a-hh_e;
            cout<<"Late"<<"\n"<<hh_l<<" Hour  After the exam";
        }
    }
    else if ((mm_e!=mm_a) && (hh_e==hh_a)){
        if (mm_a < mm_e){
            mm_early=mm_e-mm_a;
            cout<<"Early"<<"\n"<<mm_early<<" Minutes  Before the exam";
        }
        else if(mm_a > mm_e){
            mm_l=mm_a-mm_e;
            cout<<"Late"<<"\n"<<mm_l<<" Minutes  After the exam";
        }
    }
    else if((hh_e!=hh_a) && (mm_e!=mm_a)){
        if((hh_e-1==hh_a) && (mm_e==0)){
            mm_early=60-mm_a;
            cout<<"Early"<<"\n"<<mm_early<<" Minutes  Before the exam";
        } 
        else if((hh_e==hh_a) && (mm_e==0)){
            mm_l=mm_a-mm_e;
            cout<<"Late"<<"\n"<<mm_l<<" Minutes  After the exam";
        }
        else if ((hh_a < hh_e) && (mm_a < mm_e)){
            hh_early=hh_e-hh_a;
            mm_early=mm_e-mm_a;
            cout<<"Early"<<"\n"<<hh_early<<":"<<mm_early<<" Before the exam";
        }
        else if ((hh_a < hh_e) && (mm_a > mm_e)){
            hh_early=hh_e-hh_a;
            mm_early=mm_a-mm_e;
            cout<<"Early"<<"\n"<<hh_early<<":"<<mm_early<<" Before the exam";
        }
        else if ((hh_a > hh_e) && (mm_a > mm_e)){
            hh_l=hh_a-hh_e;
            mm_l=mm_a-mm_e;
            cout<<"Late"<<"\n"<<hh_l<<":"<<mm_l<<" After the exam";
        }
        else if((hh_e+1==hh_a) && (mm_e==0)){
            mm_early=mm_a-mm_e;
            cout<<"Late"<<"\n"<<mm_l<<" Minutes  After the exam";
            if ((hh_a > hh_e) && (mm_a < mm_e)){
            hh_l=hh_a-hh_e;
            mm_l=mm_e-mm_a;
            cout<<"Late"<<"\n"<<hh_l<<":"<<mm_l<<" After the exam";
        }
    }
    else{
            cout<<"Enter a valid input";
    }    
}