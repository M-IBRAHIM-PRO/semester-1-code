#include<iostream>
using namespace std;
void display_num(int num_1, float num2);
main(){
    int num1=3;
    float num2=4.3;
    display_num(num1 , num2);
}
void display_num(int num_1, float num_2){
    cout<<"The int number is "<<num_1;
    cout<<"\nThe float number is "<<num_2;

}