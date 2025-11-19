/*Create a class Flight with data members: flightNo, source, destination, seatsAvailable. 
• Allocate flights dynamically (new Flight[n]). 
• Display all flights going to a particular destination entered by user. 
• Update seat count when a booking is made. 
Hint: 
Use functions for searching and seat modification.*/
#include<iostream>
using namespace std;
class FLight{
      public:
    int flightNo;
    string source;
    string destination;
    int seatsAvailable;
  

    FLight(int f = 0,string src = " ",string d =" ",int s = 0){
        flightNo = f;   
        source = src;
        destination = d;
        seatsAvailable = s;

    }
    void input(){
        cout <<"Enter flight number : ";
        cin>>flightNo;
        cout<<"Enter source : ";
        cin >>source;
        cout <<"Enter destination : ";
        cin >> destination;
        cout <<"No of seats  available : ";
        cin >> seatsAvailable;
    }
    void display(){
        cout <<"Flight no : "<<flightNo<<endl;
        cout <<"source of flight : "<<source<<endl;
        cout <<"Destination of flight : "<<destination<<endl; 
        cout<<"Seats available in flight : "<< seatsAvailable <<endl<<endl;
    }

};

void SearchDestination(FLight flights[],int n,string Partdestination){
    bool found = false;
    cout <<"Flight going to "<<Partdestination<<endl;
    for(int i = 0; i<n;i++){
         if(flights[i].destination == Partdestination){
            flights[i].display();
            found = true;

        }
    }
    if(!found){
        cout <<"NO flight going to "<<Partdestination<<endl;
    }
}

void seatModification(FLight flights[],int n ){
    int flno, seats;
    cout <<"Enter the flight no you want to book seats ";
    cin>>flno;
    cout <<"Enter the number of seats to book ";
    cin >>seats;
    bool found = false;
    
    for(int i = 0;i<n; i++){
        if(flights[i].flightNo == flno){
            if(flights[i].seatsAvailable >seats){
                flights[i].seatsAvailable -= seats;
                cout <<"Booking is made . seats updated ";
                cout << "\nHere are the flight details after booking:\n";
                flights[i].display();
                found = true;
            }
            else{
            cout <<"Enough Seats are not available";
            }

        }
        if(!found){
            cout <<"flight no does not match ";
        }
    }

}


int main(){
    int n;
    cout <<"Enter number of flights : ";
    cin >>n;

    FLight *flights = new FLight[n];
    for(int i = 0; i<n; i++){
        cout <<"Enter details for "<<i+1<<" fllight "<<endl;
        flights[i].input();

    }
    cout <<endl;

    string Partdestination;
    cout <<"Enter the destination you want too go :";
    cin>>Partdestination;
    SearchDestination(flights,n,Partdestination);
    cout <<endl;


    seatModification(flights,n );
    
  

}