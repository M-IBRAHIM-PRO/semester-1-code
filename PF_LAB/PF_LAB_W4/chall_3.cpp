#include<iostream>
using namespace std;
int main(){

   char vowel, consonant, letter, integer;

   cout<<"Enter the character or number(0-9) : ";
   cin>>letter;

   vowel='a';vowel='e';vowel='i';vowel='o';vowel='u';

   consonant='c';
   consonant='b'; consonant='d';
   consonant='f'; consonant='g'; consonant='h';
   consonant='j'; consonant='k'; consonant='l'; consonant='m';
   consonant='n'; consonant='p'; consonant='q'; consonant='r'; consonant='s';
   consonant='t'; consonant='v'; consonant='w'; consonant='x'; consonant='y';
   consonant='z';

   integer='1'; integer='6';
   integer='2'; integer='7';
   integer='3'; integer='8';
   integer='4'; integer='9';
   integer='5'; integer='0';
   
   if (letter==vowel){
       cout<<"You entered the vowel"<<endl;
       }
   if (letter==integer){
       cout<<"You entered the integer"<<endl;
       }
   if (letter==consonant){
        cout<<"You entered te consonant";
       }
   cout<<"End program";
   return 0;
}