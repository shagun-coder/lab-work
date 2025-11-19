/*Problems 6–10 — Exception Handling (Easy) 
Problem 6 — safeDiv (simple) 
Objective: Read two integers a b. If b==0 print Error (without throwing), otherwise 
print a/b. (This is warm-up — no throw required.) 
Input: a b 
Output: result or Error 
Example: 10 0 → Error */
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(b == 0){
        cout <<"Error"<<endl;
    }
    else{
        cout <<a/b<<endl;
    }


}
