
#include<iostream>
using namespace std;
int sum(int *a ,int *b){
    return  *a + *b;
    
} 
int main(){
    int a = 5;
    int b = 7;
    int *p1 = &a;
    int *p2 = &b;
    int result = sum(&a, &b);
    cout <<"sum is = "  << result ;
}
