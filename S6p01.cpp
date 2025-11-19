/*Problem: 
Create a class Person with data members name and age. Derive a class Student from 
Person that adds a data member course. 
Write a program to input and display details of a student.*/

#include<iostream>
using namespace std;
class Person{
    protected:
    string name;
    int age;
    void inputData(){
        cout <<"Enter name :";
        cin >>name;
        cout <<"Enter age :";
        cin >>age;
    }
    void displayData(){
        cout<<"Name :"<<name<<endl;
        cout <<"Age :"<<age <<endl;
    }
};
class Student : public Person{
    public:
    string course;
    void input(){
        inputData();
        cout <<"Enter course :";
        cin >>course;   
    }
    void display(){
        displayData();
        cout<<"Course :"<<course<<endl;

    }

};
int main(){
    Student s1;
    s1.input();
    cout<<"<---student Details --->"<<endl;
    s1.display();


}