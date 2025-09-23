//Given a 2D array of integers, write a program to find the maximum element of each row using pointers.
#include<iostream>
using namespace std;

int main(){
    int n ,m;
    cout <<"Enter row:";
    cin >> n;
    cout <<"Enter columnss:";
    cin >> m;
    cout <<"Enter matrix:";
    int mat1[m][n];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m;j++){
            cin >>mat1[i][j];
        } 
       
    }
    cout << endl;
     

    for(int i = 0; i<n; i++){
         int max = *(*(mat1+ i));
        for (int j = 1; j < m; j++) {
            if (*(*(mat1 + i) + j) > max) {
                max = *(*(mat1+ i) + j);
            }
        }
       cout <<"Maximum in row"<<i+1 <<"="<<max<<endl;
    } 
    

   
     
     
}
