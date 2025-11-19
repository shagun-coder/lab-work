/*Objective: Read integer x. If x==0 throw the string "Zero" and catch it in main to print 
Caught Zero. Otherwise print OK. 
Input: single integer. 
Output: Caught Zero or OK 
Example: 0 → Caught Zero*/
#include<iostream>
using namespace std;
void checkZero(int x){
    if(x == 0){
        throw string("Zero");
    }
    else{
        cout <<"OK"<<endl;
    }
}
int main(){
    int n;
    string s;
    try{
        cout <<"Enter an integer :";
        cin >>n;
        checkZero(n);
    }
    catch(string &s){
        cout <<"Caught "<<s<<endl;
    }

}
