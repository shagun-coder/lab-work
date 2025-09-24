/*Create a class Employee with data members id and salary. 
• Write a parameterized constructor to initialize data members. 
• Create two objects and display their details.*/
#include<iostream>
using namespace std;
class Employee{
    int id;
    int salary;
    public:
    Employee(int i,int s){
        id = i;
        salary = s;
    }
    void display(){
        cout <<"ID : "<< id <<" and" << "salary" << salary <<endl;
    }
};
int main(){
    Employee E1(101,100000);
    Employee E2(102,20000);
    E1.display();
    E2.display();
}