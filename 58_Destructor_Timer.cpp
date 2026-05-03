#include <iostream>
using namespace std;

class Timer {
private:
    long long *startTime;
    
public:
    Timer() {
        startTime = new long long(0);
        cout << "Timer started" << endl;
    }
    
    ~Timer() {
        delete startTime;
        cout << "Timer stopped and cleaned up" << endl;
    }
};

int main() {
    Timer t;
    
    return 0;
}
/* Output:
Timer started
Timer stopped and cleaned up
*/
