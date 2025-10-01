/*Create a class Rectangle (length, breadth). Write a non-member function 
scale(Rectangle &r) that doubles the dimensions of the rectangle. Pass by 
reference and show that changes affect the original object. */
#include<iostream>
using namespace std;
class Rectangle{
     public:
    float length;
    float breadth;
   
    Rectangle(int l  = 0,int b = 0){
       length = l;
        breadth = b;
    }

};
void scale(Rectangle &r){
   cout << "Inside function: "<< r.length << ", Breadth = " << r.breadth << endl;
     r.length *= 2;
    r.breadth *= 2;
 cout << "After scaling: Length = " << r.length << ", Breadth = " << r.breadth << endl;

}
int main(){
    Rectangle r1(20,30);
  
    cout << "Original Rectangle: Length = " << r1.length << ", Breadth = " << r1.breadth << endl;
    scale(r1);
    cout <<" original function  value after call by refrence :"<< r1.length << " ,"<< r1.breadth << endl; // originsl fn chnge
   
}
