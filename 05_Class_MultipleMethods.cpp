#include <iostream>
using namespace std;

class Circle {
public:
    double radius;
    
    double calculateArea() {
        return 3.14 * radius * radius;
    }
    
    double calculateCircumference() {
        return 2 * 3.14 * radius;
    }
};

int main() {
    Circle c1;
    c1.radius = 5.0;
    
    cout << "Radius: " << c1.radius << endl;
    cout << "Area: " << c1.calculateArea() << endl;
    cout << "Circumference: " << c1.calculateCircumference() << endl;
    
    return 0;
}
/* Output:
Radius: 5
Area: 78.5
Circumference: 31.4
*/
