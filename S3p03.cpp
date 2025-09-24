/*Create a class Rectangle with data members length and width. 
• Define a member function area() outside the class (using scope resolution 
operator). 
• In main(), create an object and display its area.*/
#include<iostream>
using namespace std;
class Rectangle{
    float length;
    float breadth;
    public:
    void get_data(int l,int b);
    float area();
    void displayArea();
};
 void Rectangle::get_data(int l,int b){
    length = l;
    breadth =b;
 }
 float Rectangle::area(){
  int result = length *breadth;
  return result;

 }
 void Rectangle::displayArea(){
    cout <<"Area of a rectangle is :"<< area() <<endl;
 }
int main(){
    Rectangle R1;
    R1.get_data(40,60);
    R1.area();
    R1.displayArea();

}