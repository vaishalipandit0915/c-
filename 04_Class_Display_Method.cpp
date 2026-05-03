#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int rollNo;
    double gpa;
    
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "GPA: " << gpa << endl;
    }
};

int main() {
    Student s1;
    s1.name = "Alice";
    s1.rollNo = 101;
    s1.gpa = 3.8;
    
    s1.display();
    
    return 0;
}
/* Output:
Name: Alice
Roll No: 101
GPA: 3.8
*/
