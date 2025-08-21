#include<iostream>
using namespace std;
int main(){
   const char *str1 = "Shagun";
   const char *str2 = "Tania";
   const char *str3 = "Bhoomi";
   const char *str4 = "Anuj";
   const char *str5 = "Arjun";
    // array of pointerr
   const char* str[5] = {str1,str2,str3,str4,str5}; 
    for(int i = 0; i < 5; i++){
        cout << str[i] << endl;;
    }
  
    return 0;
}
