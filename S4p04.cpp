/*Return Object by Value 
Write a class Complex (real, imag). Create a non-member function add(Complex 
c1, Complex c2) that returns a new object by value. */
#include <iostream>
using namespace std;

class Complex {
public:
    int real, imag;
    Complex() {
        real = 0;
        imag = 0;
    }

    Complex(int r,int i){
        real = r;
        imag = i;
    }
    void display() {
         cout << real << " + " << imag << "i" << endl; }
};

Complex add(Complex c1, Complex c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;  // return object by value
}

int main() {
    Complex a(3, 4), b(1, 2);
    Complex result = add(a, b);

    cout << "a = "; a.display();
    cout << "b = "; b.display();
    cout << "Sum = "; result.display();
    
}