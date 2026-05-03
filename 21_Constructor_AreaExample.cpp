#include <iostream>
using namespace std;

class Rectangle {
public:
    double length;
    double width;
    
    Rectangle() {
        length = 1;
        width = 1;
        cout << "Default Constructor" << endl;
    }
    
    Rectangle(double l, double w) {
        length = l;
        width = w;
        cout << "Parameterized Constructor" << endl;
    }
    
    double area() {
        return length * width;
    }
};

int main() {
    Rectangle r1;
    Rectangle r2(5.0, 3.0);
    
    cout << "Area 1: " << r1.area() << endl;
    cout << "Area 2: " << r2.area() << endl;
    
    return 0;
}
/* Output:
Default Constructor
Parameterized Constructor
Area 1: 1
Area 2: 15
*/
