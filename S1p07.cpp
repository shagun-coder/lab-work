#include<iostream>
using namespace std;
void reverse(int* p,int n){
    p = p +(n-1);
    for(int i = 0 ; i < n; i++){
        cout << *p << " ";
        p--;

    }
    
}
int main(){
    int arr[5] = {1, 2,3,4,5};
    int*p = arr;
    reverse(arr, 5);
}