/*Call by Reference (Member Function) 
Create a class Time (hours, minutes). Add a member function addTime(Time &t) 
that adds t to the calling object (passed by reference*/
#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;

public:
    
    Time(int h = 0, int m = 0) {
        hours = h;
        minutes = m;
    }

    
    void addTime(Time &t) {
        hours += t.hours;
        minutes += t.minutes;

       
        if (minutes >= 60) {
            hours += minutes / 60;
            minutes = minutes % 60;
        }
    }

   
    void display() {
        cout << "Time: " << hours << " hours " << minutes << " minutes" << endl;
    }
};

int main() {
   
    Time t1(2, 45);
    Time t2(1, 30);

    cout << "Before adding:" << endl;
    t1.display();
    t2.display();

    
    t1.addTime(t2);
    cout << endl;
    cout << "After adding t2 to t1:" << endl;
    t1.display();


}
