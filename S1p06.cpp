#include<iostream>
using namespace std;
void display(int* p){
    for(int i = 0; i < 5; i++){
        cout << *p << " ";
        p++;

    }
}
int main(){
    int arr[5] = {1, 2,3,4,5};
    int*p =  arr;
    display(arr);
}
