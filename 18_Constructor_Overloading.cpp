#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int year;
    
    Car() {
        brand = "Unknown";
        year = 0;
    }
    
    Car(string b, int y) {
        brand = b;
        year = y;
    }
    
    void display() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

int main() {
    Car c1;
    Car c2("Toyota", 2020);
    
    c1.display();
    c2.display();
    
    return 0;
}
/* Output:
Brand: Unknown, Year: 0
Brand: Toyota, Year: 2020
*/
