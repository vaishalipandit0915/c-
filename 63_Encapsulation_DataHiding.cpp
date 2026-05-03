#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    double gpa;
    
public:
    Student(int r, string n, double g) : rollNo(r), name(n), gpa(g) {}
    
    void display() {
        cout << "Roll No: " << rollNo << ", Name: " << name << ", GPA: " << gpa << endl;
    }
};

int main() {
    Student s(101, "Alice", 3.8);
    s.display();
    
    return 0;
}
/* Output:
Roll No: 101, Name: Alice, GPA: 3.8
*/
