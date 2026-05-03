#include <iostream>
using namespace std;

class SharedBuffer {
private:
    int *buffer;
    int *refCount;
    
public:
    SharedBuffer(int size) {
        buffer = new int[size];
        refCount = new int(1);
        cout << "Shared buffer created" << endl;
    }
    
    ~SharedBuffer() {
        (*refCount)--;
        if (*refCount == 0) {
            delete[] buffer;
            delete refCount;
            cout << "Shared buffer destroyed" << endl;
        }
    }
};

int main() {
    SharedBuffer sb(256);
    
    return 0;
}
/* Output:
Shared buffer created
Shared buffer destroyed
*/
