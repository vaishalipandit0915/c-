#include <iostream>
using namespace std;

class Employee {
public:
    int empId;
    string name;
    double *salary;
    
    Employee(int id, string n, double s) : empId(id), name(n) {
        salary = new double(s);
        cout << "Employee created" << endl;
    }
    
    ~Employee() {
        delete salary;
        cout << "Employee " << name << " destroyed" << endl;
    }
};

int main() {
    Employee e1(1, "John", 50000);
    {
        Employee e2(2, "Alice", 60000);
    }
    
    return 0;
}
/* Output:
Employee created
Employee created
Employee Alice destroyed
Employee John destroyed
*/
