#include<iostream>
#include<stdlib.h>
using namespace std;
main(){         
cout<<"******************************************************"<<endl;
cout<<"*       University Admission Management System       *"<<endl;
cout<<"******************************************************"<<endl;
cout<<"                                                      "<<endl;
cout<<"                                                      "<<endl;
cout<<"Main Menu __"<<endl;
cout<<"------------------------------------------------------"<<endl;
cout<<"Select one of the following options numbers.."<<endl;
cout<<"1- Add New Student Record"<<endl;
cout<<"2- View All Records"<<endl;
cout<<"3- Print the Record in Merit Order"<<endl;
cout<<"4- Generate Merit List"<<endl;
cout<<"5- Program Seat Management"<<endl;
cout<<"6- Exit"<<endl;

int user_input_num;
cout<<"Your option..";
cin>>user_input_num;

int  m_1=0, i_1=0, e_1=0, a_1=0;
string name_1="Empty";

if(user_input_num==1){
 cout<<"Please enter The Student Information, Matric Marks, Inter Marks, Ecat Marks"<<endl;
cout<<"Enter the Student Name:"<<endl;
cin>>name_1;
cout<<"\nEnter your Matric Marks :";
cin>>m_1;
cout<<"\nEnter your Inter Marks :";
cin>>i_1;
cout<<"\nEnter your Ecat Marks :";
cin>>e_1;
//Calculation of Agregate
float matric_markspercent, inter_markspercent, ecat_markspercent, total;
float matric_a, inter_a, ecat_a; 

matric_markspercent= m_1/11.0;
inter_markspercent= i_1/11.0;
ecat_markspercent= e_1/4.0;

matric_a=(matric_markspercent*0.25);
inter_a=(inter_markspercent*0.45);
ecat_a=(ecat_markspercent*0.30);

a_1=matric_a + inter_a + ecat_a;

//FINAL OUTPUT
//cout<<"YOUR MATRIC : "<<matric_markspercent<<endl;
//cout<<"YOUR INTER : "<<inter_markspercent<<endl;
//cout<<"YOUR ECAT : "<<ecat_markspercent<<endl;

//cout<<"YOUR MATRIC a : "<<matric_a<<endl;
//cout<<"YOUR INTER a : "<<inter_a<<endl;
//cout<<"YOUR ECAT  a : "<<ecat_a<<endl;

//cout<<" : "<<a_1;

}
if(user_input_num==2){
 cout<<"You have not entered the record yet."<<endl;
} 
if(user_input_num==3){ 
 cout<<"You have not entered the record yet."<<endl;
}
if(user_input_num==4){
 cout<<"You have not entered the record yet."<<endl;
}
if(user_input_num==5){
cout<<"You have not entered the record yet."<<endl;
}
if(user_input_num==6){
cout<<"Your proram is being exited.";
cout<<".....";
cout<<"..";
system("cls");
}

//For clearing screen after first operation.
// system("cls");

//For second time display on screen.
cout<<"******************************************************"<<endl;
cout<<"*       University Admission Management System       *"<<endl;
cout<<"******************************************************"<<endl;
cout<<"                                                      "<<endl;
cout<<"                                                      "<<endl;
cout<<"Main Menu >"<<endl;
cout<<"------------------------------------------------------"<<endl;
cout<<"Select one of the following options numbers.."<<endl;
cout<<"1- Add New Student Record"<<endl;
cout<<"2- View All Records"<<endl;
cout<<"3- Print the Record in Merit Order"<<endl;
cout<<"4- Generate Merit List"<<endl;
cout<<"5- Program Seat Management"<<endl;
cout<<"6- Exit"<<endl;

cout<<"Your option..";
cin>>user_input_num;

float  m_2=0, i_2=0, e_2=0, a_2=0;
string name_2="empty";

if(user_input_num==1){
 cout<<"Please enter The Student Information, Matric Marks, Inter Marks, Ecat Marks"<<endl;
cout<<"Enter the Student Name:"<<endl;
cin>>name_2;
cout<<"\nEnter your Matric Marks :";
cin>>m_2;
cout<<"\nEnter your Inter Marks :";
cin>>i_2;
cout<<"\nEnter your Ecat Marks :";
cin>>e_2;

//Calculation of Agregate
float matric_markspercent, inter_markspercent, ecat_markspercent, total;
float matric_a, inter_a, ecat_a; 

matric_markspercent= m_2/11.0;
inter_markspercent= i_2/11.0;
ecat_markspercent= e_2/4.0;

matric_a=(matric_markspercent*0.25);
inter_a=(inter_markspercent*0.45);
ecat_a=(ecat_markspercent*0.30);

a_2=matric_a + inter_a + ecat_a;

//FINAL OUTPUT FOR CHECKING PURPOSE
//cout<<"YOUR MATRIC : "<<matric_markspercent<<endl;
//cout<<"YOUR INTER : "<<inter_markspercent<<endl;
//cout<<"YOUR ECAT : "<<ecat_markspercent<<endl;

//cout<<"YOUR MATRIC a : "<<matric_a<<endl;
//cout<<"YOUR INTER a : "<<inter_a<<endl;
//cout<<"YOUR ECAT  a : "<<ecat_a<<endl;

//cout<<" : "<<total;

}
if(user_input_num==2){
 cout<<"The record is as follows :";
}
if(name_2!="Empty"){
 cout<<"Student Name :"<<name_1<<"\tMatric Marks :"<<m_1<<"\tInter Marks :"<<i_1<<"\tEcat Marks :"<<e_1<<endl;
}
if(user_input_num==3){
 cout<<"You have not entered the record yet."<<endl;
}
if(user_input_num==4){
 cout<<"You have not entered the record yet."<<endl;
}
if(user_input_num==5){
 cout<<"You have not entered the record yet."<<endl;
}
if(user_input_num==6){
cout<<"Your proram is being exited.";
cout<<".....";
cout<<"..";
system("cls");
}

//system("cls");

cout<<"******************************************************"<<endl;
cout<<"*       University Admission Management System       *"<<endl;
cout<<"******************************************************"<<endl;
cout<<"                                                      "<<endl;
cout<<"                                                      "<<endl;
cout<<"Main Menu >"<<endl;
cout<<"------------------------------------------------------"<<endl;
cout<<"Select one of the following options numbers.."<<endl;
cout<<"1- Add New Student Record"<<endl;
cout<<"2- View All Records"<<endl;
cout<<"3- Print the Record in Merit Order"<<endl;
cout<<"4- Generate Merit List"<<endl;
cout<<"5- Program Seat Management"<<endl;
cout<<"6- Exit"<<endl;

cout<<"Your option..";
cin>>user_input_num;


if(user_input_num==1){
 cout<<"Atmost two students can be added. "<<endl;
}
// cout<<"Please enter The Student Information, Matric Marks, Inter Marks, Ecat Marks"<<endl;
//cout<<"Enter the Student Name:";
//cin>>name_2<<endl;
//cout<<"Enter your Matric Marks :";
//cin>>m_2<<endl;
//cout<<"Enter your Inter Marks :";
//cin>>i_2<<endl;
//cout<<"Enter your Ecat Marks :";
//cin>>e_2<<endl;

//Calculation of Agregate
//float matric_markspercent, inter_markspercent, ecat_markspercent, total;
//float matric_a, inter_a, ecat_a; 

//matric_markspercent= m_2/11.0;
//inter_markspercent= i_2/11.0;
//ecat_markspercent= e_2/4.0;

//matric_a=(matric_markspercent*0.25);
//inter_a=(inter_markspercent*0.45);
//ecat_a=(ecat_markspercent*0.30);

//a_2=matric_a + inter_a + ecat_a;

//FINAL OUTPUT FOR CHECKING PURPOSE
//cout<<"YOUR MATRIC : "<<matric_markspercent<<endl;
//cout<<"YOUR INTER : "<<inter_markspercent<<endl;
//cout<<"YOUR ECAT : "<<ecat_markspercent<<endl;

//cout<<"YOUR MATRIC a : "<<matric_a<<endl;
//cout<<"YOUR INTER a : "<<inter_a<<endl;
//cout<<"YOUR ECAT  a : "<<ecat_a<<endl;

if(user_input_num==2){
  cout<<"The record of students added is a follows :";
}
if(name_1=="Empty"){
 cout<<"Student Name :"<<name_2<<"\tMatric Marks :"<<m_2<<"\tInter Marks :"<<i_2<<"\tEcat Marks :"<<e_2<<endl;
}
if(name_2=="Empty"){
 cout<<"Student Name :"<<name_1<<"\tMatric Marks :"<<m_1<<"\tInter Marks :"<<i_1<<"\tEcat Marks :"<<e_1<<endl;
}
else{
  cout<<"Student Name :"<<name_1<<"\tMatric Marks :"<<m_1<<"\tInter Marks :"<<i_1<<"\tEcat Marks :"<<e_1<<endl;
  cout<<"Student Name :"<<name_2<<"\tMatric Marks :"<<m_2<<"\tInter Marks :"<<i_2<<"\tEcat Marks :"<<e_2<<endl;
}
if(user_input_num==3){
 cout<<"You have not entered the record yet."<<endl;
}
if(user_input_num==4){
 cout<<"You have not entered the record yet."<<endl;
}
if(user_input_num==5){
 cout<<"You have not entered the record yet."<<endl;
}
if(user_input_num==6){
cout<<"Your proram is being exited.";
cout<<".....";
cout<<"..";
system("cls");
}
//cout<<" : "<<total;
 cout<<"******************************************************"<<endl;
 cout<<"*       University Admission Management System       *"<<endl;
 cout<<"******************************************************"<<endl;
 cout<<"                                                      "<<endl;
 cout<<"                                                      "<<endl;
 cout<<"Main Menu >"<<endl;
 cout<<"------------------------------------------------------"<<endl;
 cout<<"Select one of the following options numbers.."<<endl;
 cout<<"1- Add New Student Record" <<endl;
 cout<<"2- View All Records"<<endl;
 cout<<"3- Print the Record in Merit Order"<<endl;
 cout<<"4- Generate Merit List"<<endl;
 cout<<"5- Program Seat Management"<<endl;
 cout<<"6- Exit"<<endl;

//int user_input_num;
cout<<"Your option..";
cin>>user_input_num;

//float  m_1, i_1, e_1, a_1;
//string name_1;
//float  m_2, i_2, e_2, a_2;
//string name_2;

if(user_input_num==2){
  cout<<"Student Name :"<<name_1<<"\tMatric Marks :"<<m_1<<"\tInter Marks :"<<i_1<<"\tEcat Marks :"<<e_1<<endl;
  cout<<"Student Name :"<<name_2<<"\tMatric Marks :"<<m_2<<"\tInter Marks :"<<i_2<<"\tEcat Marks :"<<e_2<<endl;
}
 if(user_input_num==3){
  cout<<"The merit list is in order form"<<endl;
}
 if(a_1>a_2){
  cout<<"Student Name :"<<name_1<<"\tMatric Marks :"<<m_1<<"\tInter Marks :"<<i_1<<"\tEcat Marks :"<<e_1<<"\tAgregate :"<<a_1<<endl;
}
 else{
  cout<<"Student Name :"<<name_2<<"\tMatric Marks :"<<m_2<<"\tInter Marks :"<<i_2<<"\tEcat Marks :"<<e_2<<"\tAgregate :"<<a_2<<endl;
}
 if(user_input_num==4){
  cout<<"You have not entered the record yet."<<endl;
}
 if(user_input_num==5){
  cout<<"You have not entered the record yet."<<endl;
}
if(user_input_num==6){
cout<<"Your proram is being exited.";
cout<<".....";
cout<<"..";
system("cls");
}

 cout<<"******************************************************"<<endl;
 cout<<"*       University Admission Management System       *"<<endl;
 cout<<"******************************************************"<<endl;
 cout<<"                                                      "<<endl;
 cout<<"                                                      "<<endl;
 cout<<"Main Menu >"<<endl;
 cout<<"------------------------------------------------------"<<endl;
 cout<<"Select one of the following options numbers.."<<endl;
 cout<<"1- Add New Student Record"<<endl;
 cout<<"2- View All Records"<<endl;
 cout<<"3- Print the Record in Merit Order"<<endl;
 cout<<"4- Generate Merit List"<<endl;
 cout<<"5- Program Seat Management"<<endl;
 cout<<"6- Exit"<<endl;

} 