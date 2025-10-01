/* Returning Object from Member Function 
Define a class Matrix with a 2x2 array. Create a member function add(Matrix 
&m) that returns the sum as a new Matrix object (by value).*/
#include<iostream>
using namespace std;
class Matrix{
    int arr[2][2];
    public:
   
    void input(){
        for(int i = 0; i<2;i++){
            for(int j = 0; j<2;j++){
                cin >> arr[i][j];
            }   
     
        }
    }
    Matrix add(Matrix&m){
        Matrix temp;
        for(int i = 0; i<2;i++){
            for(int j = 0; j<2;j++){
                temp.arr[i][j] = arr[i][j]+ m.arr[i][j];
            }
        }
        return temp;

    }

     void display() {
        cout << "Matrix:\n";
        for (int i=0; i<2; i++) {
            for (int j=0; j<2; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
};
int main(){
    Matrix m1,m2,sum;

    cout <<"Matrix 1:";
    m1.input();
    cout <<"Matrix 2:";
    m2.input();
    cout <<endl;
    sum = m1.add(m2);
    cout <<"Sum of Matrix1 and Matrix2"<<endl;
    sum.display();


}