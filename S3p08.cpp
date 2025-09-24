/*Create a class Complex with two data members real and imag. 
• Define a function add(Complex c) that adds the current object with object c 
and returns the result. 
• In main(), create two complex numbers and add them.*/
#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    
    Complex(int r , int i) {
        real = r;
        imag = i;
    }

    
    Complex add(Complex c) {
        
        
        Complex temp(real + c.real  , imag + c.imag);
        return temp;
    }

    void display() {
        cout << real <<"+" << imag <<"i" <<endl;
    }
};

int main() {
    Complex c1(3,4);  
    Complex c2(5,6);  

    Complex c3 = c1.add(c2); 

   
    c1.display();
   
    c2.display();
                    
    c3.display();

    return 0;
}
