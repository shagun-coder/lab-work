/*Create a class Report with: 
• Data members: name, rollNo, marks[5]. 
• Member functions: 
o input() → to take details from user. 
o display() → to show details. 
o calculateGrade() → to calculate total, percentage, and grade (A, B, C, 
Fail). 
Write a program to create multiple objects of Report and display the report card for 
each student.*/
#include<iostream>
using namespace std;
class Report{
    string name;
    int rollNo;
    int marks[5];
    int total;
    int percentage;
    char grade;
    public:
    void input(){
        cout <<"Enter name:";
        cin >>name;
        cout <<"Enter roll no :";
        cin >> rollNo;
        cout <<"Enter marks for five subjects :";
        for(int i = 0; i<5;i++){
            cin >> marks[i];
        }
    }

    void calculateGrade(){
        total = 0;
        for(int i  = 0; i<5; i++){
            total += marks[i];
        }
        
        percentage = total/5.0;
        if(percentage<=100 && percentage>=90) 
            grade ='A';
        else if (percentage<= 90 && percentage >= 75)
            grade = 'B';
        else if (percentage<=75 && percentage >= 60)
            grade = 'C';
        else if (percentage<=60 && percentage >= 40)
            grade = 'D';
        else
            grade ='F'; 


    }
    void display(){
        cout << ">>>--REPORT CARD <<--<<<" << endl;
        cout <<"Name : "<<name<<endl;
        cout <<"Roll no:"<<rollNo<<endl;
        cout <<"Marks :";
        for(int i = 0;i<5;i++){
            cout <<marks[i] <<"  ";
        }
        cout << endl;
        cout <<"Total marks : "<<total<<endl;
        cout <<"percentage :" <<percentage<<endl;
        cout <<"Grade :"<<grade<<endl;

    }
    
};
int main(){
    Report student1 ,student2,student3 ;
    cout<<"Enter detail for student 1"<<endl;
    student1.input();
    student1.calculateGrade();
    cout << endl;

    cout <<"Enter detail for student2"<<endl;
    student2.input();
    student2.calculateGrade();
    cout <<"Enter detail for student3"<<endl;
    student3.input();
    student3.calculateGrade();
    cout << endl;
    
    student1.display();
    student2.display();
    student3.display();

}