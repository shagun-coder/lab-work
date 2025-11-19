// Problem 1 — printTwo (Function template) 
// Objective: Write a function template printTwo that prints two values (of the same 
// type) separated by a space. 
// Input: First token: type (int/double/string), then two values. 
// Output: The two values separated by a space. 
// Example: 
// Input: int 5 7 → Output: 5 7
#include <iostream>
using namespace std;
template <typename T>
void printTwo(T a, T b){
    cout << a <<" "<< b << endl;
}
int main(){
    printTwo(3,4);
    printTwo(5.5,7.3);
    printTwo("hello","world");
}