/*3
 ️. Using protected Members 
Topic: Access specifiers 
Problem: 
Create a class Employee with protected data members id and salary. 
Derive a class Manager that sets and displays these details through a member function.*/
#include<iostream>
using namespace std;
class Employee{
    protected:
    int id;
    float salary;
    
};
class Manager:public Employee{
    public:
    
    void setDetail(int i,float s) {
        id = i;
        salary = s;
       
    }
    void displayDetails(){
       
        cout <<"Employee id  :"<<id<<endl;
        cout <<" Employee salary:"<<salary<<endl;
   
    }
   
};
int main(){
    Manager m1;
    int id ;
    cout <<"Enter id :";
    cin >>id;
    float salary;
    cout <<"Enter salary :";
    cin >> salary;
    m1.setDetail(id,salary);
    m1.displayDetails();

}