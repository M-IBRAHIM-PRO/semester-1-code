#include<iostream>
using namespace std; //(English, Maths, Chemistry, Social Science, and Biology)
main(){
    int eng, maths, chem, ss, bio, total_number;
    string name;
    float percentage;
    string grade;
     cout<<"Enter the student name : ";
     cin>>name;
     cout<<"Enter the marks of english : ";
     cin>>eng;  
     cout<<"Enter the marks of maths : ";
     cin>>maths;
     cout<<"Enter the marks of socail studies : ";
     cin>>ss;
     cout<<"Enter the marks of chemistry: ";
     cin>>chem;
     cout<<"Enter the marks of biology: ";
     cin>>bio;
 total_number=eng+ maths+ ss+ chem+ bio;
 percentage=(total_number/5);
 // now we calculate grade
    if(percentage<40){
        grade='F';
    }
    else if(50>percentage>40){
        grade='D';
    }
    else if(50>percentage<60){
        grade='C';
    }
    else if(60>percentage<70){
        grade='B';
    }
    else if(70>percentage<80){
        grade='B+';
    }
    else if(80>percentage<90){
        grade='A';
    }
    else if(90>percentage<100){
        grade='A+';
    }
    cout<<"student name : "<<name<<endl;
    cout<<"total marks : "<<total_number<<endl;
    cout<<"percentage : "<<percentage<<endl;
    cout<<"grade : "<<grade;

}