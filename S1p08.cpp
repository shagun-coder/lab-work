#include<iostream>
using namespace std;
int strLength(char*s){
    int len = 0;
    for(int i = 0; s[i] !='\0'; i++){
        len++;
    }
    return len;
    

}
int main(){
    char str[] = "Shagun";
    char*ptr = str;

    int len = strLength(str);
    cout << "string length = " << len ;
}