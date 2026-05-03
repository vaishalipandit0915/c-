#include <iostream>
using namespace std;

class Person {
private:
    int age;
    string name;
    
public:
    Person() : age(0), name("") {}
    
    void setAge(int a) {
        if (a > 0 && a <= 120) {
            age = a;
        }
    }
    
    int getAge() {
        return age;
    }
    
    void setName(string n) {
        if (n.length() > 0) {
            name = n;
        }
    }
    
    string getName() {
        return name;
    }
};

int main() {
    Person p;
    p.setAge(25);
    p.setName("John");
    
    cout << "Name: " << p.getName() << ", Age: " << p.getAge() << endl;
    
    return 0;
}
/* Output:
Name: John, Age: 25
*/
