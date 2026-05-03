#include <iostream>
using namespace std;

class Triangle {
public:
    double side1, side2, side3;
    
    double calculatePerimeter() {
        return side1 + side2 + side3;
    }
};

int main() {
    Triangle tri;
    tri.side1 = 3;
    tri.side2 = 4;
    tri.side3 = 5;
    
    cout << "Sides: " << tri.side1 << ", " << tri.side2 << ", " << tri.side3 << endl;
    cout << "Perimeter: " << tri.calculatePerimeter() << endl;
    
    return 0;
}
/* Output:
Sides: 3, 4, 5
Perimeter: 12
*/
