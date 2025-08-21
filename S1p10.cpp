#include<iostream>
using namespace std;
int main(){
    // POINTER TO AN ARRAY
    int nums[5] = {10,20,30,40,50};
    int(*p)[5] = &nums; // p points to whole array
    cout <<"pointer to an array = ";
    for(int i = 0; i<5; i++ ){
       cout << (*p)[i]<<" ";
    }
    cout << endl;
    cout << endl;
    // ARRAY OF POINTERS
    int a = 100;
    int b = 200;
    int c = 300;
    int d = 400;
    int e = 500;
    int*arr[5] = {&a,&b,&c,&d,&e};
    cout << "Array of pointers = ";
    for(int i = 0;i<5; i++){
    cout <<  *arr[i]<<" ";
    }
 }