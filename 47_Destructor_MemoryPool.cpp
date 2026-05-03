#include <iostream>
using namespace std;

class MemoryPool {
private:
    int *pool;
    int poolSize;
    
public:
    MemoryPool(int size) : poolSize(size) {
        pool = new int[poolSize];
        cout << "Memory Pool created with size " << poolSize << endl;
    }
    
    ~MemoryPool() {
        delete[] pool;
        cout << "Memory Pool destroyed" << endl;
    }
    
    void setValue(int index, int value) {
        if (index >= 0 && index < poolSize) {
            pool[index] = value;
        }
    }
};

int main() {
    MemoryPool mp(100);
    mp.setValue(0, 42);
    
    return 0;
}
/* Output:
Memory Pool created with size 100
Memory Pool destroyed
*/
