#include <iostream>
using namespace std;

class Counter {
public:
    int count;
    
    Counter() : count(0) {
        cout << "Counter initialized to 0" << endl;
    }
    
    void increment() {
        count++;
    }
    
    void display() {
        cout << "Count: " << count << endl;
    }
};

int main() {
    Counter c;
    c.increment();
    c.increment();
    c.display();
    
    return 0;
}
/* Output:
Counter initialized to 0
Count: 2
*/
