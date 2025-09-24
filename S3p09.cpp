/*Create a class Time with data members hours and minutes. 
• Write a function addTime(Time t) that adds two time objects and returns a new 
object. 
• Ensure minutes are properly converted into hours if they exceed 60.*/
#include <iostream>
using namespace std;

class Time {
    int hours;
    int minutes;

public:
   
    Time() {
        hours = 0;
        minutes = 0;
    }
    Time(int h, int m) {
        hours = h;
        minutes = m;
    }

  
    Time addTime(Time t) {
        Time temp;
        temp.minutes = minutes + t.minutes;
        temp.hours = hours + t.hours;

        
        if (temp.minutes >= 60) {
           
            temp.minutes = temp.minutes % 60;
            temp.hours++;
        }
        return temp;
    }

    
    void display() {
        cout << hours << " hrs " << minutes << " mins" << endl;
    }
};

int main() {
  
    Time t1(2,50);
    Time t2(1,30);
    cout <<"first time :";
    t1.display();
    cout <<"second time:";
    t2.display();

    Time t3 = t1.addTime(t2);
    cout <<"sum:";
    t3.display();

    return 0;
}
