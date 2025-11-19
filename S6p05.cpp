/*Create a base class Shape with a function area(). 
Derive two classes: Rectangle and Circle. Override the area() function to compute 
respective areas*/
#include<iostream>
using namespace std;
class Shape {
    protected:
    int length ,breadth;
    float radius;
    public:
    void area(){
        cout << "Area of a shape ";
    }
};
class Rectangle:public Shape{
    public:
    Rectangle(int l,int b){
        length = l;
        breadth = b;
    }
    
    void area(){
        cout <<"Area of a reactangle :"<<length*breadth<<endl;
    }
};
class Circle:public Shape{
    public:
    Circle(int r){
        radius = r;
    }
    void area(){
        cout <<"Area of a circle :"<<3.14*radius*radius<<endl;
    }

};
int main(){
    Rectangle R1(12,45);
    R1.area();
    Circle C1(23);
    C1.area();
}