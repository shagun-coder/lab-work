// swap two numbers
#include<iostream>
using namespace std;
void swapByValue(int x , int y){
    int temp = x;
    x = y;
    y = temp;
    cout << "inside swapByValue : a = "<< x <<" and b = "<< y << endl;
}
void swapByReference(int* x , int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
    cout << "inside SwapByReference : a = "<< *x <<" and  b = " << *y << endl;
    
}
int main(){
    int a = 10;
    int b = 20;
    cout << "Before  swap by value : a = " << a << " and b = " << b << endl;
    swapByValue(a,b);
    cout << "After swap by value : a = " << a << " and b =  " << b << endl;
    cout << endl;
    cout << "Before swapping  by reference : a = "<< a  << " and b = " << b << endl;
    swapByReference(&a, &b);
    cout << "After swapping  by reference : a = " << a << " and b = " << b << endl;
}