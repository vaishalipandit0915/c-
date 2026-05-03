#include <iostream>
using namespace std;

class Database {
public:
    string dbName;
    
    Database(string name) : dbName(name) {
        cout << "Database \"" << dbName << "\" connected" << endl;
    }
    
    ~Database() {
        cout << "Database \"" << dbName << "\" disconnected" << endl;
    }
};

int main() {
    Database *db = new Database("MyDB");
    delete db;
    
    return 0;
}
/* Output:
Database "MyDB" connected
Database "MyDB" disconnected
*/
