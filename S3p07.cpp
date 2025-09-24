/*Create a class Car with data members brand and price. 
• Define a copy constructor to initialize one object from another. 
• Demonstrate copy constructor in main().*/
#include<iostream>
using namespace std;
class Car{
    string brand;
    float price;
    public:
    Car(string b,float p){
        brand = b;
        price = p;
    }
    Car(Car&c){
        brand = c.brand;
        price = c.price;
    }
    void display(){
        cout <<"Brand of car : " << brand<<"and"<<"price :"<<price <<endl;
    }
};
int main(){
    Car car1("Honda", 1200000);

   
    Car car2 = car1;

    car1.display();

    car2.display(); // copy of c1



}