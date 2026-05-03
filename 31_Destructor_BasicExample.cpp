#include <iostream>
using namespace std;

class Student {
public:
    string name;
    
    Student(string n) : name(n) {
        cout << "Constructor: " << name << " created" << endl;
    }
    
    ~Student() {
        cout << "Destructor: " << name << " destroyed" << endl;
    }
};

int main() {
    Student s("Alice");
    
    return 0;
}
/* Output:
Constructor: Alice created
Destructor: Alice destroyed
*/
