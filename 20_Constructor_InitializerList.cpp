#include <iostream>
using namespace std;

class Employee {
public:
    int empId;
    string name;
    double salary;
    
    Employee(int id, string n, double sal) : empId(id), name(n), salary(sal) {
        cout << "Employee Constructor with Initializer List" << endl;
    }
    
    void display() {
        cout << "ID: " << empId << ", Name: " << name << ", Salary: " << salary << endl;
    }
};

int main() {
    Employee emp(101, "Alice", 50000);
    emp.display();
    
    return 0;
}
/* Output:
Employee Constructor with Initializer List
ID: 101, Name: Alice, Salary: 50000
*/
