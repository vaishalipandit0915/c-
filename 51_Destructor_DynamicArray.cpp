#include <iostream>
using namespace std;

class DynamicArray {
private:
    double *arr;
    int capacity;
    
public:
    DynamicArray(int size) : capacity(size) {
        arr = new double[capacity];
        cout << "Dynamic array of capacity " << capacity << " created" << endl;
    }
    
    ~DynamicArray() {
        delete[] arr;
        cout << "Dynamic array deallocated" << endl;
    }
    
    void setValue(int index, double value) {
        if (index >= 0 && index < capacity) {
            arr[index] = value;
        }
    }
};

int main() {
    DynamicArray da(50);
    da.setValue(0, 3.14);
    
    return 0;
}
/* Output:
Dynamic array of capacity 50 created
Dynamic array deallocated
*/
