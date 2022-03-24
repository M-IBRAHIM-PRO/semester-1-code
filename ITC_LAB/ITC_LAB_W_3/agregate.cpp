#include<iostream>
using namespace std;
main(){
//DECLARATION OF VARIABLES
float matric_marks, inter_marks, ecat_marks;

//INPUT
cout<<"ENTER THE MARKS OF MATRIC : ";
cin>>matric_marks;
cout<<"ENTER THE MARKS OF INTER : ";
cin>>inter_marks;
cout<<"ENTER THE MARKS OF ECAT : ";
cin>>ecat_marks;

//DECLARATION OF VARIABLES
float matric_markspercent, inter_markspercent, ecat_markspercent, total;
float matric_a, inter_a, ecat_a; 
//CALCULATION
matric_markspercent= matric_marks/11.0;
inter_markspercent= inter_marks/11.0;
ecat_markspercent= ecat_marks/4.0;

matric_a=(matric_markspercent*0.25);
inter_a=(inter_markspercent*0.45);
ecat_a=(ecat_markspercent*0.30);

total=matric_a + inter_a + ecat_a;

//FINAL OUTPUT
cout<<"YOUR MATRIC : "<<matric_markspercent<<endl;
cout<<"YOUR INTER : "<<inter_markspercent<<endl;
cout<<"YOUR ECAT : "<<ecat_markspercent<<endl;

cout<<"YOUR MATRIC a : "<<matric_a<<endl;
cout<<"YOUR INTER a : "<<inter_a<<endl;
cout<<"YOUR ECAT  a : "<<ecat_a<<endl;

cout<<"YOUR AGREGATE : "<<total;

}