#include <iostream>
using namespace std;

class Counter {
private:
    static int count;
    
public:
    Counter() {
        count++;
        cout << "Object " << count << " created" << endl;
    }
    
    ~Counter() {
        cout << "Object " << count << " destroyed" << endl;
        count--;
    }
};

int Counter::count = 0;

int main() {
    Counter c1;
    Counter c2;
    {
        Counter c3;
    }
    
    return 0;
}
/* Output:
Object 1 created
Object 2 created
Object 3 created
Object 3 destroyed
Object 2 destroyed
Object 1 destroyed
*/
