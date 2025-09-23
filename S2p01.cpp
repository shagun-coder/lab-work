/*Write a program to input n integers in an array and find the maximum and 
minimum element using a function that takes an array pointer as a parameter.*/ 
#include<iostream>
using namespace std;
    
    void MaxMin(int*arr, int n,int&min,int&max){
        max = *arr;
        min = *arr;
        for(int i = 0; i < n; i++){
            if(*(arr+i)>max){
                max = *(arr+i);
            }
            if(*(arr+i)<min){
                min = *(arr+i);
            }   
            
        }
    }
   
int main(){
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    cout << "Enter elements of array : ";
    // input pointer
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    // declare max min
    int max ,min;
    
    // call fn
    MaxMin(arr, n,max,min);

    cout << "Maximum element in array : "<< max << endl;

    cout << "Minimum element in array : "<< min << endl;
   


}