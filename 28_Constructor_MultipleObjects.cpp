#include <iostream>
using namespace std;

class Student {
public:
    int id;
    string name;
    double gpa;
    
    Student(int i, string n, double g) {
        id = i;
        name = n;
        gpa = g;
        cout << "Student Constructor: " << name << endl;
    }
    
    void getInfo() {
        cout << "ID: " << id << ", Name: " << name << ", GPA: " << gpa << endl;
    }
};

int main() {
    Student s1(101, "Bob", 3.9);
    Student s2(102, "Alice", 3.7);
    
    s1.getInfo();
    s2.getInfo();
    
    return 0;
}
/* Output:
Student Constructor: Bob
Student Constructor: Alice
ID: 101, Name: Bob, GPA: 3.9
ID: 102, Name: Alice, GPA: 3.7
*/
