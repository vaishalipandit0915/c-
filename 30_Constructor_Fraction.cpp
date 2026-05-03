#include <iostream>
using namespace std;

class Fraction {
public:
    int numerator, denominator;
    
    Fraction() : numerator(0), denominator(1) {
        cout << "Fraction Created" << endl;
    }
    
    Fraction(int n, int d) : numerator(n), denominator(d) {
        cout << "Fraction Created" << endl;
    }
    
    void display() {
        cout << numerator << "/" << denominator << endl;
    }
};

int main() {
    Fraction f1;
    Fraction f2(3, 4);
    
    f1.display();
    f2.display();
    
    return 0;
}
/* Output:
Fraction Created
Fraction Created
0/1
3/4
*/
