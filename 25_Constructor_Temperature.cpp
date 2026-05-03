#include <iostream>
using namespace std;

class Temperature {
public:
    double celsius;
    
    Temperature() : celsius(0) {
        cout << "Temperature set to 0 Celsius" << endl;
    }
    
    Temperature(double c) : celsius(c) {
        cout << "Temperature set to " << c << " Celsius" << endl;
    }
    
    double toFahrenheit() {
        return celsius * 9.0/5.0 + 32;
    }
};

int main() {
    Temperature t1;
    Temperature t2(25);
    
    cout << t2.celsius << " C = " << t2.toFahrenheit() << " F" << endl;
    
    return 0;
}
/* Output:
Temperature set to 0 Celsius
Temperature set to 25 Celsius
25 C = 77 F
*/
