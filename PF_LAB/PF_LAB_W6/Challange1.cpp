#include<iostream>
#include<cmath>
using namespace std;
main(){
    double base , result_1 , angle , result;
    base=43.0;
    angle=30*57.2985;
    result_1=tan(angle);
    result=result_1 * base;
    cout<<"Height of Tree "<< " = " << result;


}