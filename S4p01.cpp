/* Call by Value 
Write a program with a class Point (x, y). Create a non-member function 
display(Point p) that takes a Point object by value and prints its coordinates. 
Observe how changes inside the*/
#include<iostream>
using namespace std;
class Point {
public:
    int x, y;

    // Constructor
    Point(int a, int b) {
        x = a;
        y = b;
    }
};
// non member fn
void display(Point p){
    
    cout << "Inside function: " << p.x << ", " << p.y  << endl;
    p.x += 10;
    p.y+= 10;
    cout <<"inside function after modification :"<<p.x <<" ," <<p.y << endl;


}
int main(){
    Point p1(5,6);
    cout <<"original fn before call are :"<< p1.x << " ,"<<p1.y << endl;
    display(p1); // call non member fn
    cout <<" original function  value after calling :"<< p1.x << " ,"<< p1.y << endl; // originsl fn does not change
}
