#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int rollNo;
    
    Student() {
        name = "Unknown";
        rollNo = 0;
        cout << "Default Constructor Called" << endl;
    }
    
    void display() {
        cout << "Name: " << name << ", Roll No: " << rollNo << endl;
    }
};

int main() {
    Student s;
    s.display();
    
    return 0;
}
/* Output:
Default Constructor Called
Name: Unknown, Roll No: 0
*/
