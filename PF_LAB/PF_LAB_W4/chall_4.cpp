#include<iostream>
using namespace std;
main(){
    char letter;
    cout<<"Enter the letter : ";
    cin>>letter;
    if(letter=='a'||letter=='e'||letter=='i'||letter=='o'||letter=='u'||letter=='A'||letter=='E'||letter=='I'||letter=='O'||letter=='U')
    {
        cout<<"The letter is a vowel.";
    }
    // else
    // {
        // cout<<"the letter is consonant"<<endl;
    // }
    else if(letter=='0'||letter=='1'||letter=='2'||letter=='3'||letter=='4'||letter=='5'||letter=='6'||letter=='7'||letter=='8'||letter=='9')
    {
        cout<<"The letter is a integer.";
    }
    else
    {
        cout<<"The letter is a consonant.";
        
    }
}