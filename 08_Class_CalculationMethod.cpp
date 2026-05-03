#include <iostream>
using namespace std;

class Employee {
public:
    int empId;
    string name;
    double salary;
    
    double calculateAnnualSalary() {
        return salary * 12;
    }
};

int main() {
    Employee emp;
    emp.empId = 1001;
    emp.name = "Charlie";
    emp.salary = 5000;
    
    cout << "Employee ID: " << emp.empId << endl;
    cout << "Name: " << emp.name << endl;
    cout << "Monthly Salary: " << emp.salary << endl;
    cout << "Annual Salary: " << emp.calculateAnnualSalary() << endl;
    
    return 0;
}
/* Output:
Employee ID: 1001
Name: Charlie
Monthly Salary: 5000
Annual Salary: 60000
*/
