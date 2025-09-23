// write a program to reverse an array of size n using pointer dont use  indexxing
#include<iostream>
using namespace std;
void Reverse(int* arr , int n){
    int i = 0;
    int j = n-1;
    while(i <= j){
        int temp = *(arr + i);
        *(arr + i) = *(arr + j);
        *(arr + j) = temp ;
        i++;
        j--;
    }

}
int main(){
    
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    cout << "Enter elements of array : ";
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    Reverse(arr,n);
    cout <<"Reversed elements are : ";
   for(int k = 0; k<n;k++){
    cout << arr[k] << " ";
   }

}