// call by refrence
#include<iostream>
using namespace std;
void incr5(int* a){
    *a = *a + 5;
    cout << " Number after increment :" << *a;

}
int main(){
    int a;
    cout << "Enter any  number :";
    cin >> a;
    incr5(&a);
    
}
