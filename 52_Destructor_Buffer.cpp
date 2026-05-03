#include <iostream>
using namespace std;

class Buffer {
private:
    char *data;
    int bufferSize;
    
public:
    Buffer(int size) : bufferSize(size) {
        data = new char[bufferSize];
        cout << "Buffer of size " << bufferSize << " allocated" << endl;
    }
    
    ~Buffer() {
        delete[] data;
        cout << "Buffer deallocated" << endl;
    }
};

int main() {
    Buffer buf(1024);
    
    return 0;
}
/* Output:
Buffer of size 1024 allocated
Buffer deallocated
*/
