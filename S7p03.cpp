/*Problem 3 — MinMaxPair (Simple class template) 
Objective: Create a class template MinMax<T> that stores two values (minVal, maxVal) 
and has a constructor taking two T values and a print() method to print them as min 
max. 
Input: type and two values. 
Output: min max (use the given values as they are — no need to compute min/max). 
Example: 
Input: double 2.5 7.1 → Output: 2.5 7.1*/
#include<iostream>
using namespace std;
template <typename T>
class MinMax {
    private:
    T minVal, maxVal;
    public:
    MinMax(T a, T b){
        minVal = a;
        maxVal = b;
    }
    void print(){
        if(minVal > maxVal){
            swap(minVal, maxVal);
        }
        cout <<"Min :"<<minVal<<endl;
        cout <<"Max :"<<maxVal<<endl;
    }
};

    
int main(){
   string type;
    cout <<"Enter type ";
    cin >>type;
    if(type == "int"){
        int a, b;
        cout <<"Enter two integers :";
        cin >>a >>b;
        MinMax<int>mm(a, b);
        mm.print();
    }
    else if(type == "double"){
        double a, b;
        cout <<"Enter two doubles :";
        cin >>a >>b;
        MinMax<double>mm(a, b);
        mm.print();
    }

   

}
