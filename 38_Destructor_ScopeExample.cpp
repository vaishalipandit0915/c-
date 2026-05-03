#include <iostream>
using namespace std;

class Resource {
public:
    int resourceId;
    
    Resource(int id) : resourceId(id) {
        cout << "Resource " << id << " acquired" << endl;
    }
    
    ~Resource() {
        cout << "Resource " << resourceId << " released" << endl;
    }
};

int main() {
    {
        Resource r1(1);
        {
            Resource r2(2);
        }
        Resource r3(3);
    }
    
    return 0;
}
/* Output:
Resource 1 acquired
Resource 2 acquired
Resource 2 released
Resource 3 acquired
Resource 3 released
Resource 1 released
*/
