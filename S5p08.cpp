/**Concepts: Array of objects, composition, discount logic 
Problem: 
Define a class Product with attributes: id, name, price, discount. 
• Create an array of objects representing cart items. 
• Compute the total amount payable after applying discounts. 
• Display products sorted by final price (after discount). 
Hint: 
Use (price - (price * discount / 100)) for each product. 
Implement a function to compute the total bill. */

#include<iostream>
#include<algorithm>
using namespace std;

class Product{
    public:
    int id;
    string name;
    float price;
    float discount;

    void input(){
        cout <<"Enter id of product :";
        cin >>id;
        cout <<"Enter Name of product : ";
        cin >>name;
        cout <<"Enter price of product : ";
        cin >>price;
        cout <<"Enter discount on product(%) : ";
        cin >>discount;
        cout <<endl;
        
    }
    void display(){
        cout <<"ID  of product : "<<id <<endl;
        cout <<"Name of product : "<<name<<endl;
        cout <<"Price of product : "<<price<<endl;
        cout <<"Discount on product : "<<discount<<"%"<<endl;
        cout << "----------------------"<<endl;


    }
    float getTotalprice(){
        return price - (price * discount / 100);
    }
    

};

void sortByfinalprice(Product item[],int n){
    for(int i =0; i<n-1;i++){
        for(int j = i+1;j<n;j++){
            if(item[i].getTotalprice()>item[j].getTotalprice()){
                swap(item[i],item[j]);

            }
        }
    }
}

float computeBill(Product item[],int n){
    float sum =  0;
    for(int i = 0;i<n;i++){
        sum += item[i].getTotalprice();
    }
    return sum;
}

int main(){
    int n;
    cout <<"Enter number of cart items : ";
    cin>>n;
    Product*item = new Product[n];
    for(int i = 0; i<n; i++){
        cout <<"Enter details for "<<i+1<<"  item"<<endl;
        item[i].input();
    }

    cout <<"\n--- Products Sorted by Final Price ---\n";
;
    sortByfinalprice(item,n);
    for(int i = 0; i<n;i++){
        item[i].display();

    }

    float total = computeBill(item,n);
    cout <<"Final price after discount  : "<<total;
    
    delete []item;


}