/*Objective: Implement Box<T> but test with T = string. Class stores a value, set and 
get. Read one string, store it, then print from get(). 
Input: one word (no spaces). 
Output: the same word. 
Example: 
Input: Hello → Output: Hello*/
#include<iostream>
using namespace std;
template<typename T>
class Box {
    private:
    string type;
    T value;

    public:
    void setValue(T val){
        value = val;
    }
    void getValue(){
        cout <<value<<endl;
    }



};
int main(){
    Box<string>B1;
    string str;
    cout <<"Enter a word :";
    cin >>str;
    B1.setValue(str);
    cout <<"The word is :";
    B1.getValue();

}
