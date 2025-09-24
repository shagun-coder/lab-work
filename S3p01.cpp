/*Create a class Student with two data members: rollNo and name. Write a program to: 
1. Create an object of the class. 
2. Assign values to its data members. 
3. Display the values.*/
#include<iostream>
using namespace std;
class Student {
    public:
    int rollNo;
    string name;

};
 int main(){
    Student s1;
    s1.rollNo = 45;
    s1.name = "bhoomo";
    cout <<"roll number : " << s1.rollNo << endl;
    cout <<"Name : " <<s1.name << endl;

 }