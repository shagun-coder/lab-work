/*Create a class Circle with data member radius. 
• Write a default constructor that sets radius to 1. 
• Write a parameterized constructor that accepts radius from user. 
• Add a function area() to calculate and display the area. 
• Demonstrate both constructors in main().*/
#include<iostream>
using namespace std;
class Circle{
    float radius;
    public:
    Circle(){ // default
        cout <<"default constructor call" << endl;
        radius = 1;
    }
    Circle(float r){ // parameterized 
        radius = r;

    }
    float Area(float r){
        cout <<"parameterized constructor call"<<endl;
        float res ;
         res = 3.14 *radius*radius;
         
         cout <<"Area of circle =" <<res<<endl;
         return res;
    }

};
int main(){
   Circle c1;
    
    c1.Area(20);
   
   
   
   
}