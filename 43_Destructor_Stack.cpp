#include <iostream>
using namespace std;

class Stack {
private:
    int *elements;
    int top;
    int maxSize;
    
public:
    Stack(int size) : maxSize(size), top(-1) {
        elements = new int[maxSize];
        cout << "Stack created with capacity " << maxSize << endl;
    }
    
    ~Stack() {
        delete[] elements;
        cout << "Stack destroyed" << endl;
    }
};

int main() {
    Stack s(10);
    
    return 0;
}
/* Output:
Stack created with capacity 10
Stack destroyed
*/
