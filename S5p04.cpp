/*Design a class Cricketer with members: playerName, matches, runs, average. 
• Read data for n players. 
• Calculate average = runs / matches. 
• Sort and display players in descending order of average runs.*/
#include <iostream>
#include <string>
using namespace std;
class Cricketer{
    public:
    string PlayerName;
    int matches;
    int runs;
    float average;
    void input(){
        cout << "Enter player name: ";
        cin >> PlayerName;
       
        cout << "Enter Matches: ";
        cin>>matches;
        cout << "Enter runs: ";
        cin>> runs;

         
        average = (float)runs/matches;  
       
    }
       
        
    void display(){
        cout <<"Player name : "<<PlayerName<<endl;
        cout <<"No. of Matches : "<<matches<<endl;;
        cout <<"No. of runs : "<<runs <<endl;
        cout <<"Average :"<<average<<endl;
    }

};

int main(){
    int n;
    cout <<"Enter number of player:";
    cin>>n;
    Cricketer *c= new Cricketer[n];
     for(int i = 0; i < n; i++) {
        cout << "Criketer" << i+1 << " details:"<<endl;
        c[i].input();
    }
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (c[j]. average > c[i].average){
                swap(c[i],c[j]);

            }

        }
    }

    cout <<"-- Players sorted by descending average runs ---" <<endl;
    for(int i = 0; i<n; i++){
        c[i].display();
    }
    cout << "Player with (Highest Average):\n";
    c[0].display(); 
    delete []c;

}
 
    


