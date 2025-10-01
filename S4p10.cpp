/*10. Combination Example 
Create a class Employee (id, salary). Add two functions:                   
• A member function updateSalary(Employee &e) that copies salary from another 
employee. 
• A non-member function swap(Employee *e1, Employee *e2) that swaps salaries 
of two employees using pointers.*/
#include<iostream>
using namespace std;
class Employee{
     public:
    int id;
    int salary;
    
    Employee(int i,int s){
        id = i;
        salary = s;
    }
    void updateSalary(Employee &e) {
       salary = e.salary;
    }
    void display(){
        cout <<"ID : "<< id <<" and  " << "salary : " << salary <<endl;
    }
};
void swap(Employee *e1, Employee *e2){
    int temp  = e1->salary;
    e1->salary = e2->salary;
     e2->salary = temp;
}
int main(){
    Employee e1(101,100000);
    Employee e2 (104,399900);
    cout <<"Before swapping and updating :"<<endl;
    e1.display();
    e2.display();
    cout <<endl;

     e1.updateSalary(e2);
    cout <<"After updating :"<<endl;;
     e1.display();
    e2.display();
    cout << endl;

    swap(&e1,&e2);
    cout <<"After Swapping :"<<endl;
    e1.display();
    e2.display();
   
}