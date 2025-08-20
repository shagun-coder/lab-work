#include<iostream>
using namespace std;
void Maximum(int *a , int*b, int*c){
    if(*a > *b  && *a > *c){
        cout << *c <<"is greater";
    }
     if(*b > *a  && *b > *c){
        cout << *b<<" is greater";
    }
     if(*c > *b  && *c > *a){
        cout << *c <<" is greater";
    }
    
}

int main(){
    int a ,b,c;
    cout << " Enter a = ";
    cin >> a;
    cout <<"enter b  = ";
    cin >> b;
    cout << "enter c = ";
    cin >> c;
    int * p1 = &a;
    int * p2 = &b;
    int * p3 = &c;
    Maximum(&a , &b, &c);

}
