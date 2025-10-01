/* Call by Pointer (Member Function) 
Define a class Account (balance). Add a member function transfer(Account *acc, 
int amount) that transfers money from the calling object to the account pointed 
by acc. 
*/
#include<iostream>
using namespace std;
class Account {
    double balance;
    public:
    Account(double b){
        balance = b;
    }
    void transfer(Account *acc, int amount){
        if(balance >=amount){
            balance -= amount ;
            acc->balance += amount;
            cout <<"Transfer sucessfull" <<endl;
        }
        else{
            cout <<"Insufficient Balance"<<endl;
        }
        
    }
    void display(){
        cout <<"Balance :"<<balance<<endl;
    }
    
};

int main(){
    Account acc1(1000);
    Account acc2(10000);
    cout <<"Before Transfer"<<endl;
    cout <<"acc1 :";
    acc1.display();
    cout <<"acc2 :";
    acc2.display();
    cout <<endl;
    cout <<"Transfering from acc1 to acc2"<<endl;
    acc1.transfer(&acc2,200);
    cout <<endl;
    cout <<"After transfer"<<endl;
    cout << "Acc 1: "; acc1.display();
    cout << "Acc 2: "; acc2.display();
}