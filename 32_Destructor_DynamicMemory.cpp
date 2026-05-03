#include <iostream>
using namespace std;

class Array {
public:
    int *arr;
    int size;
    
    Array(int s) {
        size = s;
        arr = new int[size];
        cout << "Array allocated with size " << size << endl;
    }
    
    ~Array() {
        delete[] arr;
        cout << "Array deallocated" << endl;
    }
};

int main() {
    Array a(5);
    
    return 0;
}
/* Output:
Array allocated with size 5
Array deallocated
*/
