/*Concepts: Constructor overloading, array of objects, computation logic 
Problem: 
Define a class Employee with data members id, name, basicSalary, hra, da, and netSalary. 
• Overload constructors: one default and one parameterized. 
• Store records of n employees in an array. 
• Calculate and display netSalary = basicSalary + hra + da. 
• Display employee(s) earning above ₹50,000.*/
#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    int id;
    string name;
    double  basicSalary, hra, da,  netSalary;
    Employee(){
        id = 0;
        name = "";
        basicSalary, hra, da,  netSalary = 0;
    }
    Employee( int i,string n, double s, double h, double d, double Ns){
        id = i;
        name = n;
        basicSalary = s;
        hra = h;
        da = d;
        netSalary = Ns; 
    }
    void display(){
        cout <<"Id :"<<id<<endl;
        cout <<"Name:"<<name<<endl;
        cout<<"Basic:"<<basicSalary<<endl;
        cout <<"hra:"<<hra <<endl;
        cout <<"da:"<<da <<endl;
        cout <<"Net salary:"<<netSalary<<endl;

    }
    void input() {
        cout << "Enter ID: ";
        cin >> id;
        
        cout << "Enter Name: ";
        cin >>name;
        cout << "Enter Basic Salary, HRA, DA: ";
        cin >> basicSalary >> hra >> da;
        netSalary = basicSalary + hra + da; 
    }
};
int main(){
    int n;
    cout <<"Enter number of Employee :";
    cin>>n;

    Employee*emp = new Employee[n];
    
    for(int i = 0; i<n;i++){
        cout <<"Enter details "<<"i+1"<<"Employee"<<endl;
        emp[i].input();
    }
    cout <<"<--Net salary of employees-->";
    for(int i = 0; i<n;i++){
        emp[i].display();
    }
    bool found = false;
    cout << "\nEmployees earning above ₹50,000:\n";
    for(int i = 0; i<n;i++){
        if(emp[i].netSalary>50000){
            emp[i].display();
            found = true;
        }
        
    }
    if(!found){
        cout <<"No salary found less than 50000";
    }
    delete [] emp;

}
