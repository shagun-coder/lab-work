/*Topic: Multi-level Inheritance 
Problem: 
Create three classes — Person, Employee, and Manager — where Employee inherits from 
Person, and Manager inherits from Employee. 
Each class should add one extra data member and display all details.*/
#include<iostream>
using namespace std;
class Person{
    protected:
    string name;
    int age;
    void inputPerson(){
        cout <<"Enter name :";
        cin >>name;
        cout <<"Enter age :";
        cin >>age;
    }
    void displayPerson(){
        cout <<"Name :"<<name<<endl;
        cout <<"Age :"<<age <<endl;
    }
};
class  Employee:public Person {
    protected:
    string empId;
    void inputEmployee(){
        inputPerson();
        cout <<"Enter Employee Id: ";
        cin >>empId;
        
    }
    void displayEmployee(){
          displayPerson();
        cout <<"Employee id :"<<empId<<endl;
      
    }
};
class Manager:public Employee{
    public:
    int teamSize;
    void inputManager(){
        inputEmployee();
         cout <<"Enter team size :";
        cin >> teamSize;
        
    }
    void displayManager(){
        displayEmployee();
        cout <<"Team size : "<<teamSize<<endl;
    }

};
int main(){
   
    Manager M1;
    M1.inputManager();
    M1.displayManager();
   


}