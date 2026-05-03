#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    string color;
};

int main() {
    Car car1;
    car1.brand = "Toyota";
    car1.color = "Red";
    
    cout << "Brand: " << car1.brand << endl;
    cout << "Color: " << car1.color << endl;
    
    return 0;
}
/* Output:
Brand: Toyota
Color: Red
*/
