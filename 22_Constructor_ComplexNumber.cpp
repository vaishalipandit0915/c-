#include <iostream>
using namespace std;

class ComplexNumber {
public:
    double real;
    double imag;
    
    ComplexNumber() : real(0), imag(0) {
        cout << "Default Complex Constructor" << endl;
    }
    
    ComplexNumber(double r, double i) : real(r), imag(i) {
        cout << "Parameterized Complex Constructor" << endl;
    }
    
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    ComplexNumber c1;
    ComplexNumber c2(3.5, 2.5);
    
    c1.display();
    c2.display();
    
    return 0;
}
/* Output:
Default Complex Constructor
Parameterized Complex Constructor
0 + 0i
3.5 + 2.5i
*/
