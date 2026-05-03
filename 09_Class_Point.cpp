#include <iostream>
using namespace std;

class Point {
public:
    double x;
    double y;
    
    void display() {
        cout << "Point(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p;
    p.x = 3.5;
    p.y = 4.5;
    
    p.display();
    
    return 0;
}
/* Output:
Point(3.5, 4.5)
*/
