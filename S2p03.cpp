/*Given an array of integers, write a program to find the sum of even elements and 
odd elements separately using pointer arithmetic.*/

#include<iostream>
using namespace std;
int OddSum(int* arr , int n){
    int oddSum = 0;
    for(int i = 0; i<n; i++){
        if(*(arr+i) % 2 != 0){
            oddSum += *(arr+i);
        }
    }
    return oddSum;
}
int EvenSum(int*arr,int n){
    int evenSum = 0;
    for(int i = 0; i<n; i++){
        if(*(arr+i) % 2 == 0){
            evenSum += *(arr+i);
        }
    }
    return evenSum;

}
int main(){
    
    int arr[] = {1,6,2,3, 4,8,9,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int oddres = OddSum(arr,n);
    cout << "sum of all odd elements in array : "<< oddres;
    cout << endl;
   int evenresult = EvenSum(arr,n);
    cout << "sum of all even elements in array : "<< evenresult;
}