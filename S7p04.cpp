/*Problem 4 — scaleVector (Function template) 
Objective: Implement scaleVector<T>(vector<T>& v, T factor) that multiplies every 
element by factor. Read vector, scale, print result. 
Input: type n, then n elements, then factor. 
Output: scaled elements space-separated. 
*/
#include<iostream>
using namespace std;
template<typename T>
void scaleVector(T arr[], int n, T factor) {
    cout <<"Scaled array :";
    for (int i = 0; i < n;i++) {
        cout <<arr[i]<<" ";
    }
    cout <<endl;
}

int main(){
    string type;
    int n;
    cout <<"Enter size of vector :";
    cin >>n;
    if(type == "int "){
        int arr[n];
        cout <<"Enter array :";
        for(int i = 0; i < n;i++) {
            cin >> arr[i];
        }
        int factor;
        cout <<"Enter factor :";
        cin >> factor;
        scaleVector<int>(arr, n, factor);
    }
    else if(type == "double"){
        double arr[n];
        cout <<"Enter array :";
        for(int i = 0; i < n;i++) {
            cin >> arr[i];
        }
        double factor;
        cout <<"Enter factor :";
        cin >> factor;
        scaleVector<double>(arr, n, factor);
    }
}