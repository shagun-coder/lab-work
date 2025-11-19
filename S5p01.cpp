// Concepts: Array of objects, data input/output, aggregation logic 
// Problem: 
// Create a class Student with members: rollNo, name, marks[5], and total. 
// • Use an array of Student objects to store data of n students. 
// • Calculate and display the total marks and the student with the highest total.
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int rollno;
    string name;
    int marks[5];
    int total;
    public:
    void input(){
        cout <<"Enter roll no:";
        cin >> rollno;
        cout<<"Enter name of student:";
        cin>>name;
        cout<<"Enter marks of student :";
        total = 0;
        for(int i = 0;i<5;i++){
            cin>>marks[i];
            total += marks[i];

        }
    }
    void display(){
        cout <<"Roll no :"<<rollno <<" "<<"Name :"<<name<<" "<<"Total marks :"<<marks;
    }
    

};
int main(){
    int n;
    cout <<"Enter number of students:";
    cin>>n;
   Student *student = new Student[n];
    
    for(int i = 0; i<n;i++){
         cout << "Student " << i+1 << " details:"<<endl;
        student[i].input();

    }
    cout <<"student total marks:";
    for(int i = 0; i<n;i++){
        student[i].display();
    }
    int maxIndex = 0;
    for(int i = 0; i<n;i++){
        if(student[i].total>student[maxIndex].total){
            maxIndex = i;
        }
    }
    cout <<"\nStudent with highest marks:";
    student[maxIndex].display();
    delete [] student;

}