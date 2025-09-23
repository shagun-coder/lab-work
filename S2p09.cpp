//Create an array of string pointers  and print them using pointer notation.
#include<iostream>
#include<string>
using namespace std;
int  main() {
    string names[4] ={"bhhomija","shagun","bhavna","bhoomi"};
    string*ptr = names;
    for(int i =0; i<4;i++){
        cout <<*(ptr+i)<< " ";
    }
}

