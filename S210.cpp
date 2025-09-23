/*Write a program to dynamically allocate memory for an integer array of size n,
 input elements, and find their average using pointers.*/
 #include<iostream>
 using namespace std;
 int main(){
    int n;
    cout <<"Enter size of elements:";
    cin >>n;
    int*arr = new int[n]; // dyanamic allocation for n integer
    cout <<"Enter  elements:";
    for(int i = 0; i<n;i++){
        cin >> *(arr+i); // or arr[i]
    }

    int sum =0;
    for(int i = 0; i<n;i++){
        sum += *(arr+i);
    }
    // calculate average 
    double average = (double)sum/n; // typecast
    cout <<"Average of the array elements is :"<<average;
    
    delete[] arr;


 }