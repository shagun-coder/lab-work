/*5. Inventory Stock Update 
Concepts: Array of objects, operator overloading 
Problem: 
Define a class Item with members: code, name, and quantity. 
• Overload the + operator to add quantities of items with the same code. 
• Create an array of items. 
• Merge stock from two inventories (two arrays of objects) into a third array.*/
#include<iostream>
using namespace std;
class Item{
    public:
    int code;
    string name;
    int quantity;

    Item(){
        code = 0;
        name =" ";
         quantity  = 0;

    }

    Item(int c, string n  , int q ){
        code = c;
        name = "c";
        quantity  = q;
    }

    void input(){
        cout <<"Enter code of items : ";
        cin >>code;
        cin.ignore();
        cout <<"Enter name of item :";
        getline(cin,name);
        cout <<"Enter the Quauntity of item : ";
        cin >>quantity;
    }

    void display(){
        cout << "code : "<<code<<endl;
        cout<<"Name : " <<name<<endl;
        cout<<"Quantity : "<<quantity<<endl;
    }

    Item operator+( Item obj){
        Item temp;
        if(code  == obj.code){
          temp.code = code;
          temp.name = name;
          temp.quantity = quantity + obj.quantity;

       
        }
        else temp =*this;
        return temp;


    }
};
int main(){
    int n1;
    cout <<"Enter the number of items in first inventory : ";
    cin>>n1;

    Item C1[n1];
    for(int i = 0; i<n1; i++){
        cout <<"Enter the details for items  " <<i+1<<endl;
        C1[i].input();
    }

    int n2;
    cout << "\nEnter number of items in second inventory: ";
    cin >> n2;
    Item C2[n2];
     for(int j = 0; j<n2; j++){
        cout <<"Enter the details for items  " <<j+1<<endl;
       C2[j].input();
    }

    Item C3[n1 + n2];
    int m = 0;
    for(int j = 0; j<n2;j++){
        C3[m++] = C2[j];
    }

    for (int j = 0; j < n2; j++) {
    bool found = false;
        for(int i = 0; i<m;i++){
            if(C3[i].code == C2[j].code)
            found = true;
            break;
        }
         if(!found){
         C3[m++] = C2[j];

        }
    }
   cout << "\nMerged Inventory:\n";
    for(int i=0; i<m; i++)
    C3[i].display();

}
