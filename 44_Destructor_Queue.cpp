#include <iostream>
using namespace std;

class Queue {
private:
    int *elements;
    int front, rear;
    int size;
    
public:
    Queue(int s) : size(s), front(-1), rear(-1) {
        elements = new int[size];
        cout << "Queue created" << endl;
    }
    
    ~Queue() {
        delete[] elements;
        cout << "Queue destroyed" << endl;
    }
};

int main() {
    Queue q(5);
    
    return 0;
}
/* Output:
Queue created
Queue destroyed
*/
