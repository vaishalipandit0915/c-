#include <iostream>
using namespace std;

class Array {
public:
    int arr[5];
    
    void displayArray() {
        for (int i = 0; i < 5; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Array a;
    a.arr[0] = 10;
    a.arr[1] = 20;
    a.arr[2] = 30;
    a.arr[3] = 40;
    a.arr[4] = 50;
    
    a.displayArray();
    
    return 0;
}
/* Output:
10 20 30 40 50
*/
