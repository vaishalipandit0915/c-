#include <iostream>
using namespace std;

class Time {
public:
    int hours;
    int minutes;
    int seconds;
    
    void display() {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
};

int main() {
    Time t;
    t.hours = 10;
    t.minutes = 30;
    t.seconds = 45;
    
    t.display();
    
    return 0;
}
/* Output:
10:30:45
*/
