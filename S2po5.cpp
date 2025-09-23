// Write a program to find the transpose of a given n x n matrix using pointer notation.
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Size of array :";
    cin >> n;
    cout <<"ENter n*n matrix :";
    int arr[n][n];
    for(int i = 0 ; i<n; i++){
        for(int j = 0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    // transpose
    for(int i  = 0; i < n; i++){
        for(int j = i+1; j<n;j++){
            int temp = *(*(arr+i)+j);
            *(*(arr+i)+j) =*(*(arr+j)+i);
            *(*(arr+j)+i) = temp;
            
          
        }
    }
    cout << "transpose of matrix :";
     for(int i = 0; i<n;i++){ // rows
        for(int j = 0; j<n;j++){ // columns
            cout << *(*(arr+i)+j)<< " ";
        }
    }
}