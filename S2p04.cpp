// input 2 d matrix  and find their sum. pass 2 d array to a fn using pointer
#include<iostream>
using namespace std;

void addMatrix(int*matrix1,int*matrix2,int* res ,int m,int n){
       for(int i = 0; i<n; i++){
        for(int j = 0; j<m;j++){
            *(res+i*n+j) = *(matrix1+i*n+j)+*(matrix1+i*n+j);
        }
    }
}
int main(){
    int n ,m;
    cout <<"Enter row:";
    cin >> n;
     cout <<"Enter cols:";
     cin >> m;
     cout <<"Enter first matrix:";
     int mat1[m][n];
     for(int i = 0; i<n; i++){
        for(int j = 0; j<m;j++){
            cin >> mat1[i][j];
        }
     }
     cout <<"Enter second matrix:";
     int mat2[m][n];
     for(int i = 0; i<n; i++){
        for(int j = 0; j<m;j++){
            cin >> mat1[i][j];
        }
     }
     int res[m][n];
     addMatrix((int*)mat1,(int*)mat2,(int*)res,m ,n);
     cout<<"Resultant matrix:";
      for(int i = 0; i<n; i++){
        for(int j = 0; j<m;j++){
           cout<<res[i][j]<<" ";
        }
        cout << endl;
     }

     
}