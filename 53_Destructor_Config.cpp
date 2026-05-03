#include <iostream>
using namespace std;

class Config {
public:
    string *configData;
    
    Config() {
        configData = new string("application config");
        cout << "Config object created" << endl;
    }
    
    ~Config() {
        delete configData;
        cout << "Config object destroyed" << endl;
    }
};

int main() {
    Config cfg;
    
    return 0;
}
/* Output:
Config object created
Config object destroyed
*/
