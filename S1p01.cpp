// print and value of variable
#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int* ptr = &a;
    cout << ptr ; // print  adress
    cout << *ptr ; //  print value
}