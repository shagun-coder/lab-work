/*Call by Value (Member Function) 
Create a class Box (length, width, height). Add a member function compare(Box 
b) that compares the calling object with b (passed by value) and prints which is 
larger in volume.*/
#include <iostream>
using namespace std;

class Box {
private:
   float length, width, height;

public:
    Box(){
        float l = 0; 
       float w = 0;
         float h = 0;
    }
  
    Box(float l,float w,float h) {
        length = l;
        width = w;
        height = h;
    }
   float volume() {
        return length * width * height;
    }

   void compare(Box b){
        float vol1 = length * width * height;  
        float vol2 = b.length * b.width * b.height;  
        cout << "Volume of first box: " << vol1 << endl;
        cout << "Volume of second box: " << vol2 << endl;

        if (vol1 > vol2)
            cout << "First box is larger." << endl;
        else if (vol1 < vol2)
            cout << "Second box is larger." << endl;
        else
            cout << "Both boxes are equal in volume." << endl;
    }
};

int main() {
    Box box1(3, 4, 5);
    Box box2(2, 6, 4);

    box1.compare(box2);

   
}
