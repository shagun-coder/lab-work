#include<iostream>

using namespace std;
void increment(int *p){
    
    *p =*p + 1;
   
    cout << *p;

}

int main(){
    int a = 5;
    int *ptr = &a;
    increment(&a);

}
