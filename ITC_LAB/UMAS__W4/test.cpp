#include<iostream>
using namespace std;
main()
{
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

int user_input_num;
cout<<"Your option..";
cin>>user_input_num;

float  m_1, i_1, e_1, a_1;
string name_1;
float  m_2, i_2, e_2, a_2;
string name_2;

if(user_input_num==2){
  cout<<"1-Student Name :"<<name_1<<"\tMatric Marks :"<<m_1<<"\tInter Marks :"<<i_1<<"\tEcat Marks :"<<e_1<<endl;
  cout<<"2-Student Name :"<<name_2<<"\tMatric Marks :"<<m_2<<"\tInter Marks :"<<i_2<<"\tEcat Marks :"<<e_2<<endl;
}
 if(user_input_num==3){
  cout<<"The merit list is in order form"<<endl;

}
 if(user_input_num==4){
  cout<<"You have not entered the record yet."<<endl;
}
 if(user_input_num==5){
  cout<<"You have not entered the record yet."<<endl;
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