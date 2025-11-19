/*Create a class Book with members: bookID, title, author, and price. 
• Read details for n books into an array. 
• Implement a function to search for a book by author name. 
• Display all books written by that author.*/
#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    int bookID;
    string title;
    string author;
    double price;

    void input() {
         cout << "Enter Book ID: ";
        cin >> bookID;
        cin.ignore();  

        cout << "Enter Title: ";
        getline(cin, title); 

        cout << "Enter Author: ";
        getline(cin, author);

        cout << "Enter Price: ";
        cin >> price;
    
    }
    void display(){
        cout <<"Book id : "<<bookID<<endl;
        cout<<"Book title : "<<title <<endl;
        cout <<"Book author : "<<author<<endl;
        cout <<"Book price : "<<price<<endl;
    }

    
};
void searchByAuthor(Book book[],int n,string AuthorName ){
    bool found = false;
    cout <<"Book written by " <<AuthorName<<endl;
    for(int i = 0; i<n; i++){
        if(book[i].author == AuthorName){
            book[i].display();
            found = true;
        }
    }
    if(!found){
        cout <<"No book found by that auhtor ";

    }
       
}



int main(){
    int n;
    cout <<"Enter number of books : ";
    cin >> n;

    Book*book = new Book[n];
    for(int i = 0; i<n; i++){
        cout <<"Book "<<i+1<<" Details "<<endl;
        book[i].input();
    }

    string AuthorName;
    cout <<"Enter the author name to search:";
    cin >>AuthorName;
    searchByAuthor(book,n ,AuthorName);
    delete []book;
   
}