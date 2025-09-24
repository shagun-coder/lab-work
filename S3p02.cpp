/*Create a class Book with data members title, author, and price. Write a program to 
create three objects of Book, initialize them with user input*/
#include<iostream>
#include<string>
using namespace std;
class Book{
    public:
    string title;
    string author;
    float price;

};

int main(){
    Book book1 , book2 , book3;
    cout <<"Enter details of book 1 "<<endl;
    cout <<"Enter title for book 1 : ";
    getline(cin,book1.title);
    cout <<"Enter author of book 1 : ";
    getline(cin,book1.author);
    cout<<"Enter price of book1 : ";
    getline(cin,book1.author);

    cout <<"Enter details of book 2 "<<endl;
    cout <<"Enter title for book 2 : ";
    getline(cin,book1.title);
    cout <<"Enter author of book 2 : ";
    getline(cin,book1.author);
    cout<<"Enter price of book 2 : ";
    getline(cin,book1.author);


    cout <<"Enter details of book 3 "<<endl;
    cout <<"Enter title for book 3 : ";
    getline(cin,book1.title);
    cout <<"Enter author of book 3 : ";
    getline(cin,book1.author);
    cout<<"Enter price of book 3 : ";
    getline(cin,book1.author);

    cout <<"Book 1 " <<book1.title <<"  "<<book1.author<<"  "<< book1.price<<endl;
    cout <<"Book 2 " <<book2.title <<"  "<<book2.author<<"  "<< book2.price<<endl;
    cout <<"Book 3 " <<book3.title <<"  "<<book3.author<<"  "<< book3.price<<endl;

}
