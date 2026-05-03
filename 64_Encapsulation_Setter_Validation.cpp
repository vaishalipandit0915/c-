#include <iostream>
using namespace std;

class Employee {
private:
    int empId;
    string dept;
    double salary;
    
public:
    void setEmpId(int id) {
        empId = id;
    }
    
    void setDept(string d) {
        dept = d;
    }
    
    void setSalary(double s) {
        if (s > 0) {
            salary = s;
        }
    }
    
    void display() {
        cout << "ID: " << empId << ", Dept: " << dept << ", Salary: " << salary << endl;
    }
};

int main() {
    Employee e;
    e.setEmpId(1001);
    e.setDept("IT");
    e.setSalary(50000);
    
    e.display();
    
    return 0;
}
/* Output:
ID: 1001, Dept: IT, Salary: 50000
*/
