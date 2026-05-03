#include <iostream>
using namespace std;

class Time {
public:
    int hours, minutes, seconds;
    
    Time() : hours(0), minutes(0), seconds(0) {
        cout << "Time Initialized to 00:00:00" << endl;
    }
    
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {
        cout << "Time Initialized" << endl;
    }
    
    void display() {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
};

int main() {
    Time t1;
    Time t2(10, 30, 45);
    
    t1.display();
    t2.display();
    
    return 0;
}
/* Output:
Time Initialized to 00:00:00
Time Initialized
0:0:0
10:30:45
*/
