#include<iostream>
using namespace std;
main(){
    //5x^2 + 6x + 1=0
    int a=5 , b=6 , c=1;
    float result_1 , result_2;
    //Calculation 
    result_1= ( (-1*b) + ((b^2) - 4*a*c)^(1/2) ) / (2*a);
    result_2= ( (-1*b) - ((b^2) - 4*a*c)^(1/2) ) / (2*a);
    cout<<"The value of x = "<<result_1<<" , "<<result_2;

}