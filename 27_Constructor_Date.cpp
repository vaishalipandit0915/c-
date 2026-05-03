#include <iostream>
using namespace std;

class Date {
public:
    int day, month, year;
    
    Date() : day(1), month(1), year(2024) {
        cout << "Default Date Constructor" << endl;
    }
    
    Date(int d, int m, int y) : day(d), month(m), year(y) {
        cout << "Parameterized Date Constructor" << endl;
    }
    
    void display() {
        cout << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    Date d1;
    Date d2(25, 12, 2024);
    
    d1.display();
    d2.display();
    
    return 0;
}
/* Output:
Default Date Constructor
Parameterized Date Constructor
1/1/2024
25/12/2024
*/
