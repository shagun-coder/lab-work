/*Create a class Circle (radius). Write a non-member function 
increaseRadius(Circle *c) that increases radius by 5 units. Demonstrate passing 
the object by pointer.*/
#include<iostream>
using namespace std;
class Circle{
    public:
    float radius;

    Circle(float r ){
        radius = r;
    }

   
};
 void increaseRadius(Circle *c){ // passinng by pointer
    c->radius += 5;
    cout <<"Inside function after increasing radius :" <<  c->radius<< endl;
    
}
int main(){
    Circle c1(20);
    cout << "Before calling increaseRadius(): "<<  c1.radius<< endl;

    increaseRadius(&c1);
   
   cout <<"Original function  value after call by pointer :"<< c1.radius<<endl;
    

   
   



}