#include<iostream>
using namespace std;
int add(int n1, int n2);
main(){
    int n1=3, n2=2, sum;
    sum=add( n1 , n2);
    cout<<"The sum of numbers is "<<sum;
}
int add(int n1, int n2) {
    return ( n1 + n2 );
}