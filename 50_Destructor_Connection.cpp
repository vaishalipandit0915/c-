#include <iostream>
using namespace std;

class Connection {
public:
    string connectionString;
    bool isConnected;
    
    Connection(string connStr) : connectionString(connStr), isConnected(false) {
        cout << "Connecting to " << connectionString << endl;
        isConnected = true;
    }
    
    ~Connection() {
        if (isConnected) {
            cout << "Connection to " << connectionString << " closed" << endl;
            isConnected = false;
        }
    }
};

int main() {
    Connection conn("server:5432");
    
    return 0;
}
/* Output:
Connecting to server:5432
Connection to server:5432 closed
*/
