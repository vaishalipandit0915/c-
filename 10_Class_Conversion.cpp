#include <iostream>
using namespace std;

class Temperature {
public:
    double celsius;
    
    double toFahrenheit() {
        return (celsius * 9/5) + 32;
    }
};

int main() {
    Temperature temp;
    temp.celsius = 25;
    
    cout << "Celsius: " << temp.celsius << endl;
    cout << "Fahrenheit: " << temp.toFahrenheit() << endl;
    
    return 0;
}
/* Output:
Celsius: 25
Fahrenheit: 77
*/
