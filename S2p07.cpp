// sum of all elemets of 3 d array

#include <iostream>
using namespace std;

int main() {
  int x = 2, y = 2, z = 2;
  int*ptr = new int[x*y*z];

  cout <<"Enter 3d array elememts:";
  for(int i =0;i<x;i++){
    for(int j =0; i<y;j++){
      for(int k = 0; k<z;k++){
        cin >> *(ptr+i*y*z+j*z+k);
      }
    }
  }

    int sum = 0;
    for(int i =0;i<x;i++){
    for(int j =0; i<y;j++){
      for(int k = 0; k<z;k++){
        sum +=*(ptr+i*y*z+j*z+k);
      }
    }
  }
    cout << "Sum of all elements: " << sum << endl;

    delete[] ptr;
    return 0;
}