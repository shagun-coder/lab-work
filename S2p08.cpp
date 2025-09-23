// Write a program to input and print elements of a 3 x 3 x 3 cube using only pointers no arr[i][j][k]
#include<iostream>
using namespace std;


int main() {
    int x = 3, y = 3, z = 3;
  int*ptr = new int[x*y*z];

  cout <<"Enter 3d array elememts:";
  for(int i =0;i<x;i++){
    for(int j =0; i<y;j++){
      for(int k = 0; k<z;k++){
        cin >> *(ptr+i*y*z+j*z+k);
      }
    }
  }
  cout <<" array elememts are:";
  for(int i =0;i<x;i++){
    for(int j =0; i<y;j++){
      for(int k = 0; k<z;k++){
       cout << *(ptr+i*y*z+j*z+k)<<" ";
      }
      cout << endl;
    }
    cout << endl;
  }
}