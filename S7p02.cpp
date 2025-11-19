/*Problem 2 — sumArray (Function template) 
Objective: Implement sumArray as a function template that returns sum of n elements 
of a vector. Types allowed: int or double. 
Input: First line: type and n. Second line: n numbers. 
Output: Sum (same type as input).*/
#include <iostream>
#include <vector>   
using namespace std;
template <typename T>
T sumArray(const vector<T>& arr) {  
    T sum = 0;  
    for(int i = 0; i < arr.size(); i++) {  
        sum += arr[i];  
    }
    return sum;  
}           
int main() {
    string type;
    int n;
    cin >> type >> n;
    if (type == "int") {
        vector<int> arr(n);
        for (int i = 0; i < n;i++) {
            cin >> arr[i];
        }
        cout << sumArray(arr) << endl;
    } 
    else if (type == "double") {
        vector<double> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << sumArray(arr) << endl;
    } 
    return 0;
}