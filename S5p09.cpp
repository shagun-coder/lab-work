/*Concepts: Array of objects, operator overloading, aggregation 
Problem: 
Create a Complex class with data members: real and imag. 
• Overload the + and * operators. 
• Create an array of Complex objects. 
• Compute the sum and product of all complex numbers in the array. 
Hint: 
Use loop: 
sum = sum + arr[i]; 
product = product * arr[i];*/
#include<iostream>
using namespace std;
class Complex{
    public:
    int real;
    int imag;
    Complex(int r = 0, int i = 0){
        real = r;
        imag = i;

    }
    void input(){
        cout <<"Enter real part :";
        cin >>real;
        cout <<"Enter imag part :";
        cin >>imag;
    }
    void display(){
        cout << real  <<"+" << imag <<"i" <<endl;
    }



     Complex operator+ (Complex c) {
        
        
        return Complex(real + c.real  , imag + c.imag);
      
    }
    Complex operator*(Complex c){
        int r  = real *c.real + imag*c.imag;
        int i =  real*c.imag -imag*c.real;
        return Complex(r,i);
    }

};
int main(){
    int n;
    cout <<"Enter number of complex objects :";
    cin>>n;
    Complex *C = new Complex[n];
    for(int i = 0; i<n; i++){
        cout <<"Enter "<<i+1<< " complex number "<<endl;
        C[i].input();

    }

    Complex sum ;
    for(int i = 0; i<n;i++){
        sum = sum +  C[i];
    }

    Complex product(1,0) ;
    for(int i = 0; i<n; i++){
        product = product * C[i];
    }
    

    cout <<"sum of complex objects :";
    sum.display();
    cout <<"Product :";
    product.display();


}