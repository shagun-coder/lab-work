/*Define a class Student (name, marks). Write a non-member function 
compare(const Student &s1, const Student &s2) that takes objects by reference 
and returns the one with higher marks by value.*/
#include <iostream>
using namespace std;
class Student{
    public:
    string name;
    int marks;
    Student(){
        name = "";
        marks = 0;
    }
    Student(string n,int m){
        name = n;
        marks = m;
    }
    void display(){
       cout << "Name: " << name << "  Marks: " << marks << endl;
    }

};
Student compare(const Student &s1, const Student &s2){
    if(s1.marks>s2.marks){
        return s1;
    }
    else{
        return s2;
    }

}
int main(){
 Student s1( "payal",45) ,s2("Avneet" ,100);
 cout <<"<---Student details--->"<<endl;
 s1.display();
 s2.display();
Student higherMarks = compare(s1,s2); // call compare
cout << endl;
cout <<"Student with higher marks ->"<<endl;
higherMarks.display();

}
   
