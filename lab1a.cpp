//call by value
#include<iostream>
using namespace std;
int incr5(int a){
    return a + 5;
}
int main(){
    int a;
    cout << "Enter any  number :";
    cin >> a;
    a = incr5(a);
    cout << " Number after increment :" << a ;
    

}