#include <iostream>
using namespace std;

class Vector {
public:
    int *data;
    int size;
    
    Vector(int s) : size(s) {
        data = new int[size];
        cout << "Vector of size " << size << " created" << endl;
    }
    
    ~Vector() {
        delete[] data;
        cout << "Vector destroyed" << endl;
    }
    
    void display() {
        for (int i = 0; i < size; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Vector v(5);
    for (int i = 0; i < 5; i++) {
        v.data[i] = i + 1;
    }
    v.display();
    
    return 0;
}
/* Output:
Vector of size 5 created
1 2 3 4 5 
Vector destroyed
*/
