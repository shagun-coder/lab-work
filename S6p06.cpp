/*Problem: 
Create a base class Animal with a speak() function. 
Derive classes Dog and Cat that override this function. 
Use a base class pointer to call the functions and observe behavior with and without 
virtual.*/
#include <iostream>
using namespace std;
class Animal{
    public:
    virtual void speak(){
        cout <<"Animal make sound "<<endl;
    }
};
class Dog:public Animal{
    void speak(){
        cout <<"Dog barks "<<endl;

    }
};
class Cat:public Animal{
    void speak(){
        cout<<"Cat meows "<<endl;
    }
};
int main(){
    Animal*ptr;
    Dog d1;
    ptr = &d1;
    ptr->speak();
    Cat c1;
    ptr = &c1;
    ptr->speak();
    
}
