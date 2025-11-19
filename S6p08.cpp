/*Topic: Virtual Base Classes 
Problem: 
Create a class Person, derive Teacher and Student from it, and then derive a class TA from 
both Teacher and Student. 
Demonstrate the diamond problem and resolve it using virtual inheritance. 
Learning Outcome: Understanding the diamond problem and how virtual inheritance 
eliminates duplication of base class members.*/

#include <iostream>
using namespace std;

class Person {
protected:
    string name;
public:
    Person(string n) {
        name = n;
    }
    void displayPerson() {
        cout << "Name: " << name << endl;
    }
};


class Teacher : virtual public Person {
public:
    int salary;
    Teacher(string n, int s) : Person(n) {
        salary = s;
    }
    void displayTeacher() {
        cout << "Salary: " << salary << endl;
    }
};

class Student : virtual public Person {
public:
    string course;
    Student(string n, string c) : Person(n) {
        course = c;
    }
    void displayStudent() {
        cout << "Course: " << course << endl;
    }
};

class TA : public Teacher, public Student {
    string guide;
public:
    TA(string n, int s, string c, string g)
        : Person(n), Teacher(n, s), Student(n, c)
    {
        guide = g;
    }

    void displayTA() {
        displayPerson();
        displayTeacher();
        displayStudent();
        cout << "Guide: " << guide << endl;
    }
};

int main() {
    TA ta("Shagun", 50000, "C++", "ashok");
    ta.displayTA();
}
