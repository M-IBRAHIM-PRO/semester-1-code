#include <iostream>
using  namespace std;
string ancesstors( char gender,int generation){
    if(gender=='M'){
        if(generation==-3){
            return "great grandfather";
        }
        else if(generation==-2){
            return "grandfather";
        }
        else if(generation==-1){
            return "father";
        }
        else if(generation==0){
            return "me";
        }
        else if(generation==1){
            return "son";
        }
        else if(generation==2){
            return "grandson";
        }
        else if(generation==3){
            return "great grandson";
        }
    }
    else if(gender=='F'){
        if(generation==-3){
            return "great grandmother";
        }
        else if(generation==-2){
            return "grandmother";
        }
        else if(generation==-1){
            return "mother";
        }
        else if(generation==0){
            return "me";
        }
        else if(generation==1){
            return "daughter";
        }
        else if(generation==2){
            return "granddaughter";
        }
        else if(generation==3){
            return "great granddaughter";
        }
        
    }
}
main(){
 /*   Generation    Male                   Female
           -3     great grandfather    great grandmother
           -2     grandfather           grandmother
           -1     father                    mother
            0       me!                     me!
            1     son                       daughter
            2     grandson              granddaughter
            3    great grandson         great granddaughter*/

    char gender;
    int generation;
    string result;
    cout<<"Enter the gender : ";
    cin>>gender;
    cout<<"Enter the generation number : ";
    cin>>generation;
    result=ancesstors(gender, generation);
    cout<<result;
}