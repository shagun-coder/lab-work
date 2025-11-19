/*Make a class Car with data members: model, company, price. 

• Store n car objects. 
• Display all cars of a particular company. 
• Find and display the most expensive car in the array.*/
#include<iostream>
using namespace std;
class Car{
    public:
    string model;
    string company;
    float price;

    void input(){
         cin.ignore();
        cout<<"Enter model of car : ";
        getline(cin,model);
       
        cout <<"Enter name of company : ";
        getline(cin,company);
        cout <<"Enter price of car : ";
       cin>>price;

    }
    void display(){
        cout <<"Model of car:"<<model<<endl;
        cout <<"Price of car :"<<price<<endl;
        cout <<"company name :"<<company << endl;
    }

};

int main(){
    int n;
    cout <<"Enter no of cars :";
    cin>>n;
    cin.ignore();
    Car*cars = new Car[n];
    for(int i = 0;i<n; i++){
        cout <<"Enter details for car "<<i+1<<endl;
        cars[i].input();
    }
    cout <<endl;
    
    string searchCompany;
    cout << "\nEnter company to display cars: ";
    cin >> searchCompany;

    cout << "\nCars of company " << searchCompany << ":\n";
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (cars[i].company == searchCompany) {
            cars[i].display();
            found = true;
        }
    }
    int maxIndex = 0;
    for(int i = 0; i<n; i++){
        if(cars[i].price > cars[maxIndex].price){
            maxIndex = i;
        }
    }
    
    cout <<"Most expensive car is :"<<endl;
    cars[maxIndex].display();
    
    delete []cars;
}