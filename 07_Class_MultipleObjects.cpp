#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
    
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Person p1;
    p1.name = "Bob";
    p1.age = 25;
    
    Person p2;
    p2.name = "Alice";
    p2.age = 22;
    
    p1.display();
    p2.display();
    
    return 0;
}
/* Output:
Name: Bob, Age: 25
Name: Alice, Age: 22
*/
