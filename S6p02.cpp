/*Create two classes Base and Derived. Both have constructors and destructors that display 
messages when called. 
Create an object of Derived and observe the order of constructor/destructor calls.*/
#include <iostream>
using namespace std;
 class Base{
    protected:
    Base(){
        cout<<"Base constructor called "<<endl;
    }
    ~Base(){
        cout <<"Base Destructor called "<<endl;
    }
 };
 class Derived : public Base{
    public:
    Derived (){
        cout<<"Derived constructor called "<<endl;
    }
    ~Derived (){
        cout <<"Derived Destructor called "<<endl;
    }

 };
 int main(){
   
    Derived d1;
 }
